/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180081540
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180082250 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x1800439E0 (-GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_G.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18004C210 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r11
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  unsigned __int64 v13; // r10
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r11
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  CApplicationManager *v19; // rcx
  struct IApplicationFrameProxy *v20; // rdx
  __int64 (__fastcall *v21)(CApplicationManager *, struct IApplicationFrameProxy *, const struct _GUID *, void **); // rax
  int ApplicationByFrameProxyInternal; // eax
  void (*v23)(void); // rax
  CImmersiveApp *v24; // rcx
  volatile int *v25; // rdx
  signed __int64 v26; // rax
  unsigned int v27; // ecx
  signed __int64 v28; // rtt
  CImmersiveApp *v30; // [rsp+30h] [rbp-68h] BYREF
  int v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h]
  _QWORD v33[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v34; // [rsp+58h] [rbp-40h] BYREF

  v33[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v34) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v31) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v33) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = v33[0];
    v5 = 0LL;
    v32 = 0LL;
    v6 = -2147023728;
    v7 = 0LL;
    do
    {
      if ( v7 >= *((_QWORD *)this + 12) )
        break;
      v8 = *((_QWORD *)this + 11) + 8 * v7;
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 88LL);
      v6 = 0;
      if ( v10 == v4 )
      {
        if ( v9 )
        {
          v11 = *(_QWORD *)(v9 + 72);
          while ( v11 >= 0 )
          {
            if ( (_DWORD)v11 != 0x7FFFFFFF )
            {
              v12 = v11;
              v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v11 + 1, v11);
              if ( v12 != v11 )
                continue;
            }
            goto LABEL_15;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v11 + 16));
        }
LABEL_15:
        v5 = *(_QWORD *)v8;
        v32 = *(_QWORD *)v8;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v7;
    }
    while ( v10 != v4 );
    v13 = 0LL;
    if ( v6 >= 0 )
      goto LABEL_31;
    do
    {
      if ( v13 >= *((_QWORD *)this + 8) )
        break;
      v14 = *((_QWORD *)this + 7) + 8 * v13;
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD *)(*(_QWORD *)v14 + 88LL);
      v6 = 0;
      if ( v16 == v4 )
      {
        if ( v15 )
        {
          v17 = *(_QWORD *)(v15 + 72);
          while ( v17 >= 0 )
          {
            if ( (_DWORD)v17 != 0x7FFFFFFF )
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), v17 + 1, v17);
              if ( v18 != v17 )
                continue;
            }
            goto LABEL_28;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
        }
LABEL_28:
        v5 = *(_QWORD *)v14;
        v32 = *(_QWORD *)v14;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v13;
    }
    while ( v16 != v4 );
    if ( v6 >= 0 )
    {
LABEL_31:
      v30 = 0LL;
      v19 = (CApplicationManager *)*((_QWORD *)this + 15);
      v20 = (struct IApplicationFrameProxy *)(v5 + 8);
      if ( !v5 )
        v20 = 0LL;
      v21 = *(__int64 (__fastcall **)(CApplicationManager *, struct IApplicationFrameProxy *, const struct _GUID *, void **))(*(_QWORD *)v19 + 48LL);
      if ( v21 == CApplicationManager::GetApplicationByFrameProxyInternal )
        ApplicationByFrameProxyInternal = CApplicationManager::GetApplicationByFrameProxyInternal(
                                            v19,
                                            v20,
                                            &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                            (void **)&v30);
      else
        ApplicationByFrameProxyInternal = v21(v19, v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, (void **)&v30);
      if ( ApplicationByFrameProxyInternal >= 0 )
      {
        *(_OWORD *)(v5 + 96) = v34;
        *(_DWORD *)(v5 + 112) = v31;
        v23 = *(void (**)(void))(*(_QWORD *)v30 + 488LL);
        if ( (char *)v23 == (char *)CImmersiveApp::OnFramePositionChanged )
          CImmersiveApp::OnFramePositionChanged(v30);
        else
          v23();
      }
      v24 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v5 )
    {
      v26 = *(_QWORD *)(v5 + 72);
      while ( v26 >= 0 )
      {
        if ( (_DWORD)v26 == 0x7FFFFFFF )
          return 0LL;
        v27 = v26 - 1;
        v28 = v26;
        v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 72), v26 - 1, v26);
        if ( v28 == v26 )
          goto LABEL_49;
      }
      v27 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v26 + 16), v25);
LABEL_49:
      if ( !v27 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 48LL))(v32, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}

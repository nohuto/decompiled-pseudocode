/*
 * XREFs of ?GetApplicationByFrameProxyInternal@CApplicationManager@@UEAAJPEAUIApplicationFrameProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x1800439E0
 * Callers:
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180081540 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x180081810 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180082130 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::GetApplicationByFrameProxyInternal(
        CApplicationManager *this,
        struct IApplicationFrameProxy *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v6)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // esi
  CApplicationFrameWrapper *v11; // r8
  __int64 (__fastcall *v12)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **); // rax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int v15; // eax
  char (__fastcall *v16)(CApplicationFrameWrapper *, struct IApplicationFrameProxy *); // rax
  struct IApplicationFrameProxy *v17; // r9
  char v18; // al
  int (__fastcall **v19)(__int64 *, GUID *, __int64 *); // rax
  unsigned int (__fastcall *v20)(__int64); // rax
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  int v23; // edi
  void (*v24)(void); // rax
  void (*v25)(void); // rax
  int v26; // ebx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v28)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+38h] [rbp-30h]
  __int64 v34; // [rsp+40h] [rbp-28h]
  struct IApplicationFrameProxy *v35; // [rsp+48h] [rbp-20h]
  __int64 v36; // [rsp+50h] [rbp-18h]
  __int64 v37; // [rsp+58h] [rbp-10h]
  CApplicationFrameWrapper *v38; // [rsp+B0h] [rbp+48h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, const struct _GUID *, void **); // [rsp+B8h] [rbp+50h] BYREF
  const struct _GUID *v40; // [rsp+C0h] [rbp+58h]
  void **v41; // [rsp+C8h] [rbp+60h]

  v41 = a4;
  v40 = a3;
  v34 = -2LL;
  *a4 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v35 = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = v39;
  }
  if ( v6 )
  {
    v39 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v6)[2])(v6);
  }
  v39 = 0LL;
  v36 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 49) )
  {
LABEL_55:
    v26 = -2147319765;
    goto LABEL_56;
  }
  v37 = 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v8);
    v33 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = -1;
    v32 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v9)(v9, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v32) >= 0 )
    {
      v11 = 0LL;
      v38 = 0LL;
      v12 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IApplicationFrameProxy **))(*v32 + 496LL);
      if ( v12 == CImmersiveApp::GetFrameInternal )
      {
        v13 = v32[36];
        v14 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v13 + 128LL);
        if ( v14 == CFrameApplicationPresentation::GetFrame )
        {
          if ( *(_DWORD *)(v13 + 56) == 2 )
          {
            v15 = -2147019873;
          }
          else
          {
            v11 = *(CApplicationFrameWrapper **)(v13 + 120);
            if ( v11 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(v13 + 120));
              v11 = *(CApplicationFrameWrapper **)(v13 + 120);
            }
            v38 = v11;
            v15 = 0;
          }
LABEL_20:
          if ( v15 < 0 )
            goto LABEL_51;
          v16 = *(char (__fastcall **)(CApplicationFrameWrapper *, struct IApplicationFrameProxy *))(*(_QWORD *)v11 + 232LL);
          if ( v16 != CApplicationFrameWrapper::IsEqualByProxy )
          {
            v18 = v16(v11, a2);
            goto LABEL_49;
          }
          v17 = (CApplicationFrameWrapper *)((char *)v11 - 8);
          if ( v11 == (CApplicationFrameWrapper *)8 || !a2 )
          {
            v18 = 0;
            goto LABEL_50;
          }
          if ( v17 == a2 )
          {
            v18 = 1;
LABEL_50:
            v10 = (v18 != 0) - 1;
LABEL_51:
            if ( v11 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(CApplicationFrameWrapper *))(*(_QWORD *)v11 + 16LL))(v11);
            }
            goto LABEL_53;
          }
          v30 = 0LL;
          v31 = 0LL;
          v19 = *(int (__fastcall ***)(__int64 *, GUID *, __int64 *))v17;
          if ( **(__int64 (__fastcall ***)(volatile signed __int64 *, _DWORD *, volatile signed __int64 **))v17 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::QueryInterface )
          {
            v30 = (__int64)v11 - 8;
            v20 = (unsigned int (__fastcall *)(__int64))v19[1];
            if ( v20 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::AddRef )
            {
              v21 = *((_QWORD *)v17 + 9);
              while ( v21 >= 0 )
              {
                if ( (_DWORD)v21 != 0x7FFFFFFF )
                {
                  v22 = v21;
                  v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 9, v21 + 1, v21);
                  if ( v22 != v21 )
                    continue;
                }
                v9 = v33;
                goto LABEL_36;
              }
              Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v21 + 16));
              v9 = v33;
            }
            else
            {
              v20((__int64)v11 - 8);
            }
          }
          else if ( (**(int (__fastcall ***)(struct IApplicationFrameProxy *, GUID *, __int64 *))v17)(
                      v17,
                      &GUID_00000000_0000_0000_c000_000000000046,
                      &v30) < 0 )
          {
            goto LABEL_46;
          }
LABEL_36:
          v23 = (**(__int64 (__fastcall ***)(struct IApplicationFrameProxy *, GUID *, __int64 *))a2)(
                  a2,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  &v31);
          if ( v23 >= 0 )
          {
            v24 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
            if ( (char *)v24 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release(v31);
            else
              v24();
          }
          v25 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
          if ( (char *)v25 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release(v30);
          else
            v25();
          if ( v23 >= 0 && v30 == v31 )
          {
            v18 = 1;
LABEL_49:
            v11 = v38;
            goto LABEL_50;
          }
LABEL_46:
          v18 = 0;
          goto LABEL_49;
        }
        v15 = ((__int64 (__fastcall *)(__int64, CApplicationFrameWrapper **, _QWORD))v14)(v13, &v38, 0LL);
      }
      else
      {
        v15 = ((__int64 (__fastcall *)(_QWORD *, CApplicationFrameWrapper **, _QWORD))v12)(v32, &v38, 0LL);
      }
      v11 = v38;
      goto LABEL_20;
    }
LABEL_53:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( !v10 )
      break;
    if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 49) )
      goto LABEL_55;
  }
  v7 = v8;
  v26 = 0;
LABEL_56:
  if ( v26 >= 0 )
  {
    v27 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 48) + 8 * v7);
    v26 = (**v27)(v27, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v39);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v26 >= 0 )
    v26 = (**v39)(v39, v40, v41);
  v28 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v28)[2])(v28);
  }
  return (unsigned int)v26;
}

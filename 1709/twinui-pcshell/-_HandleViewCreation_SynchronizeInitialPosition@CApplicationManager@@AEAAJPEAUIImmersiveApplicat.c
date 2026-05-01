/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800132C0
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18000CAF0 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x180019E34 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 *     CDelayIAMOperations::AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___ @ 0x18001A164 (CDelayIAMOperations--AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002C790 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 v4; // rcx
  signed int v5; // ebx
  __int64 v6; // rbx
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rsi
  _QWORD *v10; // rdi
  HWND v11; // rcx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rcx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-50h]
  unsigned int v17; // [rsp+28h] [rbp-48h]
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  char *v20; // [rsp+40h] [rbp-30h]
  __int64 v21; // [rsp+48h] [rbp-28h]
  char *v22; // [rsp+50h] [rbp-20h]
  struct IImmersiveApplicationInternal *v23; // [rsp+58h] [rbp-18h]
  _QWORD v24[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v21 = -2LL;
  v25 = 0LL;
  v18 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL))(a2, &v25);
  if ( v5 >= 0 )
  {
    v5 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v18);
    if ( v5 >= 0 )
    {
      v6 = v18;
      v19 = v18;
      if ( v18 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v18 + 44), 1u);
        v6 = v19;
      }
      v7 = 0LL;
      v20 = 0LL;
      v8 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        v10 = v8 + 8;
        Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 8));
        *((_DWORD *)v9 + 13) = 1;
        *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
        *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v9 = off_1801F9788;
        *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
        *((_QWORD *)v9 + 7) = v6;
        if ( v6 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v6 + 44), 1u);
          v6 = v19;
        }
        v7 = v9;
        v20 = v9;
      }
      v22 = v7;
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 44), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 72LL))(v19, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v7 = v20;
      }
      v5 = v7 == 0LL ? 0x8007000E : 0;
      if ( v7 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 200LL))(v25, v7);
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    SHProcessMessagesUntilEventsEx(v11, (void **)(v18 + 48), 1u, 0x1388u, v16, v17);
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v26 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 496LL))(
           a2,
           &v26);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 176LL))(v26, 1LL);
      if ( v5 >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 77) + 88LL))(*((_QWORD *)this + 77), v26);
    }
    v12 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v5 >= 0 )
    {
      v23 = a2;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      v24[0] = this;
      v24[1] = a2;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      CDelayIAMOperations::AddOperation__lambda_af154e0da4f5cefd6500f7ba4b7c8077___(*((_QWORD *)this + 101), v24);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 16LL))(a2);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 16LL))(a2);
    }
  }
  v13 = (volatile signed __int32 *)v18;
  if ( v18 )
  {
    v18 = 0LL;
    if ( _InterlockedExchangeAdd(v13 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v14 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}

/*
 * XREFs of _lambda_bf6c401eb001bdabcb759a548fc16a06_::operator() @ 0x1801417DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bf6c401eb001bdabcb759a548fc16a06___::Run @ 0x180144F30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bf6c401eb001bdabcb759a548fc16a06___--Run.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x180061784 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Wind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_bf6c401eb001bdabcb759a548fc16a06_::operator()(__int64 a1)
{
  char *v2; // rax
  char *v3; // rbx
  int v4; // edi
  _QWORD *v5; // rdi
  volatile signed __int32 *Ptr; // rbx
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v2 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x83D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  v5 = v2 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 16));
  *((_QWORD *)v3 + 8) = 1LL;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v3 + 1) = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v3 = &ClientWindowReadyForPresentationEventArgs::`vftable';
  *((_QWORD *)v3 + 1) = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  v3[72] = *(_BYTE *)(a1 + 16);
  v4 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v3)(v3, &GUID_593ed2db_a1ee_4997_b822_f3fb111c012e, &v15);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v4 < 0 )
    goto LABEL_6;
  v4 = 0;
  v11 = v15;
  Ptr = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(RTL_SRWLOCK **)a1;
  v16 = v7;
  *(_QWORD *)&v12 = &v16;
  *((_QWORD *)&v12 + 1) = &v11;
  AcquireSRWLockExclusive(v8 + 61);
  if ( v8[60].Ptr )
  {
    Ptr = (volatile signed __int32 *)v8[60].Ptr;
    _InterlockedIncrement(Ptr + 3);
  }
  if ( v8 != (RTL_SRWLOCK *)-488LL )
    ReleaseSRWLockExclusive(v8 + 61);
  if ( Ptr )
  {
    v13 = v12;
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
           (_QWORD **)&v13,
           (__int64)Ptr,
           (__int64)&v8[60]);
    if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
LABEL_17:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v4;
}

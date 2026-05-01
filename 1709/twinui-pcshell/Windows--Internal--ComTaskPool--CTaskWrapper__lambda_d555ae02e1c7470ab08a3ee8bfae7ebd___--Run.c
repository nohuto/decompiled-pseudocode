/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x180073620
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x180061784 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  volatile signed __int32 *v9; // rbx
  RTL_SRWLOCK *v10; // rdi
  __int128 v11; // [rsp+30h] [rbp-20h]
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 137LL) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 **)(v2 + 104);
  v4 = *(__int64 **)(v2 + 112);
  while ( v3 != v4 )
  {
    v5 = *v3;
    v16 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v13 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL))(
           v5,
           &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
           &v13) >= 0 )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, v6);
    }
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ++v3;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = 0LL;
  v14 = *(RTL_SRWLOCK **)(a1 + 16);
  v8 = (__int64)&v14[10];
  *(_QWORD *)&v11 = &v14;
  *((_QWORD *)&v11 + 1) = &v15;
  v9 = 0LL;
  v10 = v14 + 11;
  AcquireSRWLockExclusive(v14 + 11);
  if ( *(_QWORD *)v8 )
  {
    v9 = *(volatile signed __int32 **)v8;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 12LL));
  }
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( v9 )
  {
    v12 = v11;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
      (_QWORD **)&v12,
      (__int64)v9,
      v8);
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}

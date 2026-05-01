/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x180061900
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x180061784 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rsi
  RTL_SRWLOCK *v3; // rdi
  __int128 v4; // [rsp+20h] [rbp-38h]
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  RTL_SRWLOCK *v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  v7 = *(_QWORD *)(a1 + 32);
  v6 = *(RTL_SRWLOCK **)(a1 + 16);
  v2 = (__int64)&v6[2];
  *(_QWORD *)&v4 = &v6;
  v3 = v6 + 3;
  *((_QWORD *)&v4 + 1) = &v7;
  AcquireSRWLockExclusive(v6 + 3);
  if ( *(_QWORD *)v2 )
  {
    v1 = *(volatile signed __int32 **)v2;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v2 + 12LL));
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  if ( v1 )
  {
    v5 = v4;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
      (_QWORD **)&v5,
      (__int64)v1,
      v2);
    if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}

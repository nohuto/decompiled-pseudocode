/*
 * XREFs of ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x1800A3FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A4320 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A456C (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___ @ 0x1800A9658 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnMessageHandler(
        RTL_SRWLOCK *this,
        int a2,
        CortanaSharedExperienceManager *a3,
        int a4)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  volatile signed __int32 *Ptr; // rbx
  RTL_SRWLOCK *v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2 == LODWORD(this[53].Ptr) )
    {
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy((CortanaSharedExperienceManager *)this);
    }
    else if ( a2 == LODWORD(this[55].Ptr) )
    {
      CortanaSharedExperienceManager::_OnDeferredSuspensionTimer((CortanaSharedExperienceManager *)this);
    }
  }
  else if ( a3 == (CortanaSharedExperienceManager *)this )
  {
    v4 = this + 39;
    v8 = this;
    v11 = a4;
    *(_QWORD *)&v9 = &v8;
    v5 = this + 40;
    *((_QWORD *)&v9 + 1) = &v11;
    Ptr = 0LL;
    AcquireSRWLockExclusive(this + 40);
    if ( v4->Ptr )
    {
      Ptr = (volatile signed __int32 *)v4->Ptr;
      _InterlockedIncrement((volatile signed __int32 *)v4->Ptr + 3);
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( Ptr )
    {
      v10 = v9;
      Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___(
        &v10,
        Ptr,
        v4);
      if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}

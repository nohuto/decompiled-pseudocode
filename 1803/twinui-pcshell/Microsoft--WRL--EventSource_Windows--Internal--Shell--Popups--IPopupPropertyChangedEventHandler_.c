/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___ @ 0x180091860
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___::Run @ 0x180091830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0013fddd9b766ebd2294bd2ae6fc5a0e___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___::Run @ 0x1801E6440 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5caa8e8c6a5ac1da53360b2df0ff3904___--Run.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180054224 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_ @ 0x1801E3BEC (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  unsigned int v4; // esi
  Microsoft::WRL::Details::EventTargetArray *v5; // rbx
  volatile int *v6; // rdx
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v7)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  void (*v8)(void); // rax
  Microsoft::WRL::Details::EventTargetArray *v10; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v10, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  v5 = v10;
  if ( v10 )
  {
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_(
           a2,
           v10,
           a1);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
            (Microsoft::WRL::Details::EventTargetArray *)((char *)v5 + 12),
            v6) )
    {
      v7 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v5 + 24LL);
      if ( v7 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v5, (const struct std::nothrow_t *)1);
      else
        v7(v5, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v8 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( (char *)v8 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          v8();
      }
    }
  }
  return v4;
}

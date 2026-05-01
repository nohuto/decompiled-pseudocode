/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8178a51d0eb57af575486b4cf7867d56___ @ 0x1801568E8
 * Callers:
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801583DC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180054224 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8178a51d0eb57af575486b4cf7867d56__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___ @ 0x180156A70 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8178a51d0eb57af575486b4cf7867d56__Windo.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8178a51d0eb57af575486b4cf7867d56___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  Microsoft::WRL::Details::EventTargetArray *v5; // rbx
  volatile int *v6; // rdx
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v7)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  void (*v8)(void); // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v11, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  v5 = v11;
  if ( v11 )
  {
    v10 = *a2;
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8178a51d0eb57af575486b4cf7867d56__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___(
           &v10,
           v11,
           a1);
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference(
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

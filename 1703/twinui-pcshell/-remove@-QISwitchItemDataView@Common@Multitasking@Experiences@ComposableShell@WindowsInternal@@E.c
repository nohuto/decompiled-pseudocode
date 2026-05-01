/*
 * XREFs of ?remove@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18013370C
 * Callers:
 *     ?remove@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@W7E$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180133780 (-remove@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@Windo_ea_180133780.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXXZ @ 0x180136994 (-UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _remove__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__EvaluateItem_SwitchItemDataViewImpl_23456_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
        RTL_SRWLOCK *a1,
        struct Platform::Details::EventLock *a2)
{
  struct EventRegistrationToken v4; // r9
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(a1 + 7, &SRWLock);
  Platform::Details::EventSourceRemove((Platform::Details *)&a1[8], &a1[17].Ptr, a2, v4);
  a1[9].Ptr = 0LL;
  WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateAllItemState(a1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

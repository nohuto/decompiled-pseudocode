/*
 * XREFs of ?ReevaluateAll@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXXZ @ 0x180136A0C
 * Callers:
 *     ?ReevaluateAll@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAXXZ @ 0x180136A50 (-ReevaluateAll@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShel_ea_180136A50.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXXZ @ 0x180136994 (-UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _ReevaluateAll__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_UE_AAAXXZ(
        RTL_SRWLOCK *a1)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(a1 + 7, &SRWLock);
  WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateAllItemState((__int64)a1);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

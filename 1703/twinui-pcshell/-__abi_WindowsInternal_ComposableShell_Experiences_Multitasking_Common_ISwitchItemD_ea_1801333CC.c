/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJXZ @ 0x1801333CC
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAJXZ @ 0x180133430 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_180133430.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXXZ @ 0x180136994 (-UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateAll__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_UE_AAAJXZ(
        __int64 a1)
{
  unsigned int v2; // ebx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(a1 + 152) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 56), &SRWLock);
    WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateAllItemState(a1);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}

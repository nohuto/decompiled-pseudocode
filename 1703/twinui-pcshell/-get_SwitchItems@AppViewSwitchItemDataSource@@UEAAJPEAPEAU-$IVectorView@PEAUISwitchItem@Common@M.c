/*
 * XREFs of ?get_SwitchItems@AppViewSwitchItemDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x18015CC30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?get_SwitchItems@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1801639A0 (-get_SwitchItems@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@Window.c)
 */

__int64 __fastcall AppViewSwitchItemDataSource::get_SwitchItems(RTL_SRWLOCK *a1, __int64 a2)
{
  unsigned int SwitchItems; // ebx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 36, &SRWLock);
  SwitchItems = WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::get_SwitchItems(
                  a1,
                  a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return SwitchItems;
}

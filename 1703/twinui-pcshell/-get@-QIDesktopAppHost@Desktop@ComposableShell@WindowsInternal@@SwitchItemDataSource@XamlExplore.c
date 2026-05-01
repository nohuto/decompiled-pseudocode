/*
 * XREFs of ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@34@XZ @ 0x18011E2D0
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@W7E$AAAPE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@34@XZ @ 0x18011F2E0 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSourc_ea_18011F2E0.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
PVOID __fastcall _get__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__SwitchItemDataSource_XamlExplorerHost__UE_AAAPE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_34_XZ(
        RTL_SRWLOCK *a1)
{
  PVOID Ptr; // rbx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 10, &SRWLock);
  Ptr = a1[7].Ptr;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return Ptr;
}

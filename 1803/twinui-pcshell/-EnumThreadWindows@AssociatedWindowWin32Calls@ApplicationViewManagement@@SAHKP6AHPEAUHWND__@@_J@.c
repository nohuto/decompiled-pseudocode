/*
 * XREFs of ?EnumThreadWindows@AssociatedWindowWin32Calls@ApplicationViewManagement@@SAHKP6AHPEAUHWND__@@_J@Z1@Z @ 0x18013EE60
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18013F58C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall ApplicationViewManagement::AssociatedWindowWin32Calls::EnumThreadWindows(
        DWORD dwThreadId,
        WNDENUMPROC lpfn,
        LPARAM lParam)
{
  return EnumThreadWindows(dwThreadId, lpfn, lParam);
}

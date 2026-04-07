/*
 * XREFs of ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x1800054EC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180004BFC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x180005508 (-_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18000C960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::DiscardStoredSnapshot(CTransitionVisualController *this, HWND a2)
{
  int SnapshotIndex; // eax
  CTransitionVisualController *v3; // rcx

  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, a2);
  if ( SnapshotIndex >= 0 )
    CTransitionVisualController::_DiscardStoredSnapshotByIndex(v3, SnapshotIndex);
  return 0LL;
}

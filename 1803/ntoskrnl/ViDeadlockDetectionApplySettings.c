/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x14082998C
 * Callers:
 *     VfDeadlockInitialize @ 0x1408285F8 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x14082B060 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1402AB208 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1402AB220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1408299DC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140829A14 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140829A44 (ViDeadlockEmptyDatabase.c)
 */

__int64 ViDeadlockDetectionApplySettings()
{
  unsigned __int8 v0; // bl

  if ( (MmVerifierData & 0x20) == 0 )
    return ViDeadlockEmptyDatabase();
  v0 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v0);
}

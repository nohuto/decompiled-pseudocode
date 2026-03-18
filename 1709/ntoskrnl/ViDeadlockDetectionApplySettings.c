/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1407BC5CC
 * Callers:
 *     VfDeadlockInitialize @ 0x1407BB248 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1407BDC94 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1402780F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140278110 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1407BC61C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407BC654 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x1407BC684 (ViDeadlockEmptyDatabase.c)
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

/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x14077A6D0
 * Callers:
 *     VfDeadlockInitialize @ 0x14077932C (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x14077BD7C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViRaiseIrqlToDpcLevel @ 0x1402518A0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14077A724 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14077A75C (ViDeadlockDetectionUnlock.c)
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

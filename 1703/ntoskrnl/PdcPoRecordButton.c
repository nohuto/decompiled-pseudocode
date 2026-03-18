/*
 * XREFs of PdcPoRecordButton @ 0x1406CB310
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 */

void PdcPoRecordButton()
{
  __int64 v0; // rbx

  v0 = MEMORY[0xFFFFF78000000014];
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = v0;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}

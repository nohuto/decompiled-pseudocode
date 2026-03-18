/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x1405EB510
 * Callers:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

_QWORD *WmiReleaseSmbiosLockExclusive()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

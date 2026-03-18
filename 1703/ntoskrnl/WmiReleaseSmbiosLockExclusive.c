/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x14057A318
 * Callers:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 WmiReleaseSmbiosLockExclusive()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

/*
 * XREFs of FsRtlReleasePushLock @ 0x1401E8C4C
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1401E88C0 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall FsRtlReleasePushLock(ULONG_PTR a1)
{
  ExReleasePushLockEx(a1, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

/*
 * XREFs of FsRtlReleasePushLock @ 0x14022638C
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x140226020 (FsRtlInsertPerFileContext.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall FsRtlReleasePushLock(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExReleasePushLockEx(a1, 0LL, a3, a4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

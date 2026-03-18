/*
 * XREFs of UnlockShutdown @ 0x140495AE4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall UnlockShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL, a3, a4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

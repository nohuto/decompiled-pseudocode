/*
 * XREFs of PiDqQueryUnlock @ 0x1406C494C
 * Callers:
 *     PiDqIrpCancel @ 0x1401FF0B0 (PiDqIrpCancel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

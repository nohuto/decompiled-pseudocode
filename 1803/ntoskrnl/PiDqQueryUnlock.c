/*
 * XREFs of PiDqQueryUnlock @ 0x14072ACF4
 * Callers:
 *     PiDqIrpCancel @ 0x14023BA20 (PiDqIrpCancel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExReleasePushLockEx(a1 + 64, 0LL, a3, a4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

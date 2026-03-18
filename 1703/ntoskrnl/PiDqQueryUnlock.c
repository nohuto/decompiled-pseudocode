/*
 * XREFs of PiDqQueryUnlock @ 0x140698B28
 * Callers:
 *     PiDqIrpCancel @ 0x1401F8F40 (PiDqIrpCancel.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

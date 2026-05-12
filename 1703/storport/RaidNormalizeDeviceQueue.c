/*
 * XREFs of RaidNormalizeDeviceQueue @ 0x1C0006B14
 * Callers:
 *     RaidRestartIoQueue @ 0x1C0006A68 (RaidRestartIoQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiNormalizeDeviceQueue @ 0x1C0009E90 (RiNormalizeDeviceQueue.c)
 */

__int64 __fastcall RaidNormalizeDeviceQueue(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // di
  __int64 v4; // rbx

  v1 = (volatile LONG *)(a1 + 72);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = RiNormalizeDeviceQueue(a1, 0LL);
  ExReleaseSpinLockExclusive(v1, v3);
  return v4;
}

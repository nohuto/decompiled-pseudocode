/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x14024212C
 * Callers:
 *     PiControlGetDevicePowerData @ 0x1406D2C74 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140700BCC (NtGetDevicePowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi

  v2 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  LODWORD(a1) = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  v3 = v2;
  KxReleaseSpinLock(&PopIrpSerialLock);
  __writecr8(v3);
  return (unsigned int)a1;
}

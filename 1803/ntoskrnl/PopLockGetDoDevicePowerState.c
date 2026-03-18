/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x140278C68
 * Callers:
 *     PiControlGetDevicePowerData @ 0x14073A808 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x140765314 (NtGetDevicePowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
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

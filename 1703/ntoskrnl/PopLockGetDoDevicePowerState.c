/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x14022E118
 * Callers:
 *     PiControlGetDevicePowerData @ 0x1406A7FB4 (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x1406CBFEC (NtGetDevicePowerState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
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

/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x1400623F0
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

bool __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  KiAcquireKobjectLockSafe(a1);
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(_BYTE *)(a1 + 1) & 0x20) != 0;
}

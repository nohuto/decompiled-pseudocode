/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x14012B098
 * Callers:
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(unsigned __int8 *)(a1 + 1) >> 5) & 1;
}

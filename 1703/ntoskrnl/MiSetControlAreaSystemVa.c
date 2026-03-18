/*
 * XREFs of MiSetControlAreaSystemVa @ 0x140038C44
 * Callers:
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiSetControlAreaSystemVa(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 56) |= 0x10000000u;
  v5 = v4;
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 92) |= 0x20000u;
  else
    *(_DWORD *)(a1 + 92) &= ~0x20000u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = v5;
  __writecr8(v5);
  return result;
}

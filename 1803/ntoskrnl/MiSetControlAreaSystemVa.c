/*
 * XREFs of MiSetControlAreaSystemVa @ 0x140163814
 * Callers:
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiSetControlAreaSystemVa(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  int v6; // edx
  unsigned int v7; // edx
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 56) |= 0x10000000u;
  v5 = v4;
  v6 = *(_DWORD *)(a1 + 92);
  if ( a2 == 1 )
    v7 = v6 | 0x20000;
  else
    v7 = v6 & 0xFFFDFFFF;
  *(_DWORD *)(a1 + 92) = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = v5;
  __writecr8(v5);
  return result;
}

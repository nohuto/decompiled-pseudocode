/*
 * XREFs of MiInitializeLargePageSubPage @ 0x14022443C
 * Callers:
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializeLargePageSubPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  char v6; // al

  v2 = a2;
  v3 = MiLargePageSizes[a2];
  v4 = 48 * a1 - 0x58000000000LL;
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  *(_BYTE *)(v4 + 34) &= ~0x10u;
  v5 = v3 - 1;
  if ( (v5 & a1) != 0 )
  {
    v6 = *(_BYTE *)(v4 + 34);
    *(_QWORD *)(v4 + 40) ^= (*(_QWORD *)(v4 + 40) ^ MiLargePageContainingFrames[v2]) & 0xFFFFFFFFFLL;
    LOBYTE(v5) = v6 & 0xF8 | 1;
    *(_BYTE *)(v4 + 34) = v5;
  }
  return v5;
}

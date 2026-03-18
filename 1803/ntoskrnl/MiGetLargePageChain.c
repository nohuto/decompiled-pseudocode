/*
 * XREFs of MiGetLargePageChain @ 0x1400BBB00
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiGetLargePageDemoteAsNeeded @ 0x1400BBBB8 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x14026C050 (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rsi
  BOOL v5; // ebx
  unsigned __int64 v6; // rbp
  _QWORD *LargePageDemoteAsNeeded; // rax

  if ( *(_QWORD *)(1984LL * a1 + qword_1403CDF50 + 1808) || !(_DWORD)InitializationPhase )
  {
    v3 = 0LL;
    v4 = a2 >> 9;
    v5 = BugCheckParameter3 > 0x110000;
    v6 = 0LL;
    if ( !(a2 >> 9) )
      return v3;
    while ( 1 )
    {
      LargePageDemoteAsNeeded = (_QWORD *)MiGetLargePageDemoteAsNeeded(&MiSystemPartition, a1, 512LL, v5);
      if ( !LargePageDemoteAsNeeded )
        break;
      ++v6;
      *LargePageDemoteAsNeeded = v3;
      v3 = LargePageDemoteAsNeeded;
      if ( v6 >= v4 )
        return v3;
    }
    MiFreeLargePageChain(v3);
  }
  return 0LL;
}

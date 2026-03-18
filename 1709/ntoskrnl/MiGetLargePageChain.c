/*
 * XREFs of MiGetLargePageChain @ 0x1400CACC8
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiGetLargePageDemoteAsNeeded @ 0x1400C7BD4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x140157020 (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  _QWORD *LargePageDemoteAsNeeded; // rax

  v2 = 0LL;
  v3 = a2 >> 9;
  v4 = 0LL;
  if ( !(a2 >> 9) )
    return v2;
  while ( 1 )
  {
    LargePageDemoteAsNeeded = (_QWORD *)MiGetLargePageDemoteAsNeeded((__int64)&MiSystemPartition, a1, 0x200uLL, 0x8080u);
    if ( !LargePageDemoteAsNeeded )
      break;
    ++v4;
    *LargePageDemoteAsNeeded = v2;
    v2 = LargePageDemoteAsNeeded;
    if ( v4 >= v3 )
      return v2;
  }
  MiFreeLargePageChain(v2);
  return 0LL;
}

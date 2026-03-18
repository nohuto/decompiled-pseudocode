/*
 * XREFs of MiGetLargePageChain @ 0x140128D4C
 * Callers:
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiGetLargePageDemoteAsNeeded @ 0x140128DC4 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x140224000 (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  _QWORD *LargePageDemoteAsNeeded; // rax
  __int64 v7; // rdx

  v2 = 0LL;
  v3 = a2 >> 9;
  v4 = 0LL;
  if ( !(a2 >> 9) )
    return v2;
  while ( 1 )
  {
    LargePageDemoteAsNeeded = (_QWORD *)MiGetLargePageDemoteAsNeeded(&MiSystemPartition, a1, 512LL, 32896LL);
    if ( !LargePageDemoteAsNeeded )
      break;
    ++v4;
    *LargePageDemoteAsNeeded = v2;
    v2 = LargePageDemoteAsNeeded;
    if ( v4 >= v3 )
      return v2;
  }
  MiFreeLargePageChain(v2, v7);
  return 0LL;
}

/*
 * XREFs of MiPfnLargeBitSet @ 0x140224620
 * Callers:
 *     MiPfnsWorthTrying @ 0x1400B6AD0 (MiPfnsWorthTrying.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPfnLargeBitSet(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // r10
  __int64 i; // r9

  if ( !*(_BYTE *)(a1 + 4550) )
    return 0xFFFFFFFFLL;
  v2 = 0;
  v3 = MiLargePageSizes;
  for ( i = a1 + 4808; !*(_QWORD *)i || !_bittest64(*(const signed __int64 **)(i + 8), a2 / *v3); i += 16LL )
  {
    ++v2;
    ++v3;
    if ( v2 >= 2 )
      return 0xFFFFFFFFLL;
  }
  return v2;
}

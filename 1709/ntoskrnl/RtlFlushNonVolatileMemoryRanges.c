/*
 * XREFs of RtlFlushNonVolatileMemoryRanges @ 0x140250C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x140250BB0 (RtlDrainNonVolatileFlush.c)
 *     RtlFlushNonVolatileMemory @ 0x140250BE0 (RtlFlushNonVolatileMemory.c)
 *     RtlpCheckAndFlushAllCacheIfOptimal @ 0x140250D94 (RtlpCheckAndFlushAllCacheIfOptimal.c)
 */

__int64 __fastcall RtlFlushNonVolatileMemoryRanges(char a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi

  v5 = a3;
  v6 = a2;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a1 & 2) != 0 && !(unsigned __int8)RtlpCheckAndFlushAllCacheIfOptimal(a2, a3) )
  {
    for ( ; v5; --v5 )
    {
      RtlFlushNonVolatileMemory(a1, *(_QWORD *)v6, *(_QWORD *)(v6 + 8), a4 | 1);
      v6 += 16LL;
    }
    if ( (a4 & 1) == 0 )
      RtlDrainNonVolatileFlush(a1);
  }
  return 0LL;
}

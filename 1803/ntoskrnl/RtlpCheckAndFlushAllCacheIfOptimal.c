/*
 * XREFs of RtlpCheckAndFlushAllCacheIfOptimal @ 0x140286844
 * Callers:
 *     RtlFlushNonVolatileMemoryRanges @ 0x140286730 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 */

char __fastcall RtlpCheckAndFlushAllCacheIfOptimal(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = 0LL;
  if ( RtlpOptimalFlushMethod != 2 )
  {
    v5 = 0LL;
    if ( a2 )
    {
      v6 = (_QWORD *)(a1 + 8);
      while ( 1 )
      {
        v2 += *v6;
        if ( v2 >= (unsigned int)KiLargestCacheSize )
          break;
        ++v5;
        v6 += 2;
        if ( v5 >= a2 )
          goto LABEL_6;
      }
      KeInvalidateAllCaches();
      LOBYTE(v2) = 1;
    }
    else
    {
LABEL_6:
      LOBYTE(v2) = 0;
    }
  }
  return v2;
}

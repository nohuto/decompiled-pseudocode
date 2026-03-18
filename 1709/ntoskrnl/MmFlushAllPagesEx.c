/*
 * XREFs of MmFlushAllPagesEx @ 0x14022733C
 * Callers:
 *     MmFlushAllPages @ 0x140227320 (MmFlushAllPages.c)
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     MiFlushAllPages @ 0x1402259EC (MiFlushAllPages.c)
 */

__int64 *__fastcall MmFlushAllPagesEx(char a1)
{
  volatile signed __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v4 = result;
    if ( !result )
      break;
    MiFlushAllPages(*result, a1);
  }
  return result;
}

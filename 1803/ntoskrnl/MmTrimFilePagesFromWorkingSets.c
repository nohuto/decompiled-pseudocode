/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x14025AAD8
 * Callers:
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x14016D3A0 (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_1403CC514 )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextPartition = (__int64 *)PsGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 256);
    }
  }
}

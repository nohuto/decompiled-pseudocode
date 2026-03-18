/*
 * XREFs of MmTrimFilePagesFromWorkingSets @ 0x140215BB0
 * Callers:
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 * Callees:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     MiQueueWorkingSetRequest @ 0x1401400FC (MiQueueWorkingSetRequest.c)
 */

void MmTrimFilePagesFromWorkingSets()
{
  ULONG_PTR i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v2; // rbx

  if ( byte_14036CFD4 )
  {
    for ( i = 0LL; ; i = (ULONG_PTR)v2 )
    {
      NextPartition = (__int64 *)MmGetNextPartition(i);
      v2 = NextPartition;
      if ( !NextPartition )
        break;
      MiQueueWorkingSetRequest(*NextPartition, 256);
    }
  }
}

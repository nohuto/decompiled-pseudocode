/*
 * XREFs of MmEmptyAllWorkingSets @ 0x140215A74
 * Callers:
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x14070BE9C (EtwpSetMark.c)
 * Callees:
 *     MmGetNextPartition @ 0x14003A82C (MmGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x140214E74 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  ULONG_PTR i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = (ULONG_PTR)v2 )
  {
    result = (__int64 *)MmGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}

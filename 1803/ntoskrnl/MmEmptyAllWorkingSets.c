/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14025A990
 * Callers:
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x1407A8C0C (EtwpSetMark.c)
 * Callees:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1402597C0 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v2 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result);
  }
  return result;
}

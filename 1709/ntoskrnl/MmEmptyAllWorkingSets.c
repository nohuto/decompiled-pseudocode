/*
 * XREFs of MmEmptyAllWorkingSets @ 0x14021EB3C
 * Callers:
 *     PopTransitionToSleep @ 0x140435830 (PopTransitionToSleep.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     EtwpSetMark @ 0x1407474E0 (EtwpSetMark.c)
 * Callees:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     MiEmptyAllWorkingSets @ 0x14021D424 (MiEmptyAllWorkingSets.c)
 */

__int64 *MmEmptyAllWorkingSets()
{
  volatile signed __int64 *i; // rcx
  __int64 *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx

  for ( i = 0LL; ; i = v5 )
  {
    result = (__int64 *)PsGetNextPartition(i);
    v5 = result;
    if ( !result )
      break;
    MiEmptyAllWorkingSets(*result, v2, v3, v4);
  }
  return result;
}

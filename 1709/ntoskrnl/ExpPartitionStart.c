/*
 * XREFs of ExpPartitionStart @ 0x1405DDBA0
 * Callers:
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x14084F4D4 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 *     ExpWorkQueueManagerStart @ 0x1405DDC44 (ExpWorkQueueManagerStart.c)
 */

__int64 __fastcall ExpPartitionStart(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !KeNumberNodes )
    return 0LL;
  while ( 1 )
  {
    v3 = KeNodeBlock[v2];
    if ( (_UNKNOWN *)v3 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * v2) )
      v3 = 0LL;
    KeQueryNodeActiveAffinity(*(_WORD *)(v3 + 146), &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      result = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v2));
      if ( (int)result < 0 )
        break;
    }
    if ( ++v2 >= (unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return result;
}

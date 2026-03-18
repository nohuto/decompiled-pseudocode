/*
 * XREFs of PsGetNextPartition @ 0x140001044
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x140001008 (MmSetTrimWhileAgingState.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     MiFinishResume @ 0x140218680 (MiFinishResume.c)
 *     MmEmptyAllWorkingSets @ 0x14021EB3C (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14021EC88 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14022733C (MmFlushAllPagesEx.c)
 *     ExpCheckForWorker @ 0x140287298 (ExpCheckForWorker.c)
 *     MmEnablePeriodicAccessClearing @ 0x140430914 (MmEnablePeriodicAccessClearing.c)
 *     MmSetMinimumAgeRate @ 0x14043D8DC (MmSetMinimumAgeRate.c)
 *     ExpNodeHotAddProcessorWorker @ 0x14075E6C0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x14011C07C (PsGetNextPartitionUnsafe.c)
 */

volatile signed __int64 *__fastcall PsGetNextPartition(volatile signed __int64 *a1)
{
  volatile signed __int64 *v1; // rbx
  volatile signed __int64 *v2; // rdi
  __int64 NextPartitionUnsafe; // rax
  volatile signed __int64 *v4; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe((PVOID)a1);
    v4 = (volatile signed __int64 *)NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    _m_prefetchw((const void *)(NextPartitionUnsafe + 24));
    v6 = *(_QWORD *)(NextPartitionUnsafe + 24);
    while ( (unsigned __int64)(v6 + 1) > 1 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v4 + 3, v6 + 1, v6);
      if ( v7 == v6 )
      {
        v2 = v4;
        goto LABEL_3;
      }
    }
    if ( v6 )
      __fastfail(0xEu);
    a1 = v4;
  }
LABEL_3:
  if ( v1 )
    PsDereferencePartition(v1, v4);
  return v2;
}

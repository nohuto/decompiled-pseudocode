/*
 * XREFs of CiSchedulerSetPriority @ 0x1C00030B8
 * Callers:
 *     CiProcessSuspend @ 0x1C00025CC (CiProcessSuspend.c)
 *     CiSchedulerAddThread @ 0x1C00028E0 (CiSchedulerAddThread.c)
 *     CiSchedulerCommitPriority @ 0x1C0002A94 (CiSchedulerCommitPriority.c)
 *     CiSchedulerThreadFunction @ 0x1C0003610 (CiSchedulerThreadFunction.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0003850 (CiSchedulerUpdateTaskIndexPriorities.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x1C000179C (CiLogSchedulerEvent.c)
 */

char __fastcall CiSchedulerSetPriority(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  unsigned int v5; // edi

  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    return 0;
  if ( CiThreadsMovedUp )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v3 + 120) || !*(_BYTE *)(v3 + 132) && *(_QWORD *)(v3 + 80) )
    {
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( v4 > *(_BYTE *)(a1 + 104) )
        v4 = *(_BYTE *)(a1 + 104);
    }
    else
    {
      v4 = *(_BYTE *)(a1 + 104);
    }
    v5 = v4;
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 106);
    v4 = *(_BYTE *)(a1 + 106);
  }
  if ( *(unsigned __int8 *)(a1 + 107) != v4 )
  {
    *(_BYTE *)(a1 + 107) = v5;
    if ( byte_1C00062B0 )
      CiLogSchedulerEvent(a1, v4);
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 96), v5);
  }
  return 1;
}

/*
 * XREFs of ExInitializeProcessor @ 0x1401462B8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x1408429B0 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1404275CC (ExInitializeSystemLookasideList.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  PVOID PoolWithTag; // rdi
  signed __int64 v6; // rdx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x43497845u);
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList((_DWORD)PoolWithTag, 512, 1264, 1128888389, 32, (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2176) = PoolWithTag;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 192);
    if ( (_UNKNOWN *)KeNodeBlock[*(unsigned __int16 *)(v6 + 146)] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                                + 320 * *(unsigned __int16 *)(v6 + 146)) )
      v6 = 0LL;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 344), v6, 0LL) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v6 + 320), DelayedWorkQueue);
    *(_QWORD *)(a1 + 24624) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
  }
  return 0LL;
}

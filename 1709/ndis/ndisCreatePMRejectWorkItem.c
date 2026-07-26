/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C001EA98
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C001E958 (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C0049ABC (ndisPMAddProtocolOffload.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(__int64 a1, _LIST_ENTRY *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v8; // rbx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8[1].List.Flink = (_LIST_ENTRY *)a1;
    v8[1].List.Blink = a2;
    LODWORD(v8[1].WorkerRoutine) = a3;
    ndisReferenceMiniport(a1);
    v8->List.Flink = 0LL;
    v8->WorkerRoutine = (void (__fastcall *)(void *))ndisPMRejectAsync;
    v8->Parameter = v8;
    ExQueueWorkItem(v8, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  if ( (unsigned __int8)byte_1C0098755 >= 2u )
    WPP_SF_(75LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids);
  return 3221225626LL;
}

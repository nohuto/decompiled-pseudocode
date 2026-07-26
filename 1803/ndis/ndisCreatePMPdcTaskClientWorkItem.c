/*
 * XREFs of ndisCreatePMPdcTaskClientWorkItem @ 0x1C0049D24
 * Callers:
 *     ndisMEvaluateMagicPacketWake @ 0x1C0049FD8 (ndisMEvaluateMagicPacketWake.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

__int64 __fastcall ndisCreatePMPdcTaskClientWorkItem(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v3; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v3[1].List.Flink = (_LIST_ENTRY *)a1;
    if ( ndisReferenceMiniport(a1) )
    {
      v3->List.Flink = 0LL;
      v3->WorkerRoutine = (void (__fastcall *)(void *))ndisPMPDCTaskClient;
      v3->Parameter = v3;
      ExQueueWorkItem(v3, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_(0x89u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    return 3221225626LL;
  }
}

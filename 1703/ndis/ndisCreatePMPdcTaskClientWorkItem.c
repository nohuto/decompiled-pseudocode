/*
 * XREFs of ndisCreatePMPdcTaskClientWorkItem @ 0x1C004AE8C
 * Callers:
 *     ndisMEvaluateMagicPacketWake @ 0x1C004B168 (ndisMEvaluateMagicPacketWake.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisQueueWorkItem @ 0x1C002345C (ndisQueueWorkItem.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisCreatePMPdcTaskClientWorkItem(__int64 a1)
{
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v3; // rbx

  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v3[2].Flink = (_LIST_ENTRY *)a1;
    if ( ndisReferenceMiniport(a1, 0x12u) )
    {
      v3->Flink = 0LL;
      v3[1].Flink = (_LIST_ENTRY *)ndisPMPDCTaskClient;
      v3[1].Blink = v3;
      ndisQueueWorkItem(v3);
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_(0x89u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
    return 3221225626LL;
  }
}

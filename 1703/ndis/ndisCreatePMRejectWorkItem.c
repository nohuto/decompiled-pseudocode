/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C00232DC
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C002319C (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C004C21C (ndisPMAddProtocolOffload.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisQueueWorkItem @ 0x1C002345C (ndisQueueWorkItem.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(__int64 a1, _LIST_ENTRY *a2, int a3)
{
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v8; // rbx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8[2].Flink = (_LIST_ENTRY *)a1;
    v8[2].Blink = a2;
    LODWORD(v8[3].Flink) = a3;
    ndisReferenceMiniport(a1, 0xFu);
    v8->Flink = 0LL;
    v8[1].Flink = (_LIST_ENTRY *)ndisPMRejectAsync;
    v8[1].Blink = v8;
    ndisQueueWorkItem(v8);
    return 0LL;
  }
  if ( (unsigned __int8)byte_1C0092615 >= 2u )
    WPP_SF_(75LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
  return 3221225626LL;
}

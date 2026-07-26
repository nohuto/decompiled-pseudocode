/*
 * XREFs of ndisCreatePMAddRemoveWorkItem @ 0x1C004ADD4
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisQueueWorkItem @ 0x1C002345C (ndisQueueWorkItem.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(__int64 a1, _LIST_ENTRY *a2, _LIST_ENTRY *a3)
{
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v7; // rbx

  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    ndisReferenceMiniport(a1, 0xEu);
    v7[3].Flink = a3;
    v7[2].Flink = (_LIST_ENTRY *)a1;
    v7[2].Blink = a2;
    v7->Flink = 0LL;
    v7[1].Flink = (_LIST_ENTRY *)ndisPMAddRemoveAsync;
    v7[1].Blink = v7;
    ndisQueueWorkItem(v7);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_(0x48u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
    return 3221225626LL;
  }
}

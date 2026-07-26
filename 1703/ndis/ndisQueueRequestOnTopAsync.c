/*
 * XREFs of ndisQueueRequestOnTopAsync @ 0x1C0049D3C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisQueueWorkItem @ 0x1C002345C (ndisQueueWorkItem.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRequestOnTopAsync(__int64 a1, _LIST_ENTRY *a2)
{
  unsigned int v4; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v6; // rbx
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    if ( ndisReferenceMiniport(a1, 0x4Au) )
    {
      v6[2].Blink = 0LL;
      v6[2].Flink = retaddr;
      v6[3].Flink = a2;
      v6[3].Blink = (_LIST_ENTRY *)a1;
      v6->Flink = 0LL;
      v6[1].Flink = (_LIST_ENTRY *)ndisProcessRequestAsync;
      v6[1].Blink = v6;
      ndisQueueWorkItem(v6);
      v4 = 259;
    }
    else
    {
      ExFreePoolWithTag(v6, 0);
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(0x40u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v4);
  return v4;
}

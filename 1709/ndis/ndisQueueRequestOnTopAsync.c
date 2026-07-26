/*
 * XREFs of ndisQueueRequestOnTopAsync @ 0x1C0047120
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRequestOnTopAsync(__int64 a1, void (__fastcall *a2)(void *))
{
  unsigned int v4; // edi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v6; // rbx
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    if ( ndisReferenceMiniport(a1) )
    {
      v6[1].List.Blink = 0LL;
      v6[1].List.Flink = retaddr;
      v6[1].WorkerRoutine = a2;
      v6[1].Parameter = (void *)a1;
      v6->List.Flink = 0LL;
      v6->WorkerRoutine = (void (__fastcall *)(void *))ndisProcessRequestAsync;
      v6->Parameter = v6;
      ExQueueWorkItem(v6, (WORK_QUEUE_TYPE)40);
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(64LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v4);
  return v4;
}

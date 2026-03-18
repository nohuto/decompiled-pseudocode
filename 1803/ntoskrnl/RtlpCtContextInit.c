/*
 * XREFs of RtlpCtContextInit @ 0x14078AC68
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14028E630 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExSubscribeWnfStateChange @ 0x1405751F0 (ExSubscribeWnfStateChange.c)
 *     RtlpCtContextFree @ 0x14078AC0C (RtlpCtContextFree.c)
 *     RtlpCtInitializeNotificationEvent @ 0x14078AD4C (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x14078AD94 (RtlpCtInitializeWorkItem.c)
 */

__int64 __fastcall RtlpCtContextInit(PVOID **a1, int a2)
{
  PVOID *PoolWithTag; // rbx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  *a1 = 0LL;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x67744364u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v5 = RtlpCtInitializeNotificationEvent(PoolWithTag + 2);
    if ( v5 < 0
      || (v5 = RtlpCtInitializeWorkItem(PoolWithTag, PoolWithTag), v5 < 0)
      || (v5 = ExSubscribeWnfStateChange(
                 (__int64)(PoolWithTag + 1),
                 (__int64)&WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                 8,
                 a2,
                 (__int64)RtlpRtlpCtSelfSubscribeCallback,
                 (__int64)PoolWithTag),
          v5 < 0) )
    {
      RtlpCtContextFree(PoolWithTag, v6, v7, v8);
    }
    else
    {
      *a1 = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}

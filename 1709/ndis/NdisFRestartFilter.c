/*
 * XREFs of NdisFRestartFilter @ 0x1C0058D80
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E4F6C (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFRestartFilter(NDIS_HANDLE NdisFilterHandle)
{
  int v2; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x25u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)NdisFilterHandle);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0;
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x2020444Eu);
    if ( PoolWithTag )
    {
      if ( ndisReferenceRefEx((PKSPIN_LOCK)NdisFilterHandle + 40, 0x16u, &v5) )
      {
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->WorkerRoutine = ndisQueuedRestartFilter;
        PoolWithTag->List.Flink = 0LL;
        PoolWithTag[1].List.Flink = (_LIST_ENTRY *)NdisFilterHandle;
        ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        v2 = -1073741823;
      }
    }
    else
    {
      v2 = -1073741670;
    }
  }
  else
  {
    ndisQueueFilterRestart((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x26u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, (__int64)NdisFilterHandle, v2);
  return v2;
}

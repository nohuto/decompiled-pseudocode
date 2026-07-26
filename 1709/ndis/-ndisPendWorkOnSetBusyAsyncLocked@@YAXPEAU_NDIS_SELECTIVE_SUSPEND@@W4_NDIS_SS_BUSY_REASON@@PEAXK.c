/*
 * XREFs of ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006E314
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EC2C (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EFAC (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ?ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z @ 0x1C006E3EC (-ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z.c)
 *     ndisDequeueDirectOidsByRequestId @ 0x1C0070090 (ndisDequeueDirectOidsByRequestId.c)
 *     ndisQueueReceiveNblsOnMiniport @ 0x1C0070648 (ndisQueueReceiveNblsOnMiniport.c)
 *     ndisQueueSendNblsOnMiniport @ 0x1C00706B4 (ndisQueueSendNblsOnMiniport.c)
 */

void __fastcall ndisPendWorkOnSetBusyAsyncLocked(
        struct _NDIS_SELECTIVE_SUSPEND *a1,
        enum _NDIS_SS_BUSY_REASON a2,
        unsigned int *a3,
        unsigned int a4,
        struct _NET_BUFFER_LIST **a5,
        struct _LIST_ENTRY *a6,
        unsigned __int8 *a7)
{
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v9; // rcx

  *a7 = 0;
  if ( a2 != NdisBusyCheckForHang )
  {
    if ( a2 == NdisBusyCancelDirectOid )
    {
      ndisDequeueDirectOidsByRequestId(a1, a3, a6);
    }
    else if ( a2 == NdisBusyCancelSend )
    {
      *a5 = ndisRemoveFromNblQueueByCancelId(&a1->PendingSendNblQueue, a3);
    }
    else if ( a2 == NdisBusyReceiveReturn )
    {
      ndisQueueReceiveNblsOnMiniport(a1, a3);
    }
    else
    {
      if ( a2 == NdisBusySend )
      {
        ndisQueueSendNblsOnMiniport(a1, a3, a4);
        a1->LastResumeContext = 0;
      }
      else if ( a2 == NdisBusyDirectOid )
      {
        Blink = a1->PendingDirectOidQueue.Blink;
        v9 = (_LIST_ENTRY *)(a3 + 18);
        if ( Blink->Flink != &a1->PendingDirectOidQueue )
          __fastfail(3u);
        v9->Flink = &a1->PendingDirectOidQueue;
        *((_QWORD *)a3 + 10) = Blink;
        Blink->Flink = v9;
        a1->PendingDirectOidQueue.Blink = v9;
        a1->LastResumeContext = a3[8];
      }
      *a7 = 1;
    }
  }
}

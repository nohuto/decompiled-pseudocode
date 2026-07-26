/*
 * XREFs of ndisReturnNetBufferListsInternal @ 0x1C006B330
 * Callers:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003550 (ndisSortNetBufferLists.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053E20 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C0069B48 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006B164 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C006B734 (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0025614 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ndisReturnPeriodicReceives @ 0x1C0025B00 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C005A30C (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __fastcall ndisReturnNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // eax
  struct _NET_BUFFER_LIST *v8; // rsi
  KIRQL v9; // r14
  unsigned int v10; // eax
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // rdx
  char DatapathCyclesMask; // bp
  struct NDIS_PCW_CONTEXT v14; // [rsp+30h] [rbp-38h] BYREF

  v14.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 48);
  v14.CurrentCpu = -1;
  v8 = a2;
  v14.DatapathEventsMask = v6;
  v9 = 2;
  v10 = *(_DWORD *)(a1 + 80);
  Alignment = a2;
  for ( v14.DatapathCyclesMask = v10; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
    Alignment->Flags = Alignment->Flags & 0xFFFFFFF4 | 8;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  if ( *(_DWORD *)(a1 + 3240) )
    v8 = ndisReturnPeriodicReceives(a1, a2);
  if ( v8 )
  {
    if ( ndisNblTrackerMode )
    {
      if ( a4 )
        v12 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a4 + 680);
      else
        v12 = 0LL;
      ndisNblTrackerTransferOwnershipInternal(v8, v12, *(_QWORD *)(a1 + 2544), 135LL, a3 & 1);
    }
    DatapathCyclesMask = v14.DatapathCyclesMask;
    if ( (v14.DatapathCyclesMask & 0x20) != 0 )
    {
      if ( (a3 & 1) == 0 )
        v9 = KfRaiseIrql(2u);
      ndisPcwStartCycleCounter(&v14, 5);
      DatapathCyclesMask = v14.DatapathCyclesMask;
    }
    ndisInvokeNextReceiveCompleteHandler(
      v8,
      a3,
      (struct _NDIS_FILTER_BLOCK *)a1,
      *(_BYTE **)(a1 + 2552),
      *(void **)(a1 + 2536),
      *(void (**)(void))(a1 + 2648));
    if ( (DatapathCyclesMask & 0x20) != 0 )
    {
      ndisPcwEndCycleCounter(&v14, 5, 18LL);
      if ( v9 != 2 )
        KeLowerIrql(v9);
    }
  }
}

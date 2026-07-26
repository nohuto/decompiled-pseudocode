/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001980 (NdisMSendNetBufferListsComplete.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C80 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002234 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisInterruptDpc @ 0x1C0003D80 (ndisInterruptDpc.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005A50 (ndisMSendNBLToMiniportInternal.c)
 *     NdisReturnNetBufferLists @ 0x1C0005DA0 (NdisReturnNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0006420 (NdisMAllocateNetBufferSGList.c)
 *     ndisMiniportMessageIsr @ 0x1C0006A70 (ndisMiniportMessageIsr.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0007AB0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     NdisBuildScatterGatherList @ 0x1C004BDD0 (NdisBuildScatterGatherList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisSendNBLToFilter @ 0x1C005AA40 (ndisSendNBLToFilter.c)
 *     ndisMIsr @ 0x1C0063330 (ndisMIsr.c)
 *     ndisMiniportIsr @ 0x1C0063920 (ndisMiniportIsr.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006B330 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1, int a2)
{
  unsigned int CurrentCpu; // eax

  CurrentCpu = a1->CurrentCpu;
  if ( CurrentCpu == -1 )
  {
    CurrentCpu = KeGetPcr()->Prcb.Number;
    a1->CurrentCpu = CurrentCpu;
  }
  *(_QWORD *)((char *)&a1->PcwBlock[1].DatapathEventReferences[2 * a2 + 12]
            + ndisPcwOffsetToPerCpuData
            + (unsigned __int64)(ndisPcwPerCpuDataStride * CurrentCpu)) = __rdtsc();
}

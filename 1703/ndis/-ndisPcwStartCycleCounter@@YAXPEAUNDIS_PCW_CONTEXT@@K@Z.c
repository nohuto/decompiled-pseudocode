/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001480 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00018F0 (NdisMSendNetBufferListsComplete.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C00 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0002030 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002930 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003840 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 *     ndisInterruptDpc @ 0x1C00041C0 (ndisInterruptDpc.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0004D20 (ndisMSendNBLToMiniportInternal.c)
 *     NdisReturnNetBufferLists @ 0x1C00051B0 (NdisReturnNetBufferLists.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C00059F0 (NdisMAllocateNetBufferSGList.c)
 *     ndisMiniportMessageIsr @ 0x1C0006090 (ndisMiniportMessageIsr.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000E960 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMiniportIsr @ 0x1C0027E50 (ndisMiniportIsr.c)
 *     NdisBuildScatterGatherList @ 0x1C004D2D0 (NdisBuildScatterGatherList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisSendNBLToFilter @ 0x1C005A8E0 (ndisSendNBLToFilter.c)
 *     ndisMIsr @ 0x1C0062330 (ndisMIsr.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0068A50 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00692B0 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1, int a2)
{
  if ( a1->CurrentCpu == -1 )
    a1->CurrentCpu = KeGetPcr()->Prcb.Number;
  *(_QWORD *)((char *)&a1->PcwBlock[1].DatapathEventReferences[2 * a2 + 12]
            + ndisPcwOffsetToPerCpuData
            + (unsigned __int64)(a1->CurrentCpu * ndisPcwPerCpuDataStride)) = __rdtsc();
}

/*
 * XREFs of ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8
 * Callers:
 *     ndisInterruptDpc @ 0x1C000A480 (ndisInterruptDpc.c)
 *     NdisSendNetBufferLists @ 0x1C0012F00 (NdisSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00136F0 (NdisMSendNetBufferListsComplete.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00139F0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0014014 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     NdisMAllocateNetBufferSGList @ 0x1C0015730 (NdisMAllocateNetBufferSGList.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0016490 (ndisMSendNBLToMiniportInternal.c)
 *     NdisReturnNetBufferLists @ 0x1C0016B80 (NdisReturnNetBufferLists.c)
 *     ndisMiniportMessageIsr @ 0x1C00178D0 (ndisMiniportMessageIsr.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0018B70 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     NdisBuildScatterGatherList @ 0x1C004ADF0 (NdisBuildScatterGatherList.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005638C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisSendNBLToFilter @ 0x1C005A120 (ndisSendNBLToFilter.c)
 *     ndisMIsr @ 0x1C0062820 (ndisMIsr.c)
 *     ndisMiniportIsr @ 0x1C0062DE0 (ndisMiniportIsr.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C006AA30 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwEndCycleCounter(struct NDIS_PCW_CONTEXT *a1, int a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int64 v4; // rax

  if ( a1->CurrentCpu == -1 )
    a1->CurrentCpu = KeGetPcr()->Prcb.Number;
  v3 = (char *)a1->PcwBlock + ndisPcwOffsetToPerCpuData + (unsigned __int64)(a1->CurrentCpu * ndisPcwPerCpuDataStride);
  v4 = __rdtsc();
  *(_QWORD *)&v3[8 * a3] += (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - *(_QWORD *)&v3[8 * a2 + 304];
  *(_QWORD *)&v3[8 * a2 + 304] = 0LL;
}

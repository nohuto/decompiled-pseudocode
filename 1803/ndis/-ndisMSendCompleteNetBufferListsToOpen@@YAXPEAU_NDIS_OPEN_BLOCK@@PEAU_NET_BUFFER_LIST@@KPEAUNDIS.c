/*
 * XREFs of ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0002234
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001C80 (ndisMSendCompleteNetBufferListsInternal.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsToOpen(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        struct NDIS_PCW_CONTEXT *a4)
{
  unsigned int CurrentCpu; // eax
  char *v9; // rcx

  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, (unsigned __int64)a1->NblTracker, 149LL, a3 & 1);
  if ( (a4->DatapathEventsMask & 0x80u) != 0 )
  {
    CurrentCpu = a4->CurrentCpu;
    if ( CurrentCpu == -1 )
    {
      CurrentCpu = KeGetPcr()->Prcb.Number;
      a4->CurrentCpu = CurrentCpu;
    }
    v9 = (char *)a4->PcwBlock + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * CurrentCpu);
    ++*((_QWORD *)v9 + 7);
  }
  if ( (a4->DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(a4, 9u);
  a1->ProtSendNetBufferListsComplete(a1->SendCompleteNetBufferListsContext, a2, a3);
  if ( (a4->DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(a4, 9u, 0x16uLL);
}

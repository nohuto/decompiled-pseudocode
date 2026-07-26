/*
 * XREFs of ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0012F00 (NdisSendNetBufferLists.c)
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C00139F0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisFreeCloneNetBufferList @ 0x1C00140C0 (NdisFreeCloneNetBufferList.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0017D70 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0066CCC (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisNblTrackerUpdateOwnershipCount(unsigned __int64 a1, unsigned __int64 a2, _BYTE *a3, _BYTE *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  _QWORD *v10; // rdx

  if ( a2 )
  {
    if ( !*a3 && !*a4 )
    {
      *a4 = 1;
      LOBYTE(v9) = KeGetCurrentIrql() == 2;
      *a3 = v9;
    }
    v7 = a1 & 0xFFFFFFFFFFFFFFF8uLL;
    v8 = 2 * ((a1 >> 1) & 1);
    if ( *a3 )
    {
      v9 = KeGetPcr()->Prcb.Number << 12;
      v10 = (_QWORD *)(*(_QWORD *)(v7 + 8 * v8 + 40) + v9);
      *v10 += a2;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 8 * v8 + 48), a2);
    }
  }
  return v9;
}

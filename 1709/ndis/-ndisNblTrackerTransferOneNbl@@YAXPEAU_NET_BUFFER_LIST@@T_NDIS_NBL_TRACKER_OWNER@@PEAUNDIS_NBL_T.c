/*
 * XREFs of ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C0066C38
 * Callers:
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0066CCC (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 * Callees:
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00665DC (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOneNbl(
        struct _NET_BUFFER_LIST *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        void *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  if ( !a2 && !a1->SourceHandle )
    a1->SourceHandle = (void *)ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, a3 & 0xFFFFFFFFFFFFFFFDuLL);
  if ( (a2 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(a1) )
  {
    a4 |= 4uLL;
  }
  else
  {
    if ( a1->SourceHandle == a5 && !a1->ParentNetBufferList )
    {
      a1->NetBufferListInfo[27] = (void *)24;
      ++*a7;
      ++*a6;
      return;
    }
    ++*a6;
  }
  a1->NetBufferListInfo[27] = (void *)a4;
}

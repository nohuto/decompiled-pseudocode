/*
 * XREFs of NdisNblTrackerTransferOwnership @ 0x1C0066630
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerHandleFromNdisObjectHandle@@YAPEAUNDIS_NBL_TRACKER_HANDLE__@@PEAU1@@Z @ 0x1C0065F04 (-ndisNblTrackerHandleFromNdisObjectHandle@@YAPEAUNDIS_NBL_TRACKER_HANDLE__@@PEAU1@@Z.c)
 */

void __fastcall NdisNblTrackerTransferOwnership(
        __int64 a1,
        __int64 a2,
        struct NDIS_NBL_TRACKER_HANDLE__ *a3,
        __int64 a4,
        unsigned int a5)
{
  struct NDIS_NBL_TRACKER_HANDLE__ *v5; // r10
  struct NDIS_NBL_TRACKER_HANDLE__ *v6; // rax
  unsigned __int64 v7; // r8
  unsigned int v8; // r9d
  struct _NET_BUFFER_LIST *v9; // r11

  if ( ndisNblTrackerMode )
  {
    ndisNblTrackerHandleFromNdisObjectHandle(a3);
    v6 = ndisNblTrackerHandleFromNdisObjectHandle(v5);
    ndisNblTrackerTransferOwnershipInternal(v9, (__int64)v6, v7, v8, a5);
  }
}

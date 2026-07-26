/*
 * XREFs of ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0067840
 * Callers:
 *     ethFilterDprIndicateReceivePacket @ 0x1C00640D0 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064E80 (ndisMIndicatePacket.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x1C006776C (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C006799C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipSingleNbl(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  char v4; // di
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r11
  char v11[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF

  v4 = ndisNblTrackerEpoch;
  v11[0] = 1;
  v13 = 0LL;
  v12 = 0LL;
  v14 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(a1, 0LL, 0x86u, a3, 1);
  v7 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  v8 = (unsigned __int8 *)ndisSourceHandleFromOwner(v7, a2, a3, a4);
  if ( (v7 & 1) != 0 )
    v7 |= 2LL * (v4 & 1);
  v9 = (unsigned __int64)a1->NetBufferListInfo[27];
  ndisNblTrackerTransferOneNbl(a1, v9, 0LL, v7, v8, &v13, &v12);
  v10 = v13;
  if ( (v9 & 1) != 0 )
    ndisNblTrackerUpdateOwnershipCount(v9, v13, v11, &v14);
  if ( (v7 & 1) != 0 )
    ndisNblTrackerUpdateOwnershipCount(v7, v10 - v12, v11, &v14);
}

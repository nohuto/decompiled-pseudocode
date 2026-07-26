/*
 * XREFs of ndisXlateReturnPacketToNetBufferList @ 0x1C004F0E8
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0027570 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054090 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00696B0 (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ndisCopyPacketInfoToNBL @ 0x1C004E974 (ndisCopyPacketInfoToNBL.c)
 *     ndisFreeConvertedPacket @ 0x1C004EA00 (ndisFreeConvertedPacket.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

__int64 __fastcall ndisXlateReturnPacketToNetBufferList(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  __int64 v3; // rdi

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v3 = *(__int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  ndisCopyPacketInfoToNBL((__int64)a1, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v3, XlateReturn);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v3, 0LL, 0x1Eu, a1, 0);
  }
  else
  {
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v3, 0LL, 0x1Au, a1, 0);
    ndisFreeConvertedPacket(a1, *(_QWORD *)(v3 + 8), 0);
  }
  return v3;
}

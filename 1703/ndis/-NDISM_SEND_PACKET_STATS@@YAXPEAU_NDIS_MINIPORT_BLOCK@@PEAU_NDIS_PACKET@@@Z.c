/*
 * XREFs of ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0054888
 * Callers:
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054530 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054610 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisMSendComplete @ 0x1C0054A70 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055750 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00559D0 (ndisMDeferredSendPackets.c)
 *     ndisMSendCompleteSG @ 0x1C0056F30 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057110 (ndisMSendCompleteX.c)
 * Callees:
 *     <none>
 */

void __fastcall NDISM_SEND_PACKET_STATS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _MDL *Head; // rdi
  _BYTE *MappedSystemVa; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  ULONG ByteCount; // edx
  struct _MDL *i; // rcx

  Head = a2->Private.Head;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = Head->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
  {
    ByteCount = Head->ByteCount;
    for ( i = Head->Next; i; i = i->Next )
      ByteCount += i->ByteCount;
    BottomIfStats->ifHCOutOctets += ByteCount;
    if ( !MappedSystemVa || a1->MediaType )
      goto LABEL_19;
    if ( *MappedSystemVa == 0xFF
      && MappedSystemVa[1] == 0xFF
      && MappedSystemVa[2] == 0xFF
      && MappedSystemVa[3] == 0xFF
      && MappedSystemVa[4] == 0xFF
      && MappedSystemVa[5] == 0xFF )
    {
      ++a1->BottomIfStats->ifHCOutBroadcastPkts;
      a1->BottomIfStats->ifHCOutBroadcastOctets += ByteCount;
      return;
    }
    if ( (*MappedSystemVa & 1) != 0 )
    {
      ++a1->BottomIfStats->ifHCOutMulticastPkts;
      a1->BottomIfStats->ifHCOutMulticastOctets += ByteCount;
    }
    else
    {
LABEL_19:
      ++a1->BottomIfStats->ifHCOutUcastPkts;
      a1->BottomIfStats->ifHCOutUcastOctets += ByteCount;
    }
  }
}

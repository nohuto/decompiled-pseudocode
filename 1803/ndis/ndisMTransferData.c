/*
 * XREFs of ndisMTransferData @ 0x1C0057CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     NdisCopyFromPacketToPacketSafe @ 0x1C0051400 (NdisCopyFromPacketToPacketSafe.c)
 */

__int64 __fastcall ndisMTransferData(
        __int64 a1,
        struct _NDIS_PACKET *a2,
        int a3,
        UINT a4,
        PNDIS_PACKET Destination,
        unsigned int *BytesCopied)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v12; // rdx
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // r9d
  _MDL *Head; // rdi
  unsigned int v18; // r10d

  v7 = *(_QWORD *)(a1 + 16);
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  v12 = *(_QWORD *)(v7 + 1600);
  if ( a2 == *(struct _NDIS_PACKET **)(v12 + 8 * v6) )
  {
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    if ( *(_QWORD *)(v12 + 8 * v6) )
    {
      NdisCopyFromPacketToPacketSafe(
        Destination,
        0,
        a4,
        a2,
        a3 + *(_DWORD *)((char *)&a2->Private.Tail + a2->Private.NdisPacketOobOffset),
        BytesCopied,
        NormalPagePriority);
      return a4 != *BytesCopied ? 0xC0000001 : 0;
    }
  }
  v14 = *(_DWORD *)Destination[-1].ProtocolReserved;
  v15 = v14 + 1;
  *(_DWORD *)Destination[-1].ProtocolReserved = v14 + 1;
  if ( v14 + 1 >= 3 * ndisPacketStackSize )
  {
    *(_DWORD *)Destination[-1].ProtocolReserved = v14;
    return (unsigned int)-1073741670;
  }
  if ( (*(_BYTE *)(v7 + 928) & 2) == 0 )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      while ( (Head->MdlFlags & 5) != 0
            ? Head->MappedSystemVa
            : MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20) )
      {
        Head = Head->Next;
        if ( !Head )
        {
          v15 = *(_DWORD *)Destination[-1].ProtocolReserved;
          goto LABEL_15;
        }
      }
      return (unsigned int)-1073741670;
    }
  }
LABEL_15:
  if ( v15 < 3 * ndisPacketStackSize )
    *((_QWORD *)&Destination->Private.PhysicalCount + 6 * (v15 / 3 - (unsigned __int64)ndisPacketStackSize) + v15 % 3) = a1;
  v13 = (*(__int64 (__fastcall **)(PNDIS_PACKET, unsigned int *, _QWORD, struct _NDIS_PACKET *, int, UINT))(a1 + 280))(
          Destination,
          BytesCopied,
          *(_QWORD *)(a1 + 56),
          a2,
          a3,
          a4);
  if ( v13 != 259 )
  {
    v18 = *(_DWORD *)Destination[-1].ProtocolReserved;
    if ( v18 < 3 * ndisPacketStackSize )
    {
      *((_QWORD *)&Destination->Private.PhysicalCount + 6 * (v18 / 3 - (unsigned __int64)ndisPacketStackSize) + v18 % 3) = 0LL;
      v18 = *(_DWORD *)Destination[-1].ProtocolReserved;
    }
    *(_DWORD *)Destination[-1].ProtocolReserved = v18 - 1;
  }
  return v13;
}

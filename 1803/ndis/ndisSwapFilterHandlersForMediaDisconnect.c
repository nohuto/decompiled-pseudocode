/*
 * XREFs of ndisSwapFilterHandlersForMediaDisconnect @ 0x1C000FDEC
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C00166BC (ndisUpdateMiniportFakeStatus.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C0024238 (ndisUpdateFilterFakeStatus.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 */

void (__stdcall *__fastcall ndisSwapFilterHandlersForMediaDisconnect(
        __int64 a1,
        __int64 a2,
        __int64 a3))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(); // rax

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qqq(81LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, a2, a3);
  if ( a3 )
  {
    *(_BYTE *)(a3 + 384) |= 1u;
    ndisUpdateFilterFakeStatus(a3);
  }
  else
  {
    *(_BYTE *)(a1 + 930) |= 2u;
    ndisUpdateMiniportFakeStatus(a1);
  }
  if ( a2 )
  {
    *(_QWORD *)(a2 + 640) = &ndisFakeFilterReceiveHandler;
  }
  else
  {
    *(_BYTE *)(a1 + 2672) = 0;
    *(_QWORD *)(a1 + 432) = ndisMDummyIndicatePacket;
  }
  if ( a3 )
  {
    *(_QWORD *)(a3 + 632) = &ndisFakeFilterSendHandler;
    result = ndisFakeMiniportCancelSendPackets;
    *(_QWORD *)(a3 + 648) = ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 656) = ndisMFakeSendNetBufferLists;
    result = ndisFakeMiniportCancelSendPackets;
    *(_QWORD *)(a1 + 184) = ndisFakeMiniportCancelSendPackets;
    *(_DWORD *)(a1 + 2676) = 3;
    while ( v7 )
    {
      if ( *(_DWORD *)(a1 + 464) != 3 || (v8 = ndisMFakeWanSend, (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
        v8 = ndisMFakeSend;
      v7[12] = v8;
      v7[37] = 0LL;
      v7[21] = ndisMFakeSendPackets;
      result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeReset;
      v7[22] = ndisMFakeReset;
      v7 = (_QWORD *)v7[49];
    }
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_SF_qqq(
                                                                                   82LL,
                                                                                   &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids,
                                                                                   a1,
                                                                                   a2,
                                                                                   a3);
  return result;
}

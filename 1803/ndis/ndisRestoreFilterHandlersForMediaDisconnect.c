/*
 * XREFs of ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001673C
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisMiniportXStateClearFlag @ 0x1C0016708 (ndisMiniportXStateClearFlag.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C0024238 (ndisUpdateFilterFakeStatus.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 */

char __fastcall ndisRestoreFilterHandlersForMediaDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  void (__fastcall *v7)(_QWORD *, struct _NET_BUFFER_LIST *, int, __int64, int); // rax
  int v8; // ecx
  _QWORD *v9; // rcx

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qqq(77LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, a2, a3);
  if ( a3 )
  {
    v6 = (*(_BYTE *)(a3 + 384) & 0xFE) == 0;
    *(_BYTE *)(a3 + 384) &= ~1u;
    if ( v6 )
    {
      if ( (unsigned __int8)byte_1C0099614 >= 4u )
        WPP_SF_q(76LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a3);
      *(_QWORD *)(a3 + 632) = ndisFilterSendNetBufferLists;
      *(_QWORD *)(a3 + 648) = ndisFilterCancelSendNetBufferLists;
LABEL_8:
      if ( a2 )
      {
        v7 = ndisFilterIndicateReceiveNetBufferLists;
        *(_QWORD *)(a2 + 640) = ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_10;
      }
      goto LABEL_17;
    }
    ndisUpdateFilterFakeStatus(a3);
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_qD(78LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a3, *(unsigned __int8 *)(a3 + 384));
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
      LOBYTE(v7) = McTemplateK0jqxq(
                     *(_QWORD *)(a3 + 840),
                     (unsigned int)&KeptFilterFakeHandlers,
                     (int)a3 + 816,
                     (int)a3 + 816,
                     *(_DWORD *)(a3 + 832),
                     *(_QWORD *)(*(_QWORD *)(a3 + 840) + 1312LL),
                     *(_BYTE *)(a3 + 384));
  }
  else
  {
    if ( ndisMiniportXStateClearFlag(a1, 2) )
    {
      v9 = *(_QWORD **)(a1 + 56);
      *(_DWORD *)(a1 + 2676) = *(_DWORD *)(a1 + 2680);
      *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
      *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists;
      while ( v9 )
      {
        v9[12] = v9[72];
        v9[21] = v9[70];
        v9[37] = v9[71];
        v9[22] = ndisMReset;
        v9 = (_QWORD *)v9[49];
      }
      goto LABEL_8;
    }
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_qD(79LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, *(unsigned __int8 *)(a1 + 930));
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
      LOBYTE(v7) = McTemplateK0jqxq(
                     v8,
                     (unsigned int)&KeptMiniportFakeHandlers,
                     (int)a1 + 4032,
                     (int)a1 + 4032,
                     *(_DWORD *)(a1 + 4080),
                     *(_QWORD *)(a1 + 4048),
                     *(_BYTE *)(a1 + 930));
    if ( !a2 )
    {
LABEL_17:
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 1896);
      LOBYTE(v7) = *(_BYTE *)(a1 + 2684);
      *(_BYTE *)(a1 + 2672) = (_BYTE)v7;
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    LOBYTE(v7) = WPP_SF_qqq(80LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, a2, a3);
  return (char)v7;
}

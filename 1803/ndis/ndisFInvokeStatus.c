/*
 * XREFs of ndisFInvokeStatus @ 0x1C0019D44
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0019370 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C009961F >= 4u )
    WPP_SF_qD(129LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 288))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C009961F >= 4u )
    return WPP_SF_qD(130LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v4);
  return result;
}

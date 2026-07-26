/*
 * XREFs of ndisFInvokeStatus @ 0x1C0017FC0
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0016FF0 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C009261F >= 4u )
    WPP_SF_qD(131LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 288))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C009261F >= 4u )
    return WPP_SF_qD(132LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v4);
  return result;
}

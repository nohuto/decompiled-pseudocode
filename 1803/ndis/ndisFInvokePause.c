/*
 * XREFs of ndisFInvokePause @ 0x1C00B3040
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01028C8 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokePause(__int64 a1, _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  __int64 v2; // rsi
  int v6; // eax
  unsigned int v7; // edi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x74u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && *(_QWORD *)(a1 + 912) )
    v6 = ndisVerifierNdisDispatch->NdisFilterPauseHandler(
           *(void **)(a1 + 24),
           a2,
           *(void **)(a1 + 912),
           *(int (__fastcall **)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200));
  else
    v6 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200))(*(_QWORD *)(a1 + 24), a2);
  v7 = v6;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x75u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1, v6);
  return v7;
}

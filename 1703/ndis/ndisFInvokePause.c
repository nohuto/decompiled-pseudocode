/*
 * XREFs of ndisFInvokePause @ 0x1C00AEBC0
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00F7440 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokePause(__int64 a1, _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x76u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v8 = *(void **)(a1 + 912)) != 0LL )
    v5 = ndisVerifierNdisDispatch->NdisFilterPauseHandler(
           *(void **)(a1 + 24),
           a2,
           v8,
           *(int (__fastcall **)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200));
  else
    v5 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x77u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1, v5);
  return v6;
}

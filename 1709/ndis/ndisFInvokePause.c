/*
 * XREFs of ndisFInvokePause @ 0x1C00BF8B4
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0103C68 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokePause(__int64 a1, _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x74u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && (v8 = *(void **)(a1 + 912)) != 0LL )
    v5 = ndisVerifierNdisDispatch->NdisFilterPauseHandler(
           *(void **)(a1 + 24),
           a2,
           v8,
           *(int (__fastcall **)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200));
  else
    v5 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x75u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v5);
  return v6;
}

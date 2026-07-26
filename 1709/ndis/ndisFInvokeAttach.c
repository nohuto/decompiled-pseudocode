/*
 * XREFs of ndisFInvokeAttach @ 0x1C00C5AE4
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeAttach(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x6Eu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v2 + 176))(a1, *(_QWORD *)(v2 + 32), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qD(0x6Fu, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v5);
  return v6;
}

/*
 * XREFs of ndisFInvokeDetach @ 0x1C00AB120
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FE490 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeDetach(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x70u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 184))(*(_QWORD *)(a1 + 24));
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x71u, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
}

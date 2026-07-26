/*
 * XREFs of ndisFInvokeDetach @ 0x1C00BF418
 * Callers:
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisFInvokeDetach(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x72u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  (*(void (__fastcall **)(_QWORD))(v1 + 184))(*(_QWORD *)(a1 + 24));
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x73u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
}

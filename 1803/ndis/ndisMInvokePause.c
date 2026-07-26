/*
 * XREFs of ndisMInvokePause @ 0x1C00B34C4
 * Callers:
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokePause(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xE1u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 160))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0xE2u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v5);
  return v6;
}

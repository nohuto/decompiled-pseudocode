/*
 * XREFs of ndisMInvokeReset @ 0x1C00607BC
 * Callers:
 *     ndisMResetMiniportInternal @ 0x1C0061680 (ndisMResetMiniportInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMInvokeReset(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_q(0xEEu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 216))(*(_QWORD *)(a1 + 24), a2);
  v6 = v5;
  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_qD(0xEFu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v5);
  return v6;
}

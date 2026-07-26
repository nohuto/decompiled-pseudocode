/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C00AC0C4
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0008280 (ndisQueuedCheckForHang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di

  v1 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_q(0xE8u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_qD(0xE9u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v3);
  return v4;
}

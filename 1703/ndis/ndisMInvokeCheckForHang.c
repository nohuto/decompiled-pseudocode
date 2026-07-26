/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C00A6334
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C000FBD0 (ndisQueuedCheckForHang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di

  v1 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0092618 >= 4u )
    WPP_SF_q(0xD8u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( (unsigned __int8)byte_1C0092618 >= 4u )
    WPP_SF_qD(0xD9u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v3);
  return v4;
}

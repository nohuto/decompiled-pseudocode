/*
 * XREFs of ndisMInvokeCheckForHang @ 0x1C00C219C
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C00198D0 (ndisQueuedCheckForHang.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di

  v1 = *(_QWORD *)(a1 + 3784);
  if ( (unsigned __int8)byte_1C0098758 >= 4u )
    WPP_SF_q(0xE5u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 208))(*(_QWORD *)(a1 + 24));
  v4 = v3;
  if ( (unsigned __int8)byte_1C0098758 >= 4u )
    WPP_SF_qD(0xE6u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v3);
  return v4;
}

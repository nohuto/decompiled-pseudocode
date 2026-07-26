/*
 * XREFs of ndisInvokeDirectOidRequestComplete @ 0x1C005C1B8
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qDqL @ 0x1C0041034 (WPP_SF_qDqL.c)
 */

void __fastcall ndisInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qDqL(0x69u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, *(_DWORD *)(a2 + 32));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 872))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x6Au, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, a2);
}

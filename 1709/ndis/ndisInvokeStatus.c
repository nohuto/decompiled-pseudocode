/*
 * XREFs of ndisInvokeStatus @ 0x1C001E838
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisInvokeStatus(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C009875F >= 4u )
    WPP_SF_qD(103LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, v2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 208))(*(_QWORD *)(a1 + 32), a2);
  if ( (unsigned __int8)byte_1C009875F >= 4u )
    return WPP_SF_qD(104LL, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1, v2);
  return result;
}

/*
 * XREFs of ndisFInvokeStatus @ 0x1C000565C
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0005230 (ndisIndicateInitialStateToFilter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFInvokeStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(a2 + 20);
  if ( (unsigned __int8)byte_1C009875F >= 4u )
    WPP_SF_qD(129LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 288))(*(_QWORD *)(a1 + 24), a2);
  if ( (unsigned __int8)byte_1C009875F >= 4u )
    return WPP_SF_qD(130LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1, v4);
  return result;
}

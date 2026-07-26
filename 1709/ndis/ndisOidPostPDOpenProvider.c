/*
 * XREFs of ndisOidPostPDOpenProvider @ 0x1C0077E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqqqq @ 0x1C00410F4 (WPP_SF_qqqqq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     WPP_SF_qqqqd @ 0x1C0077BEC (WPP_SF_qqqqd_ea_1C0077BEC.c)
 */

void __fastcall ndisOidPostPDOpenProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(v2 + 40);
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qqqqq(
      0x1Au,
      &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids,
      v4,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v2);
  if ( !*(_QWORD *)a1 && !*(_DWORD *)(a1 + 40) && *(_UNKNOWN **)(v5 + 16) != &unk_1C007FBD0 )
    ndisBugCheckEx(0x23uLL, 5uLL, *(_QWORD *)(a1 + 16), v4);
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 40);
    WPP_SF_qqqqd(a1, a2, v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), v6);
  }
}

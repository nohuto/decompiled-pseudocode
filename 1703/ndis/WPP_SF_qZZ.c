/*
 * XREFs of WPP_SF_qZZ @ 0x1C005C5A8
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZZ(unsigned __int16 a1, __int64 a2, __int64 a3, const wchar_t *a4, unsigned __int16 *a5)
{
  const wchar_t *v5; // rax
  __int64 v7; // rdx
  const wchar_t *v8; // rcx
  const wchar_t *v9; // r10
  __int64 v10; // r8
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a5;
  if ( a5 )
    v7 = *a5;
  else
    v7 = 8LL;
  v8 = L"NULL";
  if ( a5 )
    v9 = (const wchar_t *)*((_QWORD *)a5 + 1);
  else
    v9 = L"NULL";
  if ( !a5 )
    v5 = L"\b";
  if ( a4 )
    v10 = *a4;
  else
    v10 = 8LL;
  if ( a4 )
    v8 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    a4 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids,
    a1,
    &v11,
    8LL,
    a4,
    2LL,
    v8,
    v10,
    v5,
    2LL,
    v9,
    v7,
    0LL);
}

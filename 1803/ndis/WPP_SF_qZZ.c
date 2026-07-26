/*
 * XREFs of WPP_SF_qZZ @ 0x1C005C878
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZZ(unsigned __int16 a1, __int64 a2, __int64 a3, const wchar_t *a4, unsigned __int16 *a5)
{
  const wchar_t *v5; // rdx
  __int64 v7; // rax
  const wchar_t *v8; // r8
  const wchar_t *v9; // r10
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a5;
  if ( a5 )
    v7 = *a5;
  else
    v7 = 8LL;
  v8 = L"NULL";
  if ( a5 && *a5 )
    v9 = (const wchar_t *)*((_QWORD *)a5 + 1);
  else
    v9 = L"NULL";
  if ( !a5 )
    v5 = L"\b";
  if ( a4 )
    v10 = *a4;
  else
    v10 = 8LL;
  v11 = a4 == 0LL;
  if ( a4 )
  {
    if ( *a4 )
      v8 = (const wchar_t *)*((_QWORD *)a4 + 1);
    v11 = a4 == 0LL;
  }
  if ( v11 )
    a4 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids,
    a1,
    &v12,
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

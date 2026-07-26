/*
 * XREFs of WPP_SF_ZZ @ 0x1C0041CD4
 * Callers:
 *     ndisIfAliasChange @ 0x1C004232C (ndisIfAliasChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZZ(__int64 a1, __int64 a2, const wchar_t *a3, const wchar_t *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r10
  bool v8; // zf

  v4 = 8LL;
  if ( a4 )
    v5 = *a4;
  else
    v5 = 8LL;
  v6 = L"NULL";
  if ( a4 && *a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  v8 = a3 == 0LL;
  if ( a3 )
  {
    v4 = *a3;
    if ( *a3 )
      v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v8 = a3 == 0LL;
  }
  if ( v8 )
    a3 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids,
    0xA5u,
    a3,
    2LL,
    v6,
    v4,
    a4,
    2LL,
    v7,
    v5,
    0LL);
}

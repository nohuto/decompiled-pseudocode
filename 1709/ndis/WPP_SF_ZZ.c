/*
 * XREFs of WPP_SF_ZZ @ 0x1C0040BA0
 * Callers:
 *     ndisIfAliasChange @ 0x1C00411E0 (ndisIfAliasChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZZ(__int64 a1, __int64 a2, const wchar_t *a3, const wchar_t *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r10

  v4 = 8LL;
  if ( a4 )
    v5 = *a4;
  else
    v5 = 8LL;
  v6 = L"NULL";
  if ( a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  if ( a3 )
  {
    v4 = *a3;
    v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
  }
  else
  {
    a3 = L"\b";
  }
  ndisWppFastTraceMessage(
    &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids,
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

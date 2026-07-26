/*
 * XREFs of WPP_SF_SZ @ 0x1C0041B50
 * Callers:
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00B7D8C (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_SZ(__int64 a1, __int64 a2, const wchar_t *a3, unsigned __int16 *a4)
{
  const wchar_t *v4; // r10
  __int64 v5; // rax
  const wchar_t *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9

  v4 = a4;
  if ( a4 )
    v5 = *a4;
  else
    v5 = 8LL;
  if ( a4 && *a4 )
    v6 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v6 = L"NULL";
  if ( !a4 )
    v4 = L"\b";
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  v9 = 2 * v8;
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(&WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids, 0x19u, a3, v9, v4, 2LL, v6, v5, 0LL);
}

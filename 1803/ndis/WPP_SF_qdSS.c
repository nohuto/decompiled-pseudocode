/*
 * XREFs of WPP_SF_qdSS @ 0x1C0077CC4
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00F8890 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qdSS(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, const wchar_t *a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  const wchar_t *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = a6;
  v7 = -1LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  v10 = a5;
  if ( !a6 )
    v6 = L"NULL";
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v11 = v7 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( !a5 )
    v10 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
    0x2Au,
    &v12,
    8LL,
    &v13,
    4LL,
    v10,
    2 * v11,
    v6,
    2 * v9,
    0LL);
}

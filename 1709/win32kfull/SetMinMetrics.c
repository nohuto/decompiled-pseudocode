/*
 * XREFs of SetMinMetrics @ 0x1C00830F8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00BF790 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C00DC7B8 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0121738 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0083490 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(struct _UNICODE_STRING *a1, char *a2)
{
  int v2; // ebx
  char *v3; // r8
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp-38h] BYREF
  char v11; // [rsp+38h] [rbp-30h] BYREF
  int TWIPSMetricById; // [rsp+3Ch] [rbp-2Ch]
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+44h] [rbp-24h]
  int v15; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x92u, -2310);
    v13 = GetTWIPSMetricById(a1, 0x93u, 0);
    v14 = GetTWIPSMetricById(a1, 0x94u, 0);
    FastGetProfileIntFromID(a1, 23LL, 150LL, 0LL, &v10, 0);
    v3 = &v11;
    v15 = v10;
  }
  v5 = 0;
  v6 = 0;
  if ( *((int *)v3 + 1) > 0 )
    v5 = *((_DWORD *)v3 + 1);
  v7 = *((_DWORD *)v3 + 2);
  *((_DWORD *)v3 + 1) = v5;
  if ( v7 > 0 )
    v6 = v7;
  v8 = *((_DWORD *)v3 + 3);
  *((_DWORD *)v3 + 2) = v6;
  if ( v8 > 0 )
    v2 = v8;
  *((_DWORD *)v3 + 4) &= 0xFu;
  *((_DWORD *)v3 + 3) = v2;
  *(_DWORD *)(gpsi + 2108LL) = v5 + 6;
  *(_DWORD *)(gpsi + 2112LL) = *(_DWORD *)(gpsi + 2320LL) + 6;
  *(_DWORD *)(gpsi + 2068LL) = *((_DWORD *)v3 + 2) + *(_DWORD *)(gpsi + 2108LL);
  *(_DWORD *)(gpsi + 2072LL) = *((_DWORD *)v3 + 3) + *(_DWORD *)(gpsi + 2112LL);
  result = *((unsigned int *)v3 + 4);
  *(_DWORD *)(gpsi + 2104LL) = result;
  return result;
}

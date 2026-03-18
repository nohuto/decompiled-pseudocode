/*
 * XREFs of SetMinMetrics @ 0x1C0009F64
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0009EC8 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C000F9C0 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(__int64 a1, char *a2)
{
  int v2; // ebx
  char *v3; // r8
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+3Ch] [rbp-24h]
  int v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+44h] [rbp-1Ch]
  int v15; // [rsp+48h] [rbp-18h]

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 146LL, 154LL, &v10, 0);
    v12 = v10;
    FastGetProfileIntFromID(a1, 23LL, 147LL, 0LL, &v10, 0);
    v13 = v10;
    FastGetProfileIntFromID(a1, 23LL, 148LL, 0LL, &v10, 0);
    v14 = v10;
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
  *(_DWORD *)(gpsi + 2112LL) = *(_DWORD *)(gpsi + 2004LL) + 6;
  *(_DWORD *)(gpsi + 2068LL) = *((_DWORD *)v3 + 2) + *(_DWORD *)(gpsi + 2108LL);
  *(_DWORD *)(gpsi + 2072LL) = *((_DWORD *)v3 + 3) + *(_DWORD *)(gpsi + 2112LL);
  result = *((unsigned int *)v3 + 4);
  *(_DWORD *)(gpsi + 2104LL) = result;
  return result;
}

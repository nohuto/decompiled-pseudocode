/*
 * XREFs of SetIconMetrics @ 0x1C000B568
 * Callers:
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C000F9C0 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01B473C (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?MetricGetIDLocalized@@YAHIH@Z @ 0x1C000B784 (-MetricGetIDLocalized@@YAHIH@Z.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C000B83C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  unsigned int *v2; // rbx
  int DeviceCaps; // eax
  unsigned int IDLocalized; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  signed int v9; // r8d
  _DWORD v11[4]; // [rsp+30h] [rbp-98h] BYREF
  char v12; // [rsp+40h] [rbp-88h] BYREF
  int v13; // [rsp+44h] [rbp-84h]
  int v14; // [rsp+48h] [rbp-80h]
  int v15; // [rsp+4Ch] [rbp-7Ch]

  v2 = (unsigned int *)a2;
  if ( !(unsigned int)SetIconFonts(a1, a2) )
    return 0LL;
  if ( !v2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL, 1LL, v11, 0);
    v15 = v11[0];
    DeviceCaps = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 88LL);
    IDLocalized = MetricGetIDLocalized(0x71u, 75 * DeviceCaps / 96);
    FastGetProfileIntFromID(a1, 23LL, 64LL, IDLocalized, v11, 0);
    v13 = v11[0];
    v6 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 90LL);
    v7 = MetricGetIDLocalized(0x72u, 75 * v6 / 96);
    FastGetProfileIntFromID(a1, 23LL, 65LL, v7, v11, 0);
    v2 = (unsigned int *)&v12;
    v14 = v11[0];
  }
  v8 = *(unsigned int *)(gpsi + 1924LL);
  if ( (int)v2[1] > (int)v8 )
    v8 = v2[1];
  v2[1] = v8;
  v9 = *(_DWORD *)(gpsi + 1928LL);
  if ( (int)v2[2] > v9 )
    v9 = v2[2];
  v2[2] = v9;
  SetDpiDepSysMet(38LL, v8);
  SetDpiDepSysMet(39LL, v2[2]);
  *(_DWORD *)(gpsi + 2420LL) = EngMulDiv(*(_DWORD *)(gpsi + 2032LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  *(_DWORD *)(gpsi + 2424LL) = EngMulDiv(*(_DWORD *)(gpsi + 2036LL), 96, *(unsigned __int16 *)(gpsi + 8678LL));
  if ( v2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}

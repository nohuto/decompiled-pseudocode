/*
 * XREFs of UserSetAltScaleFont @ 0x1C00821F4
 * Callers:
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     SetIconMetrics @ 0x1C0082F1C (SetIconMetrics.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B7A74 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00B1984 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v7; // [rsp+24h] [rbp-74h]

  v3 = 0;
  if ( !(unsigned int)GreExtGetObjectW(a1, 92LL, (char *)&a) )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 9974LL));
  v7 = EngMulDiv(v7, 96, *(unsigned __int16 *)(gpsi + 9974LL));
  v4 = GreCreateFontIndirectW(&a, 136LL);
  *a2 = v4;
  LOBYTE(v3) = v4 != 0;
  return v3;
}

/*
 * XREFs of UserSetAltScaleFont @ 0x1C000C71C
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C000B83C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C000BBE4 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B4848 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     GreCreateFontIndirectW @ 0x1C002B45C (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(int a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v7; // [rsp+24h] [rbp-74h]

  if ( !(unsigned int)GreExtGetObjectW(a1) )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 8678LL));
  v7 = EngMulDiv(v7, 96, *(unsigned __int16 *)(gpsi + 8678LL));
  v3 = GreCreateFontIndirectW(&a);
  *a2 = v3;
  if ( !v3 )
    return 0LL;
  LOBYTE(v4) = 10;
  HmgMarkUndeletable(v3, v4);
  GreSetLFONTOwner(*a2, 0LL);
  return 1LL;
}

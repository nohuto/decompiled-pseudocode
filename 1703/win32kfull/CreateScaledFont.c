/*
 * XREFs of CreateScaledFont @ 0x1C01C3F3C
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01C3CB0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     GreCreateFontIndirectW @ 0x1C002B45C (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4)
{
  unsigned int v5; // ebx
  __int64 FontIndirectW; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  INT a; // [rsp+20h] [rbp-88h] BYREF
  INT v12; // [rsp+24h] [rbp-84h]

  *a2 = 0LL;
  v5 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (unsigned __int16 *)&a) )
  {
    a = EngMulDiv(a, a4, 96);
    v12 = EngMulDiv(v12, a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)&a);
    v5 = 0;
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      LOBYTE(v8) = 10;
      HmgMarkUndeletable(FontIndirectW, v8);
      GreSetLFONTOwner(*a2, 0, v9);
      return 1;
    }
  }
  return v5;
}

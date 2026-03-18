/*
 * XREFs of ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01C3CB0
 * Callers:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     CreateScaledFont @ 0x1C01C3F3C (CreateScaledFont.c)
 */

void __fastcall EnsureScaledFontAndGetDimensions(HFONT a1, HFONT *a2, __int64 a3, __int64 a4, int *a5, int *a6)
{
  __int64 v7; // rbx

  if ( !*a2 && (unsigned int)CreateScaledFont(a1, a2, a3, a4) && a5 )
  {
    if ( a6 )
    {
      v7 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL), (__int64)*a2, 1);
      *a5 = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, a6, gbGreTextReady);
      GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL), v7, 1);
    }
  }
}

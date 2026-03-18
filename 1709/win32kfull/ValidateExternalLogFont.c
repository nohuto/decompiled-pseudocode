/*
 * XREFs of ValidateExternalLogFont @ 0x1C00812F0
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0081D38 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0121644 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C00B1984 (GreCreateFontIndirectW.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

_BOOL8 __fastcall ValidateExternalLogFont(__int64 a1)
{
  BOOL v1; // ebx
  __int64 FontIndirectW; // rdi
  __int64 v3; // rsi
  int CharDimensionsInternal; // eax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  FontIndirectW = GreCreateFontIndirectW(a1, 0LL);
  if ( FontIndirectW )
  {
    v3 = GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), FontIndirectW);
    CharDimensionsInternal = GetCharDimensionsInternal(*(HDC *)(gpDispInfo + 56LL), 0LL, &v6, gbGreTextReady);
    if ( v6 > 0 && CharDimensionsInternal > 0 && v6 < 0x7FFF )
      v1 = CharDimensionsInternal < 0x7FFF;
    GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), v3);
    GreDeleteObject(FontIndirectW);
  }
  return v1;
}

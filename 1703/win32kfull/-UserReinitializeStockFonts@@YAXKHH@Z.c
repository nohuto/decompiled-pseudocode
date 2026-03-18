/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C013DA38
 * Callers:
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C013DCC8 (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

void __fastcall UserReinitializeStockFonts(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r9d
  __int64 SessionSystemDpiServerInfo; // rbx
  int v7; // r9d

  GreReinitializeStockFonts();
  v4 = Get96DpiServerInfo();
  *(_QWORD *)(v4 + 48) = GreGetDpiStockObject(13LL);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  if ( a3 )
    v5 = 1;
  else
    v5 = gbGreTextReady;
  *(_DWORD *)(v4 + 56) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 56LL),
                           (struct tagTEXTMETRICW *)(v4 + 64),
                           (int *)(v4 + 60),
                           v5);
  SessionSystemDpiServerInfo = GetSessionSystemDpiServerInfo();
  *(_QWORD *)(SessionSystemDpiServerInfo + 48) = GreGetStockObject(13LL);
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 56LL));
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL));
  v7 = 1;
  if ( !a3 )
    v7 = gbGreTextReady;
  *(_DWORD *)(SessionSystemDpiServerInfo + 56) = GetCharDimensionsInternal(
                                                   *(HDC *)(gpDispInfo + 56LL),
                                                   (struct tagTEXTMETRICW *)(SessionSystemDpiServerInfo + 64),
                                                   (int *)(SessionSystemDpiServerInfo + 60),
                                                   v7);
  InvalidateKMDpiMetricsCacheDPIMETRICS();
}

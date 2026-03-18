/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00BFE44
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00BF790 (UserOnGreTextReady.c)
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00824D0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0108B7C (-GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z.c)
 */

void __fastcall UserReinitializeStockFonts(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 SystemFont; // rax
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 SessionDpiServerInfo; // rbx
  __int64 v14; // rax
  int v15; // r9d

  GreReinitializeStockFonts();
  v7 = Get96DpiServerInfo(v5, v4, v6);
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v7 + 24) = SystemFont;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), SystemFont);
  v9 = 1;
  if ( !a3 )
    v9 = gbGreTextReady;
  *(_DWORD *)(v7 + 32) = GetCharDimensionsInternal(
                           *(HDC *)(gpDispInfo + 56LL),
                           (struct tagTEXTMETRICW *)(v7 + 40),
                           (int *)(v7 + 36),
                           v9);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v11, v10, v12);
  v14 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v14;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 56LL), v14);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(SessionDpiServerInfo + 24));
  v15 = 1;
  if ( !a3 )
    v15 = gbGreTextReady;
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensionsInternal(
                                             *(HDC *)(gpDispInfo + 56LL),
                                             (struct tagTEXTMETRICW *)(SessionDpiServerInfo + 40),
                                             (int *)(SessionDpiServerInfo + 36),
                                             v15);
  UpdateDpiMetricsCacheDPISERVERINFO();
}

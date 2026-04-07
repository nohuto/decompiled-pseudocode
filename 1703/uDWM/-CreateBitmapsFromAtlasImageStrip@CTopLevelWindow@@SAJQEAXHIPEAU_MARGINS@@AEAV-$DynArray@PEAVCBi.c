/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x1800458A4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180043A08 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x1800455A0 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x1800457BC (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008B72C (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008E4F0 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180095540 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180045960 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        __int64 a5)
{
  int v9; // eax
  int v10; // ebx
  int BitmapsFromAtlasImageStrip; // eax

  if ( (dword_1800C11BC & 1) == 0 )
  {
    dword_1800C1160 = -2147023728;
    dword_1800C11BC |= 1u;
  }
  v9 = DynArrayImpl<0>::Grow(a5, 8u, a3, 0, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A7u);
  else
    *(_DWORD *)(a5 + 24) += a3;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1800C1160, 1u, v10, 0x351u);
  }
  else
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   iPartId,
                                   a3,
                                   a4,
                                   *(struct CBitmapSource ***)a5);
    v10 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800C1160, 1u, BitmapsFromAtlasImageStrip, 0x359u);
  }
  return (unsigned int)v10;
}

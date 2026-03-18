/*
 * XREFs of CleanupGDI @ 0x1C006398C
 * Callers:
 *     CleanupResources @ 0x1C007490C (CleanupResources.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreGetStockObject @ 0x1C0048B90 (GreGetStockObject.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0063C84 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0063CAC (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0063CE0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 *     DestroyCacheDCEntries @ 0x1C007C05C (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C008B178 (DelayedDestroyCacheDC.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C008BEA8 (DrvCleanupAndDestroyMDEV.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C009A43C (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C009B88C (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 CleanupGDI()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  struct HOBJ__ *StockObject; // rax

  DestroyDC((HDC *)(gpDispInfo + 48));
  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported() >= 0 )
    DeleteFadeSprite();
  DestroyDC(&qword_1C0192B80);
  if ( qword_1C0192AA0 )
  {
    StockObject = (struct HOBJ__ *)GreGetStockObject(21);
    hbmSelectBitmap((struct HOBJ__ *)qword_1C0192AA8, StockObject, 0, 0);
    GreDeleteObject(qword_1C0192AA0);
    qword_1C0192AA0 = 0LL;
  }
  DestroyDC(&qword_1C0192AA8);
  DestroyCacheDCEntries(gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1LL);
  DestroyBitmap((HBITMAP *)(gpDispInfo + 72));
  DestroyBitmap(&ghbmBits);
  DestroyBitmap(&ghbmBits96);
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 616);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v0 = 4680LL;
  v1 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v0));
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  DestroyRegion((HRGN *)(gpDispInfo + 112));
  DestroyRegion(&ghrgnInvalidSum);
  DestroyRegion(&ghrgnVisNew);
  DestroyRegion(&ghrgnSWP1);
  DestroyRegion(&ghrgnValid);
  DestroyRegion(&ghrgnValidSum);
  DestroyRegion(&ghrgnInvalid);
  DestroyRegion(&ghrgnInv0);
  DestroyRegion(&ghrgnInv1);
  DestroyRegion(&ghrgnInv2);
  DestroyRegion(&ghrgnGDC);
  DestroyRegion(&ghrgnSCR);
  DestroyRegion(&ghrgnSPB1);
  DestroyRegion(&ghrgnSPB2);
  DestroyRegion(&ghrgnSW);
  DestroyRegion(&ghrgnScrl1);
  DestroyRegion(&ghrgnScrl2);
  DestroyRegion(&ghrgnScrlVis);
  DestroyRegion(&ghrgnScrlSrc);
  DestroyRegion(&ghrgnScrlDst);
  DestroyRegion(&ghrgnScrlValid);
  DestroyAllDPIMETRICSFonts(&gSessionDpiMetrics);
  DestroyAllDPIMETRICSFonts(&g96DpiMetrics);
  if ( g_pWallpaperSettings )
  {
    if ( (int)IsReleaseWallpaperSettingsSupported() >= 0 )
      ReleaseWallpaperSettings(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject(g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  if ( *(_QWORD *)(gpDispInfo + 8) )
  {
    DrvCleanupAndDestroyMDEV();
    Win32FreePool(*(_QWORD *)(gpDispInfo + 8));
    *(_QWORD *)(gpDispInfo + 8) = 0LL;
    *(_QWORD *)(gpDispInfo + 32) = 0LL;
  }
  result = gpDispInfo;
  v3 = *(_QWORD **)(gpDispInfo + 96);
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)v3[7];
      result = DestroyMonitor(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}

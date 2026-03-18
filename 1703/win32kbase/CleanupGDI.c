/*
 * XREFs of CleanupGDI @ 0x1C00787E8
 * Callers:
 *     CleanupResources @ 0x1C0078618 (CleanupResources.c)
 * Callees:
 *     GreGetStockObject @ 0x1C002B5C0 (GreGetStockObject.c)
 *     DelayedDestroyCacheDC @ 0x1C00378A0 (DelayedDestroyCacheDC.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0078B10 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0078B38 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0078B6C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C0078BB4 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     DestroyMonitor @ 0x1C0078C20 (DestroyMonitor.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C007B00C (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DestroyCacheDCEntries @ 0x1C007B04C (DestroyCacheDCEntries.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C007B17C (DrvCleanupAndDestroyMDEV.c)
 *     hbmSelectBitmap @ 0x1C007E7E0 (hbmSelectBitmap.c)
 */

CCursorClip *CleanupGDI()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  CCursorClip *v2; // rcx
  CCursorClip *result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void *StockObject; // rax

  DestroyDC((HDC *)gpDispInfo + 6);
  DestroyDC((HDC *)gpDispInfo + 7);
  DestroyDC((HDC *)gpDispInfo + 8);
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  if ( gfade && (int)IsDeleteFadeSpriteSupported() >= 0 )
    DeleteFadeSprite();
  DestroyDC(&qword_1C018DCC8);
  if ( qword_1C018DBF0 )
  {
    StockObject = GreGetStockObject(21);
    hbmSelectBitmap(qword_1C018DBF8, StockObject, 0LL, 0LL);
    GreDeleteObject(qword_1C018DBF0);
    qword_1C018DBF0 = 0LL;
  }
  DestroyDC(&qword_1C018DBF8);
  DestroyCacheDCEntries(gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1);
  DestroyBitmap((HBITMAP *)gpDispInfo + 9);
  DestroyBitmap(&ghbmBits);
  DestroyBitmap(&ghbmBits96);
  DestroyBitmap((HBITMAP *)&ghbmCaption);
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 667);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v0 = 5088LL;
  v1 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v0));
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  DestroyRegion((HRGN *)gpDispInfo + 15);
  DestroyRegion((HRGN *)gpDispInfo + 16);
  DestroyRegion((HRGN *)gpDispInfo + 17);
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
  DestroyAllDPIMETRICSFonts(&gSystemDpiMetrics);
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
  v2 = gpDispInfo;
  result = (CCursorClip *)*((_QWORD *)gpDispInfo + 1);
  if ( result )
  {
    DrvCleanupAndDestroyMDEV(*((_QWORD *)gpDispInfo + 1));
    Win32FreePool(*((_QWORD *)gpDispInfo + 1));
    *((_QWORD *)gpDispInfo + 1) = 0LL;
    result = gpDispInfo;
    *((_QWORD *)gpDispInfo + 4) = 0LL;
    v2 = gpDispInfo;
  }
  v4 = (_QWORD *)*((_QWORD *)v2 + 12);
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)v4[7];
      result = (CCursorClip *)DestroyMonitor(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  if ( gpMonitorCached )
    return (CCursorClip *)DestroyMonitor(gpMonitorCached);
  return result;
}

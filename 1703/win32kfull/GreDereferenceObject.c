/*
 * XREFs of GreDereferenceObject @ 0x1C001C23C
 * Callers:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0026800 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00450D4 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     _SetCursorIconData @ 0x1C0046B74 (_SetCursorIconData.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075400 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C0075430 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C013EA94 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C01958E0 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+50h] [rbp+18h] BYREF

  SURFREF::SURFREF((SURFREF *)&v7, a1);
  v4 = 0;
  if ( (unsigned int)DWMSPRITEREF::bValid((DWMSPRITEREF *)&v7) )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
    }
    else
    {
      v6 = 5;
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, v6) || !(unsigned int)SURFREF::bDeleteSurface(&v7, 0LL, 1LL) )
        v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  return v4;
}

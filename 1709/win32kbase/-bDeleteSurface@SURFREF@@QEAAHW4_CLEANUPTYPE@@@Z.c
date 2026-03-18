/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C001F458
 * Callers:
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001F3A4 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C003D120 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AA3AC (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, 0LL);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}

/*
 * XREFs of GreGetObjectOwner @ 0x1C007B630
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0040840 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngCombineRgn @ 0x1C00FBEB0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00FBF50 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C00FC050 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC0C0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00FC170 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C00FC1D0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C00FC240 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00FC2E0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00FC350 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C00FC3B0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C00FC440 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00FC4E0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00FC580 (EngXorRgn.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GreGetObjectOwner(unsigned int a1, int a2)
{
  GdiHandleManager *v2; // rbx
  __int16 v4; // esi^2
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = -2147483614;
  v6 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v5;
}

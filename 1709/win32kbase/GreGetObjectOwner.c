/*
 * XREFs of GreGetObjectOwner @ 0x1C0073C80
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C003EB90 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     EngCombineRgn @ 0x1C00FC410 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00FC4B0 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C00FC5B0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00FC620 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00FC6D0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C00FC730 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C00FC7A0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00FC840 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00FC8B0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C00FC910 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C00FC9A0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00FCA40 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00FCAE0 (EngXorRgn.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
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

/*
 * XREFs of ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180155520
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18006C970 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800715D0 (-SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
    return *((_DWORD *)this + 20) != *(_DWORD *)(v1 + 72);
  return v2;
}

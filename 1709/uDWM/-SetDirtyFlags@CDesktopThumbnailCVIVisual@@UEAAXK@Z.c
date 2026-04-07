/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x1800790B0
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027A40 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18003814C (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18009BF9C (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::SetDirtyFlags(CDesktopThumbnailCVIVisual *this, int a2)
{
  __int64 v4; // rax
  CVisual *v5; // rcx

  if ( *((_BYTE *)this + 337) )
  {
    v4 = *((_QWORD *)this + 39);
    if ( v4 )
    {
      v5 = *(CVisual **)(v4 + 400);
      if ( v5 )
        CVisual::SetDirtyFlags(v5, 0x8000000);
    }
  }
  CVisual::SetDirtyFlags(this, a2);
}

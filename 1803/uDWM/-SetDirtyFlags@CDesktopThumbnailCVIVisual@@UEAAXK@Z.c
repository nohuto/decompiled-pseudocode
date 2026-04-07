/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180082480
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EEF0 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800A4428 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
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
      v5 = *(CVisual **)(v4 + 392);
      if ( v5 )
        CVisual::SetDirtyFlags(v5, 0x8000000);
    }
  }
  CVisual::SetDirtyFlags(this, a2);
}

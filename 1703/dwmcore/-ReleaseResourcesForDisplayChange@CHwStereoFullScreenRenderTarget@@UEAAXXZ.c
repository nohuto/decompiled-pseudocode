/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801A0700
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ?RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ @ 0x1801A0738 (-RestoreRenderTargetState@CHwStereoFullScreenRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::ReleaseResourcesForDisplayChange(
        CHwStereoFullScreenRenderTarget *this)
{
  CHwStereoFullScreenRenderTarget::RestoreRenderTargetState((CHwStereoFullScreenRenderTarget *)((char *)this - 176));
  *((_QWORD *)this + 26) = 0LL;
  ReleaseInterface<CD3DVidMemOnlyTexture>((CMILPoolResource **)this + 27);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}

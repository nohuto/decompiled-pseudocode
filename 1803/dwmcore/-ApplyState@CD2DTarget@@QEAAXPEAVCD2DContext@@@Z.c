/*
 * XREFs of ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180094F78
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180095F00 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800961C0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180094F5C (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180096D48 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 */

void __fastcall CD2DTarget::ApplyState(CD2DTarget *this, struct CD2DContext *a2)
{
  if ( !*((_BYTE *)this + 48) )
  {
    *((_QWORD *)this + 2) = a2;
    CD2DContext::D2DSetTargetInternal(a2, this);
    *((_BYTE *)this + 48) = 1;
    CD2DTarget::ApplyCurrentClip(this);
  }
}

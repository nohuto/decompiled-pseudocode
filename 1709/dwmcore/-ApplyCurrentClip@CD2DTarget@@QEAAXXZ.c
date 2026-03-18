/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180081B08
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180081B24 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  if ( *((_BYTE *)this + 56) )
    CD2DTarget::SetClip(this, (const struct D2D_RECT_F *)((char *)this + 60), *((enum D2D1_ANTIALIAS_MODE *)this + 19));
  else
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
}

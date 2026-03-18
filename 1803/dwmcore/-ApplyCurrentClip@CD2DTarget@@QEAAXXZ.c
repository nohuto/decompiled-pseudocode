/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180094F5C
 * Callers:
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180094F78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
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

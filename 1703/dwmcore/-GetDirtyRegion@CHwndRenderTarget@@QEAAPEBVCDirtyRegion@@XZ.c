/*
 * XREFs of ?GetDirtyRegion@CHwndRenderTarget@@QEAAPEBVCDirtyRegion@@XZ @ 0x180023714
 * Callers:
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

const struct CDirtyRegion *__fastcall CHwndRenderTarget::GetDirtyRegion(CHwndRenderTarget *this)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 17) && *((_QWORD *)this + 10) )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15), v3);
    CVisualTree::PreCompute(*((CVisualTree **)this + 10));
  }
  return (const struct CDirtyRegion *)*((_QWORD *)this + 18);
}

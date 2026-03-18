/*
 * XREFs of ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x180017468
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078128 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwndRenderTarget::NeedsBlackBars(CHwndRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 200LL))(this)
    && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1297LL) )
      return TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
               *((_QWORD *)this + 14) + 80LL,
               *((_QWORD *)this + 14) + 64LL) ^ 1;
    else
      return *((_BYTE *)this + 801);
  }
  return v2;
}

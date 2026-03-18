/*
 * XREFs of ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x18005FAF8
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BDD8C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwndRenderTarget::NeedsBlackBars(CHwndRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL))(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1345LL) )
      return TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
               *((_QWORD *)this + 21) + 104LL,
               *((_QWORD *)this + 21) + 88LL) ^ 1;
    else
      return *((_BYTE *)this + 848);
  }
  return v2;
}

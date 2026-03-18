/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180171F88
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C920 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18015B940 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18015C31C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, __m128 *a2)
{
  const struct D2D_RECT_F *v2; // rcx
  struct D2D_RECT_F *v3; // r8
  CSpriteVisualContent *v4; // r9
  struct D2D_RECT_F v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = (struct D2D_RECT_F)_mm_sub_ps(*a2, (__m128)_xmm);
  if ( !D2DQuaternion::operator==((float *)this + 29, &v5.left) && (!IsEmpty(v2) || !IsEmpty(&v5)) )
  {
    *v3 = v5;
    CSpriteVisualContent::ReleasePrimitiveCaches(v4);
  }
}

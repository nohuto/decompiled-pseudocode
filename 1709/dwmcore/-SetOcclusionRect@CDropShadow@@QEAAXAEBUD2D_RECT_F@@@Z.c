/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180161140
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180022550 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??8?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z @ 0x180036B40 (--8-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1801523FC (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, __m128 *a2)
{
  const struct D2D_RECT_F *v2; // rcx
  struct D2D_RECT_F *v3; // r8
  __int64 *v4; // r9
  struct D2D_RECT_F v5; // xmm0
  __int64 v6; // rax
  struct D2D_RECT_F v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = (struct D2D_RECT_F)_mm_sub_ps(*a2, (__m128)_xmm);
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::operator==((float *)this + 45, &v7.left)
    && (!IsEmpty(v2) || !IsEmpty(&v7)) )
  {
    v5 = v7;
    v6 = *v4;
    v4[9] = 0LL;
    *v3 = v5;
    (*(void (__fastcall **)(__int64 *, __int64))(v6 + 64))(v4, 5LL);
  }
}

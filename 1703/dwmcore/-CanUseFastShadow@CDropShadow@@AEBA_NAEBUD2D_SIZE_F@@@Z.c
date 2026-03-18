/*
 * XREFs of ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x180170A30
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsRectangular@CDropShadow@@AEBA_NXZ @ 0x180171E38 (-IsRectangular@CDropShadow@@AEBA_NXZ.c)
 */

bool __fastcall CDropShadow::CanUseFastShadow(CDropShadow *this, const struct D2D_SIZE_F *a2)
{
  return this != CDropShadow::s_pFastShadow
      && CDropShadow::IsRectangular(this)
      && *((float *)this + 24) <= (float)(fminf(a2->width, a2->height) * 0.5)
      && *(_DWORD *)(*((_QWORD *)this + 2) + 1232LL) == 0;
}

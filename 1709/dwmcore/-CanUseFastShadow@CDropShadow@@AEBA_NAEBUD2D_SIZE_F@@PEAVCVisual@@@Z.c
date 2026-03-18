/*
 * XREFs of ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18015F6C0
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x180160E0C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 */

bool __fastcall CDropShadow::CanUseFastShadow(CDropShadow *this, const struct D2D_SIZE_F *a2, struct CVisual *a3)
{
  return this != CDropShadow::s_pFastShadow
      && CDropShadow::IsRectangular(this, a3)
      && *((float *)this + 40) <= (float)(fminf(a2->width, a2->height) * 0.5)
      && *(_DWORD *)(*((_QWORD *)this + 2) + 1168LL) == 0;
}

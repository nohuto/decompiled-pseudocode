/*
 * XREFs of ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@_N@Z @ 0x180188E94
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x18018A71C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 */

bool __fastcall CDropShadow::CanUseFastShadow(
        CDropShadow *this,
        const struct D2D_SIZE_F *a2,
        struct CVisual *a3,
        char a4)
{
  return this != CDropShadow::s_pFastShadow
      && CDropShadow::IsRectangular(this, a3)
      && *((float *)this + 38) <= (float)(fminf(a2->width, a2->height) * 0.5)
      && (a4 || !*(_DWORD *)(*((_QWORD *)this + 2) + 1192LL));
}

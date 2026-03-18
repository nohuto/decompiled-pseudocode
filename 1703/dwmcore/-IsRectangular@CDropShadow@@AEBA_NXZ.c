/*
 * XREFs of ?IsRectangular@CDropShadow@@AEBA_NXZ @ 0x180171E38
 * Callers:
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x180170A30 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsRectangular(CDropShadow *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 17);
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL))(v1, 82LL) )
    return 1;
  return v2;
}

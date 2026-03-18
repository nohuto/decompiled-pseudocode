/*
 * XREFs of ?DrawForBounds@CShapeTree@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C1218
 * Callers:
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C11C0 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C1BA0 (-GetBounds@CShapeTree@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 */

__int64 __fastcall CShapeTree::DrawForBounds(CShapeTree *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  int Bounds; // eax
  unsigned int v5; // ebx
  int v6; // eax
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  Bounds = CShapeTree::GetBounds(this, 0LL, a3, v8);
  v5 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x119u);
  }
  else
  {
    v6 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)v8, &xmmword_1802ADA48);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11Bu);
  }
  return v5;
}

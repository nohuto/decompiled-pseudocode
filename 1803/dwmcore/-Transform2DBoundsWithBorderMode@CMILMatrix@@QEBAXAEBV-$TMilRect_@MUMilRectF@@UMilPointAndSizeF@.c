/*
 * XREFs of ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x1801C74B8
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x1801C8DDC (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 */

char __fastcall CMILMatrix::Transform2DBoundsWithBorderMode(__int64 a1, const struct D2D_RECT_F *a2)
{
  char result; // al
  _OWORD *v3; // rdx
  int v4; // r9d
  __int64 v5; // r10
  _OWORD *v6; // r11
  __int64 v7; // r8
  _OWORD *v8; // r11
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  result = IsEmpty(a2);
  v7 = 0LL;
  if ( result )
  {
    *v6 = *v3;
  }
  else
  {
    LOBYTE(v7) = v4 == 0;
    result = Transform2DBounds(v5, v3, v7, &v9);
    *v8 = v9;
  }
  return result;
}

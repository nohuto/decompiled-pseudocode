/*
 * XREFs of ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x18001206C
 * Callers:
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x1800A8E40 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x180023C44 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CMILMatrix::Transform2DBoundsWithBorderMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD *v3; // rdx
  int v4; // r9d
  __int64 v5; // r10
  _OWORD *v6; // r11
  __int64 v7; // r8
  _OWORD *v8; // r11
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  v7 = 0LL;
  if ( (_BYTE)result )
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

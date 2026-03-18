/*
 * XREFs of ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawForBounds@CShapeTree@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C1218 (-DrawForBounds@CShapeTree@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CShapeTree::Draw(__int64 a1, CDrawingContext *a2)
{
  struct CDrawingContext *v2; // rdx
  const struct D2D_SIZE_F *v3; // r8
  CShapeTree *v4; // r9
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  if ( CDrawingContext::IsBounding(a2) )
  {
    v5 = CShapeTree::DrawForBounds(v4, v2, v3);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x19u);
  }
  else
  {
    v7 = CShapeTree::DrawShapes(v4, v2, v3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1Du);
  }
  return v6;
}

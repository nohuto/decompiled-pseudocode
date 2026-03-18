/*
 * XREFs of ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A4E1C
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18020A848 (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CShapePtr::GetWidenedBounds(_QWORD *a1)
{
  unsigned int v1; // ebx
  int WidenedBounds; // eax

  v1 = -2003292412;
  if ( *a1 )
  {
    WidenedBounds = CShape::GetWidenedBounds();
    v1 = WidenedBounds;
    if ( WidenedBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WidenedBounds, 0x121u);
  }
  return v1;
}

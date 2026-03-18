/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x18020FC8C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180019364 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18013F478 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4A4C (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ @ 0x1801A4DEC (-GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A4E1C (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  __int64 v3; // r8
  int TightBounds; // eax
  CRectanglesShape *v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  *((_WORD *)this + 40) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 13);
  v5 = 0LL;
  v6 = 0;
  if ( v2 )
    CGeometry::GetShapeData(v2, 0LL, &v5);
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v5) )
  {
    if ( *((_QWORD *)this + 12) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
    {
      CSpriteVectorShape::GetStrokeThickness(this);
      *((_BYTE *)this + 81) = (int)CShapePtr::GetWidenedBounds(&v5, (char *)this + 64, v3, *((_QWORD *)this + 14)) >= 0;
    }
    if ( *((_BYTE *)this + 81) )
    {
      TightBounds = CShapePtr::GetTightBounds(&v5);
      goto LABEL_11;
    }
    if ( *((_QWORD *)this + 11) )
    {
      TightBounds = CShapePtr::GetTightBounds(&v5);
      *((_OWORD *)this + 8) = *((_OWORD *)this + 4);
LABEL_11:
      *((_BYTE *)this + 81) = TightBounds >= 0;
    }
  }
  CShapePtr::Release(&v5);
}

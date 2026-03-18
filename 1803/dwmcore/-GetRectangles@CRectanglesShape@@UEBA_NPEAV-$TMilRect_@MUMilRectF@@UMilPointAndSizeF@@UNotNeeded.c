/*
 * XREFs of ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180064190
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 && a3 == *(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(a1 + 40) )
    {
      do
      {
        v5 = v3++;
        *(_OWORD *)(a2 + 16 * v5) = *(_OWORD *)(*(_QWORD *)(a1 + 16) + 16 * v5);
      }
      while ( v3 < *(_DWORD *)(a1 + 40) );
    }
    LOBYTE(v3) = 1;
  }
  return v3;
}

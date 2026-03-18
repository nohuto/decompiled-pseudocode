/*
 * XREFs of ?GetRectangles@CRectanglesShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180094010
 * Callers:
 *     ?AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180040260 (-AppendHWPrimitive@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVerte.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x180049D78 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 && a3 == *(_DWORD *)(a1 + 32) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      do
      {
        v5 = v3++;
        *(_OWORD *)(a2 + 16 * v5) = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 16 * v5);
      }
      while ( v3 < *(_DWORD *)(a1 + 32) );
    }
    LOBYTE(v3) = 1;
  }
  return v3;
}

/*
 * XREFs of ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x180035400
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

char __fastcall CRectanglesShape::IsEmpty(CRectanglesShape *this)
{
  int v1; // r8d
  char v2; // dl
  float *v3; // rax

  v1 = *((_DWORD *)this + 8);
  v2 = 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    v3 = (float *)*((_QWORD *)this + 1);
    if ( v3[2] > *v3 && v3[3] > v3[1] )
      return 0;
  }
  return v2;
}

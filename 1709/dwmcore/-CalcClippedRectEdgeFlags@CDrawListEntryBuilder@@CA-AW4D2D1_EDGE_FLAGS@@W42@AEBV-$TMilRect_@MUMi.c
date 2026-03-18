/*
 * XREFs of ?CalcClippedRectEdgeFlags@CDrawListEntryBuilder@@CA?AW4D2D1_EDGE_FLAGS@@W42@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x1800BDB80
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180061E80 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListEntryBuilder::CalcClippedRectEdgeFlags(unsigned int a1, float *a2, float *a3, char a4)
{
  unsigned int v5; // r10d
  float v7; // xmm0_4
  bool v8; // cf
  bool v9; // zf
  float v10; // xmm0_4
  unsigned int v11; // ecx
  float v12; // xmm0_4
  unsigned int v13; // edx

  v5 = a1;
  if ( a4 )
  {
    if ( a1 != 50529027 )
    {
      if ( *a3 > *a2 )
        v5 = a1 | 0x3000000;
      if ( a3[1] > a2[1] )
        v5 |= 3u;
      if ( a2[2] > a3[2] )
        v5 |= 0x300u;
      if ( a2[3] > a3[3] )
        v5 |= 0x30000u;
    }
  }
  else if ( a1 )
  {
    v7 = *a2 - *a3;
    v8 = v7 < 0.0000011920929;
    v9 = v7 == 0.0000011920929;
    v10 = a2[1] - a3[1];
    v11 = a1 & 0xFCFFFFFF;
    if ( !v8 && !v9 )
      v11 = v5;
    v8 = v10 < 0.0000011920929;
    v9 = v10 == 0.0000011920929;
    v12 = a3[2] - a2[2];
    v13 = v11 & 0xFFFFFFFC;
    if ( !v8 && !v9 )
      v13 = v11;
    v5 = v13 & 0xFFFFFCFF;
    if ( v12 > 0.0000011920929 )
      v5 = v13;
    if ( (float)(a3[3] - a2[3]) <= 0.0000011920929 )
      v5 &= 0xFFFCFFFF;
  }
  return v5;
}

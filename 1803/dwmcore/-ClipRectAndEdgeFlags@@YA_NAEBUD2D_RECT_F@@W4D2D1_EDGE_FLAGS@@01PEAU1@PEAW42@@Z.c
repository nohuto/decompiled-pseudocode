/*
 * XREFs of ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180005F2C
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180005A60 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800AE120 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipRectAndEdgeFlags(float *a1, int a2, float *a3, int a4, _OWORD *a5, int *a6)
{
  float v7; // xmm0_4
  bool v9; // al
  float v10; // xmm0_4
  int v11; // eax
  bool v12; // dl
  float v13; // xmm1_4
  int v14; // ecx
  float v15; // xmm0_4
  bool v16; // dl
  int v17; // eax
  float v18; // xmm0_4
  int v19; // edx
  float v21[6]; // [rsp+0h] [rbp-18h]

  v7 = *a3 - *a1;
  v9 = v7 > 0.0000011920929;
  if ( v7 > 0.0000011920929 )
    v21[0] = *a3;
  else
    v21[0] = *a1;
  v10 = a3[1] - a1[1];
  v11 = v9 ? 0x3000000 : 0;
  v12 = v10 > 0.0000011920929;
  if ( v10 > 0.0000011920929 )
    v21[1] = a3[1];
  else
    v21[1] = a1[1];
  v13 = a1[2];
  v14 = v11 | 3;
  v15 = a1[2] - a3[2];
  if ( !v12 )
    v14 = v11;
  v16 = v15 > 0.0000011920929;
  if ( v15 > 0.0000011920929 )
    v21[2] = a3[2];
  else
    v21[2] = v13;
  v17 = v14 | 0x300;
  v18 = a1[3] - a3[3];
  if ( !v16 )
    v17 = v14;
  if ( v18 > 0.0000011920929 )
    v21[3] = a3[3];
  else
    v21[3] = a1[3];
  v19 = v17 | 0x30000;
  if ( v18 <= 0.0000011920929 )
    v19 = v17;
  *a5 = *(_OWORD *)v21;
  *a6 = a4 & v19 | a2 & ~v19;
  return v19 != 0;
}

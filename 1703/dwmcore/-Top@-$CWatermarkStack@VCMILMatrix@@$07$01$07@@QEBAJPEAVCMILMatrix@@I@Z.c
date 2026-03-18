/*
 * XREFs of ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18004ECE0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18004EC58 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801880B0 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Top(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  if ( *(_DWORD *)a1 )
  {
    v4 = 68LL * (unsigned int)(*(_DWORD *)a1 - 1);
    v5 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)a2 = *(_OWORD *)(v4 + v5);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + v5 + 16);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v4 + v5 + 32);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v4 + v5 + 48);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(v4 + v5 + 64);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v2;
}

/*
 * XREFs of ?SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z @ 0x18006FDE4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     <none>
 */

void __fastcall CBrushRenderingGraph::SetSurfaceClamp(
        CBrushRenderingGraph *this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3,
        const struct D2D_RECT_F *a4)
{
  float v4; // xmm3_4
  float *v5; // rax
  float v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm0_4

  v4 = 1.0 / a3->width;
  v5 = (float *)(*((_QWORD *)this + 2) + ((unsigned __int64)a2 << 6));
  v6 = 1.0 / a3->height;
  v7 = (float)((float)(a4->top + a4->bottom) * 0.5) * v6;
  v5[5] = (float)((float)(a4->right + a4->left) * 0.5) * v4;
  v5[6] = v7;
  v8 = (float)((float)(a4->bottom - a4->top) * 0.5) * v6;
  v5[7] = (float)((float)(a4->right - a4->left) * 0.5) * v4;
  v5[8] = v8;
}

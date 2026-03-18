/*
 * XREFs of ?SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z @ 0x18001A0A8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     <none>
 */

void __fastcall CBrushRenderingGraph::SetSurfaceClamp(
        CBrushRenderingGraph *this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3,
        const struct D2D_RECT_F *a4)
{
  __m128 right_low; // xmm0
  __m128 top_low; // xmm1
  float v6; // xmm4_4
  unsigned __int64 v7; // rax
  float v8; // xmm5_4
  __m128 v9; // xmm0
  __m128 bottom_low; // xmm1

  right_low = (__m128)LODWORD(a4->right);
  top_low = (__m128)LODWORD(a4->top);
  v6 = 1.0 / a3->width;
  v7 = *((_QWORD *)this + 2) + ((unsigned __int64)a2 << 6);
  v8 = 1.0 / a3->height;
  right_low.m128_f32[0] = (float)((float)(right_low.m128_f32[0] + a4->left) * 0.5) * v6;
  top_low.m128_f32[0] = (float)((float)(top_low.m128_f32[0] + a4->bottom) * 0.5) * v8;
  *(_QWORD *)(v7 + 20) = _mm_unpacklo_ps(right_low, top_low).m128_u64[0];
  v9 = (__m128)LODWORD(a4->right);
  bottom_low = (__m128)LODWORD(a4->bottom);
  v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] - a4->left) * 0.5) * v6;
  bottom_low.m128_f32[0] = (float)((float)(bottom_low.m128_f32[0] - a4->top) * 0.5) * v8;
  *(_QWORD *)(v7 + 28) = _mm_unpacklo_ps(v9, bottom_low).m128_u64[0];
}

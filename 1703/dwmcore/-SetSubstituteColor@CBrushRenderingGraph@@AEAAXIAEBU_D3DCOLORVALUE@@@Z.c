/*
 * XREFs of ?SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z @ 0x180180F98
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     <none>
 */

void __fastcall CBrushRenderingGraph::SetSubstituteColor(
        CBrushRenderingGraph *this,
        unsigned int a2,
        const struct _D3DCOLORVALUE *a3)
{
  float v3[10]; // [rsp+0h] [rbp-28h]

  v3[0] = a3->a * a3->r;
  v3[1] = a3->a * a3->g;
  v3[3] = a3->a;
  v3[2] = v3[3] * a3->b;
  *(_OWORD *)(((unsigned __int64)a2 << 6) + *((_QWORD *)this + 2) + 20) = *(_OWORD *)v3;
}

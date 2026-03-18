/*
 * XREFs of ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEAVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800159B4
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180015A28 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18001719C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x180015B34 (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 *     ?InputBrushRequiresClamping@CBrushRenderingGraph@@QEBA_NI@Z @ 0x18001A280 (-InputBrushRequiresClamping@CBrushRenderingGraph@@QEBA_NI@Z.c)
 */

void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  __int64 v7; // r10

  v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * a3);
  *(_QWORD *)a4 = v7;
  if ( *((_BYTE *)a4 + 4) || CBrushRenderingGraph::InputBrushRequiresClamping(a2, v7) )
  {
    *((_BYTE *)a4 + 10) = CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
                            this,
                            a3,
                            (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 8),
                            (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 9));
  }
  else
  {
    *(_WORD *)((char *)a4 + 9) = 0;
    *((_BYTE *)a4 + 8) = 0;
  }
}

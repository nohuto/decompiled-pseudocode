/*
 * XREFs of ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x180036BE4
 * Callers:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x1800367D0 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$Dy.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18007165C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?IsDisplacementRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAMPEAW4Enum@ChannelSelector@@1PEAI@Z @ 0x180036C58 (-IsDisplacementRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAMPEAW4Enum@ChannelSelecto.c)
 *     ?IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z @ 0x180036D28 (-IsUVClampingRequiredForInput@CRenderingTechniqueFragment@@AEBA_NIPEAW4Enum@ExtendMode@@0@Z.c)
 */

void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  *(_QWORD *)a4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * a3);
  *((_BYTE *)a4 + 10) = CRenderingTechniqueFragment::IsUVClampingRequiredForInput(
                          this,
                          a3,
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 8),
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 9));
  *((_BYTE *)a4 + 24) = CRenderingTechniqueFragment::IsDisplacementRequiredForInput(
                          this,
                          a3,
                          (float *)a4 + 3,
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 16),
                          (struct CRenderingTechniqueFragment::SurfaceDescription *)((char *)a4 + 17),
                          (unsigned int *)a4 + 5);
}

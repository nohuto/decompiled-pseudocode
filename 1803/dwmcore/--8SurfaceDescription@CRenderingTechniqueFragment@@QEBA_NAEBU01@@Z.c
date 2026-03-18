/*
 * XREFs of ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800377D4
 * Callers:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@IAEBV?$DynArrayIANoCtor@PEBVCRenderingTechniqueFragment@@$0BA@$0A@@@AEBV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$03$0A@@@PEBVCBrushRenderingGraph@@@Z @ 0x1800367D0 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@IAEBV-$Dy.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$DynArrayIANoCtor@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$0A@@@@Z @ 0x180036A9C (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18007165C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderingTechniqueFragment::SurfaceDescription::operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_BYTE *)(a1 + 4) == *(_BYTE *)(a2 + 4)
      && *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8)
      && *(_BYTE *)(a1 + 9) == *(_BYTE *)(a2 + 9)
      && *(_BYTE *)(a1 + 24) == *(_BYTE *)(a2 + 24)
      && *(_BYTE *)(a1 + 16) == *(_BYTE *)(a2 + 16)
      && *(_BYTE *)(a1 + 17) == *(_BYTE *)(a2 + 17)
      && *(_DWORD *)(a1 + 20) == *(_DWORD *)(a2 + 20)
      && *(float *)(a1 + 12) == *(float *)(a2 + 12);
}

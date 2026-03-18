/*
 * XREFs of ?UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z @ 0x18006DF10
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderingTechnique::UpdateSurfaceProperties(CRenderingTechnique *this, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 57);
  if ( _bittest(&v2, a2) )
  {
    v3 = 32LL * a2;
    v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v5 = (unsigned __int64)*(unsigned int *)((char *)this + v3 + 100) << 6;
    v6 = *(_QWORD *)((char *)this + v3 + 112) - *(_QWORD *)(v5 + v4 + 20);
    if ( !v6 )
      v6 = *(_QWORD *)((char *)this + v3 + 120) - *(_QWORD *)(v5 + v4 + 28);
    if ( v6 )
    {
      *(_OWORD *)((char *)this + v3 + 112) = *(_OWORD *)(v5 + v4 + 20);
      *((_BYTE *)this + 236) = 1;
    }
  }
}

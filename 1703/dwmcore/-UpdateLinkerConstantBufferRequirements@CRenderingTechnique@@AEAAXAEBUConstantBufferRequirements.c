/*
 * XREFs of ?UpdateLinkerConstantBufferRequirements@CRenderingTechnique@@AEAAXAEBUConstantBufferRequirements@ShaderLinkingConfig@@@Z @ 0x1801BB3C4
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800174C0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180180A68 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 */

void __fastcall CRenderingTechnique::UpdateLinkerConstantBufferRequirements(
        CRenderingTechnique *this,
        const struct ShaderLinkingConfig::ConstantBufferRequirements *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  if ( *((_DWORD *)a2 + 1) != *((_DWORD *)this + 62) )
    CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources((CRenderingTechnique *)((char *)this + 24));
  v4 = 0LL;
  *(_QWORD *)((char *)this + 244) = *(_QWORD *)a2;
  for ( *((_BYTE *)this + 252) = 1; (unsigned int)v4 < *((_DWORD *)this + 27); v4 = (unsigned int)(v4 + 1) )
  {
    v5 = *((_DWORD *)this + 61);
    if ( _bittest(&v5, v4) )
    {
      v6 = 32 * (v4 + 4);
      v7 = (unsigned __int64)*((unsigned int *)this + 8 * (unsigned int)v4 + 29) << 6;
      v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      v9 = *(_QWORD *)((char *)this + v6) - *(_QWORD *)(v7 + v8 + 20);
      if ( !v9 )
        v9 = *(_QWORD *)((char *)this + v6 + 8) - *(_QWORD *)(v7 + v8 + 28);
      if ( v9 )
      {
        *(_OWORD *)((char *)this + v6) = *(_OWORD *)(v7 + v8 + 20);
        *((_BYTE *)this + 252) = 1;
      }
    }
  }
}

/*
 * XREFs of ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180017118
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 * Callees:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180017FC4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetConstantBuffer(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v5; // rcx
  int ResourceNoRef; // eax
  unsigned int v7; // ebx
  int updated; // eax

  v5 = 0LL;
  if ( *((_DWORD *)this + 26) || *((_DWORD *)this + 62) )
  {
    ResourceNoRef = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                      (CRenderingTechnique *)((char *)this + 24),
                      a2);
    v7 = ResourceNoRef;
    if ( ResourceNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceNoRef, 0x1B0u);
      return v7;
    }
    updated = CRenderingTechnique::UpdateConstantBuffers(this);
    v7 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1B2u);
      return v7;
    }
    v5 = (struct ID3D11Buffer *)MEMORY[0x80];
  }
  *a3 = v5;
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v5->lpVtbl->AddRef)(v5);
  return 0;
}

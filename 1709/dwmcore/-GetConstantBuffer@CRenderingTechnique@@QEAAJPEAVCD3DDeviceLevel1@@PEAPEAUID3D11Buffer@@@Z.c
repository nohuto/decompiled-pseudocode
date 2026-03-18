/*
 * XREFs of ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18006D054
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x18006D0E0 (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18006E380 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetConstantBuffer(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v5; // rcx
  unsigned int v6; // ebx
  int ResourceNoRef; // eax
  int updated; // eax

  v5 = 0LL;
  if ( *((_DWORD *)this + 22) || *((_DWORD *)this + 58) )
  {
    ResourceNoRef = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                      (CRenderingTechnique *)((char *)this + 24),
                      a2);
    v6 = ResourceNoRef;
    if ( ResourceNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ResourceNoRef, 0x1B0u);
      return v6;
    }
    updated = CRenderingTechnique::UpdateConstantBuffers(this);
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1B2u);
      return v6;
    }
    v5 = (struct ID3D11Buffer *)MEMORY[0x78];
  }
  *a3 = v5;
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Buffer *, struct CD3DDeviceLevel1 *))v5->lpVtbl->AddRef)(v5, a2);
  return 0;
}

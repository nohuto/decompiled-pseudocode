/*
 * XREFs of ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B9540
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXXZ @ 0x1800BB16C (-clear@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$al.c)
 */

void __fastcall CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder(CShaderLinkingGraphBuilder *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::clear((char *)this + 16);
  WPF::ProcessHeapImpl::Free(*((void **)this + 2));
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this);
}

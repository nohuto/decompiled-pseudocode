/*
 * XREFs of ?clear@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXXZ @ 0x1800BB16C
 * Callers:
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B92F4 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B9540 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v2 + 3);
      WPF::ProcessHeapImpl::Free(v2);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}

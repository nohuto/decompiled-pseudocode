/*
 * XREFs of ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800D4DE4
 * Callers:
 *     AppendLights @ 0x18001D404 (AppendLights.c)
 *     UseFragmentsModuleNoRef @ 0x1800D3C44 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800D3DAC (LoadShaderBody.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CShaderLinkingGraphBuilder::UseLibrary(
        CShaderLinkingGraphBuilder *this,
        struct ID3D11ModuleInstance *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID3D11ModuleInstance *))(**(_QWORD **)this + 32LL))(
           *(_QWORD *)this,
           a2);
}

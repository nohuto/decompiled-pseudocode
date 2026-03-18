/*
 * XREFs of ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x18000483C
 * Callers:
 *     AppendLights @ 0x1800016C8 (AppendLights.c)
 *     UseFragmentsModuleNoRef @ 0x180002254 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800023DC (LoadShaderBody.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COL.c)
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

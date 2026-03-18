/*
 * XREFs of ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800B8F84
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x1800B8630 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800B8738 (LoadShaderBody.c)
 *     AppendLights @ 0x1801BAAA4 (AppendLights.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
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

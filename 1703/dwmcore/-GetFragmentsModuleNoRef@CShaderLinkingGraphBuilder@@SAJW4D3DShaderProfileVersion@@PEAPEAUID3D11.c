/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800BB6E8
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x1800B8630 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800B8738 (LoadShaderBody.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(char a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v4 = qword_180241C88;
    if ( qword_180241C88 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_18020D390, 0xF354uLL, &qword_180241C88);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180241C88;
      goto LABEL_4;
    }
    v7 = 286;
    goto LABEL_13;
  }
  if ( a1 != 1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x132u);
    return v2;
  }
  v4 = ppModule;
  if ( !ppModule )
  {
    v6 = D3DLoadModule(&unk_1801D6100, 0x10A04uLL, &ppModule);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = ppModule;
      goto LABEL_4;
    }
    v7 = 298;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v7);
    return v2;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}

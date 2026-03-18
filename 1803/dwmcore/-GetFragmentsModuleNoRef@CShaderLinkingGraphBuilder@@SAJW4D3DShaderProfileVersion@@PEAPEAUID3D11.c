/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800D5938
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x1800D3C44 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800D3DAC (LoadShaderBody.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    v4 = qword_1802D9D40;
    if ( qword_1802D9D40 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_180281EA0, 0x20289uLL, &qword_1802D9D40);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1802D9D40;
      goto LABEL_4;
    }
    v7 = 292;
    goto LABEL_13;
  }
  if ( a1 != 1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x138u);
    return v2;
  }
  v4 = qword_1802D69F0;
  if ( !qword_1802D69F0 )
  {
    v6 = D3DLoadModule(&unk_180252AD0, 0x217D5uLL, &qword_1802D69F0);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1802D69F0;
      goto LABEL_4;
    }
    v7 = 304;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v7);
    return v2;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}

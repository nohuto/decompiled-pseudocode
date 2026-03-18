/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180002394
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x180002254 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800023DC (LoadShaderBody.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    v4 = qword_180272FA8;
    if ( qword_180272FA8 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_180235C40, 0x161A1uLL, &qword_180272FA8);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180272FA8;
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
  v4 = qword_180272820;
  if ( !qword_180272820 )
  {
    v6 = D3DLoadModule(&unk_18021E4D0, 0x17761uLL, &qword_180272820);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180272820;
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

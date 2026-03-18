/*
 * XREFs of AppendColorConversion @ 0x1800D570C
 * Callers:
 *     BuildSampler @ 0x1800D3F98 (BuildSampler.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall AppendColorConversion(_QWORD *a1, __int64 a2, __int16 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __int16 v6; // r10
  int appended; // eax
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  __int16 v13; // [rsp+60h] [rbp+20h] BYREF

  v13 = a3;
  v5 = 0;
  v6 = a3;
  if ( *(_DWORD *)(a4 + 8) > 1u )
  {
    *(_QWORD *)&v12 = 1LL;
    *((_QWORD *)&v12 + 1) = &v13;
    appended = CShaderLinkingGraphBuilder::AppendNode(a1, a3, (__int64)&word_18025290E, a2, *(_QWORD *)a4, &v12);
    v5 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x2B8u);
      return v5;
    }
    v6 = v13;
  }
  if ( a5 )
  {
    *(_QWORD *)&v12 = 1LL;
    *((_QWORD *)&v12 + 1) = &v13;
    v11 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v6,
            (__int64)&word_18025290E,
            a2,
            (__int64)"BoostSDRLuminance",
            &v12);
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2BDu);
  }
  return v5;
}

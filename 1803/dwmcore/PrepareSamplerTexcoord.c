/*
 * XREFs of PrepareSamplerTexcoord @ 0x1800D5760
 * Callers:
 *     BuildSampler @ 0x1800D3F98 (BuildSampler.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x1800D5168 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 *     ApplyTexcoordExtendMode @ 0x1800D5868 (ApplyTexcoordExtendMode.c)
 *     ApplyTexcoordDisplacement @ 0x1802177E4 (ApplyTexcoordDisplacement.c)
 */

__int64 __fastcall PrepareSamplerTexcoord(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int16 v6; // dx
  bool v8; // zf
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // ebx
  char v13; // cl
  int v14; // eax
  int appended; // eax
  int v17; // eax
  __int128 v18; // xmm1
  int v19; // eax
  int v20; // eax
  int v21; // r8d
  int v22; // eax
  int v23; // eax
  __int128 v24[2]; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int16 v26; // [rsp+90h] [rbp+40h] BYREF

  v5 = a2 + 32LL * (unsigned int)a3;
  v6 = a3 | 0x100;
  v8 = *(_BYTE *)(a2 + 158) == 0;
  v26 = a3 | 0x100;
  if ( v8 )
  {
    if ( *(_BYTE *)(a2 + 156) )
    {
      *(_QWORD *)&v24[0] = 1LL;
      *((_QWORD *)&v24[0] + 1) = &v26;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v6,
                   (__int64)&word_18025290E,
                   a4,
                   (__int64)"FlattenTexcoords",
                   v24);
      v12 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x272u);
        return v12;
      }
    }
    else
    {
      v10 = CShaderLinkingGraphBuilder::SwizzleNode((__int64)a1, v6, a3);
      v12 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x277u);
        return v12;
      }
    }
  }
  else
  {
    *(_QWORD *)&v24[0] = 2LL;
    *((_QWORD *)&v24[0] + 1) = &v25;
    v25 = 16843008;
    v17 = CShaderLinkingGraphBuilder::AppendNode(a1, v6, (__int64)&word_18025290E, a4, (__int64)"GetCubeTexcoord", v24);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x26Bu);
      return v12;
    }
  }
  if ( *(_BYTE *)(v5 + 29)
    && (v18 = *(_OWORD *)(v5 + 16),
        v24[0] = *(_OWORD *)v5,
        v24[1] = v18,
        v19 = ApplyTexcoordDisplacement(a1, v26, v24, a4),
        v12 = v19,
        v19 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x28Bu);
  }
  else
  {
    LOBYTE(v11) = *(_BYTE *)(v5 + 16);
    if ( (_BYTE)v11 == *(_BYTE *)(v5 + 17) )
    {
      v13 = 0;
      if ( !*(_BYTE *)(a2 + 158) )
        v13 = *(_BYTE *)(v5 + 16);
      LOBYTE(v11) = v13;
      v14 = ApplyTexcoordExtendMode((_DWORD)a1, v26, v11, a4, 0LL);
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x29Du);
    }
    else
    {
      v20 = ApplyTexcoordExtendMode((_DWORD)a1, v26, v11, a4, (__int64)&v25);
      v12 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2A3u);
      }
      else
      {
        LOBYTE(v21) = *(_BYTE *)(v5 + 17);
        v22 = ApplyTexcoordExtendMode((_DWORD)a1, v26, v21, a4, (__int64)&v25 + 2);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x2A4u);
        }
        else
        {
          *((_QWORD *)&v24[0] + 1) = &v25;
          *(_QWORD *)&v24[0] = 2LL;
          v23 = CShaderLinkingGraphBuilder::AppendNode(
                  a1,
                  v26,
                  (__int64)&word_18025290E,
                  a4,
                  (__int64)"BorderEffectCombine",
                  v24);
          v12 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x2A6u);
        }
      }
    }
  }
  return v12;
}

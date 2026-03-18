/*
 * XREFs of BuildSampler @ 0x180002630
 * Callers:
 *     LoadShaderBody @ 0x1800023DC (LoadShaderBody.c)
 * Callees:
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800046F0 (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     AppendColorConversion @ 0x1800056A8 (AppendColorConversion.c)
 *     PrepareSamplerTexcoord @ 0x1800056FC (PrepareSamplerTexcoord.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801D8948 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 */

__int64 __fastcall BuildSampler(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // r14
  int v12; // eax
  unsigned __int8 v13; // di
  int v14; // eax
  int v15; // eax
  int v17; // eax
  char v18; // al
  int appended; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int16 v22; // [rsp+30h] [rbp-41h] BYREF
  __int16 v23; // [rsp+34h] [rbp-3Dh] BYREF
  unsigned __int16 v24; // [rsp+38h] [rbp-39h]
  __int128 v25; // [rsp+40h] [rbp-31h] BYREF
  __int128 v26; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v28[18]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int8 v29; // [rsp+7Ah] [rbp+9h]
  char v30; // [rsp+7Bh] [rbp+Ah]

  v27 = a4;
  v6 = a3;
  v23 = a3 | 0x100;
  v8 = a3 | 0x200;
  v22 = a3 | 0x200;
  v9 = a3 | 0x300;
  v24 = a3 | 0x300;
  v10 = 0;
  if ( !(unsigned __int8)CShaderLinkingGraphBuilder::HasNode(a1, (unsigned __int16)a3 | 0x200u) )
  {
    if ( *(_BYTE *)(v27 + 1) && !(unsigned __int8)CShaderLinkingGraphBuilder::HasNode(a1, v9) )
    {
      v18 = *(_BYTE *)(v27 + 4);
      qmemcpy(&v26, "GetSamplerData", 14);
      HIWORD(v26) = (unsigned __int8)(v18 + 48);
      v25 = 0LL;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v9,
                   (unsigned int)&word_1801EFD5E,
                   a5,
                   (__int64)&v26,
                   (__int64)&v25);
      v10 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x23Du);
        return v10;
      }
      v8 = v22;
    }
    v11 = 3 * v6;
    if ( *(_BYTE *)(a2 + 24 * v6 + 20) )
    {
      v20 = CShaderLinkingGraphBuilder::CopyNode(a1, v8, v24);
      v10 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x247u);
    }
    else
    {
      v12 = PrepareSamplerTexcoord(a1, a2, (unsigned int)v6, a5);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x24Eu);
      }
      else
      {
        v13 = v6 + 48;
        if ( *(_BYTE *)(a2 + 126) )
        {
          qmemcpy(v28, "SampleCubeTexture", 17);
          v28[17] = v13;
          v29 = 0;
        }
        else if ( *(_BYTE *)(a2 + 8 * v11 + 19) )
        {
          qmemcpy(v28, "MultiSampleTexture", sizeof(v28));
          v29 = v13;
          v30 = 0;
        }
        else
        {
          qmemcpy(v28, "SampleTexture", 13);
          *(_WORD *)&v28[13] = v13;
        }
        *(_QWORD *)&v26 = &v23;
        *((_QWORD *)&v26 + 1) = 1LL;
        v25 = v26;
        v14 = CShaderLinkingGraphBuilder::AppendNode(
                a1,
                v22,
                (unsigned int)&word_1801EFD5E,
                a5,
                (__int64)v28,
                (__int64)&v25);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x262u);
        }
        else if ( *(_BYTE *)(a2 + 8 * v11 + 21)
               && (*(_QWORD *)&v26 = &v22,
                   *((_QWORD *)&v26 + 1) = 1LL,
                   v25 = v26,
                   v17 = CShaderLinkingGraphBuilder::AppendNode(
                           a1,
                           v22,
                           (unsigned int)&word_1801EFD5E,
                           a5,
                           (__int64)"IgnoreAlpha",
                           (__int64)&v25),
                   v10 = v17,
                   v17 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x267u);
        }
        else
        {
          v25 = *(_OWORD *)(a2 + 8 * v11);
          v15 = AppendColorConversion(a1, a5, v22, (unsigned int)&v25, 0);
          v10 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x26Au);
          }
          else if ( *(_BYTE *)(v27 + 1) )
          {
            if ( !*(_BYTE *)(a2 + 8 * v11 + 16) )
            {
              WORD1(v27) = v23;
              WORD2(v27) = v24;
              *(_QWORD *)&v26 = &v27;
              *((_QWORD *)&v26 + 1) = 3LL;
              LOWORD(v27) = v22;
              v25 = v26;
              v21 = CShaderLinkingGraphBuilder::AppendNode(
                      a1,
                      v22,
                      (unsigned int)&word_1801EFD5E,
                      a5,
                      (__int64)"ClampTransparent",
                      (__int64)&v25);
              v10 = v21;
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x274u);
            }
          }
        }
      }
    }
  }
  return v10;
}

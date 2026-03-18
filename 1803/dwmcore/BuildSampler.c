/*
 * XREFs of BuildSampler @ 0x1800D3F98
 * Callers:
 *     LoadShaderBody @ 0x1800D3DAC (LoadShaderBody.c)
 * Callees:
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18001D5E4 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800D4C50 (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     AppendColorConversion @ 0x1800D570C (AppendColorConversion.c)
 *     PrepareSamplerTexcoord @ 0x1800D5760 (PrepareSamplerTexcoord.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall BuildSampler(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int16 v8; // r12
  unsigned __int16 v9; // di
  unsigned int v10; // ebx
  __int128 *v11; // rdi
  int v12; // eax
  unsigned __int8 v13; // si
  int v14; // eax
  int v15; // eax
  int v17; // eax
  char v18; // al
  int appended; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _WORD v23[2]; // [rsp+30h] [rbp-41h] BYREF
  __int16 v24; // [rsp+34h] [rbp-3Dh] BYREF
  __int16 v25; // [rsp+38h] [rbp-39h]
  __int128 v26; // [rsp+40h] [rbp-31h] BYREF
  __int128 v27; // [rsp+50h] [rbp-21h] BYREF
  __int64 v28; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v29[18]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int8 v30; // [rsp+7Ah] [rbp+9h]
  char v31; // [rsp+7Bh] [rbp+Ah]

  v28 = a4;
  v6 = a3;
  v24 = a3 | 0x100;
  v8 = a3 | 0x200;
  v23[0] = a3 | 0x200;
  v9 = a3 | 0x300;
  v25 = a3 | 0x300;
  v10 = 0;
  if ( !(unsigned __int8)CShaderLinkingGraphBuilder::HasNode(a1, (unsigned __int16)a3 | 0x200u) )
  {
    if ( *(_BYTE *)(v28 + 1) && !(unsigned __int8)CShaderLinkingGraphBuilder::HasNode(a1, v9) )
    {
      v18 = *(_BYTE *)(v28 + 4);
      qmemcpy(&v27, "GetSamplerData", 14);
      HIWORD(v27) = (unsigned __int8)(v18 + 48);
      v26 = 0LL;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (_DWORD)a1,
                   v9,
                   (unsigned int)&word_18025290E,
                   a5,
                   (__int64)&v27,
                   (__int64)&v26);
      v10 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x2E0u);
        return v10;
      }
      v8 = v23[0];
    }
    v11 = (__int128 *)(a2 + 32 * v6);
    if ( *((_BYTE *)v11 + 26) )
    {
      v20 = CShaderLinkingGraphBuilder::CopyNode(a1, v8, v25);
      v10 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x2EAu);
    }
    else
    {
      v12 = PrepareSamplerTexcoord(a1, a2, (unsigned int)v6, a5);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2F1u);
      }
      else
      {
        v13 = v6 + 48;
        if ( *(_BYTE *)(a2 + 158) )
        {
          qmemcpy(v29, "SampleCubeTexture", 17);
          v29[17] = v13;
          v30 = 0;
        }
        else if ( *((_BYTE *)v11 + 25) )
        {
          qmemcpy(v29, "MultiSampleTexture", sizeof(v29));
          v30 = v13;
          v31 = 0;
        }
        else
        {
          qmemcpy(v29, "SampleTexture", 13);
          *(_WORD *)&v29[13] = v13;
        }
        *((_QWORD *)&v27 + 1) = &v24;
        *(_QWORD *)&v27 = 1LL;
        v26 = v27;
        v14 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a1,
                v23[0],
                (unsigned int)&word_18025290E,
                a5,
                (__int64)v29,
                (__int64)&v26);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x305u);
        }
        else if ( *((_BYTE *)v11 + 27)
               && (*((_QWORD *)&v27 + 1) = v23,
                   *(_QWORD *)&v27 = 1LL,
                   v26 = v27,
                   v17 = CShaderLinkingGraphBuilder::AppendNode(
                           (_DWORD)a1,
                           v23[0],
                           (unsigned int)&word_18025290E,
                           a5,
                           (__int64)"IgnoreAlpha",
                           (__int64)&v26),
                   v10 = v17,
                   v17 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x30Au);
        }
        else if ( *((_BYTE *)v11 + 28)
               && (*((_QWORD *)&v27 + 1) = v23,
                   *(_QWORD *)&v27 = 1LL,
                   v26 = v27,
                   v21 = CShaderLinkingGraphBuilder::AppendNode(
                           (_DWORD)a1,
                           v23[0],
                           (unsigned int)&word_18025290E,
                           a5,
                           (__int64)"UnBoostSDRLuminance",
                           (__int64)&v26),
                   v10 = v21,
                   v21 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x310u);
        }
        else
        {
          v26 = *v11;
          v15 = AppendColorConversion((_DWORD)a1, a5, v23[0], (unsigned int)&v26, 0);
          v10 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x313u);
          }
          else if ( *(_BYTE *)(v28 + 1) )
          {
            if ( !*((_BYTE *)v11 + 16) )
            {
              WORD1(v28) = v24;
              WORD2(v28) = v25;
              *((_QWORD *)&v27 + 1) = &v28;
              *(_QWORD *)&v27 = 3LL;
              LOWORD(v28) = v23[0];
              v26 = v27;
              v22 = CShaderLinkingGraphBuilder::AppendNode(
                      (_DWORD)a1,
                      v23[0],
                      (unsigned int)&word_18025290E,
                      a5,
                      (__int64)"ClampTransparent",
                      (__int64)&v26);
              v10 = v22;
              if ( v22 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x31Du);
            }
          }
        }
      }
    }
  }
  return v10;
}

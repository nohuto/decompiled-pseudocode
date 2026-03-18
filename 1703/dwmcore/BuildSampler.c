/*
 * XREFs of BuildSampler @ 0x1800B8890
 * Callers:
 *     LoadShaderBody @ 0x1800B8738 (LoadShaderBody.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800B8E48 (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     PrepareSamplerTexcoord @ 0x1800BB500 (PrepareSamplerTexcoord.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801BFBD8 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 */

__int64 __fastcall BuildSampler(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // si
  unsigned int v10; // ebx
  __int64 v11; // rsi
  int v12; // eax
  unsigned __int8 v13; // di
  int v14; // eax
  int v15; // eax
  int v17; // eax
  char v18; // al
  int appended; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _WORD v23[2]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v24; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int16 v25; // [rsp+38h] [rbp-48h]
  __int16 *v26; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[18]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int8 v30; // [rsp+6Ah] [rbp-16h]
  char v31; // [rsp+6Bh] [rbp-15h]

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
      v27 = 0;
      v26 = 0LL;
      v18 = *(_BYTE *)(v28 + 4);
      qmemcpy(v29, "GetSamplerData", 14);
      *(_WORD *)&v29[14] = (unsigned __int8)(v18 + 48);
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v9,
                   (unsigned int)&word_1801EA0DE,
                   a5,
                   (__int64)v29,
                   (__int64)&v26);
      v10 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x1E7u);
        return v10;
      }
      v8 = v23[0];
    }
    v11 = 3 * v6;
    if ( *(_BYTE *)(a2 + 12 * v6 + 8) )
    {
      v20 = CShaderLinkingGraphBuilder::CopyNode(a1, v8, v25);
      v10 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1F1u);
    }
    else
    {
      v12 = PrepareSamplerTexcoord(a1, a2, (unsigned int)v6, a5);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1F8u);
      }
      else
      {
        v13 = v6 + 48;
        if ( *(_BYTE *)(a2 + 4 * v11 + 7) )
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
        v26 = &v24;
        v27 = 1;
        v14 = CShaderLinkingGraphBuilder::AppendNode(
                a1,
                v23[0],
                (unsigned int)&word_1801EA0DE,
                a5,
                (__int64)v29,
                (__int64)&v26);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x208u);
        }
        else if ( *(_BYTE *)(a2 + 4 * v11 + 9)
               && (v26 = v23,
                   v27 = 1,
                   v17 = CShaderLinkingGraphBuilder::AppendNode(
                           a1,
                           v23[0],
                           (unsigned int)&word_1801EA0DE,
                           a5,
                           (__int64)"IgnoreAlpha",
                           (__int64)&v26),
                   v10 = v17,
                   v17 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x20Du);
        }
        else
        {
          v15 = *(_DWORD *)(a2 + 4 * v11);
          if ( v15
            && (v26 = v23,
                v27 = 1,
                v21 = CShaderLinkingGraphBuilder::AppendNode(
                        a1,
                        v23[0],
                        (unsigned int)&word_1801EA0DE,
                        a5,
                        (__int64)off_1801D12D0[v15 - 1],
                        (__int64)&v26),
                v10 = v21,
                v21 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x213u);
          }
          else if ( *(_BYTE *)(v28 + 1) )
          {
            if ( !*(_BYTE *)(a2 + 4 * v11 + 4) )
            {
              WORD1(v28) = v24;
              WORD2(v28) = v25;
              v26 = (__int16 *)&v28;
              LOWORD(v28) = v23[0];
              v27 = 3;
              v22 = CShaderLinkingGraphBuilder::AppendNode(
                      a1,
                      v23[0],
                      (unsigned int)&word_1801EA0DE,
                      a5,
                      (__int64)"ClampTransparent",
                      (__int64)&v26);
              v10 = v22;
              if ( v22 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x21Eu);
            }
          }
        }
      }
    }
  }
  return v10;
}

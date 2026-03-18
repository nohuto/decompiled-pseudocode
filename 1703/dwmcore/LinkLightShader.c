/*
 * XREFs of LinkLightShader @ 0x1801BB070
 * Callers:
 *     AppendLights @ 0x1801BAAA4 (AppendLights.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall LinkLightShader(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, char a5, __int16 *a6)
{
  struct ID3D11Module *v7; // r13
  int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // ebx
  int v12; // ecx
  struct ID3D11Module *v13; // r9
  int appended; // eax
  _DWORD *v15; // rax
  int v16; // edi
  int v17; // edx
  int v18; // edx
  int v19; // edx
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int16 v22; // dx
  __int64 v23; // r10
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int16 v26; // ax
  unsigned int v28; // [rsp+20h] [rbp-49h]
  _QWORD *v30; // [rsp+38h] [rbp-31h] BYREF
  int v31; // [rsp+40h] [rbp-29h]
  __int128 v32; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v33[14]; // [rsp+58h] [rbp-11h] BYREF
  char v34; // [rsp+66h] [rbp-3h]
  _QWORD v35[2]; // [rsp+70h] [rbp+7h] BYREF

  v7 = qword_180241C80;
  if ( !a6 )
  {
    v28 = 625;
LABEL_3:
    v9 = -2147024809;
    LODWORD(v10) = 0;
    v11 = -2147024809;
    goto LABEL_39;
  }
  v12 = *(_DWORD *)(a1 + 80);
  v13 = qword_180241C80;
  memset(v35, 0, 12);
  *(_DWORD *)(a1 + 80) = v12 + 1;
  *a6 = v12 | 0x500;
  appended = CShaderLinkingGraphBuilder::AppendNode(
               a1,
               v12 | 0x500u,
               (__int64)&word_1801EA0DE,
               (__int64)v13,
               (__int64)"InitLightAccumulator",
               (__int64)v35);
  v10 = 0LL;
  v11 = appended;
  if ( appended >= 0 )
  {
    v15 = a2;
    v16 = 0;
    while ( 1 )
    {
      v17 = (*v15 >> (4 * v16)) & 0xF;
      if ( v17 == 15 )
        goto LABEL_33;
      if ( !v17 )
        break;
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( a5 )
        {
          v20 = *(_OWORD *)"DistantSceneLightingEffectLib";
          qmemcpy(&v33[8], "ctLib", 5);
          v21 = *(_QWORD *)"tingEffectLib";
          v33[13] = v16 + 48;
LABEL_19:
          *(_QWORD *)v33 = v21;
          v34 = 0;
          goto LABEL_25;
        }
        v20 = *(_OWORD *)"DistantLightingLib";
        *(_WORD *)v33 = *(_WORD *)"ib";
        v33[2] = v16 + 48;
        goto LABEL_24;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( a5 )
        {
          v20 = *(_OWORD *)"PointSceneLightingEffectLib";
          v33[11] = v16 + 48;
          qmemcpy(v33, "ngEffectLib", 11);
          v33[12] = 0;
        }
        else
        {
          v20 = *(_OWORD *)"PointLightingLib";
          *(_WORD *)v33 = (unsigned __int8)(v16 + 48);
        }
        goto LABEL_25;
      }
      if ( v19 != 1 )
      {
        v28 = 687;
        goto LABEL_3;
      }
      if ( a5 )
      {
        v20 = *(_OWORD *)"SpotSceneLightingEffectLib";
        *(_WORD *)&v33[10] = (unsigned __int8)(v16 + 48);
        qmemcpy(v33, "gEffectLib", 10);
LABEL_25:
        v32 = v20;
        goto LABEL_26;
      }
      HIBYTE(v32) = v16 + 48;
      qmemcpy(&v32, "SpotLightingLib", 15);
      v33[0] = 0;
LABEL_26:
      LODWORD(v35[0]) = 196610;
      if ( v16 )
        LODWORD(v35[0]) = 327684;
      v22 = *a6;
      v23 = *(int *)(a4 + 8);
      WORD2(v35[0]) = *a6;
      *(_DWORD *)((char *)v35 + 6) = 0;
      v24 = 3;
      WORD1(v35[1]) = 0;
      do
      {
        if ( v10 >= v23 )
          break;
        v25 = v24++;
        v26 = *(_WORD *)(*(_QWORD *)a4 + 2 * v10++);
        *((_WORD *)v35 + v25) = v26;
      }
      while ( v24 < 6 );
      v31 = v23 + 3;
      v30 = v35;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v22,
                   (__int64)&word_1801EA0DE,
                   (__int64)v7,
                   (__int64)&v32,
                   (__int64)&v30);
      v10 = 0LL;
      v11 = appended;
      if ( appended < 0 )
      {
        v28 = 707;
        goto LABEL_38;
      }
      v15 = a2;
LABEL_33:
      if ( (unsigned int)++v16 >= 3 )
        return v11;
    }
    if ( a5 )
    {
      v20 = *(_OWORD *)"AmbientSceneLightingEffectLib";
      qmemcpy(&v33[8], "ctLib0", 6);
      v21 = *(_QWORD *)"tingEffectLib";
      goto LABEL_19;
    }
    v20 = *(_OWORD *)"AmbientLightingLib";
    qmemcpy(v33, "ib0", 3);
LABEL_24:
    v33[3] = 0;
    goto LABEL_25;
  }
  v28 = 630;
LABEL_38:
  v9 = appended;
LABEL_39:
  MilInstrumentationCheckHR(0x14u, 0LL, v10, v9, v28);
  return v11;
}

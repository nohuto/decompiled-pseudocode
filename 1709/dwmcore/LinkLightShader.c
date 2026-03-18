/*
 * XREFs of LinkLightShader @ 0x1800018B0
 * Callers:
 *     AppendLights @ 0x1800016C8 (AppendLights.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall LinkLightShader(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4, char a5, unsigned __int16 *a6)
{
  int v7; // r13d
  int v9; // ecx
  int v10; // r9d
  int appended; // eax
  __int64 v12; // r8
  unsigned int v13; // ebx
  _DWORD *v14; // rax
  int v15; // edi
  int v16; // edx
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  unsigned __int16 v20; // r10
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // r9d
  int v26; // edx
  int v27; // edx
  unsigned int v28; // [rsp+20h] [rbp-59h]
  __int128 v30; // [rsp+40h] [rbp-39h] BYREF
  __int128 v31; // [rsp+50h] [rbp-29h] BYREF
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v33[14]; // [rsp+70h] [rbp-9h] BYREF
  char v34; // [rsp+7Eh] [rbp+5h]
  int v35; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int16 v36; // [rsp+84h] [rbp+Bh]
  int v37; // [rsp+86h] [rbp+Dh]
  __int16 v38; // [rsp+8Ah] [rbp+11h]

  v7 = (int)ppModule;
  if ( a6 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    v10 = (int)ppModule;
    v30 = 0LL;
    *(_DWORD *)(a1 + 80) = v9 + 1;
    LOWORD(v9) = v9 | 0x500;
    *a6 = v9;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 (unsigned __int16)v9,
                 (unsigned int)&word_1801EFD5E,
                 v10,
                 (__int64)"InitLightAccumulator",
                 (__int64)&v30);
    v12 = 0LL;
    v13 = appended;
    if ( appended >= 0 )
    {
      v14 = a2;
      v15 = 0;
      while ( 1 )
      {
        v16 = (*v14 >> (4 * v15)) & 0xF;
        if ( v16 == 15 )
          goto LABEL_5;
        if ( !v16 )
          break;
        v26 = v16 - 1;
        if ( !v26 )
        {
          if ( !a5 )
          {
            v18 = *(_OWORD *)"DistantLightingLib";
            *(_WORD *)v33 = *(_WORD *)"ib";
            v33[2] = v15 + 48;
LABEL_35:
            v33[3] = 0;
            goto LABEL_11;
          }
          v18 = *(_OWORD *)"DistantSceneLightingEffectLib";
          qmemcpy(&v33[8], "ctLib", 5);
          v19 = *(_QWORD *)"tingEffectLib";
          v33[13] = v15 + 48;
          goto LABEL_10;
        }
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 != 1 )
          {
            v28 = 774;
            goto LABEL_21;
          }
          if ( !a5 )
          {
            HIBYTE(v32) = v15 + 48;
            qmemcpy(&v32, "SpotLightingLib", 15);
            v33[0] = 0;
            goto LABEL_12;
          }
          v18 = *(_OWORD *)"SpotSceneLightingEffectLib";
          *(_WORD *)&v33[10] = (unsigned __int8)(v15 + 48);
          qmemcpy(v33, "gEffectLib", 10);
        }
        else if ( a5 )
        {
          v18 = *(_OWORD *)"PointSceneLightingEffectLib";
          v33[11] = v15 + 48;
          qmemcpy(v33, "ngEffectLib", 11);
          v33[12] = 0;
        }
        else
        {
          v18 = *(_OWORD *)"PointLightingLib";
          *(_WORD *)v33 = (unsigned __int8)(v15 + 48);
        }
LABEL_11:
        v32 = v18;
LABEL_12:
        v35 = 196610;
        if ( v15 )
          v35 = 327684;
        v20 = *a6;
        v21 = a4[1];
        v22 = 3;
        v36 = *a6;
        v37 = 0;
        v38 = 0;
        do
        {
          if ( (int)(v22 - 3) >= v21 )
            break;
          v23 = v22++;
          v24 = *(_WORD *)(v12 + *a4);
          v12 += 2LL;
          *((_WORD *)&v35 + v23) = v24;
        }
        while ( v22 < 6 );
        *(_QWORD *)&v30 = &v35;
        *((_QWORD *)&v30 + 1) = v21 + 3;
        v31 = v30;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v20,
                     (unsigned int)&word_1801EFD5E,
                     v7,
                     (__int64)&v32,
                     (__int64)&v31);
        v12 = 0LL;
        v13 = appended;
        if ( appended < 0 )
        {
          v28 = 794;
          goto LABEL_38;
        }
        v14 = a2;
LABEL_5:
        if ( (unsigned int)++v15 >= 3 )
          return v13;
      }
      if ( !a5 )
      {
        v18 = *(_OWORD *)"AmbientLightingLib";
        qmemcpy(v33, "ib0", 3);
        goto LABEL_35;
      }
      v18 = *(_OWORD *)"AmbientSceneLightingEffectLib";
      qmemcpy(&v33[8], "ctLib0", 6);
      v19 = *(_QWORD *)"tingEffectLib";
LABEL_10:
      *(_QWORD *)v33 = v19;
      v34 = 0;
      goto LABEL_11;
    }
    v28 = 717;
LABEL_38:
    v25 = appended;
  }
  else
  {
    v28 = 712;
LABEL_21:
    v25 = -2147024809;
    LODWORD(v12) = 0;
    v13 = -2147024809;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, v12, v25, v28);
  return v13;
}

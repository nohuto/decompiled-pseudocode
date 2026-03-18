/*
 * XREFs of ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18003E02C
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18003E7DC (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x18001CC8C (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1800263E8 (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1800274FC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x180029340 (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x1800295C4 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x18003EFB0 (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x180040920 (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180040A4C (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x1800C2770 (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800C3258 (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800C535C (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1801C0028 (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x1801C00F8 (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801C01E8 (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x1801C028C (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801C036C (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x1801C0EF0 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 */

__int64 __fastcall CKeyframeAnimation::AddKeyframeData(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int128 *a4,
        unsigned int a5)
{
  __int128 v5; // xmm0
  int v9; // r8d
  int v10; // r8d
  float v11; // xmm9_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // ecx
  int v20; // ecx
  __int64 v22; // rcx
  int v23; // r8d
  unsigned int v24; // r14d
  unsigned int v25; // esi
  unsigned int v26; // edi
  int v27; // ebx
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  unsigned int v31; // ebx
  __int64 v32; // r8
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // ebx
  float v38; // xmm6_4
  int v39; // r8d
  unsigned int v40; // edi
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  __int64 v43; // r8
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // edi
  unsigned int v47; // ebx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int v51; // [rsp+28h] [rbp-B1h]
  struct KeyframeValue *v52[4]; // [rsp+48h] [rbp-91h] BYREF
  _OWORD v53[4]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-31h] BYREF
  int v55; // [rsp+B0h] [rbp-29h]
  char v56; // [rsp+B4h] [rbp-25h]
  struct KeyframeInterpolation *v57; // [rsp+150h] [rbp+77h] BYREF

  v5 = *a4;
  v52[0] = 0LL;
  v57 = 0LL;
  g_dbgKeyFrameData = v5;
  xmmword_1802D6198 = a4[1];
  xmmword_1802D61A8 = a4[2];
  v9 = *((_DWORD *)a4 + 1);
  if ( v9 > 65539 )
  {
    v28 = v9 - 65540;
    if ( !v28 )
    {
      v46 = (int)*((float *)a4 + 2);
      v47 = (int)*((float *)a4 + 3);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = XamlElasticInterpolation::Create(a5, v46, v47);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1205;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      v37 = (int)*((float *)a4 + 2);
      v38 = *((float *)a4 + 3);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = XamlExponentialInterpolation::Create(a5, v37, v38, &v57);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1213;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v31 = (int)*((float *)a4 + 2);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = XamlPowerInterpolation::Create(a5, v31, v32, &v57);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1221;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    if ( v30 == 1 )
    {
      v45 = (int)*((float *)a4 + 2);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = XamlSineInterpolation::Create(a5, v45, &v57);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1228;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    goto LABEL_50;
  }
  if ( v9 == 65539 )
  {
    v44 = (int)*((float *)a4 + 2);
    Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
    v15 = XamlCircleInterpolation::Create(a5, v44, &v57);
    v16 = v15;
    if ( v15 < 0 )
    {
      v51 = 1196;
      goto LABEL_41;
    }
    goto LABEL_6;
  }
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      v11 = *((float *)a4 + 2);
      v12 = *((float *)a4 + 3);
      v13 = *((float *)a4 + 4);
      v14 = *((float *)a4 + 5);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = CubicBezierInterpolation::Create(a5, v11, v12, v13, v14, &v57);
      v16 = v15;
      if ( v15 >= 0 )
        goto LABEL_6;
      v51 = 1155;
LABEL_41:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v51);
      goto LABEL_15;
    }
    v23 = v10 - 1;
    if ( !v23 )
    {
      v24 = (int)*((float *)a4 + 2);
      v25 = (int)*((float *)a4 + 3);
      v26 = (int)*((float *)a4 + 4);
      v27 = (int)*((float *)a4 + 5);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = StepInterpolation::Create(a5, v24, v25, v26, v27 & 1, (v27 & 2) != 0, &v57);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1172;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    v39 = v23 - 0xFFFF;
    if ( !v39 )
    {
      v42 = (int)*((float *)a4 + 2);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = XamlBackInterpolation::Create(a5, v42, v43, &v57);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1180;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
    if ( v39 == 1 )
    {
      v40 = (int)*((float *)a4 + 2);
      v41 = (int)*((float *)a4 + 3);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
      v15 = XamlBounceInterpolation::Create(a5, v40, v41);
      v16 = v15;
      if ( v15 < 0 )
      {
        v51 = 1189;
        goto LABEL_41;
      }
      goto LABEL_6;
    }
LABEL_50:
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x4D3u);
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
  v15 = LinearInterpolation::Create(v22, &v57);
  v16 = v15;
  if ( v15 < 0 )
  {
    v51 = 1161;
    goto LABEL_41;
  }
LABEL_6:
  if ( *((_DWORD *)a4 + 6) != 1 )
  {
    if ( *((_DWORD *)a4 + 6) == 2 )
    {
      Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(v52);
      KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 144), a1, *((unsigned int *)a4 + 8), v52);
    }
    else
    {
      if ( *((_DWORD *)a4 + 6) != 3 )
      {
        v16 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x523u);
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(v52);
      KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 144), a1, v52);
    }
    goto LABEL_14;
  }
  memset_0(v53, 0, sizeof(v53));
  v17 = *(_DWORD *)(a1 + 144);
  v18 = 0LL;
  v54 = 0LL;
  v56 = 0;
  v55 = 18;
  v19 = v17 - 11;
  if ( v19 )
  {
    v20 = v19 - 7;
    if ( v20 )
    {
      v33 = v20 - 17;
      if ( v33 )
      {
        v34 = v33 - 17;
        if ( v34 )
        {
          v35 = v34 - 17;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 != 1 )
              {
                v16 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x51Au);
                goto LABEL_15;
              }
              D3DXQuaternionNormalize((struct D2DQuaternion *)&v52[1], (const struct D2DQuaternion *)(a4 + 2));
              v55 = 71;
              v53[0] = *(_OWORD *)&v52[1];
              goto LABEL_11;
            }
            v55 = 70;
          }
          else
          {
            v55 = 69;
          }
          v53[0] = a4[2];
        }
        else
        {
          v48 = *((_DWORD *)a4 + 10);
          *(_QWORD *)&v53[0] = *((_QWORD *)a4 + 4);
          v55 = 52;
          DWORD2(v53[0]) = v48;
        }
LABEL_11:
        v56 = 1;
        goto LABEL_12;
      }
      DWORD1(v53[0]) = *((_DWORD *)a4 + 9);
      v55 = 35;
    }
    else
    {
      v55 = 18;
    }
    LODWORD(v53[0]) = *((_DWORD *)a4 + 8);
    goto LABEL_11;
  }
  v49 = *((unsigned int *)a4 + 8);
  v50 = *(_QWORD *)(a1 + 392);
  v55 = 11;
  v56 = 1;
  Microsoft::WRL::ComPtr<CPathData>::operator=(&v54, *(_QWORD *)(v50 + 8 * v49));
  v18 = v54;
LABEL_12:
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(v52);
  KeyframeValue::CreateConstantKeyframeValue((const struct CExpressionValue *)v53, v52);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_14:
  KeyframeSequence::AddKeyframe(*(KeyframeSequence **)(a1 + 328), a2, a3, v52[0], v57);
  v16 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v57);
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(v52);
  return v16;
}

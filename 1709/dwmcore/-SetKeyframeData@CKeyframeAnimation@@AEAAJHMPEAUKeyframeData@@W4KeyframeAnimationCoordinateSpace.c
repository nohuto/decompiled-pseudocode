/*
 * XREFs of ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006A48C (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180092B7C (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x180092BE8 (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180092D44 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ @ 0x180092DD8 (-InternalRelease@-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18009EEC0 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x1800A6BBC (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800B94C8 (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800B95A0 (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x1800BB55C (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x1800BD754 (-CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyfram.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x18018A86C (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x18018A93C (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x18018AA2C (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x18018AAD0 (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x18018ABB0 (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@IPEAPEAV1@@Z @ 0x18018B598 (-CreateExpressionKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAn.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyframeData(
        __int64 a1,
        unsigned int a2,
        float a3,
        __int64 a4,
        unsigned int a5)
{
  int v6; // ecx
  int v9; // ecx
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  signed int v14; // eax
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // ecx
  __int64 v19; // rcx
  int v20; // ecx
  unsigned int v21; // r14d
  unsigned int v22; // esi
  unsigned int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // ebx
  __int64 v29; // r8
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  unsigned int v34; // ebx
  __int64 v35; // r8
  int v36; // ecx
  unsigned int v37; // edi
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  __int64 v40; // r8
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // edi
  unsigned int v44; // ebx
  int v45; // eax
  unsigned int v46; // [rsp+28h] [rbp-E0h]
  struct KeyframeInterpolation *v47; // [rsp+48h] [rbp-C0h] BYREF
  KeyframeValue *v48; // [rsp+50h] [rbp-B8h] BYREF
  struct KeyframeValue *v49[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v50[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v51; // [rsp+A8h] [rbp-60h]
  char v52; // [rsp+ACh] [rbp-5Ch]

  v48 = 0LL;
  v47 = 0LL;
  v6 = *(_DWORD *)(a4 + 4);
  if ( v6 > 65539 )
  {
    v25 = v6 - 65540;
    if ( !v25 )
    {
      v43 = (int)*(float *)(a4 + 8);
      v44 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = XamlElasticInterpolation::Create(a5, v43, v44);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 958;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      v34 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = XamlExponentialInterpolation::Create(a5, v34, v35, &v47);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 966;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
    v27 = v26 - 1;
    if ( !v27 )
    {
      v28 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = XamlPowerInterpolation::Create(a5, v28, v29, &v47);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 974;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
    if ( v27 == 1 )
    {
      v42 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = XamlSineInterpolation::Create(a5, v42, &v47);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 981;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
    goto LABEL_48;
  }
  if ( v6 == 65539 )
  {
    v41 = (int)*(float *)(a4 + 8);
    Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
    v14 = XamlCircleInterpolation::Create(a5, v41, &v47);
    v15 = v14;
    if ( v14 < 0 )
    {
      v46 = 949;
      goto LABEL_38;
    }
    goto LABEL_6;
  }
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( !v9 )
    {
      v10 = *(float *)(a4 + 8);
      v11 = *(float *)(a4 + 12);
      v12 = *(float *)(a4 + 16);
      v13 = *(float *)(a4 + 20);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = CubicBezierInterpolation::Create(a5, v10, v11, v12, v13, &v47);
      v15 = v14;
      if ( v14 >= 0 )
        goto LABEL_6;
      v46 = 908;
LABEL_38:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v46);
      goto LABEL_12;
    }
    v20 = v9 - 1;
    if ( !v20 )
    {
      v21 = (int)*(float *)(a4 + 8);
      v22 = (int)*(float *)(a4 + 12);
      v23 = (int)*(float *)(a4 + 16);
      v24 = (int)*(float *)(a4 + 20);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = StepInterpolation::Create(a5, v21, v22, v23, v24 & 1, (v24 & 2) != 0, &v47);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 925;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
    v36 = v20 - 0xFFFF;
    if ( !v36 )
    {
      v39 = (int)*(float *)(a4 + 8);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = XamlBackInterpolation::Create(a5, v39, v40, &v47);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 933;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
    if ( v36 == 1 )
    {
      v37 = (int)*(float *)(a4 + 8);
      v38 = (int)*(float *)(a4 + 12);
      Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
      v14 = XamlBounceInterpolation::Create(a5, v37, v38);
      v15 = v14;
      if ( v14 < 0 )
      {
        v46 = 942;
        goto LABEL_38;
      }
      goto LABEL_6;
    }
LABEL_48:
    v15 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x3DCu);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
  v14 = LinearInterpolation::Create(v19, &v47);
  v15 = v14;
  if ( v14 < 0 )
  {
    v46 = 914;
    goto LABEL_38;
  }
LABEL_6:
  if ( *(_DWORD *)(a4 + 24) != 1 )
  {
    if ( *(_DWORD *)(a4 + 24) == 2 )
    {
      Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v48);
      KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 136), a1, *(unsigned int *)(a4 + 32), &v48);
    }
    else
    {
      if ( *(_DWORD *)(a4 + 24) != 3 )
      {
        v15 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x427u);
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v48);
      KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 136), a1, &v48);
    }
    goto LABEL_11;
  }
  memset_0(v50, 0, sizeof(v50));
  v16 = *(_DWORD *)(a1 + 136);
  v51 = 18;
  v52 = 0;
  v17 = v16 - 18;
  if ( !v17 )
  {
    v51 = 18;
LABEL_9:
    LODWORD(v50[0]) = *(_DWORD *)(a4 + 32);
    goto LABEL_10;
  }
  v30 = v17 - 17;
  if ( !v30 )
  {
    DWORD1(v50[0]) = *(_DWORD *)(a4 + 36);
    v51 = 35;
    goto LABEL_9;
  }
  v31 = v30 - 17;
  if ( v31 )
  {
    v32 = v31 - 17;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 != 1 )
        {
          v15 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x41Eu);
          goto LABEL_12;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)v49, (const struct D2DQuaternion *)(a4 + 32));
        v51 = 71;
        v50[0] = *(_OWORD *)v49;
        goto LABEL_10;
      }
      v51 = 70;
    }
    else
    {
      v51 = 69;
    }
    v50[0] = *(_OWORD *)(a4 + 32);
  }
  else
  {
    v45 = *(_DWORD *)(a4 + 40);
    *(_QWORD *)&v50[0] = *(_QWORD *)(a4 + 32);
    v51 = 52;
    DWORD2(v50[0]) = v45;
  }
LABEL_10:
  v52 = 1;
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v48);
  KeyframeValue::CreateConstantKeyframeValue((const struct CExpressionValue *)v50, &v48);
LABEL_11:
  KeyframeSequence::AddKeyframe(*(KeyframeSequence **)(a1 + 312), a2, a3, v48, v47);
  v15 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(&v47);
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(&v48);
  return v15;
}

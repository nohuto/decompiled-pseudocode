/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A39D4 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180066C10 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18006A280 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800A3F14 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B5C60 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800B9680 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18016F5AC (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  unsigned int v2; // esi
  int v5; // r8d
  char v6; // cl
  char v7; // dl
  int v8; // edi
  float v9; // xmm6_4
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r10
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r10
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  void (__fastcall *v23)(__int64, __int128 *, __int64, __int128 *, __int128 *, _OWORD *); // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  float v27; // xmm1_4
  int *v28; // r9
  int v29; // edx
  int v30; // r10d
  __int64 v31; // r12
  int v32; // ecx
  signed int SampledStartingValue; // eax
  DWORD v34; // r14d
  signed int v35; // eax
  int v36; // ecx
  signed int v37; // eax
  DWORD v38; // r14d
  signed int v39; // eax
  __int128 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B0h]
  __int128 v42; // [rsp+60h] [rbp-A0h]
  __int128 v43; // [rsp+70h] [rbp-90h]
  int v44; // [rsp+80h] [rbp-80h]
  char v45; // [rsp+84h] [rbp-7Ch]
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int128 v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+D0h] [rbp-30h]
  char v51; // [rsp+D4h] [rbp-2Ch]
  _OWORD v52[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+120h] [rbp+20h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v2 = *((_DWORD *)this + 26);
  if ( v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = *((_DWORD *)this + 22);
  v6 = *((_BYTE *)this + 132);
  v7 = v6 & 8;
  if ( (v6 & 8) != 0 )
    v5 = *((_DWORD *)this + 28) - v5;
  v8 = v5 - *((_DWORD *)this + 29);
  v9 = 0.0;
  if ( *((_BYTE *)this + 92) && v8 >= 0 && v8 <= *((_DWORD *)this + 30) && (v6 & 0x10) == 0 )
    goto LABEL_8;
  v27 = (float)*((int *)this + 22) / (float)*((int *)this + 21);
  if ( v27 == 0.0 )
  {
    if ( v7 )
      goto LABEL_44;
    goto LABEL_47;
  }
  if ( v27 == 1.0 )
  {
    if ( !v7 )
    {
LABEL_44:
      *((_DWORD *)this + 27) = v2 - 1;
      *((_DWORD *)this + 29) = *((_DWORD *)this + 28);
      *((_BYTE *)this + 132) = v6 & 0xEF;
      *((_DWORD *)this + 30) = 0;
      goto LABEL_8;
    }
LABEL_47:
    *((_DWORD *)this + 27) = 0;
    *((_BYTE *)this + 132) = v6 & 0xEF;
    *(_QWORD *)((char *)this + 116) = 0LL;
    goto LABEL_8;
  }
  v28 = (int *)*((_QWORD *)this + 12);
  v29 = 0;
  *((_DWORD *)this + 27) = 0;
  *(_QWORD *)((char *)this + 116) = 0LL;
  v30 = *v28;
  while ( 1 )
  {
    v31 = (unsigned int)(v29 + 1);
    if ( v28[6 * v31] > v30 + v5 )
      break;
    ++v29;
    if ( (unsigned int)v31 >= v2 - 1 )
      goto LABEL_33;
  }
  *((_DWORD *)this + 27) = v29;
  *((_DWORD *)this + 29) = v28[6 * v29] - v30;
  *((_DWORD *)this + 30) = v28[6 * v31] - v28[6 * v29];
LABEL_33:
  v8 = v5 - *((_DWORD *)this + 29);
  *((_BYTE *)this + 132) = v6 & 0xEF;
LABEL_8:
  memset_0(&v46, 0, 0x40uLL);
  v50 = 18;
  v51 = 0;
  memset_0(&v40, 0, 0x40uLL);
  v44 = 18;
  v45 = 0;
  memset_0(v52, 0, sizeof(v52));
  v10 = *((_DWORD *)this + 30);
  LODWORD(v53) = 18;
  BYTE4(v53) = 0;
  if ( v10 <= 0 )
  {
    if ( *((_DWORD *)this + 27) )
      v9 = FLOAT_1_0;
  }
  else
  {
    v9 = (float)v8 / (float)v10;
  }
  v11 = *((unsigned int *)this + 27);
  v12 = *((_QWORD *)this + 12);
  if ( (unsigned int)v11 >= v2 - 1 )
  {
    v14 = v12 + 24LL * (unsigned int)(v11 - 1);
    v13 = v12 + 24 * v11;
  }
  else
  {
    v13 = v12 + 24LL * (unsigned int)(v11 + 1);
    v14 = v12 + 24 * v11;
  }
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(_DWORD *)(v15 + 20);
  if ( v16 == 1 )
  {
    v17 = *(_DWORD *)(v15 + 88);
    if ( v17 == 18 )
    {
      LODWORD(v46) = *(_DWORD *)(v15 + 24);
      v50 = 18;
LABEL_15:
      v51 = 1;
    }
    else
    {
      switch ( v17 )
      {
        case 17:
          LOBYTE(v46) = *(_BYTE *)(v15 + 24);
          v50 = 17;
          goto LABEL_15;
        case 35:
          v50 = 35;
          *(_QWORD *)&v46 = *(_QWORD *)(v15 + 24);
          goto LABEL_15;
        case 42:
          v50 = 42;
          LODWORD(v46) = *(_DWORD *)(v15 + 24);
          goto LABEL_15;
        case 52:
          v50 = 52;
          *(_QWORD *)&v46 = *(_QWORD *)(v15 + 24);
          DWORD2(v46) = *(_DWORD *)(v15 + 32);
          goto LABEL_15;
        case 69:
          v50 = 69;
          v46 = *(_OWORD *)(v15 + 24);
          goto LABEL_15;
        case 70:
          v50 = 70;
          v46 = *(_OWORD *)(v15 + 24);
          goto LABEL_15;
        case 71:
          v50 = 71;
          v46 = *(_OWORD *)(v15 + 24);
          goto LABEL_15;
        case 104:
          v50 = 104;
          v46 = *(_OWORD *)(v15 + 24);
          *(_QWORD *)&v47 = *(_QWORD *)(v15 + 40);
          goto LABEL_15;
        case 265:
          v50 = 265;
          v46 = *(_OWORD *)(v15 + 24);
          v47 = *(_OWORD *)(v15 + 40);
          v48 = *(_OWORD *)(v15 + 56);
          v49 = *(_OWORD *)(v15 + 72);
          goto LABEL_15;
        default:
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  v32 = v16 - 2;
  if ( !v32 )
  {
    v35 = CKeyframeAnimation::ProcessInnerExpression(
            *(CKeyframeAnimation **)(v15 + 24),
            *(_DWORD *)(v15 + 32),
            a2,
            (struct CExpressionValue *)&v46);
    v34 = v35;
    if ( v35 >= 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, 0x6Du);
LABEL_58:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x1D6u);
    return;
  }
  if ( v32 != 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(
                           *(CKeyframeAnimation **)(v15 + 24),
                           (struct CExpressionValue *)&v46);
  v34 = SampledStartingValue;
  if ( SampledStartingValue < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SampledStartingValue, 0x73u);
    goto LABEL_58;
  }
LABEL_16:
  v18 = *(_QWORD *)(v13 + 8);
  v19 = *(_DWORD *)(v18 + 20);
  if ( v19 == 1 )
  {
    v20 = *(_DWORD *)(v18 + 88);
    if ( v20 == 18 )
    {
      LODWORD(v40) = *(_DWORD *)(v18 + 24);
      v44 = 18;
LABEL_19:
      v45 = 1;
    }
    else
    {
      switch ( v20 )
      {
        case 17:
          LOBYTE(v40) = *(_BYTE *)(v18 + 24);
          v44 = 17;
          goto LABEL_19;
        case 35:
          v44 = 35;
          *(_QWORD *)&v40 = *(_QWORD *)(v18 + 24);
          goto LABEL_19;
        case 42:
          v44 = 42;
          LODWORD(v40) = *(_DWORD *)(v18 + 24);
          goto LABEL_19;
        case 52:
          v44 = 52;
          *(_QWORD *)&v40 = *(_QWORD *)(v18 + 24);
          DWORD2(v40) = *(_DWORD *)(v18 + 32);
          goto LABEL_19;
        case 69:
          v44 = 69;
          v40 = *(_OWORD *)(v18 + 24);
          goto LABEL_19;
        case 70:
          v44 = 70;
          v40 = *(_OWORD *)(v18 + 24);
          goto LABEL_19;
        case 71:
          v44 = 71;
          v40 = *(_OWORD *)(v18 + 24);
          goto LABEL_19;
        case 104:
          v44 = 104;
          v40 = *(_OWORD *)(v18 + 24);
          *(_QWORD *)&v41 = *(_QWORD *)(v18 + 40);
          goto LABEL_19;
        case 265:
          v44 = 265;
          v40 = *(_OWORD *)(v18 + 24);
          v41 = *(_OWORD *)(v18 + 40);
          v42 = *(_OWORD *)(v18 + 56);
          v43 = *(_OWORD *)(v18 + 72);
          goto LABEL_19;
        default:
          goto LABEL_20;
      }
    }
    goto LABEL_20;
  }
  v36 = v19 - 2;
  if ( v36 )
  {
    if ( v36 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v37 = CKeyframeAnimation::GetSampledStartingValue(
            *(CKeyframeAnimation **)(v18 + 24),
            (struct CExpressionValue *)&v40);
    v38 = v37;
    if ( v37 >= 0 )
      goto LABEL_20;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x73u);
LABEL_74:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v38, 0x1D7u);
    return;
  }
  v39 = CKeyframeAnimation::ProcessInnerExpression(
          *(CKeyframeAnimation **)(v18 + 24),
          *(_DWORD *)(v18 + 32),
          a2,
          (struct CExpressionValue *)&v40);
  v38 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0x6Du);
    goto LABEL_74;
  }
LABEL_20:
  v21 = *(_QWORD *)(v13 + 16);
  v22 = *(unsigned int *)(*(_QWORD *)(v14 + 8) + 16LL);
  v23 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int128 *, __int128 *, _OWORD *))(*(_QWORD *)v21 + 24LL);
  if ( (char *)v23 == (char *)LinearInterpolation::Compute )
  {
    LinearInterpolation::Compute(v21, LinearInterpolation::Compute, v22, &v46, &v40, v52);
  }
  else if ( (char *)v23 == (char *)StepInterpolation::Compute )
  {
    StepInterpolation::Compute(v21);
  }
  else if ( (char *)v23 == (char *)CubicBezierInterpolation::Compute )
  {
    CubicBezierInterpolation::Compute(v21, v9);
  }
  else if ( (char *)v23 == (char *)XamlInterpolation::Compute )
  {
    XamlInterpolation::Compute(v21, XamlInterpolation::Compute, v22, &v46, &v40, v52);
  }
  else
  {
    v23(v21, &v40, v22, &v46, &v40, v52);
  }
  if ( *((_BYTE *)this + 93) )
    *((_BYTE *)this + 132) &= ~2u;
  v24 = v52[1];
  *(_OWORD *)this = v52[0];
  v25 = v52[2];
  *((_OWORD *)this + 1) = v24;
  v26 = v52[3];
  *((_OWORD *)this + 2) = v25;
  *(_QWORD *)&v25 = v53;
  *((_OWORD *)this + 3) = v26;
  *((_QWORD *)this + 8) = v25;
}

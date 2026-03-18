/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18003F0F0
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003D088 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x18003D610 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800407E0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800408E0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800AF900 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C3330 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180197988 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  unsigned int v2; // r8d
  char v5; // dl
  int v6; // edi
  int v7; // eax
  float v8; // xmm1_4
  int *v9; // rdx
  unsigned int v10; // r14d
  int v11; // ecx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r10
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r10
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  void (__fastcall *v28)(__int64, __int128 *, __int64, __int128 *, __int128 *, __int128 *); // rax
  __int128 v29; // xmm1
  __int64 v30; // rdi
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  int SampledStartingValue; // r15d
  int v38; // ecx
  unsigned int v39; // r8d
  int v40; // ecx
  unsigned int v41; // r8d
  __int128 v42; // xmm0
  unsigned int v43; // eax
  __int128 v44; // xmm0
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // r15d
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v54; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v55; // [rsp+60h] [rbp-A0h]
  __int128 v56; // [rsp+70h] [rbp-90h]
  __int128 v57; // [rsp+80h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  int v59; // [rsp+98h] [rbp-68h]
  char v60; // [rsp+9Ch] [rbp-64h]
  __int128 v61; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v62; // [rsp+B0h] [rbp-50h]
  __int128 v63; // [rsp+C0h] [rbp-40h]
  __int128 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+E0h] [rbp-20h] BYREF
  int v66; // [rsp+E8h] [rbp-18h]
  char v67; // [rsp+ECh] [rbp-14h]
  __int128 v68; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v69; // [rsp+100h] [rbp+0h]
  __int128 v70; // [rsp+110h] [rbp+10h]
  __int128 v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+30h]
  int v73; // [rsp+138h] [rbp+38h]
  char v74; // [rsp+13Ch] [rbp+3Ch]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v2 = *((_DWORD *)this + 28);
  if ( v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = *((_BYTE *)this + 140);
  v6 = *((_DWORD *)this + 24);
  if ( (v5 & 8) != 0 )
    v6 = *((_DWORD *)this + 30) - v6;
  v7 = v6 - *((_DWORD *)this + 31);
  if ( !*((_BYTE *)this + 100) || v7 < 0 || v7 > *((_DWORD *)this + 32) || (v5 & 0x20) != 0 )
  {
    v8 = (float)*((int *)this + 24) / (float)*((int *)this + 23);
    if ( v8 == 0.0 )
    {
      if ( (v5 & 8) != 0 )
      {
        v40 = *((_DWORD *)this + 30);
        v41 = v2 - 1;
      }
      else
      {
        v40 = 0;
        v41 = 0;
      }
      *((_DWORD *)this + 29) = v41;
      *((_DWORD *)this + 31) = v40;
      *((_DWORD *)this + 32) = 0;
    }
    else if ( v8 == 1.0 )
    {
      if ( (v5 & 8) != 0 )
      {
        v38 = 0;
        v39 = 0;
      }
      else
      {
        v38 = *((_DWORD *)this + 30);
        v39 = v2 - 1;
      }
      *((_DWORD *)this + 29) = v39;
      *((_DWORD *)this + 31) = v38;
      *((_DWORD *)this + 32) = 0;
    }
    else
    {
      v9 = (int *)*((_QWORD *)this + 13);
      v10 = v2 - 1;
      *((_DWORD *)this + 29) = 0;
      v11 = 0;
      *(_QWORD *)((char *)this + 124) = 0LL;
      v12 = *v9;
      while ( 1 )
      {
        v13 = (unsigned int)(v11 + 1);
        if ( v9[6 * v13] > v12 + v6 )
          break;
        ++v11;
        if ( (unsigned int)v13 >= v10 )
          goto LABEL_15;
      }
      *((_DWORD *)this + 29) = v11;
      *((_DWORD *)this + 31) = v9[6 * v11] - v12;
      *((_DWORD *)this + 32) = v9[6 * v13] - v9[6 * v11];
    }
LABEL_15:
    *((_BYTE *)this + 140) &= ~0x20u;
  }
  v65 = 0LL;
  v61 = 0uLL;
  v62 = 0uLL;
  v63 = 0uLL;
  v64 = 0uLL;
  v67 = 0;
  v54 = 0uLL;
  v55 = 0uLL;
  v56 = 0uLL;
  v57 = 0uLL;
  v60 = 0;
  v68 = 0uLL;
  v69 = 0uLL;
  v70 = 0uLL;
  v71 = 0uLL;
  v74 = 0;
  v66 = 18;
  v58 = 0LL;
  v59 = 18;
  v72 = 0LL;
  v73 = 18;
  v14 = *((unsigned int *)this + 29);
  v15 = *((_QWORD *)this + 13);
  v16 = *((_DWORD *)this + 28) - 1;
  v17 = (unsigned int)(v14 + 1);
  if ( (unsigned int)v14 >= v16 )
    v17 = (unsigned int)v14;
  v18 = 3 * v17;
  if ( (unsigned int)v14 >= v16 )
    v14 = (unsigned int)(v14 - 1);
  v19 = 3 * v14;
  v20 = *(_QWORD *)(v15 + 24 * v14 + 8);
  v21 = *(_DWORD *)(v20 + 20);
  if ( v21 == 1 )
  {
    v22 = *(_DWORD *)(v20 + 96);
    if ( v22 == 18 )
    {
      LODWORD(v61) = *(_DWORD *)(v20 + 24);
      v66 = 18;
      v67 = 1;
    }
    else
    {
      switch ( v22 )
      {
        case 11:
          v47 = *(_QWORD *)(v20 + 88);
          v66 = 11;
          v67 = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=(&v65, v47);
          break;
        case 17:
          LOBYTE(v61) = *(_BYTE *)(v20 + 24);
          v66 = 17;
          v67 = 1;
          break;
        case 35:
          v66 = 35;
          *(_QWORD *)&v61 = *(_QWORD *)(v20 + 24);
          v67 = 1;
          break;
        case 42:
          v66 = 42;
          LODWORD(v61) = *(_DWORD *)(v20 + 24);
          v67 = 1;
          break;
        case 52:
          v66 = 52;
          *(_QWORD *)&v61 = *(_QWORD *)(v20 + 24);
          DWORD2(v61) = *(_DWORD *)(v20 + 32);
          v67 = 1;
          break;
        case 69:
          v66 = 69;
          v44 = *(_OWORD *)(v20 + 24);
          v67 = 1;
          v61 = v44;
          break;
        case 70:
          v66 = 70;
          v42 = *(_OWORD *)(v20 + 24);
          v67 = 1;
          v61 = v42;
          break;
        case 71:
          v66 = 71;
          v45 = *(_OWORD *)(v20 + 24);
          v67 = 1;
          v61 = v45;
          break;
        case 104:
          v66 = 104;
          v61 = *(_OWORD *)(v20 + 24);
          *(_QWORD *)&v62 = *(_QWORD *)(v20 + 40);
          v67 = 1;
          break;
        case 265:
          v66 = 265;
          v61 = *(_OWORD *)(v20 + 24);
          v62 = *(_OWORD *)(v20 + 40);
          v63 = *(_OWORD *)(v20 + 56);
          v46 = *(_OWORD *)(v20 + 72);
          v67 = 1;
          v64 = v46;
          break;
        default:
          goto LABEL_23;
      }
    }
    goto LABEL_23;
  }
  v36 = v21 - 2;
  if ( !v36 )
  {
    SampledStartingValue = CKeyframeAnimation::ProcessInnerExpression(
                             *(CKeyframeAnimation **)(v20 + 24),
                             *(_DWORD *)(v20 + 32),
                             a2,
                             (struct CExpressionValue *)&v61);
    if ( SampledStartingValue >= 0 )
      goto LABEL_23;
    v43 = 77;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SampledStartingValue, v43);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SampledStartingValue, 0x1D9u);
    goto LABEL_35;
  }
  if ( v36 != 1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(
                           *(CKeyframeAnimation **)(v20 + 24),
                           (struct CExpressionValue *)&v61);
  if ( SampledStartingValue < 0 )
  {
    v43 = 83;
    goto LABEL_67;
  }
LABEL_23:
  v23 = *(_QWORD *)(v15 + 8 * v18 + 8);
  v24 = *(_DWORD *)(v23 + 20);
  if ( v24 == 1 )
  {
    v25 = *(_DWORD *)(v23 + 96);
    if ( v25 == 18 )
    {
      LODWORD(v54) = *(_DWORD *)(v23 + 24);
      v59 = 18;
LABEL_26:
      v60 = 1;
    }
    else
    {
      switch ( v25 )
      {
        case 11:
          v51 = *(_QWORD *)(v23 + 88);
          v59 = 11;
          v60 = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=(&v58, v51);
          break;
        case 17:
          LOBYTE(v54) = *(_BYTE *)(v23 + 24);
          v59 = 17;
          goto LABEL_26;
        case 35:
          v59 = 35;
          *(_QWORD *)&v54 = *(_QWORD *)(v23 + 24);
          goto LABEL_26;
        case 42:
          v59 = 42;
          LODWORD(v54) = *(_DWORD *)(v23 + 24);
          goto LABEL_26;
        case 52:
          v59 = 52;
          *(_QWORD *)&v54 = *(_QWORD *)(v23 + 24);
          DWORD2(v54) = *(_DWORD *)(v23 + 32);
          goto LABEL_26;
        case 69:
          v59 = 69;
          v54 = *(_OWORD *)(v23 + 24);
          goto LABEL_26;
        case 70:
          v59 = 70;
          v54 = *(_OWORD *)(v23 + 24);
          goto LABEL_26;
        case 71:
          v59 = 71;
          v54 = *(_OWORD *)(v23 + 24);
          goto LABEL_26;
        case 104:
          v59 = 104;
          v54 = *(_OWORD *)(v23 + 24);
          *(_QWORD *)&v55 = *(_QWORD *)(v23 + 40);
          goto LABEL_26;
        case 265:
          v59 = 265;
          v54 = *(_OWORD *)(v23 + 24);
          v55 = *(_OWORD *)(v23 + 40);
          v56 = *(_OWORD *)(v23 + 56);
          v57 = *(_OWORD *)(v23 + 72);
          goto LABEL_26;
        default:
          goto LABEL_27;
      }
    }
    goto LABEL_27;
  }
  v48 = v24 - 2;
  if ( v48 )
  {
    if ( v48 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    v49 = CKeyframeAnimation::GetSampledStartingValue(
            *(CKeyframeAnimation **)(v23 + 24),
            (struct CExpressionValue *)&v54);
    if ( v49 >= 0 )
      goto LABEL_27;
    v50 = 83;
LABEL_84:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, v50);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x1DAu);
    goto LABEL_35;
  }
  v49 = CKeyframeAnimation::ProcessInnerExpression(
          *(CKeyframeAnimation **)(v23 + 24),
          *(_DWORD *)(v23 + 32),
          a2,
          (struct CExpressionValue *)&v54);
  if ( v49 < 0 )
  {
    v50 = 77;
    goto LABEL_84;
  }
LABEL_27:
  v26 = *(_QWORD *)(v15 + 8 * v18 + 16);
  v27 = *(unsigned int *)(*(_QWORD *)(v15 + 8 * v19 + 8) + 16LL);
  v28 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int128 *, __int128 *, __int128 *))(*(_QWORD *)v26 + 24LL);
  if ( (char *)v28 == (char *)CubicBezierInterpolation::Compute )
  {
    CubicBezierInterpolation::Compute(v26, CubicBezierInterpolation::Compute, v27, &v61, &v54, &v68);
  }
  else if ( (char *)v28 == (char *)StepInterpolation::Compute )
  {
    StepInterpolation::Compute(v26, StepInterpolation::Compute, v27, &v61, &v54, &v68);
  }
  else if ( (char *)v28 == (char *)LinearInterpolation::Compute )
  {
    LinearInterpolation::Compute(v26, LinearInterpolation::Compute, v27, &v61, &v54, &v68);
  }
  else if ( (char *)v28 == (char *)XamlInterpolation::Compute )
  {
    XamlInterpolation::Compute(v26, XamlInterpolation::Compute, v27, &v61, &v54, &v68);
  }
  else
  {
    v28(v26, &v54, v27, &v61, &v54, &v68);
  }
  if ( *((_BYTE *)this + 101) )
    *((_BYTE *)this + 140) &= ~2u;
  v29 = v69;
  v30 = v72;
  *(_OWORD *)this = v68;
  v31 = v70;
  *((_OWORD *)this + 1) = v29;
  v32 = v71;
  *((_OWORD *)this + 2) = v31;
  *((_OWORD *)this + 3) = v32;
  if ( *((_QWORD *)this + 8) != v30 )
  {
    v53 = v30;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v53);
    v52 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v30;
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  *((_DWORD *)this + 18) = v73;
  *((_BYTE *)this + 76) = v74;
LABEL_35:
  v33 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
}

/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18002CB84
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18002D6DC (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18002C620 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18002C930 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002F548 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18002F5C0 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v4; // rcx
  float *v5; // r14
  __int64 v6; // rdi
  int v7; // eax
  int ThemeAnimationTransform; // ebx
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rsi
  float v12; // xmm10_4
  __int64 v13; // rcx
  void *Theme; // rax
  unsigned int v15; // esi
  CAnimationEngine *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  int ThemeTimingFunction; // eax
  double v23; // xmm6_8
  double v24; // xmm7_8
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r13d
  int v29; // esi
  int v30; // eax
  int v31; // r14d
  int v32; // r8d
  int v33; // r12d
  int v34; // ecx
  int v35; // eax
  int v36; // esi
  int v37; // r10d
  int v38; // r11d
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // r9d
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  float v46; // xmm0_4
  float v47; // xmm1_4
  int v48; // r8d
  struct IUIAnimationStoryboard2 *v49; // rdx
  __int64 v51; // rdx
  CAnimationEngine *v52; // r13
  int v53; // xmm1_4
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  double v61; // xmm1_8
  double v62; // xmm2_8
  double v63; // xmm0_8
  double v64; // xmm3_8
  double v65; // xmm4_8
  double v66; // xmm5_8
  __m128 v67; // xmm1
  __int64 v68; // rcx
  int v69; // eax
  int v70; // xmm1_4
  __int64 v71; // rcx
  int v72; // eax
  int v73; // r8d
  __m128i v74; // xmm0
  struct IUIAnimationStoryboard2 *v75; // rdx
  unsigned int v76; // eax
  int v77; // ecx
  double v78; // xmm0_8
  double v79; // xmm0_8
  float v80; // xmm0_4
  int v81; // r8d
  struct IUIAnimationStoryboard2 *v82; // rdx
  double v83; // xmm0_8
  double v84; // xmm1_8
  double v85; // xmm2_8
  double v86; // xmm3_8
  __int64 v87; // rcx
  float v88; // xmm1_4
  float v89; // xmm1_4
  double v90; // xmm0_8
  double v91; // xmm0_8
  __int64 j; // rax
  __int64 k; // rax
  int v94; // r9d
  unsigned int v95; // [rsp+28h] [rbp-E0h]
  unsigned int v96; // [rsp+28h] [rbp-E0h]
  float *v97; // [rsp+58h] [rbp-B0h]
  float *v98; // [rsp+58h] [rbp-B0h]
  float *v99; // [rsp+58h] [rbp-B0h]
  float *v100; // [rsp+58h] [rbp-B0h]
  char v101; // [rsp+88h] [rbp-80h]
  char v102; // [rsp+89h] [rbp-7Fh]
  bool v103; // [rsp+8Ah] [rbp-7Eh]
  bool v104; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v105; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v106; // [rsp+90h] [rbp-78h]
  unsigned int v107; // [rsp+94h] [rbp-74h] BYREF
  double v108; // [rsp+98h] [rbp-70h] BYREF
  double v109; // [rsp+A0h] [rbp-68h]
  float *v110; // [rsp+A8h] [rbp-60h]
  int v111; // [rsp+B0h] [rbp-58h] BYREF
  int v112; // [rsp+B4h] [rbp-54h]
  CAnimationEngine *v113; // [rsp+B8h] [rbp-50h]
  double v114; // [rsp+C0h] [rbp-48h] BYREF
  double v115; // [rsp+C8h] [rbp-40h]
  float v116; // [rsp+D0h] [rbp-38h] BYREF
  float v117; // [rsp+D4h] [rbp-34h] BYREF
  int v118; // [rsp+D8h] [rbp-30h]
  int v119; // [rsp+DCh] [rbp-2Ch]
  unsigned int i; // [rsp+E0h] [rbp-28h]
  unsigned int v121; // [rsp+E4h] [rbp-24h] BYREF
  float v122; // [rsp+E8h] [rbp-20h] BYREF
  float v123; // [rsp+ECh] [rbp-1Ch] BYREF
  struct IUIAnimationStoryboard2 *v124; // [rsp+F0h] [rbp-18h] BYREF
  int v125; // [rsp+F8h] [rbp-10h]
  __int64 v126; // [rsp+100h] [rbp-8h]
  int v127; // [rsp+108h] [rbp+0h]
  __int64 v128; // [rsp+110h] [rbp+8h]
  int v129; // [rsp+118h] [rbp+10h]
  __int64 v130; // [rsp+120h] [rbp+18h]
  double v131; // [rsp+128h] [rbp+20h] BYREF
  double v132; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v133; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v134; // [rsp+13Ch] [rbp+34h] BYREF
  float v135; // [rsp+140h] [rbp+38h] BYREF
  double v136; // [rsp+148h] [rbp+40h] BYREF
  double v137; // [rsp+150h] [rbp+48h] BYREF
  double v138[2]; // [rsp+158h] [rbp+50h] BYREF
  int v139; // [rsp+168h] [rbp+60h]
  int v140; // [rsp+178h] [rbp+70h]
  __int64 v141; // [rsp+180h] [rbp+78h] BYREF
  __int64 v142; // [rsp+188h] [rbp+80h]
  __int64 v143; // [rsp+190h] [rbp+88h] BYREF
  __int64 v144; // [rsp+198h] [rbp+90h]
  _QWORD v145[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v146[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  double v147; // [rsp+1C0h] [rbp+B8h] BYREF
  double v148; // [rsp+1C8h] [rbp+C0h]
  double v149; // [rsp+1D0h] [rbp+C8h]
  __int128 v150; // [rsp+1D8h] [rbp+D0h] BYREF
  double v151; // [rsp+1E8h] [rbp+E0h]
  double v152[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v153[4]; // [rsp+210h] [rbp+108h] BYREF

  v105 = *((_DWORD *)a2 + 3);
  v113 = this;
  v4 = *((_QWORD *)this + 1);
  v124 = 0LL;
  v5 = 0LL;
  v110 = 0LL;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v124);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 618;
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v95);
    goto LABEL_57;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v124);
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v124->lpVtbl->SetTag)(
         v124,
         0LL,
         *(unsigned int *)a2);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 622;
    goto LABEL_81;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v124->lpVtbl->SetStoryboardEventHandler)(
         v124,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v95 = 623;
    goto LABEL_81;
  }
  v9 = 0;
  v106 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    goto LABEL_57;
  while ( 1 )
  {
    v141 = 0LL;
    v142 = 0LL;
    v143 = 0LL;
    v144 = 0LL;
    v145[0] = 0LL;
    v145[1] = 0LL;
    v146[0] = 0LL;
    v146[1] = 0LL;
    v10 = *((_QWORD *)a2 + 3);
    v130 = v9;
    v11 = **(_QWORD **)(v10 + 8LL * v9);
    v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
    v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11);
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v141);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 643;
      goto LABEL_163;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v143);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 644;
      goto LABEL_163;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 32LL))(v11, &v117);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 645;
      goto LABEL_163;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 40LL))(v11, &v116);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 646;
      goto LABEL_163;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 48LL))(v11, &v123);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 647;
      goto LABEL_163;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 56LL))(v11, &v135);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 648;
      goto LABEL_163;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v133);
    if ( ThemeAnimationTransform < 0 )
    {
      v96 = 649;
      goto LABEL_163;
    }
    if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 112LL))(v11, &v122) < 0 )
      v122 = 0.0;
    if ( v101 )
      break;
LABEL_15:
    v132 = 0.0;
    v131 = 0.0;
    v103 = 0;
    v12 = fmaxf(0.0099999998, 1.0 - v122);
    v104 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 88LL))(v11, &v134) >= 0 )
    {
      v103 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 96LL))(v11, &v132) >= 0;
      v104 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 104LL))(v11, &v131) >= 0;
    }
    v13 = **(_QWORD **)(*((_QWORD *)a2 + 3) + 8LL * v9);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 128LL))(v13, &v111);
    v136 = 0.0;
    v121 = 0;
    Theme = (void *)CDesktopManager::GetTheme(3LL);
    v15 = v105;
    CAnimationEngine::_CalculateStaggerDelay(v16, Theme, v105, v111, v133, &v136);
    v17 = CDesktopManager::GetTheme(3LL);
    if ( (int)GetThemeAnimationProperty(v17, v105, (unsigned int)v111, 1LL, &v121, 4, &v107) >= 0 )
    {
      for ( i = 0; i < v121; ++i )
      {
        v18 = CDesktopManager::GetTheme(3LL);
        ThemeAnimationTransform = GetThemeAnimationTransform(v18, v15, (unsigned int)v111, v19, 0LL, 0, &v107);
        if ( ThemeAnimationTransform != -2147024662 )
          continue;
        v20 = v107;
        if ( v6 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v6);
        v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
               WPF::g_pProcessHeap,
               v20);
        if ( !v6 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C0u);
          goto LABEL_55;
        }
        v21 = CDesktopManager::GetTheme(3LL);
        ThemeTimingFunction = GetThemeAnimationTransform(v21, v15, (unsigned int)v111, i, v6, v20, &v107);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v96 = 707;
          goto LABEL_149;
        }
        v23 = ((float)((float)*(int *)(v6 + 8) / 1000.0) + v136) * v12;
        v24 = (float)((float)((float)*(int *)(v6 + 12) / 1000.0) * v12);
        v25 = CDesktopManager::GetTheme(4LL);
        if ( (unsigned int)GetThemeTimingFunction(v25, *(unsigned int *)(v6 + 4), 0LL, 0LL, &v107) == -2147024662 )
        {
          v26 = v107;
          if ( v5 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v5);
          v110 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            v26);
          v5 = v110;
          if ( !v110 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2DAu);
            goto LABEL_53;
          }
          v27 = CDesktopManager::GetTheme(4LL);
          ThemeTimingFunction = GetThemeTimingFunction(v27, *(unsigned int *)(v6 + 4), v5, (unsigned int)v26, &v107);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v96 = 732;
            goto LABEL_149;
          }
        }
        v108 = 0.0;
        v109 = 0.0;
        v114 = 0.0;
        v115 = 0.0;
        v150 = 0uLL;
        v151 = 0.0;
        v147 = 0.0;
        v148 = 0.0;
        v149 = 0.0;
        memset_0(v153, 0, sizeof(v153));
        memset_0(v152, 0, sizeof(v152));
        v28 = v142;
        v29 = v141;
        v118 = RoundToNearestInt((float)(v141 + v142) * 0.5);
        v112 = HIDWORD(v142);
        v30 = RoundToNearestInt((float)(HIDWORD(v142) + HIDWORD(v141)) * 0.5);
        v31 = HIDWORD(v144);
        v32 = v30;
        v33 = v144;
        v119 = v30;
        if ( v101 )
          goto LABEL_35;
        v34 = v28 - v29;
        if ( v28 - v29 < 0 )
          v34 = 0;
        v35 = v144 - v143;
        if ( (int)v144 - (int)v143 < 0 )
          v35 = 0;
        if ( v34 == v35 )
        {
LABEL_35:
          v36 = v143 + v118 - v141;
          if ( v101 )
          {
            v37 = HIDWORD(v141);
            v38 = HIDWORD(v143);
            goto LABEL_41;
          }
        }
        else
        {
          v56 = RoundToNearestInt((float)(v144 + v143) * 0.5);
          v32 = v119;
          v36 = v56;
        }
        v37 = HIDWORD(v141);
        v38 = HIDWORD(v143);
        v39 = v112 - HIDWORD(v141);
        if ( v112 - HIDWORD(v141) < 0 )
          v39 = 0;
        v40 = v31 - HIDWORD(v143);
        if ( v31 - HIDWORD(v143) < 0 )
          v40 = 0;
        if ( v39 != v40 )
        {
          v57 = RoundToNearestInt((float)(v31 + HIDWORD(v143)) * 0.5);
          v37 = HIDWORD(v141);
          v41 = v57;
          v38 = HIDWORD(v143);
          goto LABEL_42;
        }
LABEL_41:
        v41 = v38 + v32 - v37;
LABEL_42:
        v42 = *(_DWORD *)(v6 + 16);
        v43 = *(_DWORD *)v6;
        v125 = v42 & 4;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              v58 = v45 - 254;
              if ( v58 )
              {
                v59 = v58 - 2;
                if ( v59 )
                {
                  v60 = v59 - 1;
                  if ( v60 )
                  {
                    if ( v60 == 1 )
                    {
                      if ( (v42 & 2) != 0 )
                      {
                        v61 = *(float *)(v6 + 32);
                        *(double *)&v150 = v61;
                        v62 = *(float *)(v6 + 36);
                        *((double *)&v150 + 1) = v62;
                        v63 = *(float *)(v6 + 40);
                      }
                      else
                      {
                        v150 = 0LL;
                        v62 = 0.0;
                        v63 = 0.0;
                        v61 = 0.0;
                      }
                      v151 = v63;
                      v64 = *(float *)(v6 + 20);
                      v147 = v64;
                      v65 = *(float *)(v6 + 24);
                      v148 = v65;
                      v66 = *(float *)(v6 + 28);
                      v149 = v66;
                      if ( v102 )
                      {
                        *(_QWORD *)&v150 = *(_QWORD *)&v61 ^ _xmm;
                        *((_QWORD *)&v150 + 1) = *(_QWORD *)&v62 ^ _xmm;
                        *(_QWORD *)&v151 = *(_QWORD *)&v63 ^ _xmm;
                        *(_QWORD *)&v147 = *(_QWORD *)&v64 ^ _xmm;
                        *(_QWORD *)&v148 = *(_QWORD *)&v65 ^ _xmm;
                        *(_QWORD *)&v149 = *(_QWORD *)&v66 ^ _xmm;
                      }
                      v67 = (__m128)*(unsigned int *)(v6 + 48);
                      v5 = v110;
                      v9 = v106;
                      v68 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v130);
                      v98 = v110;
                      v139 = *(_DWORD *)(v6 + 52);
                      v69 = v139;
                      *(_QWORD *)(v68 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 44), v67).m128_u64[0];
                      *(_DWORD *)(v68 + 84) = v69;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v113,
                                              *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                              *(_DWORD *)a2,
                                              v106,
                                              3,
                                              v23,
                                              v24,
                                              (double *)&v150,
                                              &v147,
                                              3u,
                                              v98,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v96 = 1102;
                        goto LABEL_149;
                      }
                    }
                    else
                    {
                      v5 = v110;
                      v9 = v106;
                    }
                  }
                  else
                  {
                    if ( (v42 & 1) != 0 )
                    {
                      v151 = v117;
                      *(double *)&v150 = (double)(v28 - (int)v141);
                      *((double *)&v150 + 1) = (double)(v112 - v37);
                      v149 = v116;
                      v147 = (double)(v33 - (int)v143);
                      v148 = (double)(v31 - v38);
                    }
                    else
                    {
                      if ( (v42 & 2) != 0 )
                      {
                        *(double *)&v150 = *(float *)(v6 + 32);
                        *((double *)&v150 + 1) = *(float *)(v6 + 36);
                        v151 = *(float *)(v6 + 40);
                      }
                      else
                      {
                        v150 = _xmm;
                        v151 = DOUBLE_1_0;
                      }
                      v147 = *(float *)(v6 + 20);
                      v148 = *(float *)(v6 + 24);
                      v149 = *(float *)(v6 + 28);
                    }
                    if ( v125 )
                    {
                      v70 = *(_DWORD *)(v6 + 48);
                      LODWORD(v126) = *(_DWORD *)(v6 + 44);
                      v127 = *(_DWORD *)(v6 + 52);
                      HIDWORD(v126) = v70;
                    }
                    else
                    {
                      v127 = 0;
                      v126 = 0x3F0000003F000000LL;
                    }
                    v5 = v110;
                    v9 = v106;
                    v71 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v130);
                    v72 = v127;
                    v99 = v110;
                    *(_QWORD *)(v71 + 64) = v126;
                    *(_DWORD *)(v71 + 72) = v72;
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v113,
                                            *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                            *(_DWORD *)a2,
                                            v106,
                                            4,
                                            v23,
                                            v24,
                                            (double *)&v150,
                                            &v147,
                                            3u,
                                            v99,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v96 = 1059;
                      goto LABEL_149;
                    }
                  }
                }
                else
                {
                  v151 = 0.0;
                  v150 = 0LL;
                  if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
                  {
                    v5 = v110;
                    v9 = v106;
                    v73 = *(_DWORD *)a2;
                    v147 = (double)(v36 - v118);
                    v74 = _mm_cvtsi32_si128(v41 - v119);
                    v75 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                    *(_QWORD *)&v148 = *(_OWORD *)&_mm_cvtepi32_pd(v74);
                    v149 = (float)(v116 - v117);
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v113,
                                            v75,
                                            v73,
                                            v106,
                                            0,
                                            v23,
                                            v24,
                                            (double *)&v150,
                                            &v147,
                                            3u,
                                            v110,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v96 = 953;
                      goto LABEL_149;
                    }
                  }
                  else
                  {
                    v76 = 1;
                    v77 = 0;
                    if ( (*(_DWORD *)(v6 + 16) & 0x1000) != 0 )
                    {
                      v76 = 2;
                      v78 = (double)(((int)v143 + v33 - v28 - (int)v141) / 2);
                    }
                    else
                    {
                      v78 = *(float *)(v6 + 20);
                    }
                    v147 = v78;
                    if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
                    {
                      v76 = 3;
                      v79 = (double)((v38 + v31 - v112 - v37) / 2);
                      v77 = 1;
                    }
                    else
                    {
                      v79 = *(float *)(v6 + 24);
                    }
                    v148 = v79;
                    if ( (*(_DWORD *)(v6 + 16) & 0x4000) != 0 )
                    {
                      v76 = 4;
                      v80 = v116 - v117;
                      v77 = 2;
                    }
                    else
                    {
                      v80 = *(float *)(v6 + 28);
                    }
                    v5 = v110;
                    v9 = v106;
                    v81 = *(_DWORD *)a2;
                    v82 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                    v149 = v80;
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v113,
                                            v82,
                                            v81,
                                            v106,
                                            v77,
                                            v23,
                                            v24,
                                            (double *)&v150,
                                            &v147,
                                            3u,
                                            v110,
                                            v76,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v96 = 1005;
                      goto LABEL_149;
                    }
                  }
                }
              }
              else
              {
                if ( (v42 & 2) != 0 )
                {
                  v83 = *(float *)(v6 + 28);
                  v108 = v83;
                  v84 = *(float *)(v6 + 32);
                  v109 = v84;
                }
                else
                {
                  v108 = 0.0;
                  v83 = 0.0;
                  v109 = 0.0;
                  v84 = 0.0;
                }
                v85 = *(float *)(v6 + 20);
                v114 = v85;
                v86 = *(float *)(v6 + 24);
                v115 = v86;
                if ( v102 )
                {
                  *(_QWORD *)&v108 = *(_QWORD *)&v83 ^ _xmm;
                  *(_QWORD *)&v109 = *(_QWORD *)&v84 ^ _xmm;
                  *(_QWORD *)&v114 = *(_QWORD *)&v85 ^ _xmm;
                  *(_QWORD *)&v115 = *(_QWORD *)&v86 ^ _xmm;
                }
                v140 = 0;
                v5 = v110;
                v9 = v106;
                v87 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v130);
                v100 = v110;
                *(_QWORD *)(v87 + 76) = _mm_unpacklo_ps(
                                          (__m128)*(unsigned int *)(v6 + 36),
                                          (__m128)*(unsigned int *)(v6 + 40)).m128_u64[0];
                *(_DWORD *)(v87 + 84) = 0;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v113,
                                        *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                        *(_DWORD *)a2,
                                        v106,
                                        3,
                                        v23,
                                        v24,
                                        &v108,
                                        &v114,
                                        2u,
                                        v100,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v96 = 923;
                  goto LABEL_149;
                }
              }
            }
            else
            {
              if ( (v42 & 1) != 0 )
              {
                v46 = v123;
                v47 = v135;
              }
              else
              {
                if ( (v42 & 2) != 0 )
                  v46 = *(float *)(v6 + 24);
                else
                  v46 = v123;
                v47 = *(float *)(v6 + 20);
              }
              v5 = v110;
              v9 = v106;
              v48 = *(_DWORD *)a2;
              v49 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
              v137 = v47;
              v138[0] = v46;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v113,
                                      v49,
                                      v48,
                                      v106,
                                      5,
                                      v23,
                                      v24,
                                      v138,
                                      &v137,
                                      1u,
                                      v110,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v96 = 1124;
                goto LABEL_149;
              }
            }
          }
          else
          {
            if ( (v42 & 1) != 0 )
            {
              v108 = 1.0;
              v109 = 1.0;
              if ( v28 == (_DWORD)v141 )
                v88 = FLOAT_1_0;
              else
                v88 = (float)(v33 - v143) / (float)(v28 - v141);
              v114 = v88;
              if ( v112 == v37 )
                v89 = FLOAT_1_0;
              else
                v89 = (float)(v31 - v38) / (float)(v112 - v37);
              v115 = v89;
            }
            else
            {
              if ( (v42 & 2) != 0 )
              {
                v108 = *(float *)(v6 + 28);
                v109 = *(float *)(v6 + 32);
              }
              else
              {
                v108 = 1.0;
                v109 = 1.0;
              }
              v114 = *(float *)(v6 + 20);
              v115 = *(float *)(v6 + 24);
            }
            v129 = 0;
            if ( v125 )
            {
              v53 = *(_DWORD *)(v6 + 40);
              LODWORD(v128) = *(_DWORD *)(v6 + 36);
              HIDWORD(v128) = v53;
            }
            else
            {
              v128 = 0x3F0000003F000000LL;
            }
            v5 = v110;
            v9 = v106;
            v54 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v130);
            v55 = v129;
            v97 = v110;
            *(_QWORD *)(v54 + 64) = v128;
            *(_DWORD *)(v54 + 72) = v55;
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v113,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v106,
                                    4,
                                    v23,
                                    v24,
                                    &v108,
                                    &v114,
                                    2u,
                                    v97,
                                    0,
                                    0LL,
                                    0LL,
                                    0);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v96 = 885;
              goto LABEL_149;
            }
          }
        }
        else
        {
          if ( (v42 & 1) != 0 )
          {
            v108 = 0.0;
            v109 = 0.0;
            v114 = (double)(v36 - v118);
            v115 = (double)(v41 - v119);
          }
          v51 = v134;
          if ( v103 )
          {
            v90 = v132 + *(&v108 + v134);
            v132 = 0.0;
            *(&v108 + v134) = v90;
          }
          if ( v104 )
          {
            v91 = *(&v114 + v51) + v131;
            v131 = *(&v114 + v51);
            *(&v114 + v51) = v91;
          }
          v5 = v110;
          v52 = v113;
          v9 = v106;
          ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                  (__int64)v113,
                                  *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                  *(_DWORD *)a2,
                                  v106,
                                  0,
                                  v23,
                                  v24,
                                  &v108,
                                  &v114,
                                  2u,
                                  v110,
                                  0,
                                  (double *)((unsigned __int64)&v132 & -(__int64)v103),
                                  (double *)((unsigned __int64)&v131 & -(__int64)v104),
                                  v51);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v96 = 815;
            goto LABEL_149;
          }
          if ( v101 )
          {
            for ( j = 0LL; j < 4; ++j )
              v153[j] = (double)*((int *)v145 + j);
            for ( k = 0LL; k < 4; ++k )
              v152[k] = (double)*((int *)v146 + k);
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v52,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v106,
                                    6,
                                    v23,
                                    v24,
                                    v153,
                                    v152,
                                    4u,
                                    v5,
                                    0,
                                    0LL,
                                    0LL,
                                    0);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v96 = 836;
              goto LABEL_149;
            }
          }
        }
        v15 = v105;
      }
    }
    v106 = ++v9;
    if ( v9 >= *((_DWORD *)a2 + 1) )
      goto LABEL_53;
  }
  ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 72LL))(v11, v145);
  if ( ThemeAnimationTransform < 0 )
  {
    v96 = 656;
LABEL_163:
    v94 = ThemeAnimationTransform;
    goto LABEL_164;
  }
  ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 80LL))(v11, v146);
  ThemeAnimationTransform = ThemeTimingFunction;
  if ( ThemeTimingFunction >= 0 )
    goto LABEL_15;
  v96 = 657;
LABEL_149:
  v94 = ThemeTimingFunction;
LABEL_164:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, v96);
LABEL_53:
  if ( v6 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
LABEL_55:
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
LABEL_57:
  if ( v124 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v124->lpVtbl->Release)(v124);
  return (unsigned int)ThemeAnimationTransform;
}

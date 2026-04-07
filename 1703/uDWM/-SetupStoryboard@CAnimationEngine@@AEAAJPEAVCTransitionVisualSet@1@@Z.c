/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180010DF4
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800122C4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x180010890 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180010BA0 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180012BB4 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013014 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001307C (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  int v9; // eax
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  int ThemeTimingFunction; // eax
  float v14; // xmm10_4
  __int64 v15; // rcx
  void *Theme; // rax
  unsigned int v17; // esi
  CAnimationEngine *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rax
  double v24; // xmm6_8
  double v25; // xmm7_8
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r13d
  int v30; // esi
  int v31; // eax
  int v32; // r14d
  int v33; // r8d
  int v34; // r15d
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // r10d
  int v40; // r11d
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  int v45; // r9d
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  double v52; // xmm1_8
  double v53; // xmm2_8
  double v54; // xmm0_8
  double v55; // xmm3_8
  double v56; // xmm4_8
  double v57; // xmm5_8
  __m128 v58; // xmm1
  __int64 v59; // rcx
  int v60; // eax
  int v61; // xmm1_4
  __int64 v62; // rcx
  int v63; // eax
  int v64; // r8d
  __m128i v65; // xmm0
  struct IUIAnimationStoryboard2 *v66; // rdx
  int v67; // ecx
  unsigned int v68; // eax
  double v69; // xmm0_8
  double v70; // xmm0_8
  float v71; // xmm0_4
  int v72; // r8d
  struct IUIAnimationStoryboard2 *v73; // rdx
  __int64 v74; // rcx
  float v75; // xmm0_4
  float v76; // xmm1_4
  int v77; // r8d
  struct IUIAnimationStoryboard2 *v78; // rdx
  float v79; // xmm1_4
  float v80; // xmm1_4
  int v81; // xmm1_4
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  double v85; // xmm0_8
  double v86; // xmm0_8
  CAnimationEngine *v87; // r13
  __int64 j; // rax
  __int64 k; // rax
  int v90; // r9d
  unsigned int v92; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+28h] [rbp-E0h]
  float *v94; // [rsp+58h] [rbp-B0h]
  float *v95; // [rsp+58h] [rbp-B0h]
  float *v96; // [rsp+58h] [rbp-B0h]
  float *v97; // [rsp+58h] [rbp-B0h]
  char v98; // [rsp+88h] [rbp-80h]
  char v99; // [rsp+89h] [rbp-7Fh]
  bool v100; // [rsp+8Ah] [rbp-7Eh]
  bool v101; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v102; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v103; // [rsp+90h] [rbp-78h]
  unsigned int v104; // [rsp+94h] [rbp-74h] BYREF
  float *v105; // [rsp+98h] [rbp-70h]
  __m128 v106; // [rsp+A0h] [rbp-68h] BYREF
  int v107; // [rsp+B0h] [rbp-58h] BYREF
  int v108; // [rsp+B4h] [rbp-54h]
  CAnimationEngine *v109; // [rsp+B8h] [rbp-50h]
  __m128 v110; // [rsp+C0h] [rbp-48h] BYREF
  float v111; // [rsp+D0h] [rbp-38h] BYREF
  float v112; // [rsp+D4h] [rbp-34h] BYREF
  int v113; // [rsp+D8h] [rbp-30h]
  int v114; // [rsp+DCh] [rbp-2Ch]
  unsigned int i; // [rsp+E0h] [rbp-28h]
  unsigned int v116; // [rsp+E4h] [rbp-24h] BYREF
  float v117; // [rsp+E8h] [rbp-20h] BYREF
  float v118; // [rsp+ECh] [rbp-1Ch] BYREF
  struct IUIAnimationStoryboard2 *v119; // [rsp+F0h] [rbp-18h] BYREF
  int v120; // [rsp+F8h] [rbp-10h]
  __int64 v121; // [rsp+100h] [rbp-8h]
  int v122; // [rsp+108h] [rbp+0h]
  __int64 v123; // [rsp+110h] [rbp+8h]
  int v124; // [rsp+118h] [rbp+10h]
  __int64 v125; // [rsp+120h] [rbp+18h]
  double v126; // [rsp+128h] [rbp+20h] BYREF
  double v127; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v128; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v129; // [rsp+13Ch] [rbp+34h] BYREF
  float v130; // [rsp+140h] [rbp+38h] BYREF
  double v131; // [rsp+148h] [rbp+40h] BYREF
  double v132; // [rsp+150h] [rbp+48h] BYREF
  double v133[2]; // [rsp+158h] [rbp+50h] BYREF
  int v134; // [rsp+168h] [rbp+60h]
  int v135; // [rsp+178h] [rbp+70h]
  __int64 v136; // [rsp+180h] [rbp+78h] BYREF
  __int64 v137; // [rsp+188h] [rbp+80h]
  __int64 v138; // [rsp+190h] [rbp+88h] BYREF
  __int64 v139; // [rsp+198h] [rbp+90h]
  _QWORD v140[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v141[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  double v142; // [rsp+1C0h] [rbp+B8h] BYREF
  double v143; // [rsp+1C8h] [rbp+C0h]
  double v144; // [rsp+1D0h] [rbp+C8h]
  __int128 v145; // [rsp+1D8h] [rbp+D0h] BYREF
  double v146; // [rsp+1E8h] [rbp+E0h]
  double v147[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v148[4]; // [rsp+210h] [rbp+108h] BYREF

  v102 = *((_DWORD *)a2 + 3);
  v109 = this;
  v4 = *((_QWORD *)this + 1);
  v119 = 0LL;
  v5 = 0LL;
  v105 = 0LL;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v119);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v92 = 626;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v92);
    goto LABEL_162;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v119);
  v9 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v119->lpVtbl->SetTag)(
         v119,
         0LL,
         *(unsigned int *)a2);
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x276u);
    goto LABEL_162;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v119->lpVtbl->SetStoryboardEventHandler)(
         v119,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v92 = 631;
    goto LABEL_3;
  }
  v10 = 0;
  v103 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    goto LABEL_162;
  while ( 1 )
  {
    v136 = 0LL;
    v137 = 0LL;
    v138 = 0LL;
    v139 = 0LL;
    v140[0] = 0LL;
    v140[1] = 0LL;
    v141[0] = 0LL;
    v141[1] = 0LL;
    v11 = *((_QWORD *)a2 + 3);
    v125 = v10;
    v12 = **(_QWORD **)(v11 + 8LL * v10);
    v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 256LL))(v12);
    v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 136LL))(v12);
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, &v136);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 651;
      goto LABEL_156;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v138);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 652;
      goto LABEL_156;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 32LL))(v12, &v112);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 653;
      goto LABEL_156;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 40LL))(v12, &v111);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 654;
      goto LABEL_156;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 48LL))(v12, &v118);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 655;
      goto LABEL_156;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 56LL))(v12, &v130);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 656;
      goto LABEL_156;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 64LL))(v12, &v128);
    if ( ThemeAnimationTransform < 0 )
    {
      v93 = 657;
      goto LABEL_156;
    }
    if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 112LL))(v12, &v117) < 0 )
      v117 = 0.0;
    if ( v98 )
      break;
LABEL_21:
    v127 = 0.0;
    v126 = 0.0;
    v100 = 0;
    v14 = fmaxf(0.0099999998, 1.0 - v117);
    v101 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 88LL))(v12, &v129) >= 0 )
    {
      v100 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v12 + 96LL))(v12, &v127) >= 0;
      v101 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v12 + 104LL))(v12, &v126) >= 0;
    }
    v15 = **(_QWORD **)(*((_QWORD *)a2 + 3) + 8LL * v10);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 128LL))(v15, &v107);
    v131 = 0.0;
    v116 = 0;
    Theme = (void *)CDesktopManager::GetTheme(3LL);
    v17 = v102;
    CAnimationEngine::_CalculateStaggerDelay(v18, Theme, v102, v107, v128, &v131);
    v19 = CDesktopManager::GetTheme(3LL);
    if ( (int)GetThemeAnimationProperty(v19, v102, (unsigned int)v107, 1LL, &v116, 4, &v104) >= 0 )
    {
      for ( i = 0; i < v116; ++i )
      {
        v20 = CDesktopManager::GetTheme(3LL);
        ThemeAnimationTransform = GetThemeAnimationTransform(v20, v17, (unsigned int)v107, v21, 0LL, 0, &v104);
        if ( ThemeAnimationTransform != -2147024662 )
          continue;
        v22 = v104;
        if ( v6 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v6);
        v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
               WPF::g_pProcessHeap,
               v22);
        if ( !v6 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2C8u);
          goto LABEL_160;
        }
        v23 = CDesktopManager::GetTheme(3LL);
        ThemeTimingFunction = GetThemeAnimationTransform(v23, v17, (unsigned int)v107, i, v6, v22, &v104);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v93 = 715;
          goto LABEL_142;
        }
        v24 = ((float)((float)*(int *)(v6 + 8) / 1000.0) + v131) * v14;
        v25 = (float)((float)((float)*(int *)(v6 + 12) / 1000.0) * v14);
        v26 = CDesktopManager::GetTheme(4LL);
        if ( (unsigned int)GetThemeTimingFunction(v26, *(unsigned int *)(v6 + 4), 0LL, 0LL, &v104) == -2147024662 )
        {
          v27 = v104;
          if ( v5 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v5);
          v105 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            v27);
          v5 = v105;
          if ( !v105 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2E2u);
            goto LABEL_158;
          }
          v28 = CDesktopManager::GetTheme(4LL);
          ThemeTimingFunction = GetThemeTimingFunction(v28, *(unsigned int *)(v6 + 4), v5, (unsigned int)v27, &v104);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v93 = 740;
            goto LABEL_142;
          }
        }
        v106 = 0uLL;
        v110 = 0uLL;
        v145 = 0uLL;
        v146 = 0.0;
        v142 = 0.0;
        v143 = 0.0;
        v144 = 0.0;
        memset_0(v148, 0, sizeof(v148));
        memset_0(v147, 0, sizeof(v147));
        v29 = v137;
        v30 = v136;
        v113 = RoundToNearestInt((float)(v136 + v137) * 0.5);
        v108 = HIDWORD(v137);
        v31 = RoundToNearestInt((float)(HIDWORD(v137) + HIDWORD(v136)) * 0.5);
        v32 = HIDWORD(v139);
        v33 = v31;
        v34 = v139;
        v114 = v31;
        if ( v98 )
          goto LABEL_42;
        v35 = v29 - v30;
        if ( v29 - v30 < 0 )
          v35 = 0;
        v36 = v139 - v138;
        if ( (int)v139 - (int)v138 < 0 )
          v36 = 0;
        if ( v35 == v36 )
        {
LABEL_42:
          v38 = v113 + v138 - v136;
          if ( v98 )
          {
            v39 = HIDWORD(v136);
            v40 = HIDWORD(v138);
LABEL_50:
            v44 = v33 + v40 - v39;
            goto LABEL_51;
          }
        }
        else
        {
          v37 = RoundToNearestInt((float)(v139 + v138) * 0.5);
          v33 = v114;
          v38 = v37;
        }
        v39 = HIDWORD(v136);
        v40 = HIDWORD(v138);
        v41 = v108 - HIDWORD(v136);
        if ( v108 - HIDWORD(v136) < 0 )
          v41 = 0;
        v42 = v32 - HIDWORD(v138);
        if ( v32 - HIDWORD(v138) < 0 )
          v42 = 0;
        if ( v41 == v42 )
          goto LABEL_50;
        v43 = RoundToNearestInt((float)(v32 + HIDWORD(v138)) * 0.5);
        v39 = HIDWORD(v136);
        v44 = v43;
        v40 = HIDWORD(v138);
LABEL_51:
        v45 = *(_DWORD *)(v6 + 16);
        v46 = *(_DWORD *)v6;
        v120 = v45 & 4;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              v49 = v48 - 254;
              if ( v49 )
              {
                v50 = v49 - 2;
                if ( v50 )
                {
                  v51 = v50 - 1;
                  if ( v51 )
                  {
                    if ( v51 == 1 )
                    {
                      if ( (v45 & 2) != 0 )
                      {
                        v52 = *(float *)(v6 + 32);
                        *(double *)&v145 = v52;
                        v53 = *(float *)(v6 + 36);
                        *((double *)&v145 + 1) = v53;
                        v54 = *(float *)(v6 + 40);
                      }
                      else
                      {
                        v145 = 0LL;
                        v53 = 0.0;
                        v54 = 0.0;
                        v52 = 0.0;
                      }
                      v146 = v54;
                      v55 = *(float *)(v6 + 20);
                      v142 = v55;
                      v56 = *(float *)(v6 + 24);
                      v143 = v56;
                      v57 = *(float *)(v6 + 28);
                      v144 = v57;
                      if ( v99 )
                      {
                        *(_QWORD *)&v145 = *(_QWORD *)&v52 ^ _xmm;
                        *((_QWORD *)&v145 + 1) = *(_QWORD *)&v53 ^ _xmm;
                        *(_QWORD *)&v146 = *(_QWORD *)&v54 ^ _xmm;
                        *(_QWORD *)&v142 = *(_QWORD *)&v55 ^ _xmm;
                        *(_QWORD *)&v143 = *(_QWORD *)&v56 ^ _xmm;
                        *(_QWORD *)&v144 = *(_QWORD *)&v57 ^ _xmm;
                      }
                      v58 = (__m128)*(unsigned int *)(v6 + 48);
                      v5 = v105;
                      v10 = v103;
                      v59 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v125);
                      v94 = v105;
                      v134 = *(_DWORD *)(v6 + 52);
                      v60 = v134;
                      *(_QWORD *)(v59 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 44), v58).m128_u64[0];
                      *(_DWORD *)(v59 + 84) = v60;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v109,
                                              *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                              *(_DWORD *)a2,
                                              v103,
                                              3,
                                              v24,
                                              v25,
                                              (double *)&v145,
                                              &v142,
                                              3u,
                                              v94,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v93 = 1110;
                        goto LABEL_142;
                      }
                    }
                    else
                    {
                      v5 = v105;
                      v10 = v103;
                    }
                  }
                  else
                  {
                    if ( (v45 & 1) != 0 )
                    {
                      v146 = v112;
                      *(double *)&v145 = (double)(v29 - (int)v136);
                      *((double *)&v145 + 1) = (double)(v108 - v39);
                      v144 = v111;
                      v142 = (double)(v34 - (int)v138);
                      v143 = (double)(v32 - v40);
                    }
                    else
                    {
                      if ( (v45 & 2) != 0 )
                      {
                        *(double *)&v145 = *(float *)(v6 + 32);
                        *((double *)&v145 + 1) = *(float *)(v6 + 36);
                        v146 = *(float *)(v6 + 40);
                      }
                      else
                      {
                        v145 = _xmm;
                        v146 = DOUBLE_1_0;
                      }
                      v142 = *(float *)(v6 + 20);
                      v143 = *(float *)(v6 + 24);
                      v144 = *(float *)(v6 + 28);
                    }
                    if ( v120 )
                    {
                      v61 = *(_DWORD *)(v6 + 48);
                      LODWORD(v121) = *(_DWORD *)(v6 + 44);
                      v122 = *(_DWORD *)(v6 + 52);
                      HIDWORD(v121) = v61;
                    }
                    else
                    {
                      v122 = 0;
                      v121 = 0x3F0000003F000000LL;
                    }
                    v5 = v105;
                    v10 = v103;
                    v62 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v125);
                    v63 = v122;
                    v95 = v105;
                    *(_QWORD *)(v62 + 64) = v121;
                    *(_DWORD *)(v62 + 72) = v63;
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v109,
                                            *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                            *(_DWORD *)a2,
                                            v103,
                                            4,
                                            v24,
                                            v25,
                                            (double *)&v145,
                                            &v142,
                                            3u,
                                            v95,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v93 = 1067;
                      goto LABEL_142;
                    }
                  }
                }
                else
                {
                  v146 = 0.0;
                  v145 = 0LL;
                  if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
                  {
                    v5 = v105;
                    v10 = v103;
                    v64 = *(_DWORD *)a2;
                    v142 = (double)(v38 - v113);
                    v65 = _mm_cvtsi32_si128(v44 - v114);
                    v66 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                    *(_QWORD *)&v143 = *(_OWORD *)&_mm_cvtepi32_pd(v65);
                    v144 = (float)(v111 - v112);
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v109,
                                            v66,
                                            v64,
                                            v103,
                                            0,
                                            v24,
                                            v25,
                                            (double *)&v145,
                                            &v142,
                                            3u,
                                            v105,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v93 = 961;
                      goto LABEL_142;
                    }
                  }
                  else
                  {
                    v67 = 0;
                    v68 = 1;
                    if ( (*(_DWORD *)(v6 + 16) & 0x1000) != 0 )
                    {
                      v68 = 2;
                      v69 = (double)(((int)v138 + v34 - v29 - (int)v136) / 2);
                    }
                    else
                    {
                      v69 = *(float *)(v6 + 20);
                    }
                    v142 = v69;
                    if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
                    {
                      v68 = 3;
                      v70 = (double)((v40 + v32 - v108 - v39) / 2);
                      v67 = 1;
                    }
                    else
                    {
                      v70 = *(float *)(v6 + 24);
                    }
                    v143 = v70;
                    if ( (*(_DWORD *)(v6 + 16) & 0x4000) != 0 )
                    {
                      v68 = 4;
                      v71 = v111 - v112;
                      v67 = 2;
                    }
                    else
                    {
                      v71 = *(float *)(v6 + 28);
                    }
                    v5 = v105;
                    v10 = v103;
                    v72 = *(_DWORD *)a2;
                    v73 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                    v144 = v71;
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            (__int64)v109,
                                            v73,
                                            v72,
                                            v103,
                                            v67,
                                            v24,
                                            v25,
                                            (double *)&v145,
                                            &v142,
                                            3u,
                                            v105,
                                            v68,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v93 = 1013;
                      goto LABEL_142;
                    }
                  }
                }
              }
              else
              {
                if ( (v45 & 2) != 0 )
                {
                  *(double *)v106.m128_u64 = *(float *)(v6 + 28);
                  *(double *)&v106.m128_u64[1] = *(float *)(v6 + 32);
                }
                else
                {
                  v106 = 0uLL;
                }
                *(double *)v110.m128_u64 = *(float *)(v6 + 20);
                *(double *)&v110.m128_u64[1] = *(float *)(v6 + 24);
                if ( v99 )
                {
                  v106 = _mm_xor_ps(v106, (__m128)_xmm);
                  v110 = _mm_xor_ps(v110, (__m128)_xmm);
                }
                v135 = 0;
                v5 = v105;
                v10 = v103;
                v74 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v125);
                v96 = v105;
                *(_QWORD *)(v74 + 76) = _mm_unpacklo_ps(
                                          (__m128)*(unsigned int *)(v6 + 36),
                                          (__m128)*(unsigned int *)(v6 + 40)).m128_u64[0];
                *(_DWORD *)(v74 + 84) = 0;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v109,
                                        *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                        *(_DWORD *)a2,
                                        v103,
                                        3,
                                        v24,
                                        v25,
                                        (double *)v106.m128_u64,
                                        (double *)v110.m128_u64,
                                        2u,
                                        v96,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v93 = 931;
                  goto LABEL_142;
                }
              }
            }
            else
            {
              if ( (v45 & 1) != 0 )
              {
                v75 = v118;
                v76 = v130;
              }
              else
              {
                if ( (v45 & 2) != 0 )
                  v75 = *(float *)(v6 + 24);
                else
                  v75 = v118;
                v76 = *(float *)(v6 + 20);
              }
              v5 = v105;
              v10 = v103;
              v77 = *(_DWORD *)a2;
              v78 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
              v132 = v76;
              v133[0] = v75;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v109,
                                      v78,
                                      v77,
                                      v103,
                                      5,
                                      v24,
                                      v25,
                                      v133,
                                      &v132,
                                      1u,
                                      v105,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v93 = 1132;
                goto LABEL_142;
              }
            }
          }
          else
          {
            if ( (v45 & 1) != 0 )
            {
              v106.m128_u64[0] = 0x3FF0000000000000LL;
              v106.m128_u64[1] = 0x3FF0000000000000LL;
              if ( v29 == (_DWORD)v136 )
                v79 = FLOAT_1_0;
              else
                v79 = (float)(v34 - v138) / (float)(v29 - v136);
              *(double *)v110.m128_u64 = v79;
              if ( v108 == v39 )
                v80 = FLOAT_1_0;
              else
                v80 = (float)(v32 - v40) / (float)(v108 - v39);
              *(double *)&v110.m128_u64[1] = v80;
            }
            else
            {
              if ( (v45 & 2) != 0 )
              {
                *(double *)v106.m128_u64 = *(float *)(v6 + 28);
                *(double *)&v106.m128_u64[1] = *(float *)(v6 + 32);
              }
              else
              {
                v106.m128_u64[0] = 0x3FF0000000000000LL;
                v106.m128_u64[1] = 0x3FF0000000000000LL;
              }
              *(double *)v110.m128_u64 = *(float *)(v6 + 20);
              *(double *)&v110.m128_u64[1] = *(float *)(v6 + 24);
            }
            v124 = 0;
            if ( v120 )
            {
              v81 = *(_DWORD *)(v6 + 40);
              LODWORD(v123) = *(_DWORD *)(v6 + 36);
              HIDWORD(v123) = v81;
            }
            else
            {
              v123 = 0x3F0000003F000000LL;
            }
            v5 = v105;
            v10 = v103;
            v82 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v125);
            v83 = v124;
            v97 = v105;
            *(_QWORD *)(v82 + 64) = v123;
            *(_DWORD *)(v82 + 72) = v83;
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v109,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v103,
                                    4,
                                    v24,
                                    v25,
                                    (double *)v106.m128_u64,
                                    (double *)v110.m128_u64,
                                    2u,
                                    v97,
                                    0,
                                    0LL,
                                    0LL,
                                    0);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v93 = 893;
              goto LABEL_142;
            }
          }
        }
        else
        {
          if ( (v45 & 1) != 0 )
          {
            v106 = 0uLL;
            *(double *)v110.m128_u64 = (double)(v38 - v113);
            *(double *)&v110.m128_u64[1] = (double)(v44 - v114);
          }
          v84 = v129;
          if ( v100 )
          {
            v85 = v127 + *(double *)&v106.m128_u64[v129];
            v127 = 0.0;
            *(double *)&v106.m128_u64[v129] = v85;
          }
          if ( v101 )
          {
            v86 = *(double *)&v110.m128_u64[v84] + v126;
            v126 = *(double *)&v110.m128_u64[v84];
            *(double *)&v110.m128_u64[v84] = v86;
          }
          v5 = v105;
          v87 = v109;
          v10 = v103;
          ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                  (__int64)v109,
                                  *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                  *(_DWORD *)a2,
                                  v103,
                                  0,
                                  v24,
                                  v25,
                                  (double *)v106.m128_u64,
                                  (double *)v110.m128_u64,
                                  2u,
                                  v105,
                                  0,
                                  (double *)((unsigned __int64)&v127 & -(__int64)v100),
                                  (double *)((unsigned __int64)&v126 & -(__int64)v101),
                                  v84);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v93 = 823;
            goto LABEL_142;
          }
          if ( v98 )
          {
            for ( j = 0LL; j < 4; ++j )
              v148[j] = (double)*((int *)v140 + j);
            for ( k = 0LL; k < 4; ++k )
              v147[k] = (double)*((int *)v141 + k);
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v87,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v103,
                                    6,
                                    v24,
                                    v25,
                                    v148,
                                    v147,
                                    4u,
                                    v5,
                                    0,
                                    0LL,
                                    0LL,
                                    0);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v93 = 844;
              goto LABEL_142;
            }
          }
        }
        v17 = v102;
      }
    }
    v103 = ++v10;
    if ( v10 >= *((_DWORD *)a2 + 1) )
      goto LABEL_158;
  }
  ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 72LL))(v12, v140);
  if ( ThemeAnimationTransform < 0 )
  {
    v93 = 664;
LABEL_156:
    v90 = ThemeAnimationTransform;
    goto LABEL_157;
  }
  ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 80LL))(v12, v141);
  ThemeAnimationTransform = ThemeTimingFunction;
  if ( ThemeTimingFunction >= 0 )
    goto LABEL_21;
  v93 = 665;
LABEL_142:
  v90 = ThemeTimingFunction;
LABEL_157:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, v93);
LABEL_158:
  if ( v6 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
LABEL_160:
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
LABEL_162:
  if ( v119 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v119->lpVtbl->Release)(v119);
  return (unsigned int)ThemeAnimationTransform;
}

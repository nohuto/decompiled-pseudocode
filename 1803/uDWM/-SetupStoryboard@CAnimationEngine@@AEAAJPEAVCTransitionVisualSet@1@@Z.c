/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000E308
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18000EE90 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18000DDBC (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18000E0D4 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18000F264 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000F5B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180010A44 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v4; // rcx
  unsigned int *v5; // rdi
  struct TA_TIMINGFUNCTION *v6; // r14
  int v7; // eax
  unsigned int ThemeAnimationTransform; // ebx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  int ThemeTimingFunction; // eax
  float v13; // xmm10_4
  __int64 v14; // rcx
  void *Theme; // rax
  unsigned int v16; // esi
  CAnimationEngine *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // rbx
  void *(__fastcall *v22)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned int *v23; // rax
  __int64 v24; // rax
  double v25; // xmm6_8
  double v26; // xmm7_8
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  void *(__fastcall *v29)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct TA_TIMINGFUNCTION *v30; // rax
  __int64 v31; // rax
  int v32; // r13d
  int v33; // esi
  int v34; // r11d
  int v35; // r14d
  int v36; // r15d
  int v37; // edx
  int v38; // eax
  int v39; // esi
  int v40; // r8d
  int v41; // r10d
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  unsigned int v45; // r9d
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  float v49; // xmm0_4
  float v50; // xmm1_4
  int v51; // r8d
  struct IUIAnimationStoryboard2 *v52; // rdx
  __int64 v54; // rdx
  CAnimationEngine *v55; // r13
  unsigned int v56; // xmm1_4
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  double v64; // xmm1_8
  double v65; // xmm2_8
  double v66; // xmm0_8
  double v67; // xmm3_8
  double v68; // xmm4_8
  double v69; // xmm5_8
  __int64 v70; // rcx
  unsigned int v71; // eax
  unsigned int v72; // xmm1_4
  __int64 v73; // rcx
  unsigned int v74; // eax
  int v75; // r8d
  __m128i v76; // xmm0
  struct IUIAnimationStoryboard2 *v77; // rdx
  unsigned int v78; // eax
  int v79; // ecx
  double v80; // xmm0_8
  double v81; // xmm0_8
  float v82; // xmm0_4
  int v83; // r8d
  struct IUIAnimationStoryboard2 *v84; // rdx
  double v85; // xmm0_8
  double v86; // xmm1_8
  double v87; // xmm2_8
  double v88; // xmm3_8
  __int64 v89; // rax
  __int64 v90; // xmm0_8
  __int64 v91; // rcx
  float v92; // xmm1_4
  float v93; // xmm1_4
  double v94; // xmm0_8
  double v95; // xmm0_8
  __int64 j; // rax
  __int64 k; // rax
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  unsigned int v99; // [rsp+28h] [rbp-E0h]
  struct TA_TIMINGFUNCTION *v100; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v101; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v102; // [rsp+58h] [rbp-B0h]
  struct TA_TIMINGFUNCTION *v103; // [rsp+58h] [rbp-B0h]
  char v104; // [rsp+88h] [rbp-80h]
  char v105; // [rsp+89h] [rbp-7Fh]
  bool v106; // [rsp+8Ah] [rbp-7Eh]
  bool v107; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v108; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v109; // [rsp+90h] [rbp-78h]
  unsigned int v110; // [rsp+94h] [rbp-74h] BYREF
  int v111; // [rsp+98h] [rbp-70h]
  struct TA_TIMINGFUNCTION *v112; // [rsp+A0h] [rbp-68h]
  double v113; // [rsp+A8h] [rbp-60h] BYREF
  double v114; // [rsp+B0h] [rbp-58h]
  int v115; // [rsp+B8h] [rbp-50h] BYREF
  int v116; // [rsp+BCh] [rbp-4Ch]
  CAnimationEngine *v117; // [rsp+C0h] [rbp-48h]
  double v118; // [rsp+C8h] [rbp-40h] BYREF
  double v119; // [rsp+D0h] [rbp-38h]
  float v120; // [rsp+D8h] [rbp-30h] BYREF
  float v121; // [rsp+DCh] [rbp-2Ch] BYREF
  int v122; // [rsp+E0h] [rbp-28h]
  unsigned int i; // [rsp+E4h] [rbp-24h]
  unsigned int v124; // [rsp+E8h] [rbp-20h] BYREF
  float v125; // [rsp+ECh] [rbp-1Ch] BYREF
  struct IUIAnimationStoryboard2 *v126; // [rsp+F0h] [rbp-18h] BYREF
  float v127; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v128; // [rsp+100h] [rbp-8h]
  unsigned int v129; // [rsp+108h] [rbp+0h]
  __int64 v130; // [rsp+110h] [rbp+8h]
  int v131; // [rsp+118h] [rbp+10h]
  __int64 v132; // [rsp+120h] [rbp+18h]
  double v133; // [rsp+128h] [rbp+20h] BYREF
  double v134; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v135; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v136; // [rsp+13Ch] [rbp+34h] BYREF
  float v137; // [rsp+140h] [rbp+38h] BYREF
  double v138; // [rsp+148h] [rbp+40h] BYREF
  double v139; // [rsp+150h] [rbp+48h] BYREF
  double v140[2]; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v141; // [rsp+168h] [rbp+60h]
  int v142; // [rsp+178h] [rbp+70h]
  __int64 v143; // [rsp+180h] [rbp+78h] BYREF
  __int64 v144; // [rsp+188h] [rbp+80h]
  __int64 v145; // [rsp+190h] [rbp+88h] BYREF
  __int64 v146; // [rsp+198h] [rbp+90h]
  _QWORD v147[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v148[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  double v149; // [rsp+1C0h] [rbp+B8h] BYREF
  double v150; // [rsp+1C8h] [rbp+C0h]
  double v151; // [rsp+1D0h] [rbp+C8h]
  __int128 v152; // [rsp+1D8h] [rbp+D0h] BYREF
  double v153; // [rsp+1E8h] [rbp+E0h]
  double v154[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v155[4]; // [rsp+210h] [rbp+108h] BYREF

  v108 = *((_DWORD *)a2 + 3);
  v117 = this;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v126 = 0LL;
  v6 = 0LL;
  v112 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v126);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v98 = 619;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v98);
    goto LABEL_61;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v126);
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v126->lpVtbl->SetTag)(
         v126,
         0LL,
         *(unsigned int *)a2);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v98 = 623;
    goto LABEL_85;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v126->lpVtbl->SetStoryboardEventHandler)(
         v126,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v98 = 624;
    goto LABEL_85;
  }
  v9 = 0LL;
  v109 = 0;
  if ( *((_DWORD *)a2 + 1) )
  {
    while ( 1 )
    {
      v145 = 0LL;
      v146 = 0LL;
      v143 = 0LL;
      v144 = 0LL;
      v147[0] = 0LL;
      v147[1] = 0LL;
      v148[0] = 0LL;
      v148[1] = 0LL;
      v10 = *((_QWORD *)a2 + 3);
      v132 = (unsigned int)v9;
      v11 = **(_QWORD **)(v10 + 8 * v9);
      v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
      v105 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11);
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 16LL))(v11, &v145);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
        break;
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v143);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v99 = 645;
        goto LABEL_168;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 32LL))(v11, &v121);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v99 = 646;
        goto LABEL_168;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 40LL))(v11, &v120);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v99 = 647;
        goto LABEL_168;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 48LL))(v11, &v127);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v99 = 648;
        goto LABEL_168;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 56LL))(v11, &v137);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v99 = 649;
        goto LABEL_168;
      }
      ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v135);
      ThemeAnimationTransform = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        v99 = 650;
        goto LABEL_168;
      }
      if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 112LL))(v11, &v125) < 0 )
        v125 = 0.0;
      if ( v104 )
      {
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 72LL))(v11, v147);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v99 = 657;
          goto LABEL_168;
        }
        ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 80LL))(v11, v148);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v99 = 658;
          goto LABEL_168;
        }
      }
      v134 = 0.0;
      v133 = 0.0;
      v13 = fmaxf(0.0099999998, 1.0 - v125);
      v106 = 0;
      v107 = 0;
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 88LL))(v11, &v136) >= 0 )
      {
        v106 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 96LL))(v11, &v134) >= 0;
        v107 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 104LL))(v11, &v133) >= 0;
      }
      v14 = **(_QWORD **)(*((_QWORD *)a2 + 3) + 8 * v9);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 128LL))(v14, &v115);
      v138 = 0.0;
      v124 = 0;
      Theme = (void *)CDesktopManager::GetTheme(3LL);
      v16 = v108;
      CAnimationEngine::_CalculateStaggerDelay(v17, Theme, v108, v115, v135, &v138);
      v18 = CDesktopManager::GetTheme(3LL);
      if ( (int)GetThemeAnimationProperty(v18, v108, (unsigned int)v115, 1LL, &v124, 4, &v110) >= 0 )
      {
        for ( i = 0; i < v124; ++i )
        {
          v19 = CDesktopManager::GetTheme(3LL);
          ThemeAnimationTransform = GetThemeAnimationTransform(v19, v16, (unsigned int)v115, v20, 0LL, 0, &v110);
          if ( ThemeAnimationTransform != -2147024662 )
            continue;
          v21 = v110;
          if ( v5 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned int *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v5);
          v22 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL);
          if ( v22 == WPF::ProcessHeapImpl::Alloc )
            v23 = (unsigned int *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v21);
          else
            v23 = (unsigned int *)v22(WPF::g_pProcessHeap, v21);
          v5 = v23;
          if ( !v23 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2C1u);
            goto LABEL_57;
          }
          v24 = CDesktopManager::GetTheme(3LL);
          ThemeTimingFunction = GetThemeAnimationTransform(v24, v16, (unsigned int)v115, i, v5, v21, &v110);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v99 = 708;
            goto LABEL_168;
          }
          v25 = ((float)((float)(int)v5[2] / 1000.0) + v138) * v13;
          v26 = (float)((float)((float)(int)v5[3] / 1000.0) * v13);
          v27 = CDesktopManager::GetTheme(4LL);
          if ( (unsigned int)GetThemeTimingFunction(v27, v5[1], 0LL, 0LL, &v110) == -2147024662 )
          {
            v28 = v110;
            if ( v6 )
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct TA_TIMINGFUNCTION *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
                WPF::g_pProcessHeap,
                v6);
            v29 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL);
            if ( v29 == WPF::ProcessHeapImpl::Alloc )
              v30 = (struct TA_TIMINGFUNCTION *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v28);
            else
              v30 = (struct TA_TIMINGFUNCTION *)v29(WPF::g_pProcessHeap, v28);
            v6 = v30;
            v112 = v30;
            if ( !v30 )
            {
              ThemeAnimationTransform = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2DBu);
              goto LABEL_57;
            }
            v31 = CDesktopManager::GetTheme(4LL);
            ThemeTimingFunction = GetThemeTimingFunction(v31, v5[1], v6, (unsigned int)v28, &v110);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v99 = 733;
              goto LABEL_168;
            }
          }
          v113 = 0.0;
          v114 = 0.0;
          v118 = 0.0;
          v119 = 0.0;
          v152 = 0uLL;
          v153 = 0.0;
          v149 = 0.0;
          v150 = 0.0;
          v151 = 0.0;
          memset_0(v155, 0, sizeof(v155));
          memset_0(v154, 0, sizeof(v154));
          v32 = v146;
          v33 = v145;
          v122 = RoundToNearestInt((float)(v145 + v146) * 0.5);
          v116 = HIDWORD(v146);
          v34 = RoundToNearestInt((float)(HIDWORD(v146) + HIDWORD(v145)) * 0.5);
          v35 = HIDWORD(v144);
          v36 = v144;
          v111 = v34;
          if ( v104 )
            goto LABEL_39;
          v37 = 0;
          if ( (int)v144 - (int)v143 >= 0 )
            v37 = v144 - v143;
          v38 = 0;
          if ( v32 - v33 >= 0 )
            v38 = v32 - v33;
          if ( v38 == v37 )
          {
LABEL_39:
            v39 = v143 + v122 - v145;
            if ( v104 )
            {
              v41 = HIDWORD(v145);
              v40 = HIDWORD(v143);
              goto LABEL_45;
            }
          }
          else
          {
            v59 = RoundToNearestInt((float)(v144 + v143) * 0.5);
            v34 = v111;
            v39 = v59;
          }
          v40 = HIDWORD(v143);
          v41 = HIDWORD(v145);
          v42 = 0;
          if ( v35 - HIDWORD(v143) >= 0 )
            v42 = v35 - HIDWORD(v143);
          v43 = 0;
          if ( v116 - HIDWORD(v145) >= 0 )
            v43 = v116 - HIDWORD(v145);
          if ( v43 != v42 )
          {
            v60 = RoundToNearestInt((float)(v35 + HIDWORD(v143)) * 0.5);
            v41 = HIDWORD(v145);
            v44 = v60;
            v34 = v111;
            goto LABEL_46;
          }
LABEL_45:
          v44 = v40 + v34 - v41;
LABEL_46:
          v45 = v5[4];
          v46 = *v5;
          v111 = v45 & 4;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              v48 = v47 - 1;
              if ( v48 )
              {
                v61 = v48 - 254;
                if ( v61 )
                {
                  v62 = v61 - 2;
                  if ( v62 )
                  {
                    v63 = v62 - 1;
                    if ( v63 )
                    {
                      if ( v63 == 1 )
                      {
                        if ( (v45 & 2) != 0 )
                        {
                          v64 = *((float *)v5 + 8);
                          *(double *)&v152 = v64;
                          v65 = *((float *)v5 + 9);
                          *((double *)&v152 + 1) = v65;
                          v66 = *((float *)v5 + 10);
                        }
                        else
                        {
                          v152 = 0LL;
                          v65 = 0.0;
                          v66 = 0.0;
                          v64 = 0.0;
                        }
                        v153 = v66;
                        v67 = *((float *)v5 + 5);
                        v149 = v67;
                        v68 = *((float *)v5 + 6);
                        v150 = v68;
                        v69 = *((float *)v5 + 7);
                        v151 = v69;
                        if ( v105 )
                        {
                          *(_QWORD *)&v152 = *(_QWORD *)&v64 ^ _xmm;
                          *((_QWORD *)&v152 + 1) = *(_QWORD *)&v65 ^ _xmm;
                          *(_QWORD *)&v153 = *(_QWORD *)&v66 ^ _xmm;
                          *(_QWORD *)&v149 = *(_QWORD *)&v67 ^ _xmm;
                          *(_QWORD *)&v150 = *(_QWORD *)&v68 ^ _xmm;
                          *(_QWORD *)&v151 = *(_QWORD *)&v69 ^ _xmm;
                        }
                        v6 = v112;
                        LODWORD(v9) = v109;
                        v70 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v132);
                        v101 = v112;
                        v141 = v5[13];
                        v71 = v141;
                        *(_QWORD *)(v70 + 76) = *(_QWORD *)(v5 + 11);
                        *(_DWORD *)(v70 + 84) = v71;
                        ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                (__int64)v117,
                                                *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                                *(_DWORD *)a2,
                                                v109,
                                                3,
                                                v25,
                                                v26,
                                                (double *)&v152,
                                                &v149,
                                                3u,
                                                v101,
                                                0,
                                                0LL,
                                                0LL,
                                                0);
                        ThemeAnimationTransform = ThemeTimingFunction;
                        if ( ThemeTimingFunction < 0 )
                        {
                          v99 = 1103;
                          goto LABEL_168;
                        }
                      }
                      else
                      {
                        v6 = v112;
                        LODWORD(v9) = v109;
                      }
                    }
                    else
                    {
                      if ( (v45 & 1) != 0 )
                      {
                        v153 = v121;
                        *(double *)&v152 = (double)(v32 - (int)v145);
                        *((double *)&v152 + 1) = (double)(v116 - v41);
                        v151 = v120;
                        v149 = (double)(v36 - (int)v143);
                        v150 = (double)(v35 - HIDWORD(v143));
                      }
                      else
                      {
                        if ( (v45 & 2) != 0 )
                        {
                          *(double *)&v152 = *((float *)v5 + 8);
                          *((double *)&v152 + 1) = *((float *)v5 + 9);
                          v153 = *((float *)v5 + 10);
                        }
                        else
                        {
                          v152 = _xmm;
                          v153 = DOUBLE_1_0;
                        }
                        v149 = *((float *)v5 + 5);
                        v150 = *((float *)v5 + 6);
                        v151 = *((float *)v5 + 7);
                      }
                      if ( v111 )
                      {
                        v72 = v5[12];
                        LODWORD(v128) = v5[11];
                        v129 = v5[13];
                        HIDWORD(v128) = v72;
                      }
                      else
                      {
                        v129 = 0;
                        v128 = 0x3F0000003F000000LL;
                      }
                      v6 = v112;
                      LODWORD(v9) = v109;
                      v73 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v132);
                      v74 = v129;
                      v102 = v112;
                      *(_QWORD *)(v73 + 64) = v128;
                      *(_DWORD *)(v73 + 72) = v74;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v117,
                                              *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                              *(_DWORD *)a2,
                                              v109,
                                              4,
                                              v25,
                                              v26,
                                              (double *)&v152,
                                              &v149,
                                              3u,
                                              v102,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v99 = 1060;
                        goto LABEL_168;
                      }
                    }
                  }
                  else
                  {
                    v153 = 0.0;
                    v152 = 0LL;
                    if ( (v5[4] & 1) != 0 )
                    {
                      v6 = v112;
                      LODWORD(v9) = v109;
                      v75 = *(_DWORD *)a2;
                      v149 = (double)(v39 - v122);
                      v76 = _mm_cvtsi32_si128(v44 - v34);
                      v77 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                      *(_QWORD *)&v150 = *(_OWORD *)&_mm_cvtepi32_pd(v76);
                      v151 = (float)(v120 - v121);
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v117,
                                              v77,
                                              v75,
                                              v109,
                                              0,
                                              v25,
                                              v26,
                                              (double *)&v152,
                                              &v149,
                                              3u,
                                              v112,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v99 = 954;
                        goto LABEL_168;
                      }
                    }
                    else
                    {
                      v78 = 1;
                      v79 = 0;
                      if ( (v5[4] & 0x1000) != 0 )
                      {
                        v78 = 2;
                        v80 = (double)(((int)v143 + v36 - v32 - (int)v145) / 2);
                      }
                      else
                      {
                        v80 = *((float *)v5 + 5);
                      }
                      v149 = v80;
                      if ( (v5[4] & 0x2000) != 0 )
                      {
                        v78 = 3;
                        v81 = (double)((HIDWORD(v143) + v35 - v116 - v41) / 2);
                        v79 = 1;
                      }
                      else
                      {
                        v81 = *((float *)v5 + 6);
                      }
                      v150 = v81;
                      if ( (v5[4] & 0x4000) != 0 )
                      {
                        v78 = 4;
                        v82 = v120 - v121;
                        v79 = 2;
                      }
                      else
                      {
                        v82 = *((float *)v5 + 7);
                      }
                      v6 = v112;
                      LODWORD(v9) = v109;
                      v83 = *(_DWORD *)a2;
                      v84 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                      v151 = v82;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              (__int64)v117,
                                              v84,
                                              v83,
                                              v109,
                                              v79,
                                              v25,
                                              v26,
                                              (double *)&v152,
                                              &v149,
                                              3u,
                                              v112,
                                              v78,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v99 = 1006;
                        goto LABEL_168;
                      }
                    }
                  }
                }
                else
                {
                  if ( (v45 & 2) != 0 )
                  {
                    v85 = *((float *)v5 + 7);
                    v113 = v85;
                    v86 = *((float *)v5 + 8);
                    v114 = v86;
                  }
                  else
                  {
                    v113 = 0.0;
                    v85 = 0.0;
                    v114 = 0.0;
                    v86 = 0.0;
                  }
                  v87 = *((float *)v5 + 5);
                  v118 = v87;
                  v88 = *((float *)v5 + 6);
                  v119 = v88;
                  if ( v105 )
                  {
                    *(_QWORD *)&v113 = *(_QWORD *)&v85 ^ _xmm;
                    *(_QWORD *)&v114 = *(_QWORD *)&v86 ^ _xmm;
                    *(_QWORD *)&v118 = *(_QWORD *)&v87 ^ _xmm;
                    *(_QWORD *)&v119 = *(_QWORD *)&v88 ^ _xmm;
                  }
                  v89 = *((_QWORD *)a2 + 3);
                  v90 = *(_QWORD *)(v5 + 9);
                  v142 = 0;
                  v6 = v112;
                  LODWORD(v9) = v109;
                  v91 = *(_QWORD *)(v89 + 8 * v132);
                  v103 = v112;
                  *(_QWORD *)(v91 + 76) = v90;
                  *(_DWORD *)(v91 + 84) = 0;
                  ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                          (__int64)v117,
                                          *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                          *(_DWORD *)a2,
                                          v109,
                                          3,
                                          v25,
                                          v26,
                                          &v113,
                                          &v118,
                                          2u,
                                          v103,
                                          0,
                                          0LL,
                                          0LL,
                                          0);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v99 = 924;
                    goto LABEL_168;
                  }
                }
              }
              else
              {
                if ( (v45 & 1) != 0 )
                {
                  v50 = v137;
                  v49 = v127;
                }
                else
                {
                  if ( (v45 & 2) != 0 )
                    v49 = *((float *)v5 + 6);
                  else
                    v49 = v127;
                  v50 = *((float *)v5 + 5);
                }
                v6 = v112;
                LODWORD(v9) = v109;
                v51 = *(_DWORD *)a2;
                v52 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                v140[0] = v49;
                v139 = v50;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v117,
                                        v52,
                                        v51,
                                        v109,
                                        5,
                                        v25,
                                        v26,
                                        v140,
                                        &v139,
                                        1u,
                                        v112,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v99 = 1125;
                  goto LABEL_168;
                }
              }
            }
            else
            {
              if ( (v45 & 1) != 0 )
              {
                v113 = 1.0;
                v114 = 1.0;
                if ( v32 == (_DWORD)v145 )
                  v92 = FLOAT_1_0;
                else
                  v92 = (float)(v36 - v143) / (float)(v32 - v145);
                v118 = v92;
                if ( v116 == v41 )
                  v93 = FLOAT_1_0;
                else
                  v93 = (float)(v35 - HIDWORD(v143)) / (float)(v116 - v41);
                v119 = v93;
              }
              else
              {
                if ( (v45 & 2) != 0 )
                {
                  v113 = *((float *)v5 + 7);
                  v114 = *((float *)v5 + 8);
                }
                else
                {
                  v113 = 1.0;
                  v114 = 1.0;
                }
                v118 = *((float *)v5 + 5);
                v119 = *((float *)v5 + 6);
              }
              v131 = 0;
              if ( v111 )
              {
                v56 = v5[10];
                LODWORD(v130) = v5[9];
                HIDWORD(v130) = v56;
              }
              else
              {
                v130 = 0x3F0000003F000000LL;
              }
              v6 = v112;
              LODWORD(v9) = v109;
              v57 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v132);
              v58 = v131;
              v100 = v112;
              *(_QWORD *)(v57 + 64) = v130;
              *(_DWORD *)(v57 + 72) = v58;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v117,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v109,
                                      4,
                                      v25,
                                      v26,
                                      &v113,
                                      &v118,
                                      2u,
                                      v100,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v99 = 886;
                goto LABEL_168;
              }
            }
          }
          else
          {
            if ( (v45 & 1) != 0 )
            {
              v113 = 0.0;
              v114 = 0.0;
              v118 = (double)(v39 - v122);
              v119 = (double)(v44 - v34);
            }
            v54 = v136;
            if ( v106 )
            {
              v94 = v134 + *(&v113 + v136);
              v134 = 0.0;
              *(&v113 + v136) = v94;
            }
            if ( v107 )
            {
              v95 = *(&v118 + v54) + v133;
              v133 = *(&v118 + v54);
              *(&v118 + v54) = v95;
            }
            v6 = v112;
            v55 = v117;
            LODWORD(v9) = v109;
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v117,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v109,
                                    0,
                                    v25,
                                    v26,
                                    &v113,
                                    &v118,
                                    2u,
                                    v112,
                                    0,
                                    (double *)((unsigned __int64)&v134 & -(__int64)v106),
                                    (double *)((unsigned __int64)&v133 & -(__int64)v107),
                                    v54);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v99 = 816;
              goto LABEL_168;
            }
            if ( v104 )
            {
              for ( j = 0LL; j < 4; ++j )
                v155[j] = (double)*((int *)v147 + j);
              for ( k = 0LL; k < 4; ++k )
                v154[k] = (double)*((int *)v148 + k);
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v55,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v109,
                                      6,
                                      v25,
                                      v26,
                                      v155,
                                      v154,
                                      4u,
                                      v6,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v99 = 837;
                goto LABEL_168;
              }
            }
          }
          v16 = v108;
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v109 = v9;
      if ( (unsigned int)v9 >= *((_DWORD *)a2 + 1) )
        goto LABEL_57;
    }
    v99 = 644;
LABEL_168:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, v99);
LABEL_57:
    if ( v5 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned int *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
    if ( v6 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct TA_TIMINGFUNCTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
  }
LABEL_61:
  if ( v126 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v126->lpVtbl->Release)(v126);
  return ThemeAnimationTransform;
}

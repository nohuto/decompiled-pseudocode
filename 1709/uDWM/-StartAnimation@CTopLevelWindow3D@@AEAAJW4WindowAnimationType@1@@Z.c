/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180022C44 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180022CD4 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022D78 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027A40 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800795AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020DE0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180021CC0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180021D24 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180022794 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022BB0 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180023044 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x180023174 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180027888 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18003583C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x1800361D4 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm10_4
  __int64 v5; // rcx
  __int64 v6; // rcx
  CWindowList *v7; // rcx
  bool v8; // r14
  int TimelineForTransform; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rax
  DWORD v13; // r8d
  unsigned int v14; // ecx
  __m128i v15; // xmm0
  int v16; // ecx
  int v17; // ecx
  __m128i v18; // xmm0
  unsigned int v19; // eax
  DWORD v20; // xmm0_4
  __m128i v21; // xmm14
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm14_4
  float v25; // xmm15_4
  float v26; // xmm8_4
  __m128i v27; // xmm9
  unsigned int v28; // eax
  float v29; // xmm9_4
  __m128i v30; // xmm12
  int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm12_4
  float v34; // xmm13_4
  char v35; // al
  float v36; // xmm1_4
  __int64 v37; // rdx
  __int64 Theme; // rax
  unsigned int v39; // r13d
  __int64 v40; // rax
  unsigned int v41; // ebx
  LPVOID (__fastcall *v42)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  float *v43; // rax
  float *v44; // r14
  __int64 v45; // rax
  int ThemeAnimationTransform; // eax
  float v47; // xmm7_4
  __int64 v48; // rax
  unsigned int v49; // ebx
  LPVOID (__fastcall *v50)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v51; // rax
  LPVOID v52; // rsi
  __int64 v53; // rax
  int ThemeTimingFunction; // eax
  __int64 v55; // rcx
  void *v56; // rdx
  void (__fastcall *v57)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v58; // eax
  int v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  void (__fastcall *v65)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v66; // rcx
  void *(__fastcall *v67)(WPF::ProcessHeapImpl *, size_t); // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // r8
  int v72; // esi
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm3_4
  float v76; // xmm0_4
  float v77; // xmm8_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm3_4
  float v89; // xmm0_4
  float v90; // xmm2_4
  int v91; // r9d
  int v92; // eax
  int v93; // eax
  unsigned int v94; // [rsp+28h] [rbp-E0h]
  unsigned int v95; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v96; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v97; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v98; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v99; // [rsp+58h] [rbp-B0h]
  __int64 v100; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v101; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v102; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v104; // [rsp+88h] [rbp-80h] BYREF

  v98 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v4 = 0.0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
  {
LABEL_66:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v52 = 0LL;
      v44 = 0LL;
      goto LABEL_68;
    }
    v94 = 1243;
    goto LABEL_90;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v5, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v104);
  v6 = *(_QWORD *)&v104.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v104.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)v104.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v7, &v104, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 4)
                                                                       + 224LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
        &v104,
        a1 | 0xD100000000000000uLL);
  }
  v8 = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 328) + 595LL) &= ~0x10u;
  *(_DWORD *)(a1 + 368) = a2;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v94 = 963;
    goto LABEL_90;
  }
  v11 = *(_QWORD *)(a1 + 328);
  v12 = *(_QWORD *)(a1 + 336);
  v13 = *(_DWORD *)(v12 + 88);
  v14 = v13 + *(_DWORD *)(a1 + 308);
  PerformanceCount.HighPart = *(_DWORD *)(v12 + 96);
  LODWORD(v12) = *(_DWORD *)(a1 + 312);
  v15 = _mm_cvtsi32_si128(v14);
  v16 = *(_DWORD *)(a1 + 316);
  PerformanceCount.LowPart = v13;
  v17 = v16 - *(_DWORD *)(a1 + 308);
  LODWORD(v100) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v18 = _mm_cvtsi32_si128(PerformanceCount.HighPart + (int)v12);
  v19 = 0;
  if ( v17 >= 0 )
    v19 = v17;
  v20 = _mm_cvtepi32_ps(v18).m128_u32[0];
  v21 = _mm_cvtsi32_si128(v19);
  v22 = 0;
  if ( *(_DWORD *)(a1 + 320) - *(_DWORD *)(a1 + 312) >= 0 )
    v22 = *(_DWORD *)(a1 + 320) - *(_DWORD *)(a1 + 312);
  PerformanceCount.LowPart = v20;
  v23 = FLOAT_0_5;
  LODWORD(v24) = _mm_cvtepi32_ps(v21).m128_u32[0];
  v25 = (float)v22;
  v26 = (float)(int)(v13 + *(_DWORD *)(v11 + 48));
  v27 = _mm_cvtsi32_si128(PerformanceCount.HighPart + *(_DWORD *)(v11 + 52));
  v28 = 0;
  if ( *(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 48) >= 0 )
    v28 = *(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 48);
  *(float *)&v99 = (float)(int)(v13 + *(_DWORD *)(v11 + 48));
  LODWORD(v29) = _mm_cvtepi32_ps(v27).m128_u32[0];
  v30 = _mm_cvtsi32_si128(v28);
  v31 = 0;
  if ( *(_DWORD *)(v11 + 60) - *(_DWORD *)(v11 + 52) >= 0 )
    v31 = *(_DWORD *)(v11 + 60) - *(_DWORD *)(v11 + 52);
  v101 = __PAIR64__(LODWORD(v29), LODWORD(v26));
  v32 = *(unsigned int *)(a1 + 368);
  LODWORD(v33) = _mm_cvtepi32_ps(v30).m128_u32[0];
  *((float *)&v99 + 1) = v29;
  *(float *)&v102 = v33;
  v34 = (float)v31;
  *((float *)&v102 + 1) = (float)v31;
  if ( (((_DWORD)v32 - 2) & 0xFFFFFFFD) != 0 )
  {
    v35 = 0;
    v36 = 0.0;
  }
  else
  {
    v35 = 1;
    v36 = FLOAT_0_5;
  }
  *(float *)(a1 + 468) = v36;
  if ( !v35 )
    v23 = 0.0;
  *(_DWORD *)(a1 + 476) = 0;
  *(float *)(a1 + 472) = v23;
  if ( (((_DWORD)v32 - 3) & 0xFFFFFFFD) == 0 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v11 + 40), a1 + 292);
    if ( IsRectEmpty((const RECT *)(a1 + 292)) )
    {
      v92 = *(_DWORD *)(a1 + 368);
      if ( v92 == 3 )
        *(_DWORD *)(a1 + 368) = 6;
      v8 = v92 == 3;
    }
    else
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v25 / v24, (struct MilPointAndSizeF *)&v101);
      v29 = *((float *)&v101 + 1);
      LODWORD(v26) = v101;
      v34 = *((float *)&v102 + 1);
      v33 = *(float *)&v102;
      v99 = v101;
    }
    if ( !v8 )
      goto LABEL_66;
  }
  v37 = *(unsigned int *)(a1 + 368);
  if ( (unsigned int)(v37 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 174);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_57;
    v94 = 1019;
LABEL_90:
    v91 = TimelineForTransform;
LABEL_92:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, v94);
    return v10;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v32, v37, &v97, &v96);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v94 = 1024;
    goto LABEL_90;
  }
  Theme = CDesktopManager::GetTheme(3LL);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v97, v96, 1LL, &v98, 4, &v95);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v94 = 1031;
    goto LABEL_90;
  }
  v39 = 0;
  if ( !v98 )
  {
LABEL_57:
    v66 = *(_QWORD *)(a1 + 360);
    if ( v66 )
    {
      *(_QWORD *)(v66 + 48) = *(_QWORD *)(v66 + 32);
      *(_WORD *)(v66 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v66 + 24) = v4;
    }
    else
    {
      v67 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v67 == WPF::ProcessHeapImpl::AllocClear )
        v68 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
      else
        v68 = (_QWORD *)v67(WPF::g_pProcessHeap, 80LL);
      v70 = v68;
      if ( v68 )
      {
        CTimelineBase::CTimelineBase(v68, v69, v68);
        *v70 = &CTimeline<float>::`vftable';
      }
      *(_QWORD *)(a1 + 360) = v70;
      if ( !v70 )
      {
        v10 = -2147024882;
        v94 = 1231;
        v91 = -2147024882;
        goto LABEL_92;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 4096);
    goto LABEL_66;
  }
  while ( 1 )
  {
    v40 = CDesktopManager::GetTheme(3LL);
    if ( (unsigned int)GetThemeAnimationTransform(v40, v97, v96, v39, 0LL, 0, &v95) != -2147024662 )
      goto LABEL_56;
    v41 = v95;
    v42 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v43 = v42 == WPF::ProcessHeapImpl::Alloc
        ? (float *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v95)
        : (float *)v42(WPF::g_pProcessHeap, v95);
    v44 = v43;
    v45 = CDesktopManager::GetTheme(3LL);
    ThemeAnimationTransform = GetThemeAnimationTransform(v45, v97, v96, v39, v44, v41, &v95);
    v10 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v44 - 1) > 1 )
      goto LABEL_54;
    v47 = (float)*((int *)v44 + 3) / 1000.0;
    v48 = CDesktopManager::GetTheme(4LL);
    if ( (unsigned int)GetThemeTimingFunction(v48, *((unsigned int *)v44 + 1), 0LL, 0LL, &v95) == -2147024662 )
    {
      v49 = v95;
      v50 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v50 == WPF::ProcessHeapImpl::Alloc )
        v51 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v95);
      else
        v51 = v50(WPF::g_pProcessHeap, v95);
      v52 = v51;
      v53 = CDesktopManager::GetTheme(4LL);
      ThemeTimingFunction = GetThemeTimingFunction(v53, *((unsigned int *)v44 + 1), v52, v49, &v95);
      v10 = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, 0x430u);
        goto LABEL_68;
      }
      CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v55, v52);
      v57 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v57 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v56);
      else
        ((void (__fastcall *)(WPF::ProcessHeapImpl *))v57)(WPF::g_pProcessHeap);
    }
    if ( *(_DWORD *)v44 == 1 )
    {
      v58 = *((_DWORD *)v44 + 4);
      if ( (v58 & 1) == 0 )
      {
        if ( v33 <= 0.0 || v34 <= 0.0 )
          goto LABEL_44;
        v59 = *(_DWORD *)(a1 + 368);
        if ( v59 == 2 )
        {
          v84 = v44[7];
          v85 = fmaxf(v84, v24 / v33);
          v86 = fmaxf(v44[8], v25 / v34);
          v87 = fminf(v85, v86);
          v88 = fmaxf(v85, v86);
        }
        else
        {
          if ( v59 != 4 )
          {
LABEL_44:
            if ( (v58 & 4) != 0 )
            {
              v60 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
              v10 = v60;
              if ( v60 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x498u);
                goto LABEL_120;
              }
              v61 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
              v10 = v61;
              if ( v61 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x499u);
                goto LABEL_120;
              }
            }
            v62 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
            v10 = v62;
            if ( v62 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x49Cu);
              goto LABEL_120;
            }
            v63 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
            v10 = v63;
            if ( v63 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x49Du);
              goto LABEL_120;
            }
            goto LABEL_53;
          }
          v84 = v44[7];
          v88 = fminf(fminf(v84, v24 / v33), fminf(v44[8], v25 / v34));
          v87 = v88;
        }
        v89 = v87 - v44[5];
        v90 = v84 - v44[5];
        v44[7] = v88;
        v44[8] = v88;
        v47 = fmaxf(0.0, (float)(v89 * v47) / v90);
        goto LABEL_44;
      }
      v72 = *(_DWORD *)(a1 + 368);
      if ( ((v72 - 3) & 0xFFFFFFFD) != 0 )
      {
        v10 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x45Du);
        goto LABEL_120;
      }
      v73 = 1.0 - v44[8];
      v74 = 1.0 - v44[7];
      v75 = v74 * v33;
      v76 = v44[8] * *(float *)&PerformanceCount.LowPart;
      *(float *)&v99 = (float)(v74 * v26) + (float)(*(float *)&v100 * v44[7]);
      v77 = (float)(v73 * v29) + v76;
      v78 = v25 * v44[8];
      v79 = v24 * v44[7];
      *((float *)&v99 + 1) = v77;
      v34 = v78 + (float)(v73 * v34);
      v33 = v75 + v79;
      v80 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      v10 = v80;
      if ( v80 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x451u);
        goto LABEL_120;
      }
      v81 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      v10 = v81;
      if ( v81 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x452u);
        goto LABEL_120;
      }
      v82 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v10 = v82;
      if ( v82 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x457u);
        goto LABEL_120;
      }
      v83 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v10 = v83;
      if ( v83 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x458u);
        goto LABEL_120;
      }
    }
    else if ( *(_DWORD *)v44 == 2 )
    {
      if ( ((_BYTE)v44[4] & 1) != 0 )
      {
        if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
        {
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4B0u);
          goto LABEL_120;
        }
        v93 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v10 = v93;
        if ( v93 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0x4ABu);
          goto LABEL_120;
        }
      }
      else
      {
        v64 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v10 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x4B7u);
          goto LABEL_120;
        }
      }
    }
LABEL_53:
    v4 = fmaxf(v47, v4);
LABEL_54:
    v65 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v65 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v44);
    else
      v65(WPF::g_pProcessHeap, v44);
LABEL_56:
    if ( ++v39 >= v98 )
      goto LABEL_57;
    LODWORD(v26) = v99;
    v29 = *((float *)&v99 + 1);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, 0x41Du);
LABEL_120:
  v52 = 0LL;
LABEL_68:
  if ( v44 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v44);
  if ( v52 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v52);
  return v10;
}

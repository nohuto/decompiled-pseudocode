/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180022CA0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022F00 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180022F48 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180022FD8 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180023074 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180082794 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000715C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000F5B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180013AB0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800210D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180021F80 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x180021FE4 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180022A48 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022E6C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180023358 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x180023464 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180026C60 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x1800380E4 (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180038148 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp @ 0x180074538 (McTemplateU0qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm10_4
  __int64 v5; // rcx
  __int64 v6; // rax
  CWindowList *v7; // rcx
  int TimelineForTransform; // eax
  unsigned int v9; // ebx
  __int64 v10; // r10
  int v11; // edx
  __int64 v12; // rax
  int v13; // ecx
  DWORD v14; // r9d
  __m128i v15; // xmm0
  int v16; // ecx
  int v17; // edx
  __m128i v18; // xmm0
  unsigned int v19; // eax
  DWORD v20; // xmm0_4
  __m128i v21; // xmm14
  unsigned int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm14_4
  __m128i v25; // xmm15
  __m128i v26; // xmm8
  int v27; // ecx
  __int64 v28; // rdx
  float v29; // xmm8_4
  __m128i v30; // xmm9
  unsigned int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm9_4
  __m128i v34; // xmm12
  int v35; // eax
  float v36; // xmm12_4
  float v37; // xmm13_4
  float v38; // xmm15_4
  char v39; // al
  float v40; // xmm1_4
  __int64 Theme; // rax
  unsigned int v42; // r13d
  __int64 v43; // rax
  unsigned int v44; // ebx
  LPVOID (__fastcall *v45)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  float *v46; // rax
  float *v47; // r14
  __int64 v48; // rax
  int ThemeAnimationTransform; // eax
  float v50; // xmm7_4
  __int64 v51; // rax
  unsigned int v52; // ebx
  LPVOID (__fastcall *v53)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v54; // rax
  LPVOID v55; // rsi
  __int64 v56; // rax
  int ThemeTimingFunction; // eax
  __int64 v58; // rcx
  void *v59; // rdx
  unsigned int v60; // eax
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm3_4
  float v64; // xmm0_4
  float v65; // xmm1_4
  float v66; // xmm0_4
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  void (__fastcall *v72)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v73; // rcx
  void *(__fastcall *v74)(WPF::ProcessHeapImpl *, size_t); // rax
  _QWORD *v75; // rax
  _QWORD *v76; // r8
  int v78; // ecx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  int v90; // r9d
  int v91; // eax
  unsigned int v92; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v94; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v95; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v96; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v97; // [rsp+58h] [rbp-B0h]
  __int64 v98; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v100; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v102; // [rsp+88h] [rbp-80h] BYREF

  v96 = 0;
  v99 = 0LL;
  v100 = 0LL;
  v4 = 0.0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    goto LABEL_65;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v5, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v102);
  v6 = *(_QWORD *)&v102.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v102.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)v102.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v7, &v102, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 4)
                                                                       + 224LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
        &v102,
        a1 | 0xD100000000000000uLL);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 328) + 595LL) &= ~8u;
  *(_DWORD *)(a1 + 368) = a2;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  TimelineForTransform = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)a1);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v92 = 963;
    goto LABEL_88;
  }
  v10 = *(_QWORD *)(a1 + 328);
  v11 = *(_DWORD *)(a1 + 308);
  v12 = *(_QWORD *)(a1 + 336);
  v13 = *(_DWORD *)(a1 + 316);
  v14 = *(_DWORD *)(v12 + 88);
  PerformanceCount.HighPart = *(_DWORD *)(v12 + 96);
  PerformanceCount.LowPart = v14;
  v15 = _mm_cvtsi32_si128(v14 + v11);
  LODWORD(v12) = PerformanceCount.HighPart + *(_DWORD *)(a1 + 312);
  v16 = v13 - v11;
  v17 = *(_DWORD *)(v10 + 48);
  LODWORD(v98) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v18 = _mm_cvtsi32_si128(v12);
  v19 = 0;
  if ( v16 >= 0 )
    v19 = v16;
  v20 = _mm_cvtepi32_ps(v18).m128_u32[0];
  v21 = _mm_cvtsi32_si128(v19);
  v22 = 0;
  if ( *(_DWORD *)(a1 + 320) - *(_DWORD *)(a1 + 312) >= 0 )
    v22 = *(_DWORD *)(a1 + 320) - *(_DWORD *)(a1 + 312);
  PerformanceCount.LowPart = v20;
  v23 = FLOAT_0_5;
  LODWORD(v24) = _mm_cvtepi32_ps(v21).m128_u32[0];
  v25 = _mm_cvtsi32_si128(v22);
  v26 = _mm_cvtsi32_si128(v14 + v17);
  v27 = *(_DWORD *)(v10 + 56) - v17;
  v28 = *(unsigned int *)(a1 + 368);
  LODWORD(v29) = _mm_cvtepi32_ps(v26).m128_u32[0];
  v30 = _mm_cvtsi32_si128(PerformanceCount.HighPart + *(_DWORD *)(v10 + 52));
  v31 = 0;
  if ( v27 >= 0 )
    v31 = v27;
  *(float *)&v97 = v29;
  v32 = (unsigned int)(*(_DWORD *)(v10 + 60) - *(_DWORD *)(v10 + 52));
  LODWORD(v33) = _mm_cvtepi32_ps(v30).m128_u32[0];
  v34 = _mm_cvtsi32_si128(v31);
  v35 = 0;
  if ( (int)v32 >= 0 )
    v35 = *(_DWORD *)(v10 + 60) - *(_DWORD *)(v10 + 52);
  v99 = __PAIR64__(LODWORD(v33), LODWORD(v29));
  LODWORD(v36) = _mm_cvtepi32_ps(v34).m128_u32[0];
  *((float *)&v97 + 1) = v33;
  *(float *)&v100 = v36;
  v37 = (float)v35;
  LODWORD(v38) = _mm_cvtepi32_ps(v25).m128_u32[0];
  *((float *)&v100 + 1) = (float)v35;
  if ( (((_DWORD)v28 - 2) & 0xFFFFFFFD) != 0 )
  {
    v39 = 0;
    v40 = 0.0;
  }
  else
  {
    v39 = 1;
    v40 = FLOAT_0_5;
  }
  *(float *)(a1 + 468) = v40;
  if ( !v39 )
    v23 = 0.0;
  *(_DWORD *)(a1 + 476) = 0;
  *(float *)(a1 + 472) = v23;
  if ( (_DWORD)v28 == 3 || (_DWORD)v28 == 5 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v10 + 40), a1 + 292);
    if ( !IsRectEmpty((const RECT *)(a1 + 292)) )
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v38 / v24, (struct MilPointAndSizeF *)&v99);
      v33 = *((float *)&v99 + 1);
      LODWORD(v29) = v99;
      v28 = *(unsigned int *)(a1 + 368);
      v37 = *((float *)&v100 + 1);
      v36 = *(float *)&v100;
      v97 = v99;
      goto LABEL_26;
    }
    if ( *(_DWORD *)(a1 + 368) == 3 )
    {
      *(_DWORD *)(a1 + 368) = 6;
      v28 = 6LL;
      goto LABEL_26;
    }
LABEL_65:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v55 = 0LL;
      v47 = 0LL;
      goto LABEL_67;
    }
    v92 = 1243;
    goto LABEL_88;
  }
LABEL_26:
  if ( (unsigned int)(v28 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 172);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v9 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_56;
    v92 = 1019;
LABEL_88:
    v90 = TimelineForTransform;
LABEL_90:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v90, v92);
    return v9;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v32, v28, &v95, &v94);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v92 = 1024;
    goto LABEL_88;
  }
  Theme = CDesktopManager::GetTheme(3);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v95, v94, 1LL, &v96, 4, &v93);
  v9 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v92 = 1031;
    goto LABEL_88;
  }
  v42 = 0;
  if ( !v96 )
  {
LABEL_56:
    v73 = *(_QWORD *)(a1 + 360);
    if ( v73 )
    {
      *(_QWORD *)(v73 + 48) = *(_QWORD *)(v73 + 32);
      *(_WORD *)(v73 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v73 + 24) = v4;
    }
    else
    {
      v74 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v74 == WPF::ProcessHeapImpl::AllocClear )
        v75 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
      else
        v75 = (_QWORD *)v74(WPF::g_pProcessHeap, 80LL);
      v76 = v75;
      if ( v75 )
      {
        CTimelineBase::CTimelineBase((__int64)v75, v4, 0.0, 1.0, 0);
        *v76 = &CTimeline<float>::`vftable';
      }
      *(_QWORD *)(a1 + 360) = v76;
      if ( !v76 )
      {
        v9 = -2147024882;
        v92 = 1231;
        v90 = -2147024882;
        goto LABEL_90;
      }
      if ( (int)CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1) >= 0 )
        ++*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 0x1000u);
    goto LABEL_65;
  }
  while ( 1 )
  {
    v43 = CDesktopManager::GetTheme(3);
    if ( (unsigned int)GetThemeAnimationTransform(v43, v95, v94, v42, 0LL, 0, &v93) != -2147024662 )
      goto LABEL_55;
    v44 = v93;
    v45 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v46 = v45 == WPF::ProcessHeapImpl::Alloc
        ? (float *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v93)
        : (float *)v45(WPF::g_pProcessHeap, v93);
    v47 = v46;
    v48 = CDesktopManager::GetTheme(3);
    ThemeAnimationTransform = GetThemeAnimationTransform(v48, v95, v94, v42, v47, v44, &v93);
    v9 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v47 - 1) > 1 )
      goto LABEL_53;
    v50 = (float)*((int *)v47 + 3) / 1000.0;
    v51 = CDesktopManager::GetTheme(4);
    if ( (unsigned int)GetThemeTimingFunction(v51, *((unsigned int *)v47 + 1), 0LL, 0LL, &v93) == -2147024662 )
    {
      v52 = v93;
      v53 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v53 == WPF::ProcessHeapImpl::Alloc )
        v54 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v93);
      else
        v54 = v53(WPF::g_pProcessHeap, v93);
      v55 = v54;
      v56 = CDesktopManager::GetTheme(4);
      ThemeTimingFunction = GetThemeTimingFunction(v56, *((unsigned int *)v47 + 1), v55, v52, &v93);
      v9 = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, 0x430u);
        goto LABEL_67;
      }
      CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v58, v55);
      if ( *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL) == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v59);
      else
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    }
    if ( *(_DWORD *)v47 == 1 )
    {
      v60 = *((_DWORD *)v47 + 4);
      if ( (v60 & 1) == 0 )
      {
        if ( v36 <= 0.0 || v37 <= 0.0 )
          goto LABEL_77;
        v78 = *(_DWORD *)(a1 + 368);
        if ( v78 == 2 )
        {
          v83 = v47[7];
          v84 = fmaxf(v83, v24 / v36);
          v85 = fmaxf(v47[8], v38 / v37);
          v86 = fminf(v84, v85);
          v87 = fmaxf(v84, v85);
        }
        else
        {
          if ( v78 != 4 )
          {
LABEL_77:
            if ( (v60 & 4) != 0 )
            {
              v79 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
              v9 = v79;
              if ( v79 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x498u);
                goto LABEL_117;
              }
              v80 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
              v9 = v80;
              if ( v80 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x499u);
                goto LABEL_117;
              }
            }
            v81 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
            v9 = v81;
            if ( v81 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x49Cu);
              goto LABEL_117;
            }
            v82 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
            v9 = v82;
            if ( v82 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x49Du);
              goto LABEL_117;
            }
            goto LABEL_52;
          }
          v83 = v47[7];
          v87 = fminf(fminf(v83, v24 / v36), fminf(v47[8], v38 / v37));
          v86 = v87;
        }
        v88 = v86 - v47[5];
        v89 = v83 - v47[5];
        v47[7] = v87;
        v47[8] = v87;
        v50 = fmaxf(0.0, (float)(v88 * v50) / v89);
        goto LABEL_77;
      }
      if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
      {
        v9 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x45Du);
        goto LABEL_117;
      }
      v61 = 1.0 - v47[8];
      v62 = 1.0 - v47[7];
      v63 = v62 * v36;
      v64 = v47[8] * *(float *)&PerformanceCount.LowPart;
      *(float *)&v97 = (float)(v62 * v29) + (float)(v47[7] * *(float *)&v98);
      v65 = (float)(v61 * v33) + v64;
      v66 = v24 * v47[7];
      *((float *)&v97 + 1) = v65;
      v36 = v66 + v63;
      v37 = (float)(v38 * v47[8]) + (float)(v61 * v37);
      v67 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      v9 = v67;
      if ( v67 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x451u);
        goto LABEL_117;
      }
      v68 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      v9 = v68;
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x452u);
        goto LABEL_117;
      }
      v69 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v9 = v69;
      if ( v69 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x457u);
        goto LABEL_117;
      }
      v70 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v9 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x458u);
        goto LABEL_117;
      }
    }
    else if ( *(_DWORD *)v47 == 2 )
    {
      if ( ((_BYTE)v47[4] & 1) != 0 )
      {
        if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
        {
          v9 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x4B0u);
          goto LABEL_117;
        }
        v91 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v9 = v91;
        if ( v91 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0x4ABu);
          goto LABEL_117;
        }
      }
      else
      {
        v71 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v9 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x4B7u);
          goto LABEL_117;
        }
      }
    }
LABEL_52:
    v4 = fmaxf(v50, v4);
LABEL_53:
    v72 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v72 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v47);
    else
      v72(WPF::g_pProcessHeap, v47);
LABEL_55:
    if ( ++v42 >= v96 )
      goto LABEL_56;
    LODWORD(v29) = v97;
    v33 = *((float *)&v97 + 1);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeAnimationTransform, 0x41Du);
LABEL_117:
  v55 = 0LL;
LABEL_67:
  if ( v47 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v47);
  if ( v55 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v55);
  return v9;
}

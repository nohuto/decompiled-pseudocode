/*
 * XREFs of ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E490 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18002E6F4 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002E784 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035260 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180081AD8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013014 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180013454 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18001692C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z @ 0x180016A0C (-GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUMilPointAndSizeF@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x18002D790 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA?AW4InterpolationMode@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x18002D7F4 (-ConvertTimingFunctionToInterpolationMode@CTopLevelWindow3D@@AEAA-AW4InterpolationMode@@PEAUTA_T.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18002E244 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002E660 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x18002EB08 (-CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4Interpolat.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18002EC38 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18003514C (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimation(__int64 a1, unsigned int a2)
{
  float v4; // xmm10_4
  __int64 v5; // rcx
  __int64 v6; // rax
  CWindowList *v7; // rcx
  bool v8; // r14
  int TimelineForTransform; // eax
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // r8d
  unsigned int v14; // ecx
  __m128i v15; // xmm0
  int v16; // ecx
  int v17; // ecx
  __m128i v18; // xmm0
  unsigned int v19; // eax
  DWORD v20; // xmm0_4
  __m128i v21; // xmm14
  unsigned int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm14_4
  __m128i v25; // xmm15
  float v26; // xmm8_4
  __m128i v27; // xmm9
  unsigned int v28; // eax
  float v29; // xmm9_4
  __m128i v30; // xmm12
  int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm12_4
  float v34; // xmm13_4
  float v35; // xmm15_4
  char v36; // al
  float v37; // xmm1_4
  __int64 v38; // rdx
  __int64 Theme; // rax
  unsigned int v40; // r13d
  __int64 v41; // rax
  unsigned int v42; // ebx
  LPVOID (__fastcall *v43)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  float *v44; // rax
  float *v45; // r14
  __int64 v46; // rax
  int ThemeAnimationTransform; // eax
  float v48; // xmm7_4
  __int64 v49; // rax
  unsigned int v50; // ebx
  LPVOID (__fastcall *v51)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v52; // rax
  LPVOID v53; // rsi
  __int64 v54; // rax
  int ThemeTimingFunction; // eax
  __int64 v56; // rcx
  void *v57; // rdx
  void (__fastcall *v58)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v59; // eax
  int v60; // ecx
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  void (__fastcall *v66)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v67; // rcx
  void *(__fastcall *v68)(WPF::ProcessHeapImpl *, size_t); // rax
  _QWORD *v69; // rax
  _QWORD *v70; // r8
  int v72; // esi
  float v73; // xmm3_4
  float v74; // xmm2_4
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  float v79; // xmm2_4
  float v80; // xmm3_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  float v83; // xmm3_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  int v86; // r9d
  int v87; // eax
  int v88; // eax
  unsigned int v89; // [rsp+28h] [rbp-E0h]
  unsigned int v90; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v91; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v92; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v93; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v94; // [rsp+58h] [rbp-B0h]
  __int64 v95; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v96; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v97; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  int v99; // [rsp+80h] [rbp-88h]
  int v100; // [rsp+84h] [rbp-84h]
  struct _GUID v101; // [rsp+98h] [rbp-70h] BYREF

  v93 = 0;
  v96 = 0LL;
  v97 = 0LL;
  v4 = 0.0;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
LABEL_66:
    TimelineForTransform = CTopLevelWindow3D::OnZOrderUpdated((CTopLevelWindow3D *)a1, 0);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
    {
      v53 = 0LL;
      v45 = 0LL;
      goto LABEL_68;
    }
    v89 = 1243;
    goto LABEL_90;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v5, &UdwmAnimation_Start, a2);
  CTopLevelWindow3D::GetScenarioGuid(v5, a2, &v101);
  v6 = *(_QWORD *)&v101.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&v101.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)v101.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)CWindowList::BeginTelemetryScenario(v7, &v101, PerformanceCount.QuadPart) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 4)
                                                                       + 224LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
        &v101,
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
    v89 = 963;
    goto LABEL_90;
  }
  v11 = *(_QWORD *)(a1 + 328);
  v12 = *(_QWORD *)(a1 + 336);
  v13 = *(_DWORD *)(v12 + 88);
  v14 = v13 + *(_DWORD *)(a1 + 308);
  v100 = *(_DWORD *)(v12 + 96);
  LODWORD(v12) = *(_DWORD *)(a1 + 312);
  v15 = _mm_cvtsi32_si128(v14);
  v16 = *(_DWORD *)(a1 + 316);
  v99 = v13;
  v17 = v16 - *(_DWORD *)(a1 + 308);
  LODWORD(v95) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v18 = _mm_cvtsi32_si128(v100 + (int)v12);
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
  v25 = _mm_cvtsi32_si128(v22);
  v26 = (float)(v13 + *(_DWORD *)(v11 + 48));
  v27 = _mm_cvtsi32_si128(v100 + *(_DWORD *)(v11 + 52));
  v28 = 0;
  if ( *(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 48) >= 0 )
    v28 = *(_DWORD *)(v11 + 56) - *(_DWORD *)(v11 + 48);
  *(float *)&v94 = (float)(v13 + *(_DWORD *)(v11 + 48));
  LODWORD(v29) = _mm_cvtepi32_ps(v27).m128_u32[0];
  v30 = _mm_cvtsi32_si128(v28);
  v31 = 0;
  if ( *(_DWORD *)(v11 + 60) - *(_DWORD *)(v11 + 52) >= 0 )
    v31 = *(_DWORD *)(v11 + 60) - *(_DWORD *)(v11 + 52);
  v96 = __PAIR64__(LODWORD(v29), LODWORD(v26));
  v32 = *(unsigned int *)(a1 + 368);
  LODWORD(v33) = _mm_cvtepi32_ps(v30).m128_u32[0];
  *((float *)&v94 + 1) = v29;
  *(float *)&v97 = v33;
  v34 = (float)v31;
  LODWORD(v35) = _mm_cvtepi32_ps(v25).m128_u32[0];
  *((float *)&v97 + 1) = (float)v31;
  if ( (((_DWORD)v32 - 2) & 0xFFFFFFFD) != 0 )
  {
    v36 = 0;
    v37 = 0.0;
  }
  else
  {
    v36 = 1;
    v37 = FLOAT_0_5;
  }
  *(float *)(a1 + 468) = v37;
  if ( !v36 )
    v23 = 0.0;
  *(_DWORD *)(a1 + 476) = 0;
  *(float *)(a1 + 472) = v23;
  if ( (((_DWORD)v32 - 3) & 0xFFFFFFFD) == 0 )
  {
    GetWindowMinimizeRect(*(_QWORD *)(v11 + 40), a1 + 292);
    if ( IsRectEmpty((const RECT *)(a1 + 292)) )
    {
      v87 = *(_DWORD *)(a1 + 368);
      if ( v87 == 3 )
        *(_DWORD *)(a1 + 368) = 6;
      v8 = v87 == 3;
    }
    else
    {
      CTopLevelWindow3D::GetFinalMinRect((struct tagRECT *)(a1 + 292), v35 / v24, (struct MilPointAndSizeF *)&v96);
      v29 = *((float *)&v96 + 1);
      LODWORD(v26) = v96;
      v34 = *((float *)&v97 + 1);
      v33 = *(float *)&v97;
      v94 = v96;
    }
    if ( !v8 )
      goto LABEL_66;
  }
  v38 = *(unsigned int *)(a1 + 368);
  if ( (unsigned int)(v38 - 7) <= 2 )
  {
    v4 = *((float *)CDesktopManager::s_pDesktopManagerInstance + 162);
    TimelineForTransform = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
    v10 = TimelineForTransform;
    if ( TimelineForTransform >= 0 )
      goto LABEL_57;
    v89 = 1019;
LABEL_90:
    v86 = TimelineForTransform;
LABEL_92:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, v89);
    return v10;
  }
  TimelineForTransform = CTopLevelWindow3D::GetAnimationIds(v32, v38, &v92, &v91);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v89 = 1024;
    goto LABEL_90;
  }
  Theme = CDesktopManager::GetTheme(3);
  TimelineForTransform = GetThemeAnimationProperty(Theme, v92, v91, 1LL, &v93, 4, &v90);
  v10 = TimelineForTransform;
  if ( TimelineForTransform < 0 )
  {
    v89 = 1031;
    goto LABEL_90;
  }
  v40 = 0;
  if ( !v93 )
  {
LABEL_57:
    v67 = *(_QWORD *)(a1 + 360);
    if ( v67 )
    {
      *(_QWORD *)(v67 + 48) = *(_QWORD *)(v67 + 32);
      *(_WORD *)(v67 + 72) = 256;
      CDesktopManager::s_fTimelineDirty = 1;
      *(double *)(v67 + 24) = v4;
    }
    else
    {
      v68 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v68 == WPF::ProcessHeapImpl::AllocClear )
        v69 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
      else
        v69 = (_QWORD *)v68(WPF::g_pProcessHeap, 80LL);
      v70 = v69;
      if ( v69 )
      {
        CTimelineBase::CTimelineBase((__int64)v69, v4, 0.0, 1.0, 0);
        *v70 = &CTimeline<float>::`vftable';
      }
      *(_QWORD *)(a1 + 360) = v70;
      if ( !v70 )
      {
        v10 = -2147024882;
        v89 = 1231;
        v86 = -2147024882;
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
    v41 = CDesktopManager::GetTheme(3);
    if ( (unsigned int)GetThemeAnimationTransform(v41, v92, v91, v40, 0LL, 0, &v90) != -2147024662 )
      goto LABEL_56;
    v42 = v90;
    v43 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v44 = v43 == WPF::ProcessHeapImpl::Alloc
        ? (float *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v90)
        : (float *)v43(WPF::g_pProcessHeap, v90);
    v45 = v44;
    v46 = CDesktopManager::GetTheme(3);
    ThemeAnimationTransform = GetThemeAnimationTransform(v46, v92, v91, v40, v45, v42, &v90);
    v10 = ThemeAnimationTransform;
    if ( ThemeAnimationTransform < 0 )
      break;
    if ( (unsigned int)(*(_DWORD *)v45 - 1) > 1 )
      goto LABEL_54;
    v48 = (float)*((int *)v45 + 3) / 1000.0;
    v49 = CDesktopManager::GetTheme(4);
    if ( (unsigned int)GetThemeTimingFunction(v49, *((unsigned int *)v45 + 1), 0LL, 0LL, &v90) == -2147024662 )
    {
      v50 = v90;
      v51 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v51 == WPF::ProcessHeapImpl::Alloc )
        v52 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v90);
      else
        v52 = v51(WPF::g_pProcessHeap, v90);
      v53 = v52;
      v54 = CDesktopManager::GetTheme(4);
      ThemeTimingFunction = GetThemeTimingFunction(v54, *((unsigned int *)v45 + 1), v53, v50, &v90);
      v10 = ThemeTimingFunction;
      if ( ThemeTimingFunction < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ThemeTimingFunction, 0x430u);
        goto LABEL_68;
      }
      CTopLevelWindow3D::ConvertTimingFunctionToInterpolationMode(v56, v53);
      v58 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v58 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v57);
      else
        ((void (__fastcall *)(WPF::ProcessHeapImpl *))v58)(WPF::g_pProcessHeap);
    }
    if ( *(_DWORD *)v45 == 1 )
    {
      v59 = *((_DWORD *)v45 + 4);
      if ( (v59 & 1) == 0 )
      {
        if ( v33 <= 0.0 || v34 <= 0.0 )
          goto LABEL_44;
        v60 = *(_DWORD *)(a1 + 368);
        if ( v60 == 2 )
        {
          v79 = v45[7];
          v80 = fmaxf(v79, v24 / v33);
          v81 = fmaxf(v45[8], v35 / v34);
          v82 = fminf(v80, v81);
          v83 = fmaxf(v80, v81);
        }
        else
        {
          if ( v60 != 4 )
          {
LABEL_44:
            if ( (v59 & 4) != 0 )
            {
              v61 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
              v10 = v61;
              if ( v61 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0x498u);
                goto LABEL_120;
              }
              v62 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
              v10 = v62;
              if ( v62 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x499u);
                goto LABEL_120;
              }
            }
            v63 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
            v10 = v63;
            if ( v63 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x49Cu);
              goto LABEL_120;
            }
            v64 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
            v10 = v64;
            if ( v64 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x49Du);
              goto LABEL_120;
            }
            goto LABEL_53;
          }
          v79 = v45[7];
          v83 = fminf(fminf(v79, v24 / v33), fminf(v45[8], v35 / v34));
          v82 = v83;
        }
        v84 = v82 - v45[5];
        v85 = v79 - v45[5];
        v45[7] = v83;
        v45[8] = v83;
        v48 = fmaxf(0.0, (float)(v84 * v48) / v85);
        goto LABEL_44;
      }
      v72 = *(_DWORD *)(a1 + 368);
      if ( ((v72 - 3) & 0xFFFFFFFD) != 0 )
      {
        v10 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x45Du);
        goto LABEL_120;
      }
      v73 = v45[7];
      v74 = v45[8];
      *(float *)&v94 = (float)((float)(1.0 - v73) * v26) + (float)(v73 * *(float *)&v95);
      *((float *)&v94 + 1) = (float)((float)(1.0 - v74) * v29) + (float)(v74 * *(float *)&PerformanceCount.LowPart);
      v33 = (float)((float)(1.0 - v73) * v33) + (float)(v73 * v24);
      v34 = (float)((float)(1.0 - v74) * v34) + (float)(v74 * v35);
      v75 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 0LL);
      v10 = v75;
      if ( v75 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x451u);
        goto LABEL_120;
      }
      v76 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 1LL);
      v10 = v76;
      if ( v76 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x452u);
        goto LABEL_120;
      }
      v77 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 6LL);
      v10 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x457u);
        goto LABEL_120;
      }
      v78 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 7LL);
      v10 = v78;
      if ( v78 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0x458u);
        goto LABEL_120;
      }
    }
    else if ( *(_DWORD *)v45 == 2 )
    {
      if ( ((_BYTE)v45[4] & 1) != 0 )
      {
        if ( ((*(_DWORD *)(a1 + 368) - 3) & 0xFFFFFFFD) != 0 )
        {
          v10 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4B0u);
          goto LABEL_120;
        }
        v88 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v10 = v88;
        if ( v88 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x4ABu);
          goto LABEL_120;
        }
      }
      else
      {
        v65 = CTopLevelWindow3D::CreateTimelineForTransform(a1, 9LL);
        v10 = v65;
        if ( v65 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x4B7u);
          goto LABEL_120;
        }
      }
    }
LABEL_53:
    v4 = fmaxf(v48, v4);
LABEL_54:
    v66 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v66 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v45);
    else
      v66(WPF::g_pProcessHeap, v45);
LABEL_56:
    if ( ++v40 >= v93 )
      goto LABEL_57;
    LODWORD(v26) = v94;
    v29 = *((float *)&v94 + 1);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ThemeAnimationTransform, 0x41Du);
LABEL_120:
  v53 = 0LL;
LABEL_68:
  if ( v45 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v45);
  if ( v53 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v53);
  return v10;
}

/*
 * XREFs of ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@WGI@EAAJXZ @ 0x1800DD520 (-PreRender@CDesktopRenderTarget@@WGI@EAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA370 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     HintPpm @ 0x180149458 (HintPpm.c)
 *     McTemplateU0dtxxxx @ 0x1801496B8 (McTemplateU0dtxxxx.c)
 */

__int64 __fastcall CDesktopRenderTarget::PreRender(CDesktopRenderTarget *this)
{
  unsigned __int64 v1; // rdi
  int v3; // esi
  struct CVisualTree *v4; // rcx
  int v5; // eax
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rcx
  struct wil_details_RecordUsageResult *v9; // r9
  unsigned __int64 v10; // rcx
  HANDLE CurrentThread; // rax
  BOOL v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  struct wil_details_RecordUsageResult *v18; // r9
  HANDLE v19; // rax
  BOOL v20; // eax
  unsigned __int64 v22; // rsi
  int v23; // edx
  int v24; // ecx
  char v25; // al
  int v26; // r9d
  unsigned __int64 v27; // rsi
  int v28; // edx
  int v29; // ecx
  char v30; // al
  unsigned __int64 CycleTime; // [rsp+50h] [rbp-19h] BYREF
  int v32; // [rsp+58h] [rbp-11h] BYREF
  __int16 v33; // [rsp+5Ch] [rbp-Dh]
  _BYTE v34[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v35; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+80h] [rbp+17h]
  int v37; // [rsp+88h] [rbp+1Fh]
  int v38; // [rsp+8Ch] [rbp+23h]
  __int128 v39; // [rsp+90h] [rbp+27h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+37h]

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 34) )
  {
    v4 = (struct CVisualTree *)*((_QWORD *)this + 7);
    if ( v4 )
    {
      v5 = CVisualTree::PreCompute(v4, (__int128 *)((char *)this + 212));
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x7F1u);
    }
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v3, 0x661u);
    return (unsigned int)v3;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 72LL) + 114LL) )
      CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 40));
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      ((void (*)(void))wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState)();
    LOBYTE(v33) = 3;
    v6 = 1;
    LODWORD(CycleTime) = 0;
    WORD2(CycleTime) = v33;
    v32 = 3;
    v7 = wil_details_RecordUsageInPropertyCache(
           v34,
           &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
           2LL);
    v39 = *(_OWORD *)v7;
    v40 = *(_QWORD *)(v7 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)0xC36614,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          (union wil_details_FeaturePropertyCache *)&v39,
          v9);
      else
        g_wil_details_recordFeatureUsage(
          0xC36614u,
          (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
          (struct wil_details_RecordUsageResult *)&v39);
      v8 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
      {
        v37 = 0;
        v38 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
        v35 = 0LL;
        v36 = 2LL;
        ((void (__fastcall *)(__int64, _QWORD, __int64 *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, &v35);
      }
    }
    if ( !(_DWORD)v40 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xC36614u,
        (const struct FEATURE_LOGGED_TRAITS *)&CycleTime,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v32,
        0LL,
        0,
        1uLL);
    LOBYTE(v8) = 3;
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v8)
      && !byte_1802D68C0 )
    {
      v22 = qword_1802D68E0;
      QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
      v25 = CycleTime;
      if ( v22 < CycleTime )
      {
        HintPpm(2LL);
        v25 = CycleTime;
        v26 = 1;
        byte_1802D68C0 = 1;
      }
      else
      {
        v26 = 0;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0dtxxxx(v24, v23, 3, v26, qword_1802D68B8, qword_1802D68B0, v22, v25);
    }
    v10 = 0LL;
    CycleTime = 0LL;
    if ( ::CycleTime )
    {
      CurrentThread = GetCurrentThread();
      v12 = QueryThreadCycleTime(CurrentThread, &CycleTime);
      v10 = CycleTime;
      if ( v12 )
        qword_1802D62B8 += CycleTime - ::CycleTime;
    }
    ::CycleTime = v10;
    v13 = CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)((char *)this + 104), 1LL);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v13, 0x66Fu);
    }
    else
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedFeatureEnabledState(v14);
      LOBYTE(v33) = 3;
      LODWORD(CycleTime) = 0;
      WORD2(CycleTime) = v33;
      v32 = 3;
      v16 = wil_details_RecordUsageInPropertyCache(
              v34,
              &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
              2LL);
      v39 = *(_OWORD *)v16;
      v40 = *(_QWORD *)(v16 + 16);
      if ( g_wil_details_recordFeatureUsage )
      {
        if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
          wil::details::RecordFeatureUsageCallback(
            (wil::details *)0xC36614,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
            (union wil_details_FeaturePropertyCache *)&v39,
            v18);
        else
          g_wil_details_recordFeatureUsage(
            0xC36614u,
            (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data,
            (struct wil_details_RecordUsageResult *)&v39);
        v17 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data;
        if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
        {
          v37 = 0;
          v38 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
          v35 = 0LL;
          v36 = 2LL;
          ((void (__fastcall *)(__int64, _QWORD, __int64 *))g_wil_details_recordFeatureUsage)(12805652LL, 0LL, &v35);
        }
      }
      if ( !(_DWORD)v40 && g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xC36614u,
          (const struct FEATURE_LOGGED_TRAITS *)&CycleTime,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v32,
          0LL,
          0,
          1uLL);
      LOBYTE(v17) = 3;
      if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(v17)
        && !byte_1802D68C0 )
      {
        v27 = qword_1802D68E8;
        QueryPerformanceCounter((LARGE_INTEGER *)&CycleTime);
        v30 = CycleTime;
        if ( v27 < CycleTime )
        {
          HintPpm(2LL);
          v30 = CycleTime;
          byte_1802D68C0 = 1;
        }
        else
        {
          v6 = 0;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0dtxxxx(v29, v28, 4, v6, qword_1802D68B8, qword_1802D68B0, v27, v30);
      }
      CycleTime = 0LL;
      if ( ::CycleTime )
      {
        v19 = GetCurrentThread();
        v20 = QueryThreadCycleTime(v19, &CycleTime);
        v1 = CycleTime;
        if ( v20 )
          qword_1802D62C8 += CycleTime - ::CycleTime;
      }
      ::CycleTime = v1;
    }
    return v15;
  }
}

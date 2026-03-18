/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x1800CE8B8
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800CE85C (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800CEE44 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

void CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  bool HKLMDword; // al
  unsigned int v1; // ecx
  bool v2; // al
  unsigned int v3; // ecx
  bool v4; // al
  unsigned int v5; // ecx
  bool v6; // al
  unsigned int v7; // ecx
  bool v8; // al
  unsigned int v9; // ecx
  bool v10; // al
  unsigned int v11; // ecx
  LONGLONG v12; // rcx
  bool v13; // al
  unsigned int v14; // ecx
  bool v15; // al
  unsigned int v16; // ecx
  bool v17; // al
  unsigned int v18; // ecx
  bool v19; // al
  unsigned int v20; // ecx
  bool v21; // al
  unsigned int v22; // ecx
  bool v23; // al
  unsigned int v24; // ecx
  bool v25; // al
  unsigned int v26; // ecx
  bool v27; // al
  unsigned int v28; // edx
  bool v29; // al
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // [rsp+30h] [rbp+10h] BYREF

  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v34) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v34;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableDesktopPlaneSplit", &v34) )
    CCommonRegistryData::m_fEnableDesktopPlaneSplit = v34 != 0;
  v34 = 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyInterval", &v34);
  v1 = CCommonRegistryData::m_dwOverlayQualifyInterval;
  if ( HKLMDword )
    v1 = v34;
  CCommonRegistryData::m_dwOverlayQualifyInterval = v1;
  v34 = 0;
  v2 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyInterval", &v34);
  v3 = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
  if ( v2 )
    v3 = v34;
  CCommonRegistryData::m_dwOverlayDisqualifyInterval = v3;
  v34 = 0;
  v4 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyCount", &v34);
  v5 = CCommonRegistryData::m_uOverlayQualifyCount;
  if ( v4 )
    v5 = v34;
  CCommonRegistryData::m_uOverlayQualifyCount = v5;
  v34 = 0;
  v6 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyCount", &v34);
  v7 = CCommonRegistryData::m_uOverlayDisqualifyCount;
  if ( v6 )
    v7 = v34;
  CCommonRegistryData::m_uOverlayDisqualifyCount = v7;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableAdvancedDirectFlip", &v34);
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v34) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FlattenVirtualSurfaceEffectInput", &v34) )
    CCommonRegistryData::m_fFlattenVirtualSurfaceBrush = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v34) )
    CCommonRegistryData::m_fEnableCpuClipping = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCommonSuperSets", &v34) )
    CCommonRegistryData::m_fEnableCommonSuperSets = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v34) )
    CCommonRegistryData::m_fEnableMegaRects = v34 != 0;
  v8 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v34);
  v9 = CCommonRegistryData::m_dwMegaRectSize;
  if ( v8 )
    v9 = v34;
  CCommonRegistryData::m_dwMegaRectSize = v9;
  v10 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v34);
  v11 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v10 )
    v11 = v34;
  CCommonRegistryData::m_dwMegaRectSearchCount = v11;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"CpuClipAreaThreshold", &v34) )
    CCommonRegistryData::m_flCpuClipAreaThreshold = (float)(int)v34;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v34) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v34) )
    CCommonRegistryData::m_fDisableDrawListCaching = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"LogExpressionPerfStats", &v34) )
    CCommonRegistryData::m_fLogExpressionPerfStats = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OptimizeForDirtyExpressions", &v34) )
    CCommonRegistryData::m_fOptimizeForDirtyExpressions = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InteractionOutputPredictionDisabled", &v34) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableEffectCaching", &v34) )
    CCommonRegistryData::m_fEnableEffectCaching = v34 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"BackdropBlurCachingThrottleMs", &v34) )
  {
    v31 = v34;
    if ( v34 > 0x3E8 )
      v31 = 1000;
    v12 = g_qpcFrequency.QuadPart * v31;
  }
  else
  {
    v12 = 25 * g_qpcFrequency.QuadPart;
  }
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v12 / 1000;
  v13 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MaxD3DFeatureLevel", &v34);
  v14 = CCommonRegistryData::m_dwMaxD3DFeatureLevel;
  if ( v13 )
    v14 = v34;
  CCommonRegistryData::m_dwMaxD3DFeatureLevel = v14;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm\\Dwm3DRE", L"DisableDrawToBackbuffer", &v34) )
    CCommonRegistryData::m_fDwm3DREDisableDrawToBackbuffer = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"GammaBlendPencil", &v34) )
    CCommonRegistryData::m_fGammaBlendPencil = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"GammaBlendWithFP16", &v34) )
    CCommonRegistryData::m_fGammaBlendWithFP16 = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableRenderPathTestMode", &v34) )
    CCommonRegistryData::m_fRenderPathTestMode = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisallowNonDrawListRendering", &v34) )
    CCommonRegistryData::m_fEnableDisallowNonDrawListRendering = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ForceEffectMode", &v34) )
  {
    v32 = CCommonRegistryData::m_forceEffectMode;
    if ( v34 <= 2 )
      v32 = v34;
    CCommonRegistryData::m_forceEffectMode = v32;
  }
  v34 = 0;
  v15 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModeLeaveAfterThresholdMS", &v34);
  v16 = CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS;
  if ( v15 )
    v16 = v34;
  CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS = v16;
  v34 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModePolicy", &v34) )
  {
    v33 = v34;
    if ( v34 >= 4 || v34 == 2 && !CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS )
      v33 = 1;
    CCommonRegistryData::m_parallelModePolicy = v33;
  }
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SDRBoostPercentOverride", &v34) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)(int)v34 / 100.0;
  v34 = 0;
  v17 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesReportPeriodMilliseconds", &v34);
  v18 = CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds;
  if ( v17 )
    v18 = v34;
  CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds = v18;
  v34 = 0;
  v19 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceMaximumPeriodMilliseconds", &v34);
  v20 = CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds;
  if ( v19 )
    v20 = v34;
  CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds = v20;
  v34 = 0;
  v21 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceIdleIntervalMilliseconds", &v34);
  v22 = CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds;
  if ( v21 )
    v22 = v34;
  CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds = v22;
  v34 = 0;
  v23 = RegGetHKLMDword(
          L"Software\\Microsoft\\Windows\\Dwm",
          L"TelemetryFatFramesAlarmConsecutiveGlitchCountThreshold",
          &v34);
  v24 = CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold;
  if ( v23 )
    v24 = v34;
  CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold = v24;
  v34 = 0;
  v25 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFatFramesAlarmTimeoutMilliseconds", &v34);
  v26 = CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds;
  if ( v25 )
    v26 = v34;
  CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds = v26;
  v34 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", &v34) )
    CCommonRegistryData::m_fConfigureInput = v34 != 0;
  v34 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SuperWetEnabled", &v34) )
    CCommonRegistryData::m_fSuperWetEnabled = v34 != 0;
  v27 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SuperWetExtensionTimeMicroseconds", &v34);
  v28 = CCommonRegistryData::m_dwSuperWetExtensionTimeMicroseconds;
  if ( v27 )
    v28 = v34;
  CCommonRegistryData::m_dwSuperWetExtensionTimeMicroseconds = v28;
  v29 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InkGPUAccelOverrideVendorWhitelist", &v34);
  v30 = CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist;
  if ( v29 )
    v30 = v34;
  CCommonRegistryData::m_fInkGPUAccelOverrideVendorWhitelist = v30;
}

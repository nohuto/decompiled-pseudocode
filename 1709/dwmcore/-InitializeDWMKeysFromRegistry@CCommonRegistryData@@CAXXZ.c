/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAXXZ @ 0x18018DE24
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x18018E3D0 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1801947C4 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

void CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
{
  int v0; // ebx
  bool HKLMDword; // al
  unsigned int v2; // ecx
  bool v3; // al
  unsigned int v4; // ecx
  bool v5; // al
  unsigned int v6; // ecx
  bool v7; // al
  unsigned int v8; // ecx
  bool v9; // al
  unsigned int v10; // ecx
  bool v11; // al
  unsigned int v12; // ecx
  unsigned int v13; // eax
  LONGLONG v14; // rcx
  bool v15; // al
  unsigned int v16; // ecx
  unsigned int v17; // eax
  bool v18; // al
  unsigned int v19; // ecx
  unsigned int v20; // eax
  bool v21; // al
  unsigned int v22; // ecx
  bool v23; // al
  unsigned int v24; // ecx
  bool v25; // al
  unsigned int v26; // ecx
  bool v27; // al
  unsigned int v28; // ecx
  bool v29; // al
  unsigned int v30; // edx
  unsigned int v31; // [rsp+30h] [rbp+10h] BYREF

  v0 = 0;
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v31) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v31;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableDesktopPlaneSplit", &v31) )
    CCommonRegistryData::m_fEnableDesktopPlaneSplit = v31 != 0;
  v31 = 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyInterval", &v31);
  v2 = CCommonRegistryData::m_dwOverlayQualifyInterval;
  if ( HKLMDword )
    v2 = v31;
  CCommonRegistryData::m_dwOverlayQualifyInterval = v2;
  v31 = 0;
  v3 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyInterval", &v31);
  v4 = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
  if ( v3 )
    v4 = v31;
  CCommonRegistryData::m_dwOverlayDisqualifyInterval = v4;
  v31 = 0;
  v5 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyCount", &v31);
  v6 = CCommonRegistryData::m_uOverlayQualifyCount;
  if ( v5 )
    v6 = v31;
  CCommonRegistryData::m_uOverlayQualifyCount = v6;
  v31 = 0;
  v7 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyCount", &v31);
  v8 = CCommonRegistryData::m_uOverlayDisqualifyCount;
  if ( v7 )
    v8 = v31;
  CCommonRegistryData::m_uOverlayDisqualifyCount = v8;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableAdvancedDirectFlip", &v31);
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v31) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v31 != 0;
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v31) )
    CCommonRegistryData::m_fEnableCpuClipping = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCommonSuperSets", &v31) )
    CCommonRegistryData::m_fEnableCommonSuperSets = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v31) )
    CCommonRegistryData::m_fEnableMegaRects = v31 != 0;
  v9 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v31);
  v10 = CCommonRegistryData::m_dwMegaRectSize;
  if ( v9 )
    v10 = v31;
  CCommonRegistryData::m_dwMegaRectSize = v10;
  v11 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v31);
  v12 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v11 )
    v12 = v31;
  CCommonRegistryData::m_dwMegaRectSearchCount = v12;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"CpuClipAreaThreshold", &v31) )
    CCommonRegistryData::m_flCpuClipAreaThreshold = (float)(int)v31;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v31) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v31) )
    CCommonRegistryData::m_fDisableDrawListCaching = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"LogExpressionPerfStats", &v31) )
    CCommonRegistryData::m_fLogExpressionPerfStats = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OptimizeForDirtyExpressions", &v31) )
    CCommonRegistryData::m_fOptimizeForDirtyExpressions = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InteractionOutputPredictionDisabled", &v31) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableEffectCaching", &v31) )
    CCommonRegistryData::m_fEnableEffectCaching = v31 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"BackdropBlurCachingThrottleMs", &v31) )
  {
    v13 = v31;
    if ( v31 > 0x3E8 )
      v13 = 1000;
    v14 = g_qpcFrequency.QuadPart * v13;
  }
  else
  {
    v14 = 25 * g_qpcFrequency.QuadPart;
  }
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v14 / 1000;
  v15 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MaxD3DFeatureLevel", &v31);
  v16 = CCommonRegistryData::m_dwMaxD3DFeatureLevel;
  if ( v15 )
    v16 = v31;
  CCommonRegistryData::m_dwMaxD3DFeatureLevel = v16;
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableRenderPathTestMode", &v31) )
    CCommonRegistryData::m_fRenderPathTestMode = v31 != 0;
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisallowNonDrawListRendering", &v31) )
    CCommonRegistryData::m_fEnableDisallowNonDrawListRendering = v31 != 0;
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ForceEffectMode", &v31) )
  {
    v17 = CCommonRegistryData::m_forceEffectMode;
    if ( v31 <= 2 )
      v17 = v31;
    CCommonRegistryData::m_forceEffectMode = v17;
  }
  v31 = 0;
  v18 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModeLeaveAfterThresholdMS", &v31);
  v19 = CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS;
  if ( v18 )
    v19 = v31;
  CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS = v19;
  v31 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ParallelModePolicy", &v31) )
  {
    v20 = v31;
    if ( v31 >= 4 || v31 == 2 && !CCommonRegistryData::m_dwParallelModeLeaveAfterThresholdMS )
      v20 = 1;
    CCommonRegistryData::m_parallelModePolicy = v20;
  }
  v31 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"SDRBoostPercentOverride", &v31) )
    CCommonRegistryData::m_flSDRBoostOverride = (float)(int)v31 / 100.0;
  v31 = 0;
  v21 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesReportPeriodMilliseconds", &v31);
  v22 = CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds;
  if ( v21 )
    v22 = v31;
  CCommonRegistryData::m_telemetryFramesReportPeriodMilliseconds = v22;
  v31 = 0;
  v23 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceMaximumPeriodMilliseconds", &v31);
  v24 = CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds;
  if ( v23 )
    v24 = v31;
  CCommonRegistryData::m_telemetryFramesSequenceMaximumPeriodMilliseconds = v24;
  v31 = 0;
  v25 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFramesSequenceIdleIntervalMilliseconds", &v31);
  v26 = CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds;
  if ( v25 )
    v26 = v31;
  CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds = v26;
  v31 = 0;
  v27 = RegGetHKLMDword(
          L"Software\\Microsoft\\Windows\\Dwm",
          L"TelemetryFatFramesAlarmConsecutiveGlitchCountThreshold",
          &v31);
  v28 = CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold;
  if ( v27 )
    v28 = v31;
  CCommonRegistryData::m_telemetryFatFramesAlarmConsecutiveGlitchCountThreshold = v28;
  v31 = 0;
  v29 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"TelemetryFatFramesAlarmTimeoutMilliseconds", &v31);
  v30 = CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds;
  if ( v29 )
    v30 = v31;
  CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds = v30;
  v31 = 1;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ConfigureInput", &v31) )
  {
    LOBYTE(v0) = v31 != 0;
    CCommonRegistryData::m_fConfigureInput = v0;
  }
}

/*
 * XREFs of ?InitializeDWMKeysFromRegistry@CCommonRegistryData@@CAJXZ @ 0x1800C6FF0
 * Callers:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800C6F18 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x1800C744C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 CCommonRegistryData::InitializeDWMKeysFromRegistry(void)
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
  bool v10; // zf
  unsigned int v11; // eax
  bool v12; // al
  unsigned int v13; // ecx
  bool v14; // al
  unsigned int v15; // ecx
  unsigned int v16; // eax
  LONGLONG v17; // rcx
  unsigned int v18; // eax
  unsigned int v20; // [rsp+30h] [rbp+10h] BYREF

  v20 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayTestMode", &v20) )
  {
    CCommonRegistryData::m_dwOverlayTestMode = v20;
    CCommonRegistryData::m_fOverlayTestMode = 1;
  }
  v20 = 0;
  HKLMDword = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"IndependentRefreshRateScheduler", &v20);
  v1 = CCommonRegistryData::m_fIndependentRefreshRateScheduler;
  if ( HKLMDword )
    v1 = v20;
  CCommonRegistryData::m_fIndependentRefreshRateScheduler = v1;
  v20 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableDesktopPlaneSplit", &v20) )
    CCommonRegistryData::m_fEnableDesktopPlaneSplit = v20 != 0;
  v20 = 0;
  v2 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyInterval", &v20);
  v3 = CCommonRegistryData::m_dwOverlayQualifyInterval;
  if ( v2 )
    v3 = v20;
  CCommonRegistryData::m_dwOverlayQualifyInterval = v3;
  v20 = 0;
  v4 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyInterval", &v20);
  v5 = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
  if ( v4 )
    v5 = v20;
  CCommonRegistryData::m_dwOverlayDisqualifyInterval = v5;
  v20 = 0;
  v6 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayQualifyCount", &v20);
  v7 = CCommonRegistryData::m_uOverlayQualifyCount;
  if ( v6 )
    v7 = v20;
  CCommonRegistryData::m_uOverlayQualifyCount = v7;
  v20 = 0;
  v8 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OverlayDisqualifyCount", &v20);
  v9 = CCommonRegistryData::m_uOverlayDisqualifyCount;
  if ( v8 )
    v9 = v20;
  CCommonRegistryData::m_uOverlayDisqualifyCount = v9;
  RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableAdvancedDirectFlip", &v20);
  v20 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"FrameCounterPosition", &v20) )
    CCommonRegistryData::m_fDebugFrameCounterIsVertical = v20 != 0;
  v20 = 0;
  v10 = !RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DrawListRenderPathMode", &v20);
  v11 = CCommonRegistryData::m_drawListRenderPathMode;
  if ( !v10 )
  {
    if ( v20 <= 2 )
      v11 = v20;
    CCommonRegistryData::m_drawListRenderPathMode = v11;
  }
  if ( v11 == 1 )
  {
    CCommonRegistryData::m_fEnableCpuClipping = 0;
  }
  else if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCpuClipping", &v20) )
  {
    CCommonRegistryData::m_fEnableCpuClipping = v20 != 0;
  }
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableCommonSuperSets", &v20) )
    CCommonRegistryData::m_fEnableCommonSuperSets = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableMegaRects", &v20) )
    CCommonRegistryData::m_fEnableMegaRects = v20 != 0;
  v12 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSize", &v20);
  v13 = CCommonRegistryData::m_dwMegaRectSize;
  if ( v12 )
    v13 = v20;
  CCommonRegistryData::m_dwMegaRectSize = v13;
  v14 = RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"MegaRectSearchCount", &v20);
  v15 = CCommonRegistryData::m_dwMegaRectSearchCount;
  if ( v14 )
    v15 = v20;
  CCommonRegistryData::m_dwMegaRectSearchCount = v15;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"CpuClipAreaThreshold", &v20) )
    CCommonRegistryData::m_flCpuClipAreaThreshold = (float)(int)v20;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"UseHWDrawListEntriesOnWARP", &v20) )
    CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisableDrawListCaching", &v20) )
    CCommonRegistryData::m_fDisableDrawListCaching = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"LogExpressionPerfStats", &v20) )
    CCommonRegistryData::m_fLogExpressionPerfStats = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"OptimizeForDirtyExpressions", &v20) )
    CCommonRegistryData::m_fOptimizeForDirtyExpressions = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"InteractionOutputPredictionDisabled", &v20) )
    CCommonRegistryData::m_fDisableInteractionOutputPrediction = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableEffectCaching", &v20) )
    CCommonRegistryData::m_fEnableEffectCaching = v20 != 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"BackdropBlurCachingThrottleMs", &v20) )
  {
    v16 = v20;
    if ( v20 > 0x3E8 )
      v16 = 1000;
    v17 = g_qpcFrequency.QuadPart * v16;
  }
  else
  {
    v17 = 25 * g_qpcFrequency.QuadPart;
  }
  v20 = 0;
  CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta = v17 / 1000;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"EnableRenderPathTestMode", &v20) )
    CCommonRegistryData::m_fRenderPathTestMode = v20 != 0;
  v20 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"DisallowNonDrawListRendering", &v20) )
    CCommonRegistryData::m_fEnableDisallowNonDrawListRendering = v20 != 0;
  v20 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"ForceEffectMode", &v20) )
  {
    v18 = CCommonRegistryData::m_forceEffectMode;
    if ( v20 <= 2 )
      v18 = v20;
    CCommonRegistryData::m_forceEffectMode = v18;
  }
  return 0LL;
}

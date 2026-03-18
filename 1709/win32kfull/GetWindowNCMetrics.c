/*
 * XREFs of GetWindowNCMetrics @ 0x1C0076268
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     GetScaledLogFontForDpi @ 0x1C007810C (GetScaledLogFontForDpi.c)
 *     GetResizeBorderWidthForDpi @ 0x1C007BB64 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C007BB8C (GetWindowFrameMetricForDpi.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 */

__int64 __fastcall GetWindowNCMetrics(__int64 a1)
{
  __int64 DpiForSystem; // rsi
  __int64 v3; // rcx
  __int64 DPIServerInfo; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = (unsigned __int16)GetDpiForSystem();
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v3, (unsigned int)DpiForSystem);
  DPIServerInfo = GetDPIServerInfo();
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v6, v5);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8), 92LL, (char *)(a1 + 24));
  GreExtGetObjectW(DPIMetrics[4], 92LL, (char *)(a1 + 124));
  GreExtGetObjectW(*DPIMetrics, 92LL, (char *)(a1 + 224));
  GreExtGetObjectW(DPIMetrics[7], 92LL, (char *)(a1 + 316));
  return GetScaledLogFontForDpi(5LL, (unsigned int)DpiForSystem, a1 + 408);
}

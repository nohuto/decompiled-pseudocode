/*
 * XREFs of ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x180024394
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x1800C3144 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180140FE0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ConvertTelemetryInteractionTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 10 )
  {
    if ( a1 == 10 )
      return L"KbdUp";
    if ( a1 <= 5 )
    {
      if ( a1 == 5 )
        return L"PinchZoom";
      if ( !a1 )
        return L"Unknown";
      v5 = a1 - 1;
      if ( !v5 )
        return L"Manipulation";
      v6 = v5 - 1;
      if ( !v6 )
        return L"Tap";
      v7 = v6 - 1;
      if ( !v7 )
        return L"Hold";
      if ( v7 == 1 )
        return L"CrossSlide";
    }
    else
    {
      v1 = a1 - 6;
      if ( !v1 )
        return L"DirectInk";
      v2 = v1 - 1;
      if ( !v2 )
        return L"MouseLeftButton";
      v8 = v2 - 1;
      if ( !v8 )
        return L"MouseWheel";
      if ( v8 == 1 )
        return L"MouseHWheel";
    }
    return L"Undefined";
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return L"KbdHome";
    v4 = a1 - 11;
    if ( !v4 )
      return L"KbdDown";
    v9 = v4 - 1;
    if ( !v9 )
      return L"KbdPageUp";
    v10 = v9 - 1;
    if ( !v10 )
      return L"KbdPageDown";
    v11 = v10 - 1;
    if ( !v11 )
      return L"KbdLeft";
    if ( v11 == 1 )
      return L"KbdRight";
    return L"Undefined";
  }
  v12 = a1 - 17;
  if ( !v12 )
    return L"KbdEnd";
  v13 = v12 - 1;
  if ( !v13 )
    return L"DirectInkPencil";
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
      return L"DirectInkHighlighter";
    return L"Undefined";
  }
  return L"DirectInkPencilTilt";
}

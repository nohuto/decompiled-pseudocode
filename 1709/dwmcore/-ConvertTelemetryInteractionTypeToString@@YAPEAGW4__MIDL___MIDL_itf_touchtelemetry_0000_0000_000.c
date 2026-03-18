/*
 * XREFs of ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x18012B508
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x18012A9F4 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18012C37C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ConvertTelemetryInteractionTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
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
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return L"DirectInk";
      v6 = v5 - 1;
      if ( !v6 )
        return L"MouseLeftButton";
      v7 = v6 - 1;
      if ( !v7 )
        return L"MouseWheel";
      if ( v7 == 1 )
        return L"MouseHWheel";
    }
    else
    {
      if ( a1 == 5 )
        return L"PinchZoom";
      if ( !a1 )
        return L"Unknown";
      v1 = a1 - 1;
      if ( !v1 )
        return L"Manipulation";
      v2 = v1 - 1;
      if ( !v2 )
        return L"Tap";
      v3 = v2 - 1;
      if ( !v3 )
        return L"Hold";
      if ( v3 == 1 )
        return L"CrossSlide";
    }
    return L"Undefined";
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return L"KbdHome";
    v8 = a1 - 11;
    if ( !v8 )
      return L"KbdDown";
    v9 = v8 - 1;
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
  if ( !v14 )
    return L"DirectInkPencilTilt";
  if ( v14 != 1 )
    return L"Undefined";
  return L"DirectInkHighlighter";
}

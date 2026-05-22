/*
 * XREFs of ?EnsureEdgeThresholds@EdgeGestureComponent@@AEAAXXZ @ 0x18002ABC0
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18002A6A0 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     <none>
 */

void __fastcall EdgeGestureComponent::EnsureEdgeThresholds(EdgeGestureComponent *this)
{
  float v2; // xmm0_4
  double v3; // xmm2_8
  double v4; // xmm2_8
  float v5; // xmm1_4
  int v6; // ecx
  double v7; // xmm0_8
  double v8; // xmm0_8
  DWORD cbData; // [rsp+40h] [rbp+10h] BYREF
  int Data; // [rsp+48h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 11) )
  {
    v2 = (float)((float)*((int *)this + 9) / 800.0) * 40.0;
    v3 = v2;
    v4 = v2 < 0.0 ? v3 - 0.5 : v3 + 0.5;
    v5 = (float)((float)*((int *)this + 8) / 480.0) * 40.0;
    v6 = (int)v4;
    v7 = v5;
    v8 = v5 < 0.0 ? v7 - 0.5 : v7 + 0.5;
    *((_DWORD *)this + 11) = v6;
    *((_DWORD *)this + 12) = v6;
    *((_DWORD *)this + 13) = (int)v8;
    *((_DWORD *)this + 14) = (int)v8;
    Edge::s_hittestSpan.x = (float)v6;
    *(float *)&dword_18010EF44 = (float)(int)v8;
    if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\Touch\\EdgeGestureThresholds", 0, 0x20019u, &hKey) )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Top", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 11) = Data;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Bottom", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 12) = Data;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Left", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 13) = Data;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"Right", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
        *((_DWORD *)this + 14) = Data;
      RegCloseKey(hKey);
    }
  }
}

/*
 * XREFs of GetWindowNCMetrics @ 0x1C00452A4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     GetResizeBorderWidth @ 0x1C00C28B8 (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C00C28F0 (GetWindowFrameMetric.c)
 */

__int64 __fastcall GetWindowNCMetrics(_DWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 DPIServerInfo; // rdi
  _QWORD *DPIMetrics; // rbx

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
  {
    v2 = gpsi;
    v3 = *(_DWORD *)(gpsi + 2004LL);
  }
  else
  {
    v3 = *(_DWORD *)(gpsi + 2392LL);
  }
  a1[5] = v3;
  if ( (W32GetCurrentThreadDpiAwarenessContext(v2) & 0xF) != 0 )
    v4 = *(_DWORD *)(gpsi + 2100LL);
  else
    v4 = *(_DWORD *)(gpsi + 2488LL);
  a1[55] = v4;
  a1[1] = GetResizeBorderWidth(gpsi);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v5) & 0xF) != 0 )
    v6 = *(_DWORD *)(gpsi + 1888LL);
  else
    v6 = *(_DWORD *)(gpsi + 2276LL);
  a1[2] = v6;
  if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
    v7 = *(_DWORD *)(gpsi + 1960LL);
  else
    v7 = *(_DWORD *)(gpsi + 2348LL);
  a1[3] = v7;
  if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
    v8 = *(_DWORD *)(gpsi + 2000LL);
  else
    v8 = *(_DWORD *)(gpsi + 2388LL);
  a1[4] = v8;
  if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
    v9 = *(_DWORD *)(gpsi + 2088LL);
  else
    v9 = *(_DWORD *)(gpsi + 2476LL);
  a1[29] = v9;
  if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
    v10 = *(_DWORD *)(gpsi + 2092LL);
  else
    v10 = *(_DWORD *)(gpsi + 2480LL);
  a1[30] = v10;
  if ( (W32GetCurrentThreadDpiAwarenessContext(gpsi) & 0xF) != 0 )
    v11 = *(_DWORD *)(gpsi + 2096LL);
  else
    v11 = *(_DWORD *)(gpsi + 2484LL);
  a1[54] = v11;
  a1[125] = GetWindowFrameMetric(gpsi);
  DPIServerInfo = GetDPIServerInfo(v12);
  DPIMetrics = (_QWORD *)GetDPIMetrics();
  GreExtGetObjectW(*(_QWORD *)(DPIServerInfo + 8));
  GreExtGetObjectW(DPIMetrics[4]);
  GreExtGetObjectW(*DPIMetrics);
  GreExtGetObjectW(DPIMetrics[7]);
  return GreExtGetObjectW(*(_QWORD *)(DPIServerInfo + 24));
}

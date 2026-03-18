/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C00964C4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C005F0B8 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00982B4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // rdx
  int v3; // r8d
  unsigned int WindowDpiLastNotify; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // r14d
  int v9; // edx
  unsigned int v10; // esi
  int v11; // edi
  __int64 result; // rax
  __int64 v13; // rax
  int DpiDependentMetric; // eax

  v1 = 0x10000000;
  v2 = a1;
  v3 = 1;
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
  }
  v5 = *(_QWORD *)(v2 + 16);
  if ( *(_DWORD *)(v5 + 608) > 0x9900u )
    v6 = 0;
  else
    v6 = *(_DWORD *)(v5 + 624);
  v7 = *(_DWORD *)(v2 + 64);
  v8 = *(_DWORD *)(v2 + 68);
  if ( (v7 & 0x100) != 0 )
  {
    v9 = 2;
  }
  else
  {
    v9 = 0;
    if ( (v7 & 0x20000) != 0 )
      v9 = v3;
  }
  v10 = v9 + 1;
  if ( (v8 & 0xC00000) == 0 && ((unsigned __int8)v7 & (unsigned __int8)v3) == 0 )
    v10 = v9;
  if ( (v6 & v1) != 0 || (v6 & 0x20000000) != 0 )
  {
    v11 = 0;
  }
  else if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 9974LL) )
  {
    v11 = *(_DWORD *)(gpsi + 2384LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v11 = *(_DWORD *)(gpsi + 2504LL);
  }
  else
  {
    if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify) == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, WindowDpiLastNotify);
    else
      DpiDependentMetric = GetDpiDependentMetric(29LL, WindowDpiLastNotify);
    v11 = DpiDependentMetric;
  }
  if ( (v8 & 0x40000) != 0 )
    return v11 + v10 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, v6);
  result = v10;
  if ( v11 > 0 && (v8 & 0xC00000) == 0xC00000 && (v6 & 0x30000000) == 0 )
    return v11 + v10 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, v6);
  return result;
}

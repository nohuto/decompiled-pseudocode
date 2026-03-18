/*
 * XREFs of _AdjustWindowRectExForDpi @ 0x1C009C178
 * Callers:
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00982B4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     NeedsWindowEdge @ 0x1C009C3A0 (NeedsWindowEdge.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01A1600 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExForDpi(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  unsigned int v13; // r14d
  int v14; // eax
  int DpiDependentMetric; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int v22; // r15d
  int v23; // r12d
  int v24; // esi
  int v25; // eax
  __int64 result; // rax

  if ( (unsigned int)NeedsWindowEdge(a2, a4, *(_DWORD *)(gptiCurrent + 608LL) >= 0x400u) )
    v12 = a4 | 0x100;
  else
    v12 = a4 & 0xFFFFFEFF;
  v13 = 2;
  if ( (BYTE2(a2) & 0xC0) == 0xC0 )
  {
    v9 = gpsi;
    v14 = *(unsigned __int16 *)(gpsi + 9974LL);
    if ( (v12 & 0x80u) == 0 )
    {
      if ( a5 == v14 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2276LL);
        goto LABEL_19;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2396LL);
        goto LABEL_19;
      }
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a5);
      v17 = 2LL;
    }
    else
    {
      if ( a5 == v14 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2356LL);
LABEL_19:
        a1[1] -= DpiDependentMetric;
        goto LABEL_20;
      }
      if ( a5 == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2476LL);
        goto LABEL_19;
      }
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a5);
      v17 = 22LL;
    }
    if ( DpiDepSysMetCachePlateauSlot == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v17, a5);
    else
      DpiDependentMetric = GetDpiDependentMetric(v17, a5);
    goto LABEL_19;
  }
LABEL_20:
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v19 = *ThreadWin32Thread;
  }
  if ( *(_DWORD *)(v19 + 608) <= 0x9900u )
    v22 = *(_DWORD *)(v19 + 624);
  else
    v22 = 0;
  if ( (v12 & 0x100) == 0 )
    v13 = (v12 & 0x20000) != 0;
  v23 = a2 & 0xC00000;
  if ( (a2 & 0xC00000) != 0 || (v12 & 1) != 0 )
    ++v13;
  if ( (v22 & 0x10000000) != 0 || (v22 & 0x20000000) != 0 )
  {
    v24 = 0;
  }
  else if ( a5 == *(unsigned __int16 *)(gpsi + 9974LL) )
  {
    v24 = *(_DWORD *)(gpsi + 2384LL);
  }
  else if ( a5 == 96 )
  {
    v24 = *(_DWORD *)(gpsi + 2504LL);
  }
  else
  {
    if ( (unsigned int)GetDpiDepSysMetCachePlateauSlot(a5) == -1 )
      v25 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
    else
      v25 = GetDpiDependentMetric(29LL, a5);
    v24 = v25;
  }
  if ( (a2 & 0x40000) != 0
    || v24 > 0 && (LOBYTE(v20) = v23 != 12582912, v23 == 12582912 || (a2 & 0x40000) != 0) && (v22 & 0x30000000) == 0 )
  {
    v13 += v24 + GetResizeBorderWidthForDpiWithAppCompat2(a5, v22, v20);
  }
  result = v13 + 2;
  if ( (v12 & 0x200) == 0 )
    result = v13;
  if ( (_DWORD)result )
  {
    *a1 -= result;
    a1[2] += result;
    a1[1] -= result;
    a1[3] += result;
  }
  return result;
}

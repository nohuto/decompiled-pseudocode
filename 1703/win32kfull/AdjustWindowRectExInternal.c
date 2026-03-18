/*
 * XREFs of AdjustWindowRectExInternal @ 0x1C003E718
 * Callers:
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 * Callees:
 *     GetWindowFrameMetricInternal @ 0x1C00418B0 (GetWindowFrameMetricInternal.c)
 *     NeedsWindowEdge @ 0x1C0041AAC (NeedsWindowEdge.c)
 *     GetResizeBorderWidthInternal @ 0x1C0042D24 (GetResizeBorderWidthInternal.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall AdjustWindowRectExInternal(
        _DWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int *v10; // rcx
  unsigned int v11; // esi
  int v12; // edx
  unsigned int v13; // ebp
  int WindowFrameMetricInternal; // r15d
  __int64 result; // rax
  int v16; // ecx
  int v17; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v19; // r11
  __int64 v20; // rbp
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r11
  __int64 v24; // rbp

  if ( (unsigned int)NeedsWindowEdge(a2, a4, a5 >= 0x400) )
    v11 = a4 | 0x100;
  else
    v11 = a4 & 0xFFFFFEFF;
  if ( (BYTE2(a2) & 0xC0) != 0xC0 )
    goto LABEL_4;
  if ( (v11 & 0x80u) != 0 )
  {
    if ( a7 )
    {
      if ( a7 == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v17 = *(_DWORD *)(gpsi + 2084LL);
        goto LABEL_24;
      }
      if ( a7 == 96 )
      {
        v17 = *(_DWORD *)(gpsi + 2472LL);
        goto LABEL_24;
      }
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(a7);
      if ( DpiDepSysMetCachePlateauSlot != -1 )
      {
        v20 = 112LL * DpiDepSysMetCachePlateauSlot;
        v17 = *(_DWORD *)(v19 + v20 + 3124);
        if ( v17 != -1 )
          goto LABEL_24;
        EnsureDpiDepSysMetCacheForPlateau(a7);
        v10 = (int *)gpsi;
        v17 = *(_DWORD *)(gpsi + v20 + 3124);
LABEL_36:
        if ( v17 == -1 )
          v17 = 0;
        goto LABEL_24;
      }
      v21 = 51LL;
LABEL_50:
      v17 = ScaleSystemMetricForDPIWithoutCache(v21, a7);
      goto LABEL_24;
    }
    if ( (a6 & 0x2000000) != 0 )
      v10 = (int *)(gpsi + 2084LL);
    else
      v10 = (int *)(gpsi + 2472LL);
LABEL_43:
    v17 = *v10;
    goto LABEL_24;
  }
  if ( !a7 )
  {
    if ( (a6 & 0x2000000) != 0 )
      v10 = (int *)(gpsi + 1896LL);
    else
      v10 = (int *)(gpsi + 2284LL);
    goto LABEL_43;
  }
  if ( a7 != *(unsigned __int16 *)(gpsi + 8678LL) )
  {
    if ( a7 == 96 )
    {
      v17 = *(_DWORD *)(gpsi + 2284LL);
      goto LABEL_24;
    }
    v22 = GetDpiDepSysMetCachePlateauSlot(a7);
    if ( v22 != -1 )
    {
      v24 = 112LL * v22;
      v17 = *(_DWORD *)(v23 + v24 + 3052);
      if ( v17 != -1 )
        goto LABEL_24;
      EnsureDpiDepSysMetCacheForPlateau(a7);
      v10 = (int *)gpsi;
      v17 = *(_DWORD *)(gpsi + v24 + 3052);
      goto LABEL_36;
    }
    v21 = 4LL;
    goto LABEL_50;
  }
  v17 = *(_DWORD *)(gpsi + 1896LL);
LABEL_24:
  a1[1] -= v17;
LABEL_4:
  if ( (v11 & 0x100) != 0 )
    v12 = 2;
  else
    v12 = (v11 & 0x20000) != 0;
  v13 = v12 + 1;
  LOBYTE(v10) = (a2 & 0xC00000) == 0;
  if ( ((unsigned __int8)v10 & ((v11 & 1) == 0)) != 0 )
    v13 = v12;
  WindowFrameMetricInternal = GetWindowFrameMetricInternal(v10, a6, a7);
  if ( (a2 & 0x40000) != 0
    || (result = v13, WindowFrameMetricInternal > 0)
    && ((a2 & 0xC00000) == 12582912 || (a2 & 0x40000) != 0)
    && (a6 & 0x30000000) == 0 )
  {
    result = WindowFrameMetricInternal + v13 + (unsigned int)GetResizeBorderWidthInternal(a6, a7);
  }
  v16 = result + 2;
  if ( (v11 & 0x200) == 0 )
    v16 = result;
  if ( v16 )
  {
    *a1 -= v16;
    a1[2] += v16;
    a1[1] -= v16;
    a1[3] += v16;
  }
  return result;
}

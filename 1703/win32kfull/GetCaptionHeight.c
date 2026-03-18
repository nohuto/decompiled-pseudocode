/*
 * XREFs of GetCaptionHeight @ 0x1C0043588
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 *     xxxMenuBarDraw @ 0x1C021640C (xxxMenuBarDraw.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  unsigned int v1; // r11d
  __int64 result; // rax
  __int64 v3; // rax
  unsigned int WindowDpiLastNotify; // r11d
  __int64 v5; // rax
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v7; // r11d
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi

  if ( (*(_BYTE *)(a1 + 56) & 8) == 0 )
    return 0LL;
  if ( *(char *)(a1 + 64) < 0 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
      return *(unsigned int *)(gpsi + 2084LL);
    if ( WindowDpiLastNotify == 96 )
      return *(unsigned int *)(gpsi + 2472LL);
    DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
    if ( DpiDepSysMetCachePlateauSlot != -1 )
    {
      v8 = 112LL * DpiDepSysMetCachePlateauSlot;
      result = *(unsigned int *)(v8 + gpsi + 3124);
      if ( (_DWORD)result != -1 )
        return result;
      EnsureDpiDepSysMetCacheForPlateau(v7);
      result = *(unsigned int *)(v8 + gpsi + 3124);
      goto LABEL_34;
    }
    v9 = 51LL;
    return ScaleSystemMetricForDPIWithoutCache(v9, v7);
  }
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    v1 = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v3 + 8) + 52LL) & 1) != 0 )
  {
    v1 = 96;
  }
  else
  {
    v1 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  if ( v1 == *(unsigned __int16 *)(gpsi + 8678LL) )
    return *(unsigned int *)(gpsi + 1896LL);
  if ( v1 == 96 )
    return *(unsigned int *)(gpsi + 2284LL);
  v10 = GetDpiDepSysMetCachePlateauSlot(v1);
  if ( v10 == -1 )
  {
    v9 = 4LL;
    return ScaleSystemMetricForDPIWithoutCache(v9, v7);
  }
  v11 = 112LL * v10;
  result = *(unsigned int *)(v11 + gpsi + 3052);
  if ( (_DWORD)result != -1 )
    return result;
  EnsureDpiDepSysMetCacheForPlateau(v7);
  result = *(unsigned int *)(v11 + gpsi + 3052);
LABEL_34:
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}

/*
 * XREFs of MNPositionSysMenu @ 0x1C01336B0
 * Callers:
 *     xxxSetSystemMenu @ 0x1C0133650 (xxxSetSystemMenu.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxMNInvertItem @ 0x1C0215C94 (xxxMNInvertItem.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall MNPositionSysMenu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  __int64 *v7; // r11
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rsi
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rdi
  int v16; // edi
  __int64 v17; // rax
  __int64 result; // rax
  _DWORD *v19; // rcx
  unsigned int WindowDpiLastNotify; // edi
  __int64 v21; // rax
  __int64 v22; // rsi
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rbp
  int v33; // eax
  int v34; // eax
  __int64 v35; // r12
  int v36; // eax
  _QWORD v37[2]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
    return (__int64)UserSetLastError(6LL);
  if ( a1 != *(_QWORD *)(a2 + 88) )
  {
    v37[0] = a2 + 88;
    v37[1] = a1;
    HMAssignmentLock(v37);
  }
  v6 = 0;
  v7 = (__int64 *)gpsi;
  v8 = 96;
  if ( *(char *)(a1 + 64) < 0 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v21 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
    }
    v22 = *v7;
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(*v7 + 8678) )
    {
      v12 = *(_DWORD *)(v22 + 2088);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v12 = *(_DWORD *)(v22 + 2476);
    }
    else
    {
      DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
      if ( DpiDepSysMetCachePlateauSlot == -1 )
      {
        v25 = ScaleSystemMetricForDPIWithoutCache(52LL, WindowDpiLastNotify);
        v7 = (__int64 *)gpsi;
        v12 = v25;
      }
      else
      {
        v24 = 112LL * DpiDepSysMetCachePlateauSlot;
        v12 = *(_DWORD *)(v22 + v24 + 3128);
        if ( v12 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
          v7 = (__int64 *)gpsi;
          v12 = *(_DWORD *)(gpsi + v24 + 3128);
          if ( v12 == -1 )
            v12 = 0;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      v14 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
           && (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) != 0 )
    {
      v14 = 96;
    }
    else
    {
      v14 = *(unsigned __int16 *)(*v7 + 8678);
    }
    v27 = *v7;
    if ( v14 == *(unsigned __int16 *)(*v7 + 8678) )
    {
      v16 = *(_DWORD *)(v27 + 2092);
      goto LABEL_19;
    }
    if ( v14 == 96 )
    {
      v16 = *(_DWORD *)(v27 + 2480);
      goto LABEL_19;
    }
    v28 = GetDpiDepSysMetCachePlateauSlot(v14);
    if ( v28 != -1 )
    {
      v29 = 112LL * v28;
      v16 = *(_DWORD *)(v27 + v29 + 3132);
      if ( v16 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v14);
        v7 = (__int64 *)gpsi;
        v16 = *(_DWORD *)(v29 + gpsi + 3132);
        goto LABEL_67;
      }
LABEL_69:
      v6 = 0;
      goto LABEL_19;
    }
    v30 = 53LL;
LABEL_88:
    v36 = ScaleSystemMetricForDPIWithoutCache(v30, v14);
    v7 = (__int64 *)gpsi;
    v16 = v36;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    v10 = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
  {
    v10 = 96;
  }
  else
  {
    v10 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  v11 = *v7;
  if ( v10 == *(unsigned __int16 *)(*v7 + 8678) )
  {
    v12 = *(_DWORD *)(v11 + 2000);
  }
  else if ( v10 == 96 )
  {
    v12 = *(_DWORD *)(v11 + 2388);
  }
  else
  {
    v31 = GetDpiDepSysMetCachePlateauSlot(v10);
    if ( v31 == -1 )
    {
      v33 = ScaleSystemMetricForDPIWithoutCache(30LL, v10);
      v7 = (__int64 *)gpsi;
      v12 = v33;
    }
    else
    {
      v32 = 112LL * v31;
      v12 = *(_DWORD *)(v11 + v32 + 3092);
      if ( v12 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v10);
        v7 = (__int64 *)gpsi;
        v12 = *(_DWORD *)(gpsi + v32 + 3092);
        if ( v12 == -1 )
          v12 = 0;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
  {
    v14 = GetWindowDpiLastNotify(a1);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
         && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    v14 = 96;
  }
  else
  {
    v14 = *(unsigned __int16 *)(*v7 + 8678);
  }
  v15 = *v7;
  if ( v14 != *(unsigned __int16 *)(*v7 + 8678) )
  {
    if ( v14 == 96 )
    {
      v16 = *(_DWORD *)(v15 + 2392);
      goto LABEL_19;
    }
    v34 = GetDpiDepSysMetCachePlateauSlot(v14);
    if ( v34 != -1 )
    {
      v35 = 112LL * v34;
      v16 = *(_DWORD *)(v15 + v35 + 3096);
      if ( v16 == -1 )
      {
        EnsureDpiDepSysMetCacheForPlateau(v14);
        v7 = (__int64 *)gpsi;
        v16 = *(_DWORD *)(v35 + gpsi + 3096);
LABEL_67:
        if ( v16 == -1 )
          v16 = 0;
        goto LABEL_69;
      }
      goto LABEL_69;
    }
    v30 = 31LL;
    goto LABEL_88;
  }
  v16 = *(_DWORD *)(v15 + 2004);
LABEL_19:
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    result = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
    {
      v8 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
           || (v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 52LL) & 1) == 0 )
    {
      v8 = *(unsigned __int16 *)(*v7 + 8678);
    }
    result = GetWindowBordersForDpi(*(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 64), a3, a4, v8);
    v12 += result;
    v6 = result;
    v16 += result;
  }
  if ( (*(_DWORD *)(a2 + 56) & 0x10) == 0 && *(_DWORD *)(a2 + 68) )
  {
    v19 = *(_DWORD **)(a2 + 96);
    if ( v19 )
    {
      v19[19] = result;
      v19[18] = v6;
      v19[20] = v12 - v6;
      v19[21] = v16 - result;
    }
  }
  return result;
}

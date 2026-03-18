/*
 * XREFs of xxxCheckFullScreen @ 0x1C0015690
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C00159D4 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     xxxAddFullScreen @ 0x1C0015A0C (xxxAddFullScreen.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0040EEC (GetWindowBordersWithDpiAwareness.c)
 *     xxxRemoveFullScreen @ 0x1C005D114 (xxxRemoveFullScreen.c)
 *     RECTFromSIZERECT @ 0x1C00EC384 (RECTFromSIZERECT.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall xxxCheckFullScreen(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  BOOL v7; // r12d
  int v8; // r8d
  __int64 v9; // rdx
  struct tagRECT *v10; // r14
  struct tagRECT *v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  BOOL v20; // r13d
  unsigned int WindowDpiLastNotify; // r11d
  int v22; // edx
  int right; // r8d
  int WindowBordersWithDpiAwareness; // eax
  int v25; // r8d
  __int64 v26; // rax
  struct tagRECT *v27; // rcx
  __int64 v28; // rax
  int MonitorFlagsFromWindow; // eax
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v38; // r11d
  __int64 v39; // r15
  int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+38h] [rbp-60h]
  _BYTE v45[16]; // [rsp+48h] [rbp-50h] BYREF

  v41 = 0;
  v4 = *(_QWORD *)(GetDispInfo() + 88);
  v42 = v4;
  v5 = *gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v6 = v4;
LABEL_3:
    v7 = v6 == v4;
    v43 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v43;
    v44 = v6;
    ++*(_DWORD *)(v6 + 8);
    v8 = *(_DWORD *)(a1 + 368) & 0xF;
    if ( !v8
      && (v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v18 + 8) + 52LL) & 1) != 0 )
    {
      v9 = *(_QWORD *)(v6 + 40);
      v10 = (struct tagRECT *)(v9 + 92);
    }
    else if ( v8 == 1
           && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v16 + 8) + 52LL) & 1) != 0 )
    {
      v9 = *(_QWORD *)(v6 + 40);
      v10 = (struct tagRECT *)(v9 + 108);
    }
    else
    {
      v9 = *(_QWORD *)(v6 + 40);
      v10 = (struct tagRECT *)(v9 + 76);
    }
    if ( !v8
      && (v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 52LL) & 1) != 0 )
    {
      v11 = (struct tagRECT *)(v9 + 44);
    }
    else if ( v8 != 1
           || (v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (v11 = (struct tagRECT *)(v9 + 60), (*(_DWORD *)(**(_QWORD **)(v17 + 8) + 52LL) & 1) == 0) )
    {
      v11 = (struct tagRECT *)(v9 + 28);
    }
    if ( (unsigned int)IsMaxedRect(v10, (const struct tagSIZERECT *)a2) )
    {
      v20 = v7;
      if ( (*(_BYTE *)(a1 + 71) & 1) != 0 )
      {
        SetOrClrWF(1LL, a1, 832LL, 1LL);
        if ( *(_DWORD *)*gpDispInfo > 1u )
        {
          v30 = MonitorFromWindow(a1, 33LL);
          v31 = v30;
          if ( v30 != v6 && v6 == v42 )
          {
            if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
              && (v32 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
              && (*(_DWORD *)(**(_QWORD **)(v32 + 8) + 52LL) & 1) != 0 )
            {
              v33 = (_DWORD *)(*(_QWORD *)(v31 + 40) + 44LL);
            }
            else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
                   && (v34 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v34 + 8) + 52LL) & 1) != 0 )
            {
              v33 = (_DWORD *)(*(_QWORD *)(v31 + 40) + 60LL);
            }
            else
            {
              v33 = (_DWORD *)(*(_QWORD *)(v31 + 40) + 28LL);
            }
            *(_DWORD *)a2 += *v33;
            *(_DWORD *)(a2 + 4) += v33[1];
            *(_DWORD *)(a2 + 8) += v11->left + v33[2] - v11->right - *v33;
            v35 = (unsigned int)(v11->top + v33[3] - v11->bottom - v33[1]);
            *(_DWORD *)(a2 + 12) += v35;
            ThreadUnlock1(v35, v33);
            v20 = 0;
            v43 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v43;
            v44 = v31;
            ++*(_DWORD *)(v31 + 8);
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 71) & 1) != 0 && (((*(_BYTE *)(a1 + 70) & 0xC0) == 0xC0) & *(_BYTE *)(a1 + 70)) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
        }
        else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
               && (v36 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 52LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
        }
        if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
        {
          v22 = *(_DWORD *)(gpsi + 1896LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v22 = *(_DWORD *)(gpsi + 2284LL);
        }
        else
        {
          DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
          if ( DpiDepSysMetCachePlateauSlot == -1 )
          {
            v22 = ScaleSystemMetricForDPIWithoutCache(4LL, v38);
          }
          else
          {
            v39 = 112LL * DpiDepSysMetCachePlateauSlot;
            v22 = *(_DWORD *)(v39 + gpsi + 3052);
            if ( v22 == -1 )
            {
              EnsureDpiDepSysMetCacheForPlateau(v38);
              v22 = *(_DWORD *)(v39 + gpsi + 3052);
              if ( v22 == -1 )
                v22 = 0;
            }
          }
        }
        right = v11->right;
        if ( *(_DWORD *)a2 + v22 > right
          || *(_DWORD *)(a2 + 8) + *(_DWORD *)a2 < right
          || (v14 = *(unsigned int *)(a2 + 4), (int)v14 + v22 > v11->top)
          || (v13 = (unsigned int)(v14 + *(_DWORD *)(a2 + 12)), (int)v13 < v11->bottom) )
        {
          if ( (*(_BYTE *)(a1 + 60) & 0x40) != 0 )
            v41 = xxxRemoveFullScreen(a1);
          WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
          *(_DWORD *)a2 = v10->left - WindowBordersWithDpiAwareness;
          v13 = (unsigned int)(2 * WindowBordersWithDpiAwareness);
          *(_DWORD *)(a2 + 4) = v10->top - WindowBordersWithDpiAwareness;
          v25 = v13 + v10->bottom - v10->top;
          v14 = (unsigned int)(v13 + v10->right - v10->left);
          *(_DWORD *)(a2 + 8) = v14;
          if ( v20 && (*(_BYTE *)(a1 + 61) & 2) == 0 )
          {
            v40 = *(_DWORD *)(a2 + 12);
            if ( v25 < v40 )
              v40 = v25;
            *(_DWORD *)(a2 + 12) = v40;
          }
          else
          {
            *(_DWORD *)(a2 + 12) = v25;
          }
          goto LABEL_14;
        }
        if ( (*(_BYTE *)(a1 + 60) & 0x40) != 0 )
        {
LABEL_14:
          ThreadUnlock1(v14, v13);
          return v41;
        }
      }
      else if ( !(unsigned int)IsMaxedRect(v11, (const struct tagSIZERECT *)a2) )
      {
        goto LABEL_14;
      }
      v12 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 71) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v12 = xxxRemoveFullScreen(a1);
    }
    v41 = v12;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
    && (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) != 0 )
  {
    v27 = (struct tagRECT *)(v5 + 40);
  }
  else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 1
         || (v28 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
         || (v27 = (struct tagRECT *)(v5 + 56), (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 52LL) & 1) == 0) )
  {
    v27 = (struct tagRECT *)(v5 + 24);
  }
  if ( !(unsigned int)IsMaxedRect(v27, (const struct tagSIZERECT *)a2) )
  {
    RECTFromSIZERECT(v45);
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
    v6 = MonitorFromRect(v45, MonitorFlagsFromWindow | 1u);
    goto LABEL_3;
  }
  return 0LL;
}

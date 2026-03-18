/*
 * XREFs of xxxMNCompute @ 0x1C00439EC
 * Callers:
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C000D3E0 (xxxSendUAHInitMenuMessage.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0042EB4 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        struct tagMENU *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7)
{
  signed int v7; // r15d
  unsigned int v8; // ebp
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r10
  int v20; // eax
  _DWORD *v21; // rsi
  unsigned int v22; // r12d
  unsigned int v23; // ebp
  unsigned int v24; // r13d
  __int64 v25; // rbx
  struct tagPOINT v26; // rsi
  int v27; // r8d
  int v28; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v30; // r11
  __int64 v31; // rbp
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // ebp
  unsigned int v37; // ecx
  unsigned int v38; // r15d
  int v39; // r9d
  int v40; // eax
  int v41; // r9d
  int v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // edx
  _WORD *v47; // rax
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // ebp
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  _DWORD *v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  _QWORD *v77; // rax
  _DWORD *v78; // rax
  _DWORD *v79; // rdx
  unsigned int v80; // r9d
  _DWORD *v81; // rdx
  unsigned int *v82; // rcx
  unsigned int v83; // [rsp+40h] [rbp-A8h]
  signed int v84; // [rsp+44h] [rbp-A4h]
  unsigned int v85; // [rsp+48h] [rbp-A0h]
  unsigned int v86; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v87; // [rsp+50h] [rbp-98h]
  int v88; // [rsp+54h] [rbp-94h]
  int v89; // [rsp+58h] [rbp-90h]
  HDC DCEx; // [rsp+60h] [rbp-88h]
  __int128 v91; // [rsp+80h] [rbp-68h]
  _OWORD v92[5]; // [rsp+90h] [rbp-58h] BYREF
  int v93; // [rsp+F0h] [rbp+8h]
  struct tagPOINT v94; // [rsp+F8h] [rbp+10h] BYREF
  unsigned int v95; // [rsp+100h] [rbp+18h]
  unsigned int v96; // [rsp+108h] [rbp+20h]

  v96 = a4;
  v94 = (struct tagPOINT)a2;
  v7 = 0;
  v85 = 0;
  v8 = a4;
  v83 = 0;
  WindowDpiLastNotify = 96;
  if ( !a3 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) == 0 )
      goto LABEL_10;
LABEL_9:
    v13 = gpsi;
    WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a3 + 304) & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(a3 + 368) & 0xF) != 0 )
    goto LABEL_9;
  v14 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 408LL);
  if ( !v14 )
    goto LABEL_9;
  v13 = **(_QWORD **)(v14 + 8);
  if ( (*(_DWORD *)(v13 + 52) & 1) == 0 )
    goto LABEL_9;
LABEL_10:
  if ( a2 != *((_QWORD *)a1 + 11) )
  {
    *(_QWORD *)&v91 = (char *)a1 + 88;
    *((_QWORD *)&v91 + 1) = a2;
    v92[0] = v91;
    HMAssignmentLock(v92);
  }
  if ( a7 )
  {
    v83 = *a7;
    v8 = v96;
  }
  if ( !*((_DWORD *)a1 + 17) )
    return 0LL;
  v93 = *((_DWORD *)a1 + 14) & 1;
  if ( v93 )
  {
    v83 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)a1 + 18) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) == 2 || a3 && (unsigned int)IsPWNDEligibleForGDIScaling(a3) )
  {
    v17 = 65539LL;
    v16 = a3;
  }
  else
  {
    v16 = 0LL;
    v17 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v16, 0LL, v17);
  GetDPIMETRICSForDpi(WindowDpiLastNotify);
  GreSelectFontInternal(DCEx);
  v19 = 0LL;
  v87 = 0;
  v84 = 0;
  v86 = 0;
  if ( gihmodUserApiHook >= 0 && a2 )
  {
    xxxSendUAHInitMenuMessage(a2, (__int64)a1, (__int64)DCEx);
    v19 = 0LL;
  }
  v20 = *((_DWORD *)a1 + 17);
  v21 = (_DWORD *)((char *)a1 + 80);
  *((_DWORD *)a1 + 20) = 0;
  v22 = v8;
  v23 = a5;
  v24 = 0;
  v95 = a5;
  v89 = 0;
  v88 = 0;
  if ( v20 )
    v25 = *((_QWORD *)a1 + 12);
  else
    v25 = 0LL;
  if ( !v20 )
  {
    v52 = 0;
    goto LABEL_142;
  }
  v26 = v94;
  v27 = v93;
  while ( v25 )
  {
    if ( (*(_DWORD *)v25 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem((__int64)a1, (_DWORD *)v25) || *(_WORD *)(gptiCurrent + 552LL) < 0x400u) )
    {
      *(_DWORD *)(v25 + 80) = v19;
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v28 = *(_DWORD *)(gpsi + 2100LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v28 = *(_DWORD *)(gpsi + 2488LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v28 = ScaleSystemMetricForDPIWithoutCache(55LL, WindowDpiLastNotify);
          v19 = 0LL;
        }
        else
        {
          v31 = 112LL * DpiDepSysMetCachePlateauSlot;
          v28 = *(_DWORD *)(v30 + v31 + 3140);
          if ( v28 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
            v19 = 0LL;
            v28 = *(_DWORD *)(gpsi + v31 + 3140);
            if ( v28 == -1 )
              v28 = 0;
          }
          else
          {
            v19 = 0LL;
          }
          v23 = v95;
        }
      }
      *(_DWORD *)(v25 + 84) = v28 / 2;
LABEL_61:
      v35 = v93;
      goto LABEL_62;
    }
    if ( *(_QWORD *)(v25 + 104) == v19 || (v32 = 1, *(_QWORD *)(v25 + 40) == v19) )
      v32 = v19;
    v89 |= v32;
    v33 = xxxMNItemSize(a1, *(struct tagWND **)&v26, WindowDpiLastNotify, DCEx, (struct tagITEM *)v25, v27, &v94);
    v34 = v88;
    if ( v33 )
      v34 = 1;
    v88 = v34;
    if ( (unsigned int)MNGetpItemIndex((__int64)a1, v25) == -1 )
      break;
    v35 = v93;
    *(struct tagPOINT *)(v25 + 80) = v94;
    if ( !v93 && (*(_QWORD *)(v25 + 104) == v19 || *(_QWORD *)(v25 + 40) != v19) )
    {
      if ( !(unsigned int)MNIsUAHMenu((__int64)a1) )
      {
        *(_DWORD *)(v25 + 80) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
        v19 = 0LL;
      }
      goto LABEL_61;
    }
LABEL_62:
    if ( v83 && *(_DWORD *)(v25 + 84) < v83 )
      *(_DWORD *)(v25 + 84) = v83;
    if ( !v24 )
      v85 = *(_DWORD *)(v25 + 84);
    if ( !v35 )
    {
      v47 = *(_WORD **)(v25 + 40);
      if ( v47 && *v47 == 8 && !(unsigned int)MNIsUAHMenu((__int64)a1) )
      {
        *(_DWORD *)(v25 + 80) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
        v19 = 0LL;
      }
      if ( (*(_DWORD *)v25 & 0x60) != 0
        || (DPIMETRICSForDpi = GetDPIMETRICSForDpi(WindowDpiLastNotify),
            v19 = 0LL,
            v23 + *(_DWORD *)(v25 + 80) + *(_DWORD *)(DPIMETRICSForDpi + 8) > *((_DWORD *)a1 + 18) + a5)
        && v24 )
      {
        v22 += v85;
        v23 = a5;
        v85 = *(_DWORD *)(v25 + 84);
      }
      v46 = v87;
      *(_DWORD *)(v25 + 72) = v23;
      v23 += *(_DWORD *)(v25 + 80);
      v95 = v23;
      *(_DWORD *)(v25 + 76) = v22;
      goto LABEL_96;
    }
    v36 = *(_DWORD *)v25 & 0x60;
    if ( v36 || *((_DWORD *)a1 + 17) == v24 + 1 )
    {
      v37 = v7;
      v38 = v24 + 1;
      if ( *((_DWORD *)a1 + 17) == v24 + 1 && *(_DWORD *)(v25 + 80) > v84 )
        v37 = *(_DWORD *)(v25 + 80);
      v39 = v19;
      LOBYTE(v39) = v36 == 0;
      xxxMNRecalcTabStrings(DCEx, a1, v86, v24 + v39, v37, v95);
      v40 = MNGetpItemIndex((__int64)a1, v25);
      v19 = 0LL;
      if ( v40 == -1 )
        break;
      if ( v36 )
      {
        if ( !v88 || !*(_QWORD *)&v26 || (v42 = 1, (*(_BYTE *)(*(_QWORD *)&v26 + 61LL) & 2) != 0) )
          v42 = 4;
        v43 = v42 + v41;
        v44 = *(_DWORD *)(v25 + 80);
        v22 = v96;
        v95 = v42 + v41;
        v84 = v44;
        v86 = v24;
        if ( *((_DWORD *)a1 + 17) == v38 )
        {
          xxxMNRecalcTabStrings(DCEx, a1, v24, v38, v44, v43);
          v95 = v43;
          v45 = MNGetpItemIndex((__int64)a1, v25);
          v19 = 0LL;
          if ( v45 == -1 )
            break;
          goto LABEL_81;
        }
      }
      else
      {
LABEL_81:
        if ( *((_DWORD *)a1 + 17) == v38 )
          *((_DWORD *)a1 + 18) = v41;
      }
      v7 = v84;
    }
    v23 = v95;
    *(_DWORD *)(v25 + 76) = v22;
    v22 += *(_DWORD *)(v25 + 84);
    v46 = v22;
    *(_DWORD *)(v25 + 72) = v23;
    if ( v87 >= v22 )
      v46 = v87;
LABEL_96:
    v49 = *(_DWORD *)(v25 + 84);
    if ( v7 < *(_DWORD *)(v25 + 80) )
      v7 = *(_DWORD *)(v25 + 80);
    v18 = v85;
    v27 = v93;
    v84 = v7;
    if ( v85 != v49 )
    {
      if ( v85 < v49 )
        v18 = v49;
      v50 = v83;
      v85 = v18;
      if ( !v93 )
        v50 = v18;
      v83 = v50;
    }
    v51 = v22 + v18;
    if ( v93 )
      v51 = v46;
    ++v24;
    v87 = v51;
    if ( v24 == -1 || v24 >= *((_DWORD *)a1 + 17) )
      v25 = v19;
    else
      v25 = *((_QWORD *)a1 + 12) + 152LL * v24;
    if ( v24 >= *((_DWORD *)a1 + 17) )
      break;
  }
  v21 = (_DWORD *)((char *)a1 + 80);
  v52 = v86;
  if ( v89 == (_DWORD)v19 || v86 )
  {
LABEL_142:
    *v21 = v19;
    goto LABEL_143;
  }
  v53 = *((_DWORD *)a1 + 14);
  if ( v53 < 0 )
  {
    *v21 += 2;
    goto LABEL_143;
  }
  if ( (v53 & 0x4000000) == 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v18) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v71, v72, v73) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v74, v75, v76) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v77 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v78 = (_DWORD *)(gpsi + 8204LL);
LABEL_140:
        *v21 += *v78 + 2;
        LODWORD(v19) = 0;
        goto LABEL_143;
      }
    }
    else
    {
      v77 = (_QWORD *)gpsi;
    }
    v78 = (_DWORD *)(*v77 + 6716LL);
    goto LABEL_140;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v18) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v54, v56, v57) + 408)
    && (v55 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v58, v59, v60) + 408) + 8LL),
        (*(_DWORD *)(v55 + 52) & 1) != 0) )
  {
    v61 = (_QWORD *)gpsi;
    v55 = gpsi;
    if ( *(_WORD *)(gpsi + 8678LL) != 96 )
    {
      v62 = (_DWORD *)(gpsi + 8204LL);
      goto LABEL_123;
    }
  }
  else
  {
    v61 = (_QWORD *)gpsi;
  }
  v62 = (_DWORD *)(*v61 + 6716LL);
LABEL_123:
  if ( *v21 > *v62 )
  {
    v63 = (_DWORD *)((char *)a1 + 80);
    goto LABEL_132;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v55) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v64, v65, v66) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v67, v68, v69) + 408) + 8LL)
                  + 52LL) & 1) != 0 )
  {
    v70 = (_QWORD *)gpsi;
    if ( *(_WORD *)(gpsi + 8678LL) != 96 )
    {
      v63 = (_DWORD *)(gpsi + 8204LL);
      goto LABEL_132;
    }
  }
  else
  {
    v70 = (_QWORD *)gpsi;
  }
  v63 = (_DWORD *)(*v70 + 6716LL);
LABEL_132:
  *v21 = *v63 + 2;
  LODWORD(v19) = 0;
LABEL_143:
  if ( *v21 )
    *v21 += 2;
  if ( v52 )
  {
    if ( *((_DWORD *)a1 + 17) )
    {
      v79 = (_DWORD *)*((_QWORD *)a1 + 12);
      if ( (*v79 & 0x4000) != 0 )
      {
        v80 = v19;
        v81 = v79 + 18;
        do
        {
          ++v80;
          *v81 = *((_DWORD *)a1 + 18) - v81[2] - *v81;
          v81 += 38;
        }
        while ( v80 < *((_DWORD *)a1 + 17) );
      }
    }
  }
  GreSelectFontInternal(DCEx);
  _ReleaseDC(DCEx);
  v82 = a7;
  *((_DWORD *)a1 + 19) = v87 - v96;
  if ( v82 )
    *v82 = v83;
  return *((unsigned int *)a1 + 19);
}

/*
 * XREFs of xxxMNInvertItem @ 0x1C0215C94
 * Callers:
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C021261C (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxDrawMenuItem @ 0x1C000D828 (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C000E1AC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C000E26C (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetSysMenuHandle @ 0x1C00C2730 (xxxGetSysMenuHandle.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C021513C (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C0215B44 (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C0219F28 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNInvertItem(__int64 *a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // r13
  __int64 *v8; // r12
  __int64 v9; // r14
  __int64 v10; // rsi
  _QWORD *i; // rcx
  __int64 SysMenuHandle; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // ecx
  _DWORD *v18; // rdx
  int v19; // edx
  int v20; // eax
  HDC DC; // r12
  bool v22; // zf
  __int64 v23; // rdx
  int WindowDpiLastNotify; // r11d
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v29; // r11d
  int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // ebx
  int v34; // eax
  unsigned int v35; // r11d
  int v36; // ecx
  __int64 v37; // r8
  int TextAlign; // eax
  int v39; // ebx
  __int64 *DPIMETRICS; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ebx
  unsigned int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  int v49; // [rsp+20h] [rbp-61h]
  int v50; // [rsp+30h] [rbp-51h]
  int v51; // [rsp+30h] [rbp-51h]
  __int64 v52; // [rsp+38h] [rbp-49h] BYREF
  int v53; // [rsp+40h] [rbp-41h]
  __int64 v54; // [rsp+48h] [rbp-39h]
  __int64 v55; // [rsp+50h] [rbp-31h]
  int v56; // [rsp+58h] [rbp-29h]
  int v57; // [rsp+5Ch] [rbp-25h]
  int v58; // [rsp+60h] [rbp-21h]
  _QWORD v59[3]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v60[10]; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v61; // [rsp+E0h] [rbp+5Fh]
  int v62; // [rsp+E8h] [rbp+67h]

  v61 = a1;
  v6 = (unsigned int)a3;
  v62 = 0;
  v8 = a1;
  v53 = 0;
  v9 = 0LL;
  if ( !a2 || !a4 )
    goto LABEL_129;
  if ( *a1 )
  {
    v10 = *(_QWORD *)(*a1 + 16);
    if ( v10 != a4 )
    {
      a1 = (__int64 *)gptiCurrent;
      v59[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v59;
      v59[1] = v10;
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
    }
  }
  else
  {
    v10 = a4;
  }
  if ( a3 < 0 )
  {
    if ( *v8 && (unsigned int)(a3 + 4) <= 1 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v60, *v8);
      MNDrawArrow(0LL, v60, v6);
    }
    for ( i = *(_QWORD **)(*(_QWORD *)(a4 + 16) + 528LL); i && *(_QWORD *)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
      ;
LABEL_124:
    xxxSendMenuSelect(a4, v10, a2, v6, (__int64)i);
    goto LABEL_125;
  }
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    SysMenuHandle = xxxGetSysMenuHandle(a4);
    if ( a2 == SysMenuHandle )
    {
      MNPositionSysMenu(a4, SysMenuHandle, v13, v14);
      v62 = 1;
    }
  }
  if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 68) )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(a2 + 96) + 152 * v6;
  if ( v9 && ((*(_DWORD *)(a2 + 56) & 1) != 0 || (*(_BYTE *)(a4 + 71) & 0x20) == 0) )
  {
    if ( (*(_DWORD *)v9 & 0x800) != 0 )
    {
LABEL_113:
      if ( !a5 )
        goto LABEL_125;
      for ( i = *(_QWORD **)(*(_QWORD *)(a4 + 16) + 528LL); i && *(_QWORD *)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
        ;
      goto LABEL_124;
    }
    if ( (*(_DWORD *)(v9 + 4) & 0x80) != a5 )
    {
      if ( !a5 || !*v8 || (*(_DWORD *)(a2 + 144) & 3) == 0 )
        goto LABEL_46;
      v15 = *(unsigned int *)(a2 + 136);
      if ( (int)v6 >= (int)v15 )
      {
        if ( (_DWORD)v15 == -1 || (unsigned int)v15 >= *(_DWORD *)(a2 + 68) )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(a2 + 96) + 152 * v15;
        v17 = *(_DWORD *)(v9 + 76) + *(_DWORD *)(v9 + 84) - *(_DWORD *)(v16 + 76) - *(_DWORD *)(a2 + 76);
        if ( v17 > 0 )
        {
          v18 = (_DWORD *)(v16 + 84);
          do
          {
            if ( (int)v15 >= *(_DWORD *)(a2 + 68) )
              break;
            v17 -= *v18;
            LODWORD(v15) = v15 + 1;
            v18 += 38;
          }
          while ( v17 > 0 );
        }
        if ( (int)v15 >= *(_DWORD *)(a2 + 68) )
          LODWORD(v15) = *(_DWORD *)(a2 + 68);
      }
      else
      {
        LODWORD(v15) = v6;
      }
      SmartObjStackRef<tagPOPUPMENU>::Init(v60, *v8);
      if ( (unsigned int)xxxMNSetTop(v60, v15) )
        xxxInternalUpdateWindow((struct tagWND *)v10, 1u);
      if ( (unsigned int)MNGetpItemIndex(a2, v9) != -1 )
      {
LABEL_46:
        v19 = *(_DWORD *)(v9 + 76);
        v50 = *(_DWORD *)(v9 + 72);
        v56 = v50 + *(_DWORD *)(v9 + 80);
        v20 = v19 + *(_DWORD *)(v9 + 84);
        v58 = v19;
        v57 = v20;
        if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v10);
        }
        else
        {
          DC = (HDC)_GetDCEx(v10, 0LL, 65537LL);
          if ( (*(_BYTE *)(v10 + 70) & 4) != 0 && !v62 )
          {
            v22 = (*(_DWORD *)(v10 + 304) & 0x10000000) == 0;
            v23 = gpsi;
            v54 = gpsi;
            if ( v22 )
            {
              if ( (*(_DWORD *)(v10 + 368) & 0xF) == 0
                && (v25 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
                && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
              {
                WindowDpiLastNotify = 96;
              }
              else
              {
                WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
              }
            }
            else
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
            }
            v26 = *(_QWORD *)v23;
            if ( WindowDpiLastNotify == *(unsigned __int16 *)(*(_QWORD *)v23 + 8678LL) )
            {
              v27 = *(_DWORD *)(v26 + 2008);
            }
            else if ( WindowDpiLastNotify == 96 )
            {
              v27 = *(_DWORD *)(v26 + 2396);
            }
            else
            {
              DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
              if ( DpiDepSysMetCachePlateauSlot == -1 )
              {
                v27 = ScaleSystemMetricForDPIWithoutCache(32, v29);
                v23 = gpsi;
              }
              else
              {
                v55 = 112LL * DpiDepSysMetCachePlateauSlot;
                v27 = *(_DWORD *)(v55 + v26 + 3100);
                if ( v27 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(v29);
                  v23 = gpsi;
                  v27 = *(_DWORD *)(v55 + gpsi + 3100);
                  if ( v27 == -1 )
                    v27 = 0;
                }
                else
                {
                  v23 = v54;
                }
              }
            }
            v22 = (*(_DWORD *)(v10 + 304) & 0x10000000) == 0;
            LODWORD(v55) = *(_DWORD *)(v10 + 136) - v27 - *(_DWORD *)(v10 + 128);
            if ( v22 )
            {
              if ( (*(_DWORD *)(v10 + 368) & 0xF) == 0
                && (v31 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
                && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 52LL) & 1) != 0 )
              {
                v30 = 96;
              }
              else
              {
                v30 = *(unsigned __int16 *)(*(_QWORD *)v23 + 8678LL);
              }
            }
            else
            {
              v30 = GetWindowDpiLastNotify(v10);
            }
            v32 = *(_QWORD *)v23;
            if ( v30 == *(unsigned __int16 *)(*(_QWORD *)v23 + 8678LL) )
            {
              v33 = *(_DWORD *)(v32 + 2012);
            }
            else if ( v30 == 96 )
            {
              v33 = *(_DWORD *)(v32 + 2400);
            }
            else
            {
              v34 = GetDpiDepSysMetCachePlateauSlot(v30);
              if ( v34 == -1 )
              {
                v33 = ScaleSystemMetricForDPIWithoutCache(33, v35);
              }
              else
              {
                v54 = 112LL * v34;
                v33 = *(_DWORD *)(v54 + v32 + 3104);
                if ( v33 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(v35);
                  v33 = *(_DWORD *)(v54 + gpsi + 3104);
                  if ( v33 == -1 )
                    v33 = 0;
                }
              }
            }
            if ( v56 > (int)v55 || v57 > *(_DWORD *)(v10 + 140) - *(_DWORD *)(v10 + 132) - v33 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
              v36 = *(_DWORD *)(v10 + 128);
              v37 = (unsigned int)(*(_DWORD *)(v10 + 132) + v58);
              v49 = *(_DWORD *)(v10 + 140) - v33;
              v53 = 1;
              GreIntersectVisRect(DC, (unsigned int)(v36 + v50), v37, (unsigned int)(v36 + v55), v49);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
            }
          }
        }
        TextAlign = GreGetTextAlign(DC);
        v39 = TextAlign;
        v51 = TextAlign;
        if ( (*(_DWORD *)v9 & 0x2000) != 0 )
          GreSetTextAlign(DC, TextAlign | 0x100);
        DPIMETRICS = (__int64 *)GetDPIMETRICS((struct tagWND *)v10);
        v54 = GreSelectFontInternal(DC, *DPIMETRICS, 1);
        v52 = 0LL;
        GreGetDCPoint(DC, 4LL, &v52);
        if ( a5 )
          *(_DWORD *)(v9 + 4) |= 0x80u;
        else
          *(_DWORD *)(v9 + 4) &= ~0x80u;
        if ( v62 || *(_QWORD *)(v9 + 104) == 1LL && (*(_DWORD *)(a2 + 56) & 1) == 0 )
          goto LABEL_110;
        if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
        {
          v41 = *(unsigned int *)(a2 + 136);
          if ( (_DWORD)v41 == -1 || (unsigned int)v41 >= *(_DWORD *)(a2 + 68) )
            v42 = 0LL;
          else
            v42 = *(_QWORD *)(a2 + 96) + 152 * v41;
          GreSetViewportOrg(DC, v52, HIDWORD(v52) - *(_DWORD *)(v42 + 76));
        }
        if ( *(_QWORD *)(a2 + 128)
          && !(unsigned int)MNDrawHilite((struct tagMENU *)a2, (struct tagITEM *)v9)
          && !(unsigned int)MNIsOwnerDrawItem(v43, (_DWORD *)v9) )
        {
          v44 = GreSetBkMode(DC, 1);
          MNEraseBackground(
            DC,
            a2,
            *(_DWORD *)(v9 + 72),
            *(_DWORD *)(v9 + 76),
            *(_DWORD *)(v9 + 80),
            *(_DWORD *)(v9 + 84));
          GreSetBkMode(DC, v44);
          v39 = v51;
        }
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 304) & 0x10000000) != 0 )
          {
            v45 = GetWindowDpiLastNotify(v10);
            goto LABEL_109;
          }
          if ( (*(_DWORD *)(v10 + 368) & 0xF) != 0
            || (v46 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) == 0
            || (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 52LL) & 1) == 0 )
          {
LABEL_108:
            v45 = *(unsigned __int16 *)(gpsi + 8678LL);
LABEL_109:
            xxxDrawMenuItem(DC, v45, a2, v9, 1, (struct tagWND *)v10);
LABEL_110:
            if ( v53 )
              RecalcDCVisRgn(DC);
            GreSelectFontInternal(DC, v54, 1);
            GreSetViewportOrg(DC, v52, SHIDWORD(v52));
            GreSetTextAlign(DC, v39);
            _ReleaseDC(DC);
            v8 = v61;
            goto LABEL_113;
          }
        }
        else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        {
          goto LABEL_108;
        }
        v45 = 96;
        goto LABEL_109;
      }
    }
  }
LABEL_125:
  if ( v10 != a4 )
    ThreadUnlock1(a1, a2);
  v47 = MNGetpItemIndex(a2, v9);
  a1 = v8;
  if ( v47 != -1 )
  {
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v8);
    return v9;
  }
LABEL_129:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return 0LL;
}

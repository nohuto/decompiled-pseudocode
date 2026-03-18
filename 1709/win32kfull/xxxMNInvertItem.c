/*
 * XREFs of xxxMNInvertItem @ 0x1C0216F74
 * Callers:
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C0213B48 (xxxHiliteMenuItem.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     xxxGetSysMenuHandle @ 0x1C007BAF0 (xxxGetSysMenuHandle.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     xxxDrawMenuItem @ 0x1C007FB1C (xxxDrawMenuItem.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0080028 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C0080E74 (GreSetViewportOrg.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C021605C (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     MNEraseBackground @ 0x1C0216AA0 (MNEraseBackground.c)
 *     xxxSendMenuSelect @ 0x1C021B16C (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNInvertItem(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 **v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  _QWORD *i; // rcx
  __int64 SysMenuHandle; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // ecx
  _DWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  int v22; // eax
  HDC DC; // r12
  unsigned int WindowDpiLastNotify; // eax
  __int64 v25; // rax
  int DpiDependentMetric; // eax
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  __int64 v32; // r8
  int TextAlign; // eax
  __int64 *DPIMETRICS; // rax
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  int v48; // [rsp+20h] [rbp-51h]
  int v49; // [rsp+30h] [rbp-41h]
  int v50; // [rsp+30h] [rbp-41h]
  int v51; // [rsp+38h] [rbp-39h] BYREF
  int v52; // [rsp+3Ch] [rbp-35h]
  int v53; // [rsp+40h] [rbp-31h]
  int v54; // [rsp+44h] [rbp-2Dh]
  int v55; // [rsp+48h] [rbp-29h]
  int v56; // [rsp+4Ch] [rbp-25h]
  int v57; // [rsp+50h] [rbp-21h]
  __int64 *v58[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 *v59[2]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v60[9]; // [rsp+78h] [rbp+7h] BYREF
  __int64 **v61; // [rsp+D0h] [rbp+5Fh]
  int v62; // [rsp+D8h] [rbp+67h]

  v61 = a1;
  v5 = (unsigned int)a3;
  v62 = 0;
  v54 = 0;
  v8 = a1;
  v9 = 0LL;
  if ( !a2 || !a4 )
    goto LABEL_109;
  if ( **a1 )
  {
    v10 = *(_QWORD *)(**a1 + 16);
    if ( v10 != a4 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v60[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v60;
      v60[1] = v10;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
  }
  else
  {
    v10 = a4;
  }
  if ( (int)v5 < 0 )
  {
    if ( **v8 && (unsigned int)(v5 + 4) <= 1 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v58, **v8, a3, a4);
      MNDrawArrow(0LL, v58, (unsigned int)v5);
    }
    for ( i = *(_QWORD **)(*(_QWORD *)(a4 + 16) + 584LL); i && *(_QWORD *)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
      ;
LABEL_104:
    xxxSendMenuSelect(a4, v10, a2, v5, (__int64)i);
    goto LABEL_105;
  }
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    SysMenuHandle = xxxGetSysMenuHandle(a4);
    if ( a2 == SysMenuHandle )
    {
      MNPositionSysMenu(a4, SysMenuHandle);
      v62 = 1;
    }
  }
  v14 = 0xFFFFFFFFLL;
  if ( (unsigned int)v5 < *(_DWORD *)(a2 + 68) )
    v9 = *(_QWORD *)(a2 + 96) + 152 * v5;
  if ( v9 && ((*(_DWORD *)(a2 + 56) & 1) != 0 || (*(_BYTE *)(a4 + 71) & 0x20) == 0) )
  {
    if ( (*(_DWORD *)v9 & 0x800) != 0 )
    {
LABEL_99:
      if ( !a5 )
        goto LABEL_105;
      for ( i = *(_QWORD **)(*(_QWORD *)(a4 + 16) + 584LL); i && *(_QWORD *)(*i + 8LL) != a4; i = (_QWORD *)i[6] )
        ;
      goto LABEL_104;
    }
    if ( (*(_DWORD *)(v9 + 4) & 0x80) != a5 )
    {
      if ( !a5 || !**v8 || (*(_DWORD *)(a2 + 144) & 3) == 0 )
        goto LABEL_45;
      v15 = *(unsigned int *)(a2 + 136);
      if ( (int)v5 >= (int)v15 )
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
        LODWORD(v15) = v5;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v59, **v8, a3, a4);
      if ( (unsigned int)xxxMNSetTop(v59, (unsigned int)v15, v19, v20) )
        xxxInternalUpdateWindow((struct tagWND *)v10, 1u);
      if ( (unsigned int)MNGetpItemIndex(a2, v9) != -1 )
      {
LABEL_45:
        v21 = *(_DWORD *)(v9 + 76);
        v49 = *(_DWORD *)(v9 + 72);
        v55 = v49 + *(_DWORD *)(v9 + 80);
        v22 = v21 + *(_DWORD *)(v9 + 84);
        LODWORD(v58[0]) = v21;
        v56 = v22;
        if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
        {
          DC = (HDC)_GetDC(v10);
        }
        else
        {
          DC = (HDC)_GetDCEx(v10, 0LL, 65537LL);
          if ( (*(_BYTE *)(v10 + 70) & 4) != 0 && !v62 )
          {
            if ( (*(_DWORD *)(v10 + 304) & 0x10000000) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify(v10);
            }
            else if ( (*(_DWORD *)(v10 + 368) & 0xF) == 0
                   && (v25 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 432LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 400LL) + 284LL);
            }
            DpiDependentMetric = GetDpiDependentMetric(14LL, WindowDpiLastNotify);
            v27 = (*(_DWORD *)(v10 + 304) & 0x10000000) == 0;
            v53 = *(_DWORD *)(v10 + 136) - *(_DWORD *)(v10 + 128) - DpiDependentMetric;
            if ( v27 )
            {
              if ( (*(_DWORD *)(v10 + 368) & 0xF) == 0
                && (v29 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 432LL)) != 0
                && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 52LL) & 1) != 0 )
              {
                v28 = 96;
              }
              else
              {
                v28 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 400LL) + 284LL);
              }
            }
            else
            {
              v28 = GetWindowDpiLastNotify(v10);
            }
            v30 = GetDpiDependentMetric(15LL, v28);
            v57 = v30;
            if ( v55 > v53 || v56 > *(_DWORD *)(v10 + 140) - *(_DWORD *)(v10 + 132) - v30 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
              v31 = *(_DWORD *)(v10 + 128);
              v32 = (unsigned int)(*(_DWORD *)(v10 + 132) + LODWORD(v58[0]));
              v48 = *(_DWORD *)(v10 + 140) - v57;
              v54 = 1;
              GreIntersectVisRect(DC, (unsigned int)(v31 + v49), v32, (unsigned int)(v31 + v53), v48);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
            }
          }
        }
        TextAlign = GreGetTextAlign(DC);
        v50 = TextAlign;
        if ( (*(_DWORD *)v9 & 0x2000) != 0 )
          GreSetTextAlign(DC, TextAlign | 0x100);
        DPIMETRICS = (__int64 *)GetDPIMETRICS((struct tagWND *)v10);
        v35 = (__int64 *)GreSelectFont((__int64)DC, *DPIMETRICS);
        v51 = 0;
        v52 = 0;
        v58[0] = v35;
        GreGetDCPoint(DC, 4LL, &v51);
        if ( a5 )
          *(_DWORD *)(v9 + 4) |= 0x80u;
        else
          *(_DWORD *)(v9 + 4) &= ~0x80u;
        if ( !v62 && (*(_QWORD *)(v9 + 104) != 1LL || (*(_DWORD *)(a2 + 56) & 1) != 0) )
        {
          if ( (*(_DWORD *)(a2 + 144) & 3) != 0 )
          {
            v40 = *(unsigned int *)(a2 + 136);
            if ( (_DWORD)v40 == -1 || (unsigned int)v40 >= *(_DWORD *)(a2 + 68) )
              v41 = 0LL;
            else
              v41 = *(_QWORD *)(a2 + 96) + 152 * v40;
            GreSetViewportOrg(DC, v51, v52 - *(_DWORD *)(v41 + 76));
          }
          if ( *(_QWORD *)(a2 + 128)
            && !(unsigned int)MNDrawHilite((struct tagMENU *)a2, (struct tagITEM *)v9)
            && !(unsigned int)MNIsOwnerDrawItem(v37, (_DWORD *)v9) )
          {
            v42 = GreSetBkMode(DC, 1);
            MNEraseBackground(
              DC,
              a2,
              *(_DWORD *)(v9 + 72),
              *(_DWORD *)(v9 + 76),
              *(_DWORD *)(v9 + 80),
              *(_DWORD *)(v9 + 84));
            GreSetBkMode(DC, v42);
          }
          if ( v10 )
          {
            if ( (*(_DWORD *)(v10 + 304) & 0x10000000) != 0 )
            {
              v44 = GetWindowDpiLastNotify(v10);
            }
            else if ( (*(_DWORD *)(v10 + 368) & 0xF) == 0
                   && (v45 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 432LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v45 + 8) + 52LL) & 1) != 0 )
            {
              v44 = 96;
            }
            else
            {
              v44 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 400LL) + 284LL);
            }
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38, v39) & 0xF) != 0 )
          {
            v44 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v43) + 284);
          }
          else
          {
            v44 = 96;
          }
          xxxDrawMenuItem(DC, v44, a2, v9, 1, (struct tagWND *)v10);
        }
        if ( v54 )
          RecalcDCVisRgn(DC);
        GreSelectFont((__int64)DC, (__int64)v58[0]);
        GreSetViewportOrg(DC, v51, v52);
        GreSetTextAlign(DC, v50);
        _ReleaseDC(DC);
        v8 = v61;
        goto LABEL_99;
      }
    }
  }
LABEL_105:
  if ( v10 != a4 )
    ThreadUnlock1(v14, a2);
  v46 = MNGetpItemIndex(a2, v9);
  a1 = v8;
  if ( v46 != -1 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, a2, a3, a4);
    return v9;
  }
LABEL_109:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, a4);
  return 0LL;
}

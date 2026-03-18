/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980
 * Callers:
 *     xxxAdjustSize @ 0x1C0041AE8 (xxxAdjustSize.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C00B2DE0 (xxxEndGetWidnowTrackInfoAsync.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01F2FA4 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     GetMonitorMaxArea @ 0x1C003C008 (GetMonitorMaxArea.c)
 *     _GetClientRect @ 0x1C003C920 (_GetClientRect.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0040EEC (GetWindowBordersWithDpiAwareness.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     IsValidMonitor @ 0x1C00FC0E4 (IsValidMonitor.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

char __fastcall xxxInitSendValidateMinMaxInfoEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 DesktopWindow; // rax
  __int64 v13; // r8
  __int64 v14; // r12
  int WindowBordersWithDpiAwareness; // edi
  int v16; // edx
  __int64 Prop; // rax
  __int64 v18; // rax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int DwmDependentMetric; // eax
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  unsigned int WindowDpiLastNotify; // r11d
  __int64 v31; // rax
  int v32; // eax
  int DpiDepSysMetCachePlateauSlot; // eax
  unsigned int v34; // r11d
  __int64 v35; // r12
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v42; // rcx
  __int64 *v43; // r15
  __int64 v44; // r11
  int v45; // r13d
  unsigned int v46; // ebx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // r11
  __int64 v50; // r14
  char v51; // al
  unsigned int v52; // r14d
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  __int64 v56; // r11
  __int64 v57; // r12
  unsigned int v58; // r14d
  __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  __int64 v62; // r11
  __int64 v63; // r12
  unsigned int v64; // r11d
  __int64 v65; // rax
  __int64 v66; // rbx
  int v67; // eax
  int v68; // eax
  unsigned int v69; // r11d
  __int64 v70; // r14
  bool v71; // cc
  __int64 v73; // [rsp+20h] [rbp-50h]
  __int128 v74; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v75[3]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v76[4]; // [rsp+50h] [rbp-20h] BYREF
  _DWORD *v77; // [rsp+B8h] [rbp+48h] BYREF
  int v78; // [rsp+C8h] [rbp+58h]

  v78 = a4;
  v77 = (_DWORD *)gptiCurrent;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2108LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2112LL);
  v7 = *(_QWORD *)(GetDispInfo() + 88);
  v8 = *(_DWORD *)(a1 + 368) & 0xF;
  if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
    && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 40) + 44LL;
  }
  else if ( (_DWORD)v8 == 1
         && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v11 + 8) + 52LL) & 1) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 40) + 60LL;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 40) + 28LL;
  }
  DesktopWindow = GetDesktopWindow(a1, v8);
  v14 = *(_QWORD *)(a1 + 104);
  v73 = DesktopWindow;
  if ( v14 == DesktopWindow )
  {
    if ( !a3 || !(unsigned int)IsValidMonitor(a3) )
      a3 = MonitorFromWindow(a1, 0x21u);
    v74 = *(_OWORD *)v10;
  }
  else
  {
    a3 = v13;
    GetClientRect(v14, &v74);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
  DWORD1(v74) -= WindowBordersWithDpiAwareness;
  LODWORD(v74) = v74 - WindowBordersWithDpiAwareness;
  v16 = WindowBordersWithDpiAwareness + DWORD2(v74) - v74;
  *(_DWORD *)(a2 + 12) = WindowBordersWithDpiAwareness + HIDWORD(v74) - DWORD1(v74);
  *(_DWORD *)(a2 + 8) = v16;
  Prop = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 32) & 0x10) != 0 )
    v18 = *(_QWORD *)(Prop + 24);
  else
    v18 = v74;
  v19 = 2 * WindowBordersWithDpiAwareness;
  *(_QWORD *)(a2 + 16) = v18;
  if ( (*(_BYTE *)(a1 + 70) & 0xC0) != 0 && *(char *)(a1 + 64) >= 0 )
  {
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(gpsi + 2016LL);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(gpsi + 2020LL);
  }
  else
  {
    v20 = v19;
    if ( v19 < 2 )
      v20 = 2;
    *(_DWORD *)(a2 + 24) = v20;
    v21 = v19;
    if ( v19 < 2 )
      v21 = 2;
    *(_DWORD *)(a2 + 28) = v21;
  }
  *(_DWORD *)(a2 + 32) = GetDwmDependentMetric(59LL);
  DwmDependentMetric = GetDwmDependentMetric(60LL);
  v23 = (__int64)v77;
  *(_DWORD *)(a2 + 36) = DwmDependentMetric;
  v75[0] = *(_QWORD *)(v23 + 368);
  *(_QWORD *)(v23 + 368) = v75;
  v75[1] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v76[0] = *(_QWORD *)(v23 + 368);
  *(_QWORD *)(v23 + 368) = v76;
  v76[1] = v7;
  ++*(_DWORD *)(v7 + 8);
  if ( !v78 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v24 = (_DWORD *)gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2108LL);
  v25 = *(unsigned int *)(gpsi + 2112LL);
  *(_DWORD *)(a2 + 4) = v25;
  if ( v14 == v73 )
  {
    GetMonitorMaxArea(a1, a3, (__int64 *)&v77);
    if ( *(_DWORD *)(a2 + 8) < *(_DWORD *)(v10 + 8) - *(_DWORD *)v10
      || *(_DWORD *)(a2 + 12) < *(_DWORD *)(v10 + 12) - *(_DWORD *)(v10 + 4) )
    {
      SetOrClrWF(0, (_DWORD *)a1, 0x340u, 1);
      v24 = v77;
    }
    else
    {
      SetOrClrWF(1, (_DWORD *)a1, 0x340u, 1);
      v26 = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 32);
        if ( (v27 & 0x10) != 0 && (*(_BYTE *)(a1 + 70) & 4) != 0 )
        {
          v28 = *(_DWORD *)(a2 + 16);
          v29 = v74;
          if ( v28 != (_DWORD)v74 && *(_DWORD *)(v26 + 24) == v28 )
          {
            *(_DWORD *)(v26 + 32) = v27 & 0xFFFFFFEF;
            *(_DWORD *)(a2 + 20) = DWORD1(v74);
            *(_DWORD *)(a2 + 16) = v29;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
             && (v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v31 + 8) + 52LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
      }
      if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 8678LL) )
      {
        v32 = *(_DWORD *)(gpsi + 1896LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v32 = *(_DWORD *)(gpsi + 2284LL);
      }
      else
      {
        DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
        if ( DpiDepSysMetCachePlateauSlot == -1 )
        {
          v32 = ScaleSystemMetricForDPIWithoutCache(4LL, v34);
        }
        else
        {
          v35 = 112LL * DpiDepSysMetCachePlateauSlot;
          v32 = *(_DWORD *)(v35 + gpsi + 3052);
          if ( v32 == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v34);
            v32 = *(_DWORD *)(v35 + gpsi + 3052);
            if ( v32 == -1 )
              v32 = 0;
          }
        }
      }
      v36 = *(_DWORD *)(a2 + 20);
      if ( v36 + v32 > *(_DWORD *)(v10 + 4) || *(_DWORD *)(a2 + 12) + v36 < *(_DWORD *)(v10 + 12) )
      {
        v24 = v77;
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
             && (v37 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v37 + 8) + 52LL) & 1) != 0 )
      {
        v24 = (_DWORD *)(*(_QWORD *)(a3 + 40) + 44LL);
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 1
             && (v38 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 52LL) & 1) != 0 )
      {
        v24 = (_DWORD *)(*(_QWORD *)(a3 + 40) + 60LL);
      }
      else
      {
        v24 = (_DWORD *)(*(_QWORD *)(a3 + 40) + 28LL);
      }
      *(_DWORD *)(a2 + 8) += *(_DWORD *)v10 + v24[2] - *(_DWORD *)(v10 + 8) - *v24;
      v25 = (unsigned int)(*(_DWORD *)(v10 + 4) + v24[3] - v24[1] - *(_DWORD *)(v10 + 12));
      *(_DWORD *)(a2 + 12) += v25;
    }
    *(_DWORD *)(a2 + 16) += *v24;
    *(_DWORD *)(a2 + 20) += v24[1];
  }
  ThreadUnlock1(v25, v24);
  ThreadUnlock1(v40, v39);
  LOBYTE(DPIServerInfo) = *(_BYTE *)(a1 + 56);
  LOBYTE(v42) = 8;
  if ( (DPIServerInfo & 8) != 0 )
  {
    v43 = (__int64 *)gpsi;
    v44 = gpsi;
    v45 = *(_DWORD *)(gpsi + 2020LL);
    if ( *(char *)(a1 + 64) >= 0 )
    {
      v51 = *(_BYTE *)(a1 + 70);
      if ( (v51 & 8) != 0 )
      {
        if ( (v51 & 3) != 0 )
        {
          if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
          {
            v52 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
                 || (v53 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                 || (v52 = 96, (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 52LL) & 1) == 0) )
          {
            v52 = *(unsigned __int16 *)(gpsi + 8678LL);
          }
          if ( v52 == *(unsigned __int16 *)(v44 + 8678) )
          {
            v54 = *(_DWORD *)(v44 + 2000);
          }
          else if ( v52 == 96 )
          {
            v54 = *(_DWORD *)(v44 + 2388);
          }
          else
          {
            v55 = GetDpiDepSysMetCachePlateauSlot(v52);
            if ( v55 == -1 )
            {
              v54 = ScaleSystemMetricForDPIWithoutCache(30LL, v52);
              v43 = (__int64 *)gpsi;
            }
            else
            {
              v57 = 112LL * v55;
              v54 = *(_DWORD *)(v56 + v57 + 3092);
              if ( v54 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(v52);
                v43 = (__int64 *)gpsi;
                v54 = *(_DWORD *)(v57 + gpsi + 3092);
                if ( v54 == -1 )
                  v54 = 0;
              }
            }
          }
          v19 += v54 + 2 * v54;
        }
        else if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
        {
          if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
          {
            v58 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
                 || (v59 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
                 || (v58 = 96, (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 52LL) & 1) == 0) )
          {
            v58 = *(unsigned __int16 *)(gpsi + 8678LL);
          }
          if ( v58 == *(unsigned __int16 *)(v44 + 8678) )
          {
            v60 = *(_DWORD *)(v44 + 2000);
          }
          else if ( v58 == 96 )
          {
            v60 = *(_DWORD *)(v44 + 2388);
          }
          else
          {
            v61 = GetDpiDepSysMetCachePlateauSlot(v58);
            if ( v61 == -1 )
            {
              v60 = ScaleSystemMetricForDPIWithoutCache(30LL, v58);
              v43 = (__int64 *)gpsi;
            }
            else
            {
              v63 = 112LL * v61;
              v60 = *(_DWORD *)(v62 + v63 + 3092);
              if ( v60 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(v58);
                v43 = (__int64 *)gpsi;
                v60 = *(_DWORD *)(v63 + gpsi + 3092);
                if ( v60 == -1 )
                  v60 = 0;
              }
            }
          }
          v19 += 2 * v60;
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
          {
            v64 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
                 && (v65 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
                 && (v42 = **(_QWORD **)(v65 + 8), (*(_DWORD *)(v42 + 52) & 1) != 0) )
          {
            v64 = 96;
          }
          else
          {
            v64 = *(unsigned __int16 *)(*v43 + 8678);
          }
          v66 = *v43;
          if ( v64 == *(unsigned __int16 *)(*v43 + 8678) )
          {
            v67 = *(_DWORD *)(v66 + 2004);
          }
          else if ( v64 == 96 )
          {
            v67 = *(_DWORD *)(v66 + 2392);
          }
          else
          {
            v68 = GetDpiDepSysMetCachePlateauSlot(v64);
            if ( v68 == -1 )
            {
              v67 = ScaleSystemMetricForDPIWithoutCache(31LL, v69);
            }
            else
            {
              v70 = 112LL * v68;
              v67 = *(_DWORD *)(v66 + v70 + 3096);
              if ( v67 == -1 )
              {
                EnsureDpiDepSysMetCacheForPlateau(v69);
                v42 = gpsi;
                v67 = *(_DWORD *)(v70 + gpsi + 3096);
                if ( v67 == -1 )
                  v67 = 0;
              }
            }
          }
          v19 += v67;
        }
      }
      DPIServerInfo = GetDPIServerInfo(v42);
      v19 += 4 * *(_DWORD *)(DPIServerInfo + 16);
    }
    else if ( (*(_BYTE *)(a1 + 70) & 8) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
      {
        v46 = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
             || (v47 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
             || (v46 = 96, (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 52LL) & 1) == 0) )
      {
        v46 = *(unsigned __int16 *)(gpsi + 8678LL);
      }
      if ( v46 == *(unsigned __int16 *)(v44 + 8678) )
      {
        LODWORD(DPIServerInfo) = *(_DWORD *)(v44 + 2088);
      }
      else if ( v46 == 96 )
      {
        LODWORD(DPIServerInfo) = *(_DWORD *)(v44 + 2476);
      }
      else
      {
        v48 = GetDpiDepSysMetCachePlateauSlot(v46);
        if ( v48 == -1 )
        {
          LODWORD(DPIServerInfo) = ScaleSystemMetricForDPIWithoutCache(52LL, v46);
        }
        else
        {
          v50 = 112LL * v48;
          LODWORD(DPIServerInfo) = *(_DWORD *)(v49 + v50 + 3128);
          if ( (_DWORD)DPIServerInfo == -1 )
          {
            EnsureDpiDepSysMetCacheForPlateau(v46);
            LODWORD(DPIServerInfo) = *(_DWORD *)(v50 + gpsi + 3128);
            if ( (_DWORD)DPIServerInfo == -1 )
              LODWORD(DPIServerInfo) = 0;
          }
        }
      }
      v19 += DPIServerInfo;
    }
    v19 += 4;
  }
  else
  {
    v45 = v19;
  }
  if ( *(_DWORD *)(a2 + 24) > v19 )
    v19 = *(_DWORD *)(a2 + 24);
  v71 = *(_DWORD *)(a2 + 28) <= v45;
  *(_DWORD *)(a2 + 24) = v19;
  if ( !v71 )
    v45 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 28) = v45;
  return DPIServerInfo;
}

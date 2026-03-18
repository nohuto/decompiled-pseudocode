/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C0217880
 * Callers:
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C007FD30 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0080028 (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     xxxGetWindowSmIcon @ 0x1C008B494 (xxxGetWindowSmIcon.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0099988 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C020D384 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0216248 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C023B144 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rsi
  __int64 v9; // r8
  __int64 v11; // rdx
  _BOOL8 v12; // r9
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // r14d
  bool v16; // zf
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  int *v35; // rdi
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  ULONG_PTR v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // ecx
  unsigned int v49; // r15d
  unsigned int v50; // r8d
  int v51; // r15d
  int DpiDependentMetric; // edi
  int v53; // eax
  int v54; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  int ObjectW; // eax
  __int64 v60; // rdx
  unsigned int v61; // r11d
  int v62; // r13d
  __int64 v63; // r15
  __int64 v64; // r12
  HDC CompatibleDC; // rbx
  unsigned int v66; // edx
  __int64 v67; // rax
  int v68; // r11d
  unsigned __int8 *v69; // r9
  __int64 v70; // r10
  unsigned int v71; // r8d
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // r10
  unsigned __int16 *v77; // r12
  int v78; // r13d
  int v79; // edi
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // ebx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // ebx
  __int64 CharPosition; // r15
  unsigned int v89; // r10d
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r8
  __int64 v99; // r9
  _DWORD *v100; // rcx
  int v101; // ebx
  struct tagMENU *v102; // r9
  __int64 v103; // r14
  struct tagMENU *v104; // r9
  __int64 v105; // rdi
  __int64 v106; // rdx
  __int64 v107; // rcx
  HDC v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // rcx
  int v118; // ecx
  int *v119; // rbx
  int v120; // r11d
  int v121; // r10d
  unsigned int v123; // [rsp+70h] [rbp-90h]
  int v124; // [rsp+74h] [rbp-8Ch]
  int v125; // [rsp+74h] [rbp-8Ch]
  struct tagMENU *v127; // [rsp+80h] [rbp-80h]
  BOOL v128; // [rsp+88h] [rbp-78h]
  int v129; // [rsp+90h] [rbp-70h]
  __int64 v130; // [rsp+90h] [rbp-70h]
  struct tagSIZE v131; // [rsp+98h] [rbp-68h] BYREF
  struct tagSIZE v132; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 *v133; // [rsp+A8h] [rbp-58h] BYREF
  struct tagSIZE v134; // [rsp+B0h] [rbp-50h] BYREF
  struct tagSIZE v135; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v136[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v137[14]; // [rsp+D8h] [rbp-28h] BYREF
  char v138[16]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v139; // [rsp+120h] [rbp+20h]
  unsigned __int16 v140; // [rsp+122h] [rbp+22h]
  __int16 v141; // [rsp+13Eh] [rbp+3Eh]
  int v142; // [rsp+140h] [rbp+40h]

  v6 = a2[1];
  v9 = *a2;
  v11 = 1LL;
  v12 = 0LL;
  v128 = 0;
  v13 = 0;
  v127 = (struct tagMENU *)v9;
  v14 = *(_DWORD *)(v9 + 56) & 1;
  v123 = *(_DWORD *)(v9 + 56) & 1;
  if ( v123 )
  {
    v15 = 2;
    if ( *(int *)(v9 + 56) >= 0 )
    {
      if ( a5 )
      {
        if ( (*(_DWORD *)(v6 + 4) & 8) != 0 )
          v16 = *(_QWORD *)(v6 + 24) == 0LL;
        else
          v16 = *(_QWORD *)(v6 + 32) == 0LL;
        LOBYTE(v13) = !v16;
      }
      else
      {
        v17 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v6, v9, 0LL);
        v9 = (__int64)v127;
        v13 = v17;
      }
      if ( ((*(_DWORD *)(v9 + 56) & 0x4000000) == 0 || !*(_QWORD *)(v6 + 104) || v13) && (*(_DWORD *)v6 & 0x2000) == 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v11, v9, v12) & 0xF) != 0
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v18, v12) + 432)
          || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v11,
                                                      v19,
                                                      v12)
                                                  + 432)
                                      + 8LL)
                        + 52LL) & 1) == 0
          || *(_WORD *)(PsGetCurrentProcessWin32Process(1LL) + 284) == 96 )
        {
          v20 = (_DWORD *)(gpsi + 8012LL);
        }
        else
        {
          v20 = (_DWORD *)(gpsi + 9500LL);
        }
        v9 = (__int64)v127;
        v15 = *v20 + 4;
      }
    }
    else
    {
      v15 = 4;
    }
  }
  else
  {
    v15 = 0;
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
    {
      v12 = *(char *)(v6 + 4) < 0;
      v128 = *(char *)(v6 + 4) < 0;
    }
  }
  v21 = *(_QWORD *)(v6 + 104);
  if ( !v21 || v13 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 )
    goto LABEL_115;
  if ( a5 )
    goto LABEL_74;
  v22 = *(_DWORD *)(v6 + 4);
  if ( (v22 & 0x20000000) != 0 )
  {
    v23 = 1;
    if ( v21 == 1 )
      goto LABEL_62;
    v24 = v15;
    v25 = v21 - 2;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 2;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 != 1 )
            {
              v29 = *(_DWORD *)(v6 + 104) + 79;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v15, v9, v12) & 0xF) != 0
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 432)
                || (v33 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v30,
                                                      v31,
                                                      v32)
                                                  + 432)
                                      + 8LL),
                    (*(_DWORD *)(v33 + 52) & 1) == 0)
                || *(_WORD *)(PsGetCurrentProcessWin32Process(v33) + 284) == 96 )
              {
                v34 = gpsi + 6996LL;
              }
              else
              {
                v34 = gpsi + 8484LL;
              }
              v35 = (int *)(v34 + 16LL * v29);
              v36 = (unsigned int)(*(_DWORD *)(v6 + 84) - v35[3]) >> 1;
              FixHDCBITSBmpEx(0LL, v30, v31, v32);
              BltColor(a1, v36, v35[2], v35[3], *v35, v35[1], 1);
              goto LABEL_115;
            }
            v37 = 25;
            v24 = v15 + 2;
          }
          else
          {
            v37 = 21;
          }
          goto LABEL_49;
        }
        v37 = 18;
      }
      else
      {
        v37 = 22;
        v24 = v15 + 2;
      }
    }
    else
    {
      v37 = 26;
    }
    if ( (v22 & 0x80u) != 0 )
      ++v37;
LABEL_49:
    BitBltSysBmp(a1, v24, 2, v37);
LABEL_115:
    v49 = v123;
    goto LABEL_116;
  }
  if ( v21 == -1 )
  {
    xxxSendMenuDrawItemMessage(a1, 1u, (struct tagMENU *)v9, (struct tagITEM *)v6, 1, v15, 0LL);
    goto LABEL_115;
  }
  if ( *(_WORD *)(gptiCurrent + 608LL) > 0x400u )
  {
LABEL_74:
    v38 = v123;
    goto LABEL_75;
  }
  if ( *(_QWORD *)(v6 + 64) && !*(_QWORD *)(v6 + 40) )
  {
    v23 = 1;
    goto LABEL_62;
  }
  v38 = v123;
  if ( v123
    || (v39 = *(_QWORD *)(v9 + 96), v6 != v39)
    || (v23 = v123 + 1, *(_DWORD *)(v9 + 68) <= v123 + 1)
    || *(_QWORD *)(v39 + 256)
    || !*(_QWORD *)(v6 + 16) )
  {
LABEL_75:
    v51 = *(_DWORD *)(v6 + 112);
    DpiDependentMetric = *(_DWORD *)(v6 + 116);
    v124 = v51;
    if ( (_DWORD)v38 )
    {
      v53 = *(_DWORD *)(v6 + 84) - DpiDependentMetric;
      if ( v53 <= 0 )
      {
        v54 = 0;
        v129 = 0;
      }
      else
      {
        v54 = v53 / 2;
        v129 = v53 / 2;
      }
    }
    else
    {
      DpiForSystem = GetDpiForSystem(v38, v11);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, DpiForSystem) )
      {
        v58 = GetDpiForSystem(v57, v56);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v58);
      }
      v54 = 0;
      v129 = 0;
      if ( *(_QWORD *)(v6 + 40) )
        v15 += *(_DWORD *)(GetDPIMetrics(v57, v56) + 8);
    }
    v132 = (struct tagSIZE)GreSelectBitmap(*(_QWORD *)ghdcMem2, *(_QWORD *)(v6 + 104));
    if ( !*(_QWORD *)&v132 )
      goto LABEL_115;
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(v6 + 104), 104LL, v138);
    v61 = 0;
    if ( !a5 || *(_DWORD *)v6 == 4 )
    {
      if ( ObjectW != 104 || v141 != 32 || v142 || *(_DWORD *)v6 == 4 )
      {
        if ( v139 * v140 == 1 )
          v72 = 12060490;
        else
          v72 = (unsigned int)MNDrawHilite(v127, (struct tagITEM *)v6) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(
          a1,
          v15 + v128,
          v54 + v128,
          v51,
          DpiDependentMetric,
          *(HDC *)ghdcMem2,
          v61,
          v61,
          v72,
          0xFFFFFF,
          v61);
      }
      goto LABEL_114;
    }
    v62 = a6;
    v63 = 0LL;
    v131.cx = 33488896;
    v64 = 0LL;
    if ( a6 )
    {
      v133 = 0LL;
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
      {
LABEL_99:
        if ( v62 )
        {
          if ( v64 != -1 )
            GreSelectBitmap(CompatibleDC, v64);
          if ( v63 )
          {
            GreDecBitmapExclusiveRefCnt(v63, v60);
            GreDeleteObject(v63);
          }
          if ( CompatibleDC )
            GreDeleteDC(CompatibleDC);
        }
LABEL_114:
        ((void (__fastcall *)(_QWORD, _QWORD))GreSelectBitmap)(*(_QWORD *)ghdcMem2, v132);
        goto LABEL_115;
      }
      memset(v137, 0, 0x2CuLL);
      v137[1] = v124;
      v137[0] = 40;
      v137[2] = DpiDependentMetric;
      *(_QWORD *)&v137[3] = 2097153LL;
      v67 = GreCreateDIBitmapReal(CompatibleDC, v66, 0LL, v137, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v133);
      v63 = v67;
      if ( v67 )
      {
        v64 = GreSelectBitmap(CompatibleDC, v67);
        if ( v64 != -1 )
        {
          NtGdiAlphaBlend(
            CompatibleDC,
            0,
            0,
            v124,
            DpiDependentMetric,
            *(HDC *)ghdcMem2,
            0,
            0,
            v124,
            DpiDependentMetric,
            v131.cx);
          v68 = v124;
          if ( v124 * DpiDependentMetric > 0 )
          {
            v69 = v133;
            v70 = (unsigned int)(v124 * DpiDependentMetric);
            do
            {
              v60 = 29 * v69[2] + 150 * (unsigned int)v69[1];
              v71 = ((unsigned int)v60 + 77 * *v69 + 129) >> 8;
              *(_DWORD *)v69 = v71 | ((v71 | ((v71 | (v69[3] << 8)) << 8)) << 8);
              v69 += 4;
              --v70;
            }
            while ( v70 );
            v62 = a6;
          }
          BYTE2(v131.cx) = 102;
          goto LABEL_97;
        }
      }
    }
    else
    {
      CompatibleDC = *(HDC *)ghdcMem2;
    }
    v68 = v124;
LABEL_97:
    if ( CompatibleDC )
      NtGdiAlphaBlend(
        a1,
        v15 + v128,
        v128 + v129,
        v68,
        DpiDependentMetric,
        CompatibleDC,
        0,
        0,
        v68,
        DpiDependentMetric,
        v131.cx);
    goto LABEL_99;
  }
  while ( 1 )
  {
LABEL_62:
    if ( !*(_QWORD *)(v6 + 64) && *(_QWORD *)(v9 + 88) )
      SetupFakeMDIAppStuff((struct tagMENU *)v9, (struct tagITEM *)v6);
    v41 = HMValidateHandleNoRip(*(_QWORD *)(v6 + 64), v23);
    if ( v41 )
      break;
    if ( !*(_QWORD *)(v6 + 64) )
      goto LABEL_69;
    v9 = (__int64)v127;
    *(_QWORD *)(v6 + 64) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v42, v43);
  v136[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v136;
  v136[1] = v41;
  _InterlockedAdd((volatile signed __int32 *)(v41 + 8), v23);
  WindowSmIcon = xxxGetWindowSmIcon(v41, 0);
  ThreadUnlock1(v47, v46);
  if ( WindowSmIcon )
    goto LABEL_70;
LABEL_69:
  WindowSmIcon = qword_1C0321938;
LABEL_70:
  v48 = a3 - 4;
  v49 = v123;
  v50 = a4 - 2;
  if ( v123 && v50 < v48 )
    v48 = a4 - 2;
  DrawIconEx(a1, v15 + 4, v23, WindowSmIcon, v48, v50, 0, *(_QWORD *)(gpsi + 4712LL), 0x13u);
LABEL_116:
  if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) == -1 )
    goto LABEL_169;
  if ( a5 != (_DWORD)v76 )
    goto LABEL_169;
  v77 = *(unsigned __int16 **)(v6 + 40);
  if ( !v77 )
    goto LABEL_169;
  v78 = *(_DWORD *)(v6 + 48);
  if ( !v78 )
    goto LABEL_169;
  v130 = *(_QWORD *)(v6 + 56);
  if ( v49 && *(_DWORD *)(v75 + 80) )
  {
    v15 = *(_DWORD *)(v75 + 80);
  }
  else if ( *(_QWORD *)(v6 + 104) != v76 )
  {
    v15 += *(_DWORD *)(v6 + 112) + 2;
  }
  v79 = *(_DWORD *)(GetDPIMetrics(v74, v73) + 20);
  v125 = v79;
  v82 = *(_DWORD *)(v6 + 84) - *(_DWORD *)(GetDPIMetrics(v81, v80) + 20);
  v87 = v82 - *(_DWORD *)(GetDPIMetrics(v84, v83) + 12) - 1;
  if ( v87 > 0 )
  {
    v85 = (unsigned int)(v87 >> 31);
    v125 = v87 / 2 + v79;
  }
  if ( !v49 && !*(_QWORD *)(v6 + 104) )
    v15 += *(_DWORD *)(GetDPIMetrics(v86, v85) + 8);
  if ( *v77 == 8 && !v49 )
  {
    ++v77;
    if ( !--v78 )
      goto LABEL_169;
  }
  CharPosition = (unsigned int)FindCharPosition(v77, 9LL);
  v90 = (unsigned int)FindCharPosition(v77, v89);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93, v94) & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v96, v97) + 432)
    || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v95, v98, v99) + 432)
                                + 8LL)
                  + 52LL) & 1) == 0
    || *(_WORD *)(PsGetCurrentProcessWin32Process(1LL) + 284) == 96 )
  {
    v100 = (_DWORD *)(gpsi + 8012LL);
  }
  else
  {
    v100 = (_DWORD *)(gpsi + 9500LL);
  }
  v101 = *(_DWORD *)(v6 + 80) - *v100 - 2;
  if ( !(_DWORD)v90 || (_DWORD)v90 == v78 )
  {
    if ( !(_DWORD)CharPosition || (_DWORD)v90 != v78 )
    {
      v103 = v130;
      v105 = (__int64)v127;
      goto LABEL_181;
    }
    if ( (*(_DWORD *)v6 & 0x2000) != 0 )
    {
      v135 = 0LL;
      xxxPSMGetTextExtent(a1, v77, CharPosition, &v135);
      v105 = (__int64)v127;
      if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) == -1 || v130 != *(_QWORD *)(v6 + 56) )
        goto LABEL_169;
      v15 = v101 - v135.cx;
      if ( !v123 && !*(_QWORD *)(v6 + 104) )
        v15 += *(_DWORD *)(GetDPIMetrics(v107, v106) + 8);
    }
    else
    {
      v105 = (__int64)v127;
    }
    xxxDrawMenuItemText(
      (struct tagMENU *)v105,
      (struct tagITEM *)v6,
      a1,
      v15 + v128,
      v125 + v128,
      v77,
      CharPosition,
      *(_DWORD *)(v105 + 56) & 4);
    if ( (unsigned int)MNGetpItemIndex(v105, v6) != -1 )
    {
      v103 = v130;
      if ( v130 == *(_QWORD *)(v6 + 56) )
        goto LABEL_181;
    }
LABEL_169:
    v108 = a1;
    goto LABEL_170;
  }
  if ( (*(_DWORD *)v6 & 0x2000) != 0 && v123 )
  {
    v131 = 0LL;
    xxxPSMGetTextExtent(a1, v77, v90, &v131);
    if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) == -1 || v130 != *(_QWORD *)(v6 + 56) )
      goto LABEL_169;
    v15 = v101 - v131.cx;
  }
  else
  {
    v102 = v127;
  }
  xxxDrawMenuItemText(v127, (struct tagITEM *)v6, a1, v15 + v128, v128 + v125, v77, v90, *((_DWORD *)v102 + 14) & 4);
  if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) == -1 )
    goto LABEL_169;
  v103 = v130;
  if ( v130 != *(_QWORD *)(v6 + 56) )
    goto LABEL_169;
  if ( (unsigned int)CharPosition <= (int)v90 + 1 )
  {
    v105 = (__int64)v127;
LABEL_181:
    if ( (unsigned int)CharPosition < v78 - 1 )
    {
      if ( (*(_DWORD *)v6 & 0x2000) == 0 || !v123 )
      {
        GetDPIMetrics((__int64)v100, v95);
LABEL_188:
        v118 = *(_DWORD *)(v105 + 56);
        v108 = a1;
        xxxPSMTextOut(a1, v78 - CharPosition - 1, ~(v118 << 18) & 0x100000);
        goto LABEL_170;
      }
      v132 = 0LL;
      xxxPSMGetTextExtent(a1, &v77[CharPosition + 1], v78 - CharPosition - 1, &v132);
      if ( (unsigned int)MNGetpItemIndex(v105, v6) != -1 && v103 == *(_QWORD *)(v6 + 56) )
        goto LABEL_188;
    }
    goto LABEL_169;
  }
  if ( (*(_DWORD *)v6 & 0x2000) != 0 && v123 )
  {
    v104 = v127;
    goto LABEL_155;
  }
  v134 = 0LL;
  xxxPSMGetTextExtent(a1, &v77[v90 + 1], CharPosition - v90 - 1, &v134);
  if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) != -1 && v130 == *(_QWORD *)(v6 + 56) )
  {
LABEL_155:
    xxxPSMTextOut(a1, CharPosition - v90 - 1, ~(*((_DWORD *)v104 + 14) << 18) & 0x100000);
    v105 = (__int64)v127;
    if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) == -1 || v130 != *(_QWORD *)(v6 + 56) )
      goto LABEL_169;
    goto LABEL_181;
  }
  v108 = a1;
LABEL_170:
  if ( (unsigned int)MNGetpItemIndex((__int64)v127, v6) != -1
    && a5 == (_DWORD)v112
    && v123 != (_DWORD)v112
    && *(_QWORD *)(v6 + 16) != v112 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v110, v109, v111, v112) & 0xF) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v113, v114, v115) + 432)
      || (v116 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v113, v114, v115) + 432)
                             + 8LL),
          (*(_DWORD *)(v116 + 52) & 1) == 0)
      || *(_WORD *)(PsGetCurrentProcessWin32Process(v116) + 284) == 96 )
    {
      v117 = gpsi + 6996LL;
    }
    else
    {
      v117 = gpsi + 8484LL;
    }
    v119 = (int *)(v117 + ((*(_DWORD *)v6 & 0x2000) != 0 ? 1472LL : 992LL));
    if ( *(_DWORD *)(v6 + 84) >= v119[3] )
    {
      FixHDCBITSBmpEx(0LL, v113, v114, v115);
      v120 = v119[3];
      v121 = (*(_DWORD *)(v6 + 84) - v120 - 2) / 2;
      if ( v121 <= 0 )
        v121 = 0;
      BltColor(v108, v121, v119[2], v120, *v119, v119[1], 1);
    }
  }
  return 1LL;
}

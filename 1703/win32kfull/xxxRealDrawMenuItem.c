/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C02166C4
 * Callers:
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 * Callees:
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C000DEB4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C000E1AC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C001D71C (xxxGetWindowSmIcon.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00465B4 (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C020BDE4 (-SetupFakeMDIAppStuff@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     BltColor @ 0x1C0219728 (BltColor.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C0239328 (FindCharPosition.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, struct tagMENU **a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  __int64 v7; // r14
  struct tagMENU *v9; // r8
  int v11; // ebx
  int v12; // r15d
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  _QWORD *v21; // rax
  __int64 v22; // rax
  bool v23; // zf
  int v24; // eax
  _QWORD *v25; // rax
  _DWORD *v26; // rax
  int *v27; // rdi
  unsigned int v28; // ebx
  unsigned int v29; // r9d
  int v30; // edi
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 WindowSmIcon; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // ecx
  int v38; // r12d
  int v39; // edi
  int v40; // eax
  int v41; // ebx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // eax
  char v48; // al
  int ObjectW; // eax
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // r13
  HDC CompatibleDC; // rbx
  unsigned int v54; // edx
  __int64 v55; // rax
  int v56; // r11d
  unsigned __int8 *v57; // r9
  __int64 v58; // r10
  unsigned int v59; // r8d
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int16 *v65; // r12
  int v66; // ebx
  int v67; // r13d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // edi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // edi
  __int64 v80; // r8
  int v81; // r9d
  __int64 DPIMetrics; // rax
  __int64 CharPosition; // r13
  unsigned int v84; // r10d
  __int64 v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 ThreadWin32Thread; // rax
  _QWORD *v91; // rax
  _DWORD *v92; // rax
  int v93; // ebx
  struct tagMENU *v94; // r9
  __int64 v95; // r15
  int v96; // ebx
  struct tagMENU *v97; // r9
  int v98; // r8d
  const WCHAR *v99; // r9
  int v100; // ecx
  int v101; // edi
  HDC v102; // rdi
  int v103; // r9d
  _QWORD *v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  int v110; // edx
  int v111; // r8d
  int *v112; // rbx
  int v113; // r10d
  __int64 v115; // [rsp+20h] [rbp-E0h]
  __int64 v116; // [rsp+20h] [rbp-E0h]
  __int64 v117; // [rsp+20h] [rbp-E0h]
  __int64 v118; // [rsp+20h] [rbp-E0h]
  int v119; // [rsp+70h] [rbp-90h]
  unsigned int v121; // [rsp+80h] [rbp-80h]
  int v122; // [rsp+80h] [rbp-80h]
  int v123; // [rsp+84h] [rbp-7Ch]
  int v124; // [rsp+84h] [rbp-7Ch]
  struct tagMENU *v125; // [rsp+88h] [rbp-78h]
  BOOL v126; // [rsp+90h] [rbp-70h]
  int v127; // [rsp+98h] [rbp-68h]
  __int64 v128; // [rsp+98h] [rbp-68h]
  struct tagSIZE v129; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v130; // [rsp+A8h] [rbp-58h] BYREF
  struct tagSIZE v131; // [rsp+B0h] [rbp-50h] BYREF
  struct tagSIZE v132; // [rsp+B8h] [rbp-48h] BYREF
  struct tagSIZE v133; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v134[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v135[12]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v136[24]; // [rsp+110h] [rbp+10h] BYREF
  int v137; // [rsp+140h] [rbp+40h]

  v6 = 0;
  v7 = (__int64)a2[1];
  v9 = *a2;
  v126 = 0;
  v11 = 0;
  v125 = *a2;
  v119 = *((_DWORD *)*a2 + 14) & 1;
  if ( !v119 )
  {
    v12 = 0;
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
      v126 = *(char *)(v7 + 4) < 0;
    goto LABEL_4;
  }
  v12 = 2;
  if ( *((int *)*a2 + 14) < 0 )
  {
    v12 = 4;
    goto LABEL_4;
  }
  if ( a5 )
  {
    if ( (*(_DWORD *)(v7 + 4) & 8) != 0 )
      v23 = *(_QWORD *)(v7 + 24) == 0LL;
    else
      v23 = *(_QWORD *)(v7 + 32) == 0LL;
    LOBYTE(v11) = !v23;
  }
  else
  {
    v24 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v7);
    v9 = v125;
    v11 = v24;
  }
  if ( (*((_DWORD *)v9 + 14) & 0x4000000) != 0 && *(_QWORD *)(v7 + 104) && !v11 || (*(_DWORD *)v7 & 0x2000) != 0 )
    goto LABEL_4;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) == 0 )
  {
    v25 = (_QWORD *)gpsi;
    goto LABEL_36;
  }
  v25 = (_QWORD *)gpsi;
  if ( *(_WORD *)(gpsi + 8678LL) == 96 )
  {
LABEL_36:
    v26 = (_DWORD *)(*v25 + 6716LL);
    goto LABEL_37;
  }
  v26 = (_DWORD *)(gpsi + 8204LL);
LABEL_37:
  v9 = v125;
  v12 = *v26 + 4;
LABEL_4:
  v13 = *(_QWORD *)(v7 + 104);
  if ( !v13 || v11 && (*((_DWORD *)v9 + 14) & 0x4000000) != 0 )
    goto LABEL_121;
  if ( a5 )
    goto LABEL_75;
  v14 = *(_DWORD *)(v7 + 4);
  if ( (v14 & 0x20000000) != 0 )
  {
    if ( v13 != 1 )
    {
      v15 = v12;
      v16 = v13 - 2;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 1 )
              {
                v20 = *(_DWORD *)(v7 + 104) + 79;
                if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                + 52LL) & 1) != 0 )
                {
                  v21 = (_QWORD *)gpsi;
                  if ( *(_WORD *)(gpsi + 8678LL) != 96 )
                  {
                    v22 = gpsi + 7188LL;
LABEL_42:
                    v27 = (int *)(v22 + 16LL * v20);
                    v28 = (unsigned int)(*(_DWORD *)(v7 + 84) - v27[3]) >> 1;
                    FixHDCBITSBmp();
                    BltColor(a1, v28, v27[2], v27[3], *v27, v27[1], 1);
LABEL_121:
                    v30 = v119;
                    goto LABEL_122;
                  }
                }
                else
                {
                  v21 = (_QWORD *)gpsi;
                }
                v22 = *v21 + 5700LL;
                goto LABEL_42;
              }
              v29 = 25;
              v15 = v12 + 2;
            }
            else
            {
              v29 = 21;
            }
LABEL_50:
            BitBltSysBmp(a1, v15, 2, v29);
            goto LABEL_121;
          }
          v29 = 18;
        }
        else
        {
          v29 = 22;
          v15 = v12 + 2;
        }
      }
      else
      {
        v29 = 26;
      }
      if ( (v14 & 0x80u) != 0 )
        ++v29;
      goto LABEL_50;
    }
LABEL_62:
    v30 = v119;
    goto LABEL_63;
  }
  if ( v13 == -1 )
  {
    xxxSendMenuDrawItemMessage(a1, 1u, v9, (struct tagITEM *)v7, 1, v12, 0LL);
    goto LABEL_121;
  }
  if ( *(_WORD *)(gptiCurrent + 552LL) > 0x400u )
  {
LABEL_75:
    v30 = v119;
    goto LABEL_76;
  }
  if ( *(_QWORD *)(v7 + 64) && !*(_QWORD *)(v7 + 40) )
    goto LABEL_62;
  v30 = v119;
  if ( v119
    || (v31 = *((_QWORD *)v9 + 12), v7 != v31)
    || *((_DWORD *)v9 + 17) <= 1u
    || *(_QWORD *)(v31 + 256)
    || !*(_QWORD *)(v7 + 16) )
  {
LABEL_76:
    v38 = *(_DWORD *)(v7 + 112);
    v121 = v38;
    if ( v30 )
    {
      v39 = *(_DWORD *)(v7 + 116);
      v40 = *(_DWORD *)(v7 + 84) - v39;
      if ( v40 <= 0 )
      {
        v41 = 0;
        v127 = 0;
      }
      else
      {
        v41 = v40 / 2;
        v127 = v40 / 2;
      }
    }
    else
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v46 = gpsi;
      if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
        v47 = *(_DWORD *)(gpsi + 2100LL);
      else
        v47 = *(_DWORD *)(gpsi + 2488LL);
      v39 = *(_DWORD *)(v7 + 116);
      if ( v39 <= v47 )
      {
        v48 = W32GetCurrentThreadDpiAwarenessContext();
        v46 = gpsi;
        if ( (v48 & 0xF) != 0 )
          v39 = *(_DWORD *)(gpsi + 2100LL);
        else
          v39 = *(_DWORD *)(gpsi + 2488LL);
      }
      v41 = 0;
      v127 = 0;
      if ( *(_QWORD *)(v7 + 40) )
        v12 += *(_DWORD *)(GetDPIMetrics(v46, v43, v44, v45, v115) + 8);
    }
    v129 = (struct tagSIZE)GreSelectBitmap(*(_QWORD *)ghdcMem2, *(_QWORD *)(v7 + 104));
    if ( !*(_QWORD *)&v129 )
      goto LABEL_121;
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(v7 + 104), 104LL, v136);
    if ( !a5 || *(_DWORD *)v7 == 4 )
    {
      if ( ObjectW != 104 || v136[23] != 32 || v137 || *(_DWORD *)v7 == 4 )
      {
        if ( v136[8] * v136[9] == 1 )
          v60 = 12060490;
        else
          v60 = (unsigned int)MNDrawHilite(v125, (struct tagITEM *)v7) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(a1, v12 + v126, v41 + v126, v38, v39, *(HDC *)ghdcMem2, 0, 0, v60, 0xFFFFFF, 0);
      }
      goto LABEL_120;
    }
    v51 = 0LL;
    v123 = 33488896;
    v52 = 0LL;
    if ( a6 )
    {
      v130 = 0LL;
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
      {
LABEL_105:
        if ( a6 )
        {
          if ( v52 != -1 )
            GreSelectBitmap(CompatibleDC, v52);
          if ( v51 )
          {
            GreDecBitmapExclusiveRefCnt(v51, v50);
            GreDeleteObject(v51);
          }
          if ( CompatibleDC )
            GreDeleteDC(CompatibleDC);
        }
LABEL_120:
        ((void (__fastcall *)(_QWORD, _QWORD))GreSelectBitmap)(*(_QWORD *)ghdcMem2, v129);
        goto LABEL_121;
      }
      memset(v135, 0, 0x2CuLL);
      v135[1] = v121;
      v135[0] = 40;
      v135[2] = v39;
      *(_QWORD *)&v135[3] = 2097153LL;
      v55 = GreCreateDIBitmapReal(CompatibleDC, v54, 0LL, v135, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v130);
      v51 = v55;
      if ( v55 )
      {
        v52 = GreSelectBitmap(CompatibleDC, v55);
        if ( v52 != -1 )
        {
          NtGdiAlphaBlend(CompatibleDC, 0, 0, v121, v39, *(POINTL *)ghdcMem2, 0, 0, v121, v39, 33488896);
          v56 = v121;
          if ( (int)(v121 * v39) > 0 )
          {
            v57 = (unsigned __int8 *)v130;
            v58 = v121 * v39;
            do
            {
              v50 = 29 * v57[2] + 150 * (unsigned int)v57[1];
              v59 = ((unsigned int)v50 + 77 * *v57 + 129) >> 8;
              *(_DWORD *)v57 = v59 | ((v59 | ((v59 | (v57[3] << 8)) << 8)) << 8);
              v57 += 4;
              --v58;
            }
            while ( v58 );
            v56 = v121;
          }
          BYTE2(v123) = 102;
          goto LABEL_103;
        }
      }
    }
    else
    {
      CompatibleDC = *(HDC *)ghdcMem2;
    }
    v56 = v121;
LABEL_103:
    if ( CompatibleDC )
      NtGdiAlphaBlend(a1, v12 + v126, v126 + v127, v56, v39, (POINTL)CompatibleDC, 0, 0, v56, v39, v123);
    goto LABEL_105;
  }
  while ( 1 )
  {
LABEL_63:
    if ( !*(_QWORD *)(v7 + 64) && *((_QWORD *)v9 + 11) )
      SetupFakeMDIAppStuff(v9, (struct tagITEM *)v7);
    v32 = HMValidateHandleNoRip(*(_QWORD *)(v7 + 64), 1);
    if ( v32 )
      break;
    if ( !*(_QWORD *)(v7 + 64) )
      goto LABEL_70;
    v9 = v125;
    *(_QWORD *)(v7 + 64) = 0LL;
  }
  v134[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v134;
  v134[1] = v32;
  ++*(_DWORD *)(v32 + 8);
  WindowSmIcon = xxxGetWindowSmIcon(v32, 0);
  ThreadUnlock1(v35, v34);
  if ( WindowSmIcon )
    goto LABEL_71;
LABEL_70:
  WindowSmIcon = qword_1C0325938;
LABEL_71:
  v36 = a4 - 2;
  v37 = a3 - 4;
  if ( v30 && v36 < v37 )
    v37 = a4 - 2;
  DrawIconEx(a1, v12 + 4, 1u, WindowSmIcon, v37, v36, 0, *(_QWORD *)(gpsi + 5120LL), 19);
LABEL_122:
  if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 )
    goto LABEL_165;
  if ( a5 )
    goto LABEL_165;
  v65 = *(unsigned __int16 **)(v7 + 40);
  if ( !v65 )
    goto LABEL_165;
  v66 = *(_DWORD *)(v7 + 48);
  v124 = v66;
  if ( !v66 )
    goto LABEL_165;
  v128 = *(_QWORD *)(v7 + 56);
  if ( v30 && *(_DWORD *)(v64 + 80) )
  {
    v12 = *(_DWORD *)(v64 + 80);
  }
  else if ( *(_QWORD *)(v7 + 104) )
  {
    v12 += *(_DWORD *)(v7 + 112) + 2;
  }
  v67 = *(_DWORD *)(GetDPIMetrics(v62, v61, v63, v64, v115) + 20);
  v122 = v67;
  v72 = *(_DWORD *)(v7 + 84) - *(_DWORD *)(GetDPIMetrics(v69, v68, v70, v71, v116) + 20);
  v79 = v72 - *(_DWORD *)(GetDPIMetrics(v74, v73, v75, v76, v117) + 12) - 1;
  if ( v79 > 0 )
  {
    v77 = (unsigned int)(v79 >> 31);
    v122 = v79 / 2 + v67;
  }
  v81 = v119;
  if ( !v119 && !*(_QWORD *)(v7 + 104) )
  {
    DPIMetrics = GetDPIMetrics(v78, v77, v80, 0LL, v118);
    v81 = 0;
    v12 += *(_DWORD *)(DPIMetrics + 8);
  }
  if ( *v65 == 8 && !v81 )
  {
    ++v65;
    v124 = v66 - 1;
    if ( v66 == 1 )
    {
      v102 = a1;
      goto LABEL_166;
    }
  }
  CharPosition = (unsigned int)FindCharPosition(v65, 9LL);
  v85 = (unsigned int)FindCharPosition(v65, v84);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
        v87 = 1LL,
        (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 408) + 8LL) + 52LL) & 1) == 0) )
  {
    v91 = (_QWORD *)gpsi;
    goto LABEL_145;
  }
  v91 = (_QWORD *)gpsi;
  v87 = gpsi;
  if ( *(_WORD *)(gpsi + 8678LL) == 96 )
  {
LABEL_145:
    v92 = (_DWORD *)(*v91 + 6716LL);
    goto LABEL_146;
  }
  v92 = (_DWORD *)(gpsi + 8204LL);
LABEL_146:
  v93 = *(_DWORD *)(v7 + 80) - *v92 - 2;
  if ( (_DWORD)v85 && (_DWORD)v85 != v124 )
  {
    if ( (*(_DWORD *)v7 & 0x2000) != 0 && v119 )
    {
      v131 = 0LL;
      xxxPSMGetTextExtent(a1, v65, (unsigned int)v85, &v131);
      if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 || v128 != *(_QWORD *)(v7 + 56) )
        goto LABEL_165;
      v12 = v93 - v131.cx;
    }
    else
    {
      v94 = v125;
    }
    xxxDrawMenuItemText(v125, (struct tagITEM *)v7, a1, v12 + v126, v126 + v122, v65, v85, *((_DWORD *)v94 + 14) & 4);
    if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 )
      goto LABEL_165;
    v95 = v128;
    if ( v128 != *(_QWORD *)(v7 + 56) )
      goto LABEL_165;
    if ( (unsigned int)CharPosition > (int)v85 + 1 )
    {
      v23 = (*(_DWORD *)v7 & 0x2000) == 0;
      v132 = 0LL;
      if ( v23 || !v119 )
      {
        xxxPSMGetTextExtent(a1, &v65[v85 + 1], (unsigned int)(CharPosition - v85 - 1), &v132);
        if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 || v128 != *(_QWORD *)(v7 + 56) )
          goto LABEL_165;
        v96 = *(_DWORD *)(v7 + 88) - v132.cx;
      }
      else
      {
        v96 = v93 - *(_DWORD *)(v7 + 88);
        v97 = v125;
      }
      v98 = *((_DWORD *)v97 + 14) << 18;
      v99 = &v65[v85 + 1];
      v100 = CharPosition - v85;
      v101 = v122;
      xxxPSMTextOut(a1, v96, v122, v99, v100 - 1, ~v98 & 0x100000);
      if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 )
        goto LABEL_165;
      goto LABEL_164;
    }
LABEL_186:
    v101 = v122;
LABEL_187:
    if ( (unsigned int)CharPosition < v124 - 1 )
    {
      if ( (*(_DWORD *)v7 & 0x2000) != 0 && v119 )
      {
        v129 = 0LL;
        xxxPSMGetTextExtent(a1, &v65[CharPosition + 1], (unsigned int)(v124 - CharPosition - 1), &v129);
        if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 || v95 != *(_QWORD *)(v7 + 56) )
          goto LABEL_165;
        v110 = *(_DWORD *)(v7 + 80) - *(_DWORD *)(v7 + 88) - v129.cx;
      }
      else
      {
        v110 = *(_DWORD *)(v7 + 88) + *(_DWORD *)(GetDPIMetrics(v87, v86, v88, v89, v118) + 8);
      }
      v111 = v101;
      v102 = a1;
      xxxPSMTextOut(
        a1,
        v110,
        v111,
        &v65[CharPosition + 1],
        v124 - CharPosition - 1,
        ~(*((_DWORD *)v125 + 14) << 18) & 0x100000);
      goto LABEL_166;
    }
LABEL_165:
    v102 = a1;
    goto LABEL_166;
  }
  if ( !(_DWORD)CharPosition || (_DWORD)v85 != v124 )
  {
    v95 = v128;
    goto LABEL_186;
  }
  if ( (*(_DWORD *)v7 & 0x2000) == 0 )
  {
LABEL_183:
    v101 = v122;
    xxxDrawMenuItemText(
      v125,
      (struct tagITEM *)v7,
      a1,
      v12 + v126,
      v122 + v126,
      v65,
      CharPosition,
      *((_DWORD *)v125 + 14) & 4);
    if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 )
      goto LABEL_165;
    v95 = v128;
LABEL_164:
    if ( v95 != *(_QWORD *)(v7 + 56) )
      goto LABEL_165;
    goto LABEL_187;
  }
  v102 = a1;
  v133 = 0LL;
  xxxPSMGetTextExtent(a1, v65, (unsigned int)CharPosition, &v133);
  if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) != -1 && v128 == *(_QWORD *)(v7 + 56) )
  {
    v12 = v93 - v133.cx;
    if ( !v119 && !*(_QWORD *)(v7 + 104) )
      v12 += *(_DWORD *)(GetDPIMetrics(v107, v106, v108, v109, v118) + 8);
    goto LABEL_183;
  }
LABEL_166:
  if ( (unsigned int)MNGetpItemIndex((__int64)v125, v7) == -1 || a5 || !v103 || !*(_QWORD *)(v7 + 16) )
    return 1LL;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) == 0 )
  {
    v104 = (_QWORD *)gpsi;
    goto LABEL_197;
  }
  v104 = (_QWORD *)gpsi;
  if ( *(_WORD *)(gpsi + 8678LL) == 96 )
  {
LABEL_197:
    v105 = *v104 + 5700LL;
    goto LABEL_198;
  }
  v105 = gpsi + 7188LL;
LABEL_198:
  v112 = (int *)(v105 + ((*(_DWORD *)v7 & 0x2000) != 0 ? 1472LL : 992LL));
  FixHDCBITSBmp();
  v113 = v112[3];
  if ( (*(_DWORD *)(v7 + 84) - v113 - 2) / 2 > 0 )
    v6 = (*(_DWORD *)(v7 + 84) - v113 - 2) / 2;
  BltColor(v102, v6, v112[2], v113, *v112, v112[1], 1);
  return 1LL;
}

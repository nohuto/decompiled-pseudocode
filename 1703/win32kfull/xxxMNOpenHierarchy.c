/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C0206528
 * Callers:
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C020451C (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0048FB4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C009DA38 (xxxEnableChildWindowDpiMessageX.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     xxxPlayEventSound @ 0x1C01044C0 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C0113B9C (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C0113C14 (MNRefreshUAHCachedSizes.c)
 *     MNMarkDelayedFreePopup @ 0x1C01EB044 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C020158C (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0202DD4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     LockPopupMenu @ 0x1C0203D60 (LockPopupMenu.c)
 *     MNIspItemValid @ 0x1C0203E8C (MNIspItemValid.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 *a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // r8
  __int64 v6; // rcx
  int v7; // ebx
  struct tagWND *Window; // rdi
  unsigned int v9; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v45; // eax
  char v46; // dl
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // r8d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // r8d
  unsigned int v69; // ecx
  __int64 v70; // rdx
  unsigned int v71; // r9d
  __int64 v72; // r8
  __int64 v73; // rdx
  __int16 WindowDpiLastNotify; // cx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // ebx
  _DWORD *v80; // r9
  unsigned int v81; // r15d
  int v82; // eax
  unsigned int v83; // r8d
  int v84; // ebx
  int v85; // edx
  int v86; // r12d
  int v87; // ecx
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // r8d
  int v91; // edx
  unsigned int v92; // r8d
  int v93; // r9d
  int v94; // edx
  unsigned int *v95; // rcx
  unsigned int v96; // eax
  int v97; // ecx
  __int64 v98; // rax
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 *v104; // rdx
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // r8
  int v110; // [rsp+20h] [rbp-F0h]
  __int64 v111; // [rsp+90h] [rbp-80h] BYREF
  __int64 v112; // [rsp+98h] [rbp-78h] BYREF
  __int64 *v113; // [rsp+A0h] [rbp-70h]
  __int64 v114; // [rsp+B0h] [rbp-60h] BYREF
  struct tagWND *v115; // [rsp+B8h] [rbp-58h]
  __int64 v116; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v117; // [rsp+D8h] [rbp-38h]
  __int64 v118; // [rsp+E8h] [rbp-28h]
  int v119[4]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v120; // [rsp+100h] [rbp-10h] BYREF
  __int64 v121; // [rsp+108h] [rbp-8h]
  _OWORD v122[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v123[3]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v124[3]; // [rsp+148h] [rbp+38h] BYREF
  _QWORD v125[4]; // [rsp+160h] [rbp+50h] BYREF
  __int128 v126; // [rsp+180h] [rbp+70h]
  __int128 v127; // [rsp+190h] [rbp+80h]
  __int128 v128; // [rsp+1A0h] [rbp+90h]
  __int128 v129; // [rsp+1B0h] [rbp+A0h]
  __int128 v130; // [rsp+1C0h] [rbp+B0h]
  __int128 v131; // [rsp+1D0h] [rbp+C0h]
  __int128 v132; // [rsp+1E0h] [rbp+D0h]
  __int128 v133; // [rsp+1F0h] [rbp+E0h]
  __int128 v134; // [rsp+200h] [rbp+F0h]
  __int64 v135; // [rsp+210h] [rbp+100h]
  int v136; // [rsp+260h] [rbp+150h]
  __int64 v137; // [rsp+270h] [rbp+160h] BYREF
  unsigned int v138; // [rsp+278h] [rbp+168h] BYREF

  v4 = 0LL;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v111, 0LL);
  v5 = (__int64 *)gptiCurrent;
  v6 = *a1;
  v7 = 0;
  v136 = 0;
  Window = 0LL;
  v118 = 0LL;
  v9 = *(_DWORD *)(v6 + 80);
  v121 = gptiCurrent;
  if ( v9 == -1 || v9 >= *(_DWORD *)(*(_QWORD *)(v6 + 40) + 68LL) )
    goto LABEL_2;
  if ( (*(_DWORD *)v6 & 0x20) == 0 )
    goto LABEL_7;
  if ( (*(_DWORD *)v6 & 0x4000) == 0 )
  {
LABEL_2:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v111);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
    return 0LL;
  }
  xxxMNCloseHierarchy(v6, a2);
  v5 = (__int64 *)gptiCurrent;
LABEL_7:
  if ( (*(_DWORD *)*a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(*a1 + 16), 65534LL, 0, 1, 0LL);
    v5 = (__int64 *)gptiCurrent;
    *(_DWORD *)*a1 &= ~0x2000u;
  }
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 80);
  v13 = *(_QWORD *)(*a1 + 40);
  if ( (_DWORD)v12 == -1 || (unsigned int)v12 >= *(_DWORD *)(v13 + 68) )
    v14 = 0LL;
  else
    v14 = *(_QWORD *)(v13 + 96) + 152 * v12;
  if ( !v14 || !*(_QWORD *)(v14 + 16) )
    goto LABEL_40;
  if ( (*(_DWORD *)v11 & 0x800) == 0 )
  {
    v15 = *(_QWORD *)(v11 + 8);
    if ( v15 )
    {
      v16 = *v5;
      v116 = *(_QWORD *)(*v5 + 368);
      *(_QWORD *)(v16 + 368) = &v116;
      v117 = v15;
      ++*(_DWORD *)(v15 + 8);
      v17 = **(_QWORD **)(v14 + 16);
      v18 = *(unsigned __int16 *)(*a1 + 80);
      v19 = *(_QWORD *)(*a1 + 8);
      v20 = (*(unsigned __int8 *)*a1 >> 2) & 1;
      v118 = v17;
      xxxSendMessage(v19, 279, v17, (v20 << 16) | v18);
      ThreadUnlock1(v22, v21);
      v5 = (__int64 *)gptiCurrent;
      v136 = 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
  {
    v4 = -1LL;
    goto LABEL_37;
  }
  v23 = *(_QWORD *)(*a1 + 40);
  v24 = *(unsigned int *)(*a1 + 80);
  if ( (unsigned int)v24 < *(_DWORD *)(v23 + 68) )
  {
    v25 = *(_QWORD *)(v23 + 96) + 152 * v24;
    if ( (*(_DWORD *)(v25 + 4) & 3) == 0 )
    {
      v26 = *(_QWORD *)(v25 + 16);
      if ( v26 )
      {
        if ( *(_DWORD *)(v26 + 68) )
        {
          v27 = *(_OWORD *)(v25 + 16);
          v126 = *(_OWORD *)v25;
          v28 = *(_QWORD *)(v25 + 144);
          v29 = *(_OWORD *)(v25 + 32);
          v127 = v27;
          v30 = *(_OWORD *)(v25 + 48);
          v128 = v29;
          v31 = *(_OWORD *)(v25 + 64);
          v129 = v30;
          v32 = *(_OWORD *)(v25 + 80);
          v130 = v31;
          v33 = *(_OWORD *)(v25 + 96);
          v131 = v32;
          v34 = *(_OWORD *)(v25 + 128);
          v132 = v33;
          v133 = *(_OWORD *)(v25 + 112);
          v134 = v34;
          v135 = v28;
          v35 = *v5;
          v36 = v127;
          v123[0] = *(_QWORD *)(*v5 + 368);
          *(_QWORD *)(v35 + 368) = v123;
          v123[1] = v36;
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          v37 = *(_QWORD *)(*a1 + 8);
          if ( v37 )
          {
            v38 = *v5;
            v116 = *(_QWORD *)(*v5 + 368);
            *(_QWORD *)(v38 + 368) = &v116;
            v117 = v37;
            ++*(_DWORD *)(v37 + 8);
            v39 = *a1;
            v40 = *(_QWORD *)(*a1 + 16);
            v41 = *(unsigned int *)(v40 + 368);
            LOBYTE(v41) = v41 & 0xF;
            if ( (_BYTE)v41 == 2 )
            {
              v41 = *(_QWORD *)(ValidateHmonitor(*(_QWORD *)(v40 + 360), v39, v5, 0LL) + 40);
              v7 = *(_DWORD *)(v41 + 28);
              LODWORD(Window) = *(_DWORD *)(v41 + 32);
            }
            if ( !PsGetCurrentProcessWin32Process(v41, v39)
              || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43, v42),
                  v45 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
                  v46 = 1,
                  !v45) )
            {
              v46 = 0;
            }
            Window = (struct tagWND *)xxxCreateWindowEx(
                                        385,
                                        (wchar_t *)0x8000,
                                        0x8000LL,
                                        0LL,
                                        -2139095040,
                                        v7,
                                        (int)Window,
                                        100,
                                        100,
                                        *(_QWORD *)(*a1 + 8),
                                        0LL,
                                        *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 72LL),
                                        v36,
                                        0,
                                        0xA00u,
                                        v46,
                                        0LL);
            ThreadUnlock1(v48, v47);
          }
          if ( !Window )
            goto LABEL_36;
          v51 = safe_cast_fnid_to_PMENUWND((__int64)Window);
          if ( !v51 )
          {
LABEL_35:
            xxxDestroyWindow(v50, (__int64)v49, (__int64)v52);
LABEL_36:
            ThreadUnlock1(v35, v37);
            v5 = (__int64 *)gptiCurrent;
            goto LABEL_37;
          }
          SetOrClrWF(0, Window, 0x408u, 1);
          v58 = *(_QWORD *)(v51 + 8);
          v59 = v111;
          if ( v111 != v58 )
          {
            if ( v111 )
            {
              v60 = v112;
              v49 = v113;
              if ( *(__int64 **)(v112 + 8) != &v112 || (v52 = &v112, (__int64 *)*v113 != &v112) )
                __fastfail(3u);
              *v113 = v112;
              *(_QWORD *)(v60 + 8) = v49;
            }
            v111 = v58;
            if ( !v58 )
            {
LABEL_52:
              v50 = (__int64)Window;
              goto LABEL_35;
            }
            v61 = (__int64 *)(v58 + 88);
            v62 = *(_QWORD *)(v58 + 88);
            if ( *(__int64 **)(v62 + 8) != v61 )
              __fastfail(3u);
            v112 = v62;
            v49 = &v112;
            v113 = v61;
            *(_QWORD *)(v62 + 8) = &v112;
            *v61 = (__int64)&v112;
            v59 = v111;
          }
          if ( v59 )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(&v114, *(_QWORD *)(*a1 + 64));
            SmartObjStackRef<tagPOPUPMENU>::Init(v122, v111);
            MNMarkDelayedFreePopup(v122, &v114);
            SetOrClrWF((*(_BYTE *)(*(_QWORD *)(*a1 + 16) + 66LL) & 0x40) != 0, Window, 0xA40u, 1);
            v114 = v111 + 8;
            v115 = *(struct tagWND **)(*a1 + 8);
            HMAssignmentLock(&v114);
            v63 = v111;
            SmartObjStackRef<tagPOPUPMENU>::Init(&v114, v111);
            LockPopupMenu(&v114, (struct tagMENU **)(v63 + 40), v36);
            v64 = *a1;
            v115 = Window;
            v114 = v64 + 24;
            HMAssignmentLock(&v114);
            *(_DWORD *)(*a1 + 84) = *(_DWORD *)(*a1 + 80);
            v114 = v111 + 32;
            v115 = *(struct tagWND **)(*a1 + 16);
            HMAssignmentLock(&v114);
            *(_QWORD *)(v111 + 64) = *(_QWORD *)(*a1 + 64);
            *(_DWORD *)v111 ^= (*(_DWORD *)v111 ^ *(_DWORD *)*a1) & 2;
            *(_DWORD *)v111 ^= (*(_DWORD *)v111 ^ *(_DWORD *)*a1) & 4;
            *(_DWORD *)v111 ^= (*(_DWORD *)v111 ^ *(_DWORD *)*a1) & 0x800;
            *(_DWORD *)v111 |= 0x200000u;
            *(_DWORD *)v111 ^= (*(_DWORD *)v111 ^ *(_DWORD *)*a1) & 0x400000;
            *(_DWORD *)v111 ^= (*(_DWORD *)v111 ^ *(_DWORD *)*a1) & 0x10;
            *(_DWORD *)v111 = *(_DWORD *)*a1 ^ (*(_DWORD *)v111 ^ *(_DWORD *)*a1) & 0x7FFFFFFF;
            v136 = 0;
            v65 = *(_QWORD *)(v111 + 40);
            if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
              *(_DWORD *)(v65 + 56) |= 4u;
            else
              *(_DWORD *)(v65 + 56) &= ~4u;
            *(_DWORD *)v111 &= ~0x1000u;
            if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(v111 + 40)) && (*(_DWORD *)(v66 + 56) & 1) != 0 )
              MNRefreshUAHCachedSizes(v66);
            v124[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v124;
            v124[1] = Window;
            ++*((_DWORD *)Window + 2);
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 376LL) + 768LL) & 0x80000) != 0
              || (v67 = *(_QWORD *)(*a1 + 16), (*(_DWORD *)(v67 + 368) & 0xF) == 2)
              && ((v68 = *(_DWORD *)(v67 + 304), (v68 & 0x40000000) != 0)
               || (*(_DWORD *)*a1 & 6) != 0 && (v68 & 0x20000000) != 0) )
            {
              v69 = 0;
              v70 = *(_QWORD *)(v111 + 40);
              v71 = *(_DWORD *)(v70 + 68);
              if ( v71 )
              {
                v72 = *(_QWORD *)(v70 + 96);
                while ( 1 )
                {
                  v73 = 152LL * v69;
                  if ( (*(_DWORD *)(v73 + v72) & 0x100) != 0 || *(_QWORD *)(v73 + v72 + 104) == -1LL )
                    break;
                  if ( ++v69 >= v71 )
                    goto LABEL_69;
                }
              }
              else
              {
LABEL_69:
                xxxEnableChildWindowDpiMessageX(Window);
              }
            }
            if ( (*((_DWORD *)Window + 76) & 0x10000000) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)Window);
            }
            else if ( (*((_DWORD *)Window + 92) & 0xF) == 0
                   && (v75 = *(_QWORD *)(*((_QWORD *)Window + 2) + 408LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v75 + 8) + 52LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(_WORD *)(gpsi + 8678LL);
            }
            v76 = *(_QWORD *)(v111 + 40);
            if ( WindowDpiLastNotify != *(_WORD *)(v76 + 84) )
            {
              *(_WORD *)(v76 + 84) = WindowDpiLastNotify;
              MNClearCachedPopupSizes(*(_QWORD *)(v111 + 40));
            }
            v79 = xxxSendMessage((int)Window, 482, 1, 0);
            if ( v79 && (v78 = *(_QWORD *)(*a1 + 40)) != 0 && MNIspItemValid(v78, v25) )
            {
              *v80 |= 0x20u;
              v81 = (unsigned __int16)v79 + 6;
              SmartObjStackRef<tagPOPUPMENU>::Init(&v114, *a1);
              v82 = xxxMNPositionHierarchy(
                      &v114,
                      (_DWORD *)v25,
                      v81,
                      (unsigned int)HIWORD(v79) + 6,
                      (int *)&v137,
                      (int *)&v138,
                      (__int64)&v120);
              *(_DWORD *)v111 ^= (*(_DWORD *)v111 ^ (v82 << 23)) & 0xF800000;
              if ( (*(_DWORD *)*a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
              {
                v83 = v138 - *((_DWORD *)Window + 33);
                v84 = v137;
                v85 = v137 - *((_DWORD *)Window + 32);
                v86 = DWORD2(v130);
                v119[0] = v137;
                v87 = v85 + *((_DWORD *)Window + 34);
                v122[0] = 0uLL;
                v88 = *a1;
                v119[2] = v87;
                v119[1] = v83 + *((_DWORD *)Window + 33);
                v119[3] = v83 + *((_DWORD *)Window + 35);
                v89 = *(_QWORD *)(v88 + 16);
                v90 = *(_DWORD *)(v89 + 132) + HIDWORD(v130);
                LODWORD(v114) = DWORD2(v130) + *(_DWORD *)(v89 + 128);
                HIDWORD(v114) = v90;
                HIDWORD(v115) = v90 + DWORD1(v131);
                LODWORD(v115) = v114 + v131;
                SmartObjStackRef<tagPOPUPMENU>::Init(v125, v88);
                MNGetPopupBoundsRect(v125, v120, v122, 0);
                if ( (unsigned int)IntersectRect(v119, v119, (int *)&v114) )
                {
                  v91 = *(_DWORD *)(*(_QWORD *)(*a1 + 16) + 128LL);
                  v84 = v91 + v86 + v131;
                  v92 = v81 + v84;
                  if ( (int)(v81 + v84) > SDWORD2(v122[0]) )
                    v92 = 0;
                  v93 = v86 - v81 + v91;
                  v94 = v93;
                  if ( v93 < SLODWORD(v122[0]) )
                    v94 = 0;
                  if ( (*(_DWORD *)(gpsi + 2040LL) || (*(_DWORD *)v25 & 0x2000) != 0) && v94 || !v92 )
                  {
                    v95 = (unsigned int *)v111;
                    v84 = v93;
                    v96 = *(_DWORD *)v111 & 0xF07FFFFF | 0x1000000;
                  }
                  else
                  {
                    v95 = (unsigned int *)v111;
                    v96 = *(_DWORD *)v111 & 0xF07FFFFF | 0x800000;
                  }
                  *v95 = v96;
                  if ( v84 <= SLODWORD(v122[0]) )
                  {
                    v84 = (int)v115;
                    *(_DWORD *)v111 = *(_DWORD *)v111 & 0xF07FFFFF | 0x1000000;
                  }
                }
              }
              else
              {
                v84 = v137;
              }
              v97 = *(_DWORD *)*a1;
              if ( (v97 & 1) != 0 )
              {
                if ( (v97 & 0x400) == 0 )
                  *(_DWORD *)v111 |= 0x8000000u;
                if ( (*(_DWORD *)*a1 & 0x10) != 0 || (*(_DWORD *)v111 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v111 |= 0x10u;
                *(_DWORD *)*a1 |= 0x400u;
              }
              else
              {
                *(_DWORD *)v111 |= 0x8000000u;
                if ( (*(_DWORD *)v111 & 0xF800000) == 0x1000000 )
                  *(_DWORD *)v111 |= 0x10u;
              }
              v98 = *a1;
              v115 = Window;
              v114 = *(_QWORD *)(v98 + 64) + 56LL;
              HMAssignmentLock(&v114);
              v101 = *(_QWORD *)(v111 + 8);
              if ( v101 )
              {
                v116 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v116;
                v117 = v101;
                ++*(_DWORD *)(v101 + 8);
                xxxInternalUpdateWindow(*(struct tagWND **)(v111 + 8), 1u);
                ThreadUnlock1(v103, v102);
              }
              if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
              {
                v137 = *(_QWORD *)Window;
                xxxUserModeCallback(100LL, (__int64)&v137, 8LL, v100, v110);
              }
              xxxPlayEventSound(5LL, v101, v99, v100);
              if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
                *((_DWORD *)Window + 92) = *(_DWORD *)(*(_QWORD *)(*a1 + 16) + 368LL);
              xxxSetWindowPos(
                Window,
                ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                (unsigned int)v84,
                v138,
                0,
                0,
                ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
              xxxInheritWindowMonitor(Window, *(__int64 **)(*a1 + 16), 1);
              if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
              {
                if ( gpqForeground )
                {
                  v104 = *(__int64 **)(gpqForeground + 80LL);
                  if ( v104 )
                  {
                    if ( gpqForeground == *(_QWORD *)(v121 + 384) )
                    {
                      v105 = 33;
                      if ( v104[2] == v121 )
                        v104 = (__int64 *)Window;
                      else
                        v105 = 49;
                      xxxWindowEvent(0x80000004, v104, 0, 1, v105);
                    }
                  }
                }
              }
              xxxWindowEvent(6u, (__int64 *)Window, -4, 0, 0);
              if ( *(_DWORD *)(a2 + 20) == 1 )
                xxxSendMessage((int)Window, 485, 0, 0);
              xxxInternalUpdateWindow(Window, 1u);
              v4 = (__int64)Window;
              ThreadUnlock1(v107, v106);
            }
            else
            {
              if ( ThreadUnlock1(v78, v77) )
                xxxDestroyWindow((__int64)Window, v108, v109);
              HMAssignmentUnlock(*a1 + 24);
            }
            goto LABEL_36;
          }
          goto LABEL_52;
        }
      }
    }
  }
LABEL_37:
  if ( v136 )
  {
    v53 = *(_QWORD *)(*a1 + 8);
    if ( v53 )
    {
      v54 = *v5;
      v55 = v118;
      v116 = *(_QWORD *)(v54 + 368);
      *(_QWORD *)(v54 + 368) = &v116;
      v117 = v53;
      ++*(_DWORD *)(v53 + 8);
      xxxSendMessage(*(_QWORD *)(*a1 + 8), 293, v55, (*(_BYTE *)*a1 & 4) << 11 << 16);
      ThreadUnlock1(v57, v56);
    }
  }
LABEL_40:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v111);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v4;
}

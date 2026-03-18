/*
 * XREFs of xxxMNOpenHierarchy @ 0x1C02082B0
 * Callers:
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0205FA4 (xxxMNButtonUp.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009F5E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00E6578 (xxxEnableChildWindowDpiMessageX.c)
 *     xxxPlayEventSound @ 0x1C010EDC0 (xxxPlayEventSound.c)
 *     MNClearCachedPopupSizes @ 0x1C011DC24 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1C011DCA0 (MNRefreshUAHCachedSizes.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F6F04 (MNMarkDelayedFreePopup.c)
 *     xxxUserModeCallback @ 0x1C0202EA4 (xxxUserModeCallback.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     MNIspItemValid @ 0x1C0205948 (MNIspItemValid.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // ebx
  int v43; // r14d
  __int64 v44; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v46; // eax
  char v47; // r8
  _DWORD *Window; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  volatile signed __int32 *v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // rax
  __int64 v65; // rax
  _DWORD *v66; // rdx
  int v67; // ecx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // ecx
  unsigned int v75; // r9d
  __int64 v76; // r8
  __int64 v77; // rdx
  __int16 WindowDpiLastNotify; // dx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // r12d
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // ebx
  int v86; // eax
  __int64 v87; // r9
  int v88; // edx
  __int64 v89; // r8
  int v90; // r12d
  int v91; // ecx
  __int64 *v92; // rax
  __int64 v93; // rax
  int v94; // ecx
  __int64 *v95; // rdx
  int v96; // edx
  int v97; // r8d
  unsigned int *v98; // rcx
  unsigned int v99; // eax
  __int64 *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  _DWORD *v112; // rdx
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  _QWORD v125[4]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v126; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-58h]
  int v128[2]; // [rsp+C8h] [rbp-48h] BYREF
  LONG v129; // [rsp+D0h] [rbp-40h]
  int v130; // [rsp+D4h] [rbp-3Ch]
  __int64 v131; // [rsp+D8h] [rbp-38h]
  int v132[4]; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v133; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v134; // [rsp+100h] [rbp-10h] BYREF
  __int64 v135; // [rsp+108h] [rbp-8h] BYREF
  __int64 v136; // [rsp+110h] [rbp+0h]
  __int128 v137; // [rsp+120h] [rbp+10h]
  __int128 v138; // [rsp+130h] [rbp+20h]
  __int128 v139; // [rsp+140h] [rbp+30h]
  __int128 v140; // [rsp+150h] [rbp+40h]
  __int64 *v141[2]; // [rsp+160h] [rbp+50h] BYREF
  __int64 *v142[2]; // [rsp+170h] [rbp+60h] BYREF
  __int128 v143; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v144[2]; // [rsp+190h] [rbp+80h] BYREF
  __int128 v145; // [rsp+1A0h] [rbp+90h] BYREF
  __int128 v146; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v147[2]; // [rsp+1C0h] [rbp+B0h] BYREF
  int **v148[2]; // [rsp+1D0h] [rbp+C0h] BYREF
  __int128 v149; // [rsp+1E0h] [rbp+D0h] BYREF
  _QWORD v150[3]; // [rsp+1F0h] [rbp+E0h] BYREF
  _QWORD v151[3]; // [rsp+208h] [rbp+F8h] BYREF
  __int128 v152; // [rsp+220h] [rbp+110h]
  __int128 v153; // [rsp+230h] [rbp+120h]
  __int128 v154; // [rsp+240h] [rbp+130h]
  __int128 v155; // [rsp+250h] [rbp+140h]
  __int128 v156; // [rsp+260h] [rbp+150h]
  __int128 v157; // [rsp+270h] [rbp+160h]
  __int128 v158; // [rsp+280h] [rbp+170h]
  __int128 v159; // [rsp+290h] [rbp+180h]
  __int128 v160; // [rsp+2A0h] [rbp+190h]
  __int64 v161; // [rsp+2B0h] [rbp+1A0h]
  LONG v162; // [rsp+300h] [rbp+1F0h] BYREF
  int v163; // [rsp+310h] [rbp+200h]
  unsigned int v164; // [rsp+318h] [rbp+208h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v125, 0LL, a3, a4);
  v163 = 0;
  v131 = 0LL;
  v11 = *a1;
  v136 = gptiCurrent;
  if ( *(_DWORD *)(*v11 + 80) == -1 || (v8 = **a1, *(_DWORD *)(v8 + 80) >= *(_DWORD *)(*(_QWORD *)(v8 + 40) + 68LL)) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v125, v8, v9, v10);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v12, v13, v14);
    return 0LL;
  }
  if ( (*(_DWORD *)**a1 & 0x20) == 0 )
  {
LABEL_7:
    if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
    {
      FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
      *(_DWORD *)**a1 &= ~0x2000u;
    }
    v16 = **a1;
    v17 = *(unsigned int *)(v16 + 80);
    if ( (_DWORD)v17 == -1 || (v8 = *(_QWORD *)(v16 + 40), (unsigned int)v17 >= *(_DWORD *)(v8 + 68)) )
      v18 = 0LL;
    else
      v18 = *(_QWORD *)(v8 + 96) + 152 * v17;
    if ( !v18 || !*(_QWORD *)(v18 + 16) )
      goto LABEL_120;
    if ( (*(_DWORD *)**a1 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
    {
      v19 = *(_QWORD *)(**a1 + 8);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
      v126 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v126;
      v127 = v19;
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v131 = **(_QWORD **)(v18 + 16);
      xxxSendMessage(*(_QWORD *)(**a1 + 8));
      ThreadUnlock1(v22, v21);
      v163 = 1;
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
    {
      v7 = -1LL;
      goto LABEL_117;
    }
    v8 = **a1;
    if ( *(_DWORD *)(v8 + 80) < *(_DWORD *)(*(_QWORD *)(v8 + 40) + 68LL) )
    {
      v8 = **a1;
      v23 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 96LL) + 152LL * *(unsigned int *)(v8 + 80);
      if ( (*(_DWORD *)(v23 + 4) & 3) == 0 )
      {
        v24 = *(_QWORD *)(v23 + 16);
        if ( v24 )
        {
          if ( *(_DWORD *)(v24 + 68) )
          {
            v25 = *(_OWORD *)(v23 + 16);
            v152 = *(_OWORD *)v23;
            v26 = *(_QWORD *)(v23 + 144);
            v27 = *(_OWORD *)(v23 + 32);
            v153 = v25;
            v28 = *(_OWORD *)(v23 + 48);
            v154 = v27;
            v29 = *(_OWORD *)(v23 + 64);
            v155 = v28;
            v30 = *(_OWORD *)(v23 + 80);
            v156 = v29;
            v31 = *(_OWORD *)(v23 + 96);
            v157 = v30;
            v32 = *(_OWORD *)(v23 + 128);
            v158 = v31;
            v159 = *(_OWORD *)(v23 + 112);
            v160 = v32;
            v161 = v26;
            v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v9, v10);
            v37 = v153;
            v150[0] = *(_QWORD *)(v33 + 392);
            *(_QWORD *)(v33 + 392) = v150;
            v150[1] = v37;
            if ( v37 )
              _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
            v38 = **a1;
            if ( *(_QWORD *)(v38 + 8) )
            {
              v39 = *(_QWORD *)(**a1 + 8);
              v40 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
              v126 = *(_QWORD *)(v40 + 392);
              *(_QWORD *)(v40 + 392) = &v126;
              v127 = v39;
              _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
              v41 = *(unsigned int *)(*(_QWORD *)(**a1 + 16) + 368LL);
              LOBYTE(v41) = v41 & 0xF;
              if ( (_BYTE)v41 == 2 )
              {
                v41 = *(_QWORD *)(ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 360LL)) + 40);
                v42 = *(_DWORD *)(v41 + 28);
                v43 = *(_DWORD *)(v41 + 32);
              }
              else
              {
                v42 = 0;
                v43 = 0;
              }
              if ( !PsGetCurrentProcessWin32Process(v41)
                || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v44),
                    v46 = IsImmersiveAppRestricted(CurrentProcessWin32Process),
                    v47 = 1,
                    !v46) )
              {
                v47 = 0;
              }
              Window = xxxCreateWindowEx(
                         385,
                         (wchar_t *)0x8000,
                         0x8000LL,
                         0LL,
                         0x80800000,
                         v42,
                         v43,
                         0x64u,
                         0x64u,
                         *(struct tagWND **)(**a1 + 8),
                         0LL,
                         *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL),
                         v37,
                         0,
                         0xA00u,
                         v47,
                         0LL);
              ThreadUnlock1(v50, v49);
            }
            else
            {
              Window = 0LL;
            }
            if ( !Window )
              goto LABEL_114;
            v53 = safe_cast_fnid_to_PMENUWND((__int64)Window);
            if ( v53 )
            {
              SetOrClrWF(0, Window, 0x408u, 1);
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v125, *(_QWORD *)(v53 + 8));
              if ( *(_QWORD *)v125[0] )
              {
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v141, *(_QWORD *)(**a1 + 64), v54, v55);
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v142, *(_QWORD *)v125[0], v56, v57);
                MNMarkDelayedFreePopup(v142, v141, v58, v59);
                SetOrClrWF((*(_BYTE *)(*(_QWORD *)(**a1 + 16) + 66LL) & 0x40) != 0, Window, 0xA40u, 1);
                v60 = *(_QWORD *)(**a1 + 8);
                *(_QWORD *)&v137 = *(_QWORD *)v125[0] + 8LL;
                *((_QWORD *)&v137 + 1) = v60;
                v143 = v137;
                HMAssignmentLock(&v143);
                v61 = *(_QWORD *)v125[0];
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v144, *(_QWORD *)v125[0], v62, v63);
                LockPopupMenu(v144, (struct tagMENU **)(v61 + 40), v37);
                v64 = *a1;
                *((_QWORD *)&v138 + 1) = Window;
                *(_QWORD *)&v138 = *v64 + 24;
                v145 = v138;
                HMAssignmentLock(&v145);
                *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                v65 = *(_QWORD *)(**a1 + 16);
                *(_QWORD *)&v139 = *(_QWORD *)v125[0] + 32LL;
                *((_QWORD *)&v139 + 1) = v65;
                v146 = v139;
                HMAssignmentLock(&v146);
                *(_QWORD *)(*(_QWORD *)v125[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                **(_DWORD **)v125[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v125[0]) & 2;
                **(_DWORD **)v125[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v125[0]) & 4;
                v66 = *(_DWORD **)v125[0];
                v67 = ((unsigned __int16)*(_DWORD *)**a1 ^ (unsigned __int16)**(_DWORD **)v125[0]) & 0x800;
                v163 = 0;
                *v66 ^= v67;
                **(_DWORD **)v125[0] |= 0x200000u;
                **(_DWORD **)v125[0] ^= (**(_DWORD **)v125[0] ^ *(_DWORD *)**a1) & 0x400000;
                **(_DWORD **)v125[0] ^= ((unsigned __int8)*(_DWORD *)**a1 ^ (unsigned __int8)**(_DWORD **)v125[0]) & 0x10;
                **(_DWORD **)v125[0] = *(_DWORD *)**a1 ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v125[0]) & 0x7FFFFFFF;
                v68 = *(_QWORD *)(*(_QWORD *)v125[0] + 40LL);
                if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                  *(_DWORD *)(v68 + 56) |= 4u;
                else
                  *(_DWORD *)(v68 + 56) &= ~4u;
                **(_DWORD **)v125[0] &= ~0x1000u;
                if ( (unsigned int)MNIsUAHMenu(*(_QWORD *)(*(_QWORD *)v125[0] + 40LL))
                  && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v125[0] + 40LL) + 56LL) & 1) != 0 )
                {
                  MNRefreshUAHCachedSizes(*(_QWORD *)(*(_QWORD *)v125[0] + 40LL));
                }
                v72 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v69, v70, v71);
                v151[0] = *(_QWORD *)(v72 + 392);
                *(_QWORD *)(v72 + 392) = v151;
                v151[1] = Window;
                _InterlockedIncrement(Window + 2);
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 400LL) + 776LL) & 0x80000) != 0
                  || (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 368LL) & 0xF) == 2
                  && ((*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 304LL) & 0x40000000) != 0
                   || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
                   && (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 304LL) & 0x20000000) != 0) )
                {
                  v73 = *(_QWORD *)(*(_QWORD *)v125[0] + 40LL);
                  v74 = 0;
                  v75 = *(_DWORD *)(v73 + 68);
                  if ( v75 )
                  {
                    v76 = *(_QWORD *)(v73 + 96);
                    while ( 1 )
                    {
                      v77 = 152LL * v74;
                      if ( (*(_DWORD *)(v77 + v76) & 0x100) != 0 || *(_QWORD *)(v77 + v76 + 104) == -1LL )
                        break;
                      if ( ++v74 >= v75 )
                        goto LABEL_57;
                    }
                  }
                  else
                  {
LABEL_57:
                    xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
                  }
                }
                if ( (Window[76] & 0x10000000) != 0 )
                {
                  WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)Window);
                }
                else if ( (Window[92] & 0xF) == 0
                       && (v79 = *(_QWORD *)(*((_QWORD *)Window + 2) + 432LL)) != 0
                       && (*(_DWORD *)(**(_QWORD **)(v79 + 8) + 52LL) & 1) != 0 )
                {
                  WindowDpiLastNotify = 96;
                }
                else
                {
                  WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 400LL) + 284LL);
                }
                if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*(_QWORD *)v125[0] + 40LL) + 84LL) )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v125[0] + 40LL) + 84LL) = WindowDpiLastNotify;
                  MNClearCachedPopupSizes(*(_QWORD *)(*(_QWORD *)v125[0] + 40LL));
                }
                v82 = xxxSendMessage((ULONG_PTR)Window);
                if ( v82 )
                {
                  v81 = **a1;
                  if ( *(_QWORD *)(v81 + 40) )
                  {
                    if ( MNIspItemValid(*(_QWORD *)(**a1 + 40), v23) )
                    {
                      v85 = (unsigned __int16)v82 + 6;
                      *(_DWORD *)**a1 |= 0x20u;
                      SmartObjStackRefBase<tagPOPUPMENU>::Init(v147, **a1, v83, v84);
                      v86 = xxxMNPositionHierarchy(
                              v147,
                              (_DWORD *)v23,
                              v85,
                              (unsigned int)HIWORD(v82) + 6,
                              &v162,
                              (LONG *)&v164,
                              (__int64)&v134);
                      **(_DWORD **)v125[0] ^= (**(_DWORD **)v125[0] ^ (v86 << 23)) & 0xF800000;
                      if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                      {
                        v88 = v162 - Window[32];
                        v89 = v164 - Window[33];
                        v90 = DWORD2(v156);
                        v132[0] = v162;
                        v91 = v88 + Window[34];
                        v133 = 0uLL;
                        v132[2] = v91;
                        v92 = *a1;
                        v132[1] = v89 + Window[33];
                        v132[3] = v89 + Window[35];
                        v128[0] = DWORD2(v156) + *(_DWORD *)(*(_QWORD *)(*v92 + 16) + 128LL);
                        v93 = *(_QWORD *)(**a1 + 16);
                        v129 = v128[0] + v157;
                        v94 = *(_DWORD *)(v93 + 132) + HIDWORD(v156) + DWORD1(v157);
                        v128[1] = *(_DWORD *)(v93 + 132) + HIDWORD(v156);
                        v95 = *a1;
                        v130 = v94;
                        SmartObjStackRefBase<tagPOPUPMENU>::Init(v148, *v95, v89, v87);
                        MNGetPopupBoundsRect(v148, v134, &v133, 0);
                        if ( (unsigned int)IntersectRect(v132, v132, v128) )
                        {
                          v96 = v85 + v90 + v157 + *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL);
                          if ( v96 > SDWORD2(v133) )
                            v96 = 0;
                          v97 = v90 + *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL) - v85;
                          if ( v97 < (int)v133 )
                            v97 = 0;
                          if ( (*(_DWORD *)(gpsi + 2040LL) || (*(_DWORD *)v23 & 0x2000) != 0) && v97 || !v96 )
                          {
                            v162 = v90 + *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL) - v85;
                            v98 = *(unsigned int **)v125[0];
                            v99 = **(_DWORD **)v125[0] & 0xF07FFFFF | 0x1000000;
                          }
                          else
                          {
                            v162 = v90 + v157 + *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 128LL);
                            v98 = *(unsigned int **)v125[0];
                            v99 = **(_DWORD **)v125[0] & 0xF07FFFFF | 0x800000;
                          }
                          *v98 = v99;
                          if ( v162 <= (int)v133 )
                          {
                            v162 = v129;
                            **(_DWORD **)v125[0] = **(_DWORD **)v125[0] & 0xF07FFFFF | 0x1000000;
                          }
                        }
                      }
                      if ( (*(_DWORD *)**a1 & 1) != 0 )
                      {
                        if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                          **(_DWORD **)v125[0] |= 0x8000000u;
                        if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v125[0] & 0xF800000) == 0x1000000 )
                          **(_DWORD **)v125[0] |= 0x10u;
                        *(_DWORD *)**a1 |= 0x400u;
                      }
                      else
                      {
                        **(_DWORD **)v125[0] |= 0x8000000u;
                        if ( (**(_DWORD **)v125[0] & 0xF800000) == 0x1000000 )
                          **(_DWORD **)v125[0] |= 0x10u;
                      }
                      v100 = *a1;
                      *((_QWORD *)&v140 + 1) = Window;
                      *(_QWORD *)&v140 = *(_QWORD *)(*v100 + 64) + 56LL;
                      v149 = v140;
                      HMAssignmentLock(&v149);
                      if ( *(_QWORD *)(*(_QWORD *)v125[0] + 8LL) )
                      {
                        v104 = *(_QWORD *)(*(_QWORD *)v125[0] + 8LL);
                        v105 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v101, v102, v103);
                        v126 = *(_QWORD *)(v105 + 392);
                        *(_QWORD *)(v105 + 392) = &v126;
                        v127 = v104;
                        _InterlockedIncrement((volatile signed __int32 *)(v104 + 8));
                        xxxInternalUpdateWindow(*(struct tagWND **)(*(_QWORD *)v125[0] + 8LL), 1u);
                        ThreadUnlock1(v107, v106);
                      }
                      if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                      {
                        v135 = *(_QWORD *)Window;
                        xxxUserModeCallback(100LL, (__int64)&v135, 8u, v103);
                      }
                      xxxPlayEventSound(5LL, v101);
                      if ( (W32GetCurrentThreadDpiAwarenessContext(v109, v108, v110, v111) & 0xF) == 2 )
                        Window[92] = *(_DWORD *)(*(_QWORD *)(**a1 + 16) + 368LL);
                      xxxSetWindowPos(
                        (struct tagWND *)Window,
                        ((*(_DWORD *)(a2 + 8) >> 8) & 1) - 1LL,
                        (unsigned int)v162,
                        v164,
                        0,
                        0,
                        (16 * !(*(_DWORD *)(a2 + 8) & 0x100)) | 0x241);
                      xxxInheritWindowMonitor((struct tagWND *)Window, *(struct tagWND **)(**a1 + 16), 1);
                      if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
                      {
                        if ( gpqForeground )
                        {
                          v112 = *(_DWORD **)(gpqForeground + 112LL);
                          if ( v112 )
                          {
                            if ( gpqForeground == *(_QWORD *)(v136 + 408) )
                            {
                              v113 = 33;
                              if ( *((_QWORD *)v112 + 2) == v136 )
                                v112 = Window;
                              else
                                v113 = 49;
                              xxxWindowEvent(0x80000004, v112, 0LL, 1LL, v113);
                            }
                          }
                        }
                      }
                      xxxWindowEvent(6u, Window, 4294967292LL, 0LL, 0);
                      if ( *(_DWORD *)(a2 + 20) == 1 )
                        xxxSendMessage((ULONG_PTR)Window);
                      xxxInternalUpdateWindow((struct tagWND *)Window, 1u);
                      v7 = (__int64)Window;
                      ThreadUnlock1(v115, v114);
                      goto LABEL_115;
                    }
                  }
                }
                if ( ThreadUnlock1(v81, v80) )
                  xxxDestroyWindow(Window, v116, v117);
                HMAssignmentUnlock(**a1 + 24);
LABEL_114:
                v7 = 0LL;
LABEL_115:
                ThreadUnlock1(v38, v34);
                goto LABEL_117;
              }
              v52 = Window;
            }
            xxxDestroyWindow(v52, v51, v54);
            goto LABEL_114;
          }
        }
      }
      v7 = 0LL;
    }
LABEL_117:
    if ( v163 )
    {
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v118 = *(_QWORD *)(**a1 + 8);
        v119 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
        v126 = *(_QWORD *)(v119 + 392);
        *(_QWORD *)(v119 + 392) = &v126;
        v127 = v118;
        _InterlockedIncrement((volatile signed __int32 *)(v118 + 8));
        xxxSendMessage(*(_QWORD *)(**a1 + 8));
        ThreadUnlock1(v121, v120);
      }
    }
LABEL_120:
    v6 = v7;
    goto LABEL_121;
  }
  if ( (*(_DWORD *)**a1 & 0x4000) != 0 )
  {
    xxxMNCloseHierarchy(**a1, a2, v9, v10);
    goto LABEL_7;
  }
LABEL_121:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v125, v8, v9, v10);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v122, v123, v124);
  return v6;
}

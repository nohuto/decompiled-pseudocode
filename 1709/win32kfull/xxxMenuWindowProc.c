/*
 * XREFs of xxxMenuWindowProc @ 0x1C0209E90
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01C23E0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     NextTopWindow @ 0x1C0065110 (NextTopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     xxxSendUAHMenuMessage @ 0x1C0080D50 (xxxSendUAHMenuMessage.c)
 *     GreSetWindowOrg @ 0x1C008178C (GreSetWindowOrg.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     FBadWindow @ 0x1C00CB910 (FBadWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     xxxPlayEventSound @ 0x1C010EDC0 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C0112EB4 (xxxValidateRect.c)
 *     zzzStartFade @ 0x1C013DD98 (zzzStartFade.c)
 *     zzzShowFade @ 0x1C013DE64 (zzzShowFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01C00AC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     _SetTimer @ 0x1C01C7294 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C01F6BDC (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C01F6C54 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C0202EA4 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C02046BC (-MNCheckScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0204850 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02049D4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0204A30 (-MNSetTimerToOpenHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0204B8C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C020580C (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C02058B0 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C0205900 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0205D10 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C0205E2C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0205FA4 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02070B4 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0209840 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C02169C0 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C0216AA0 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1C021A564 (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rcx
  void *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 i; // r14
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r13
  __int64 v26; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  struct tagWND *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rdx
  struct tagWND *v45; // r12
  unsigned int v46; // ebx
  struct tagWND *TopWindow; // rax
  __int64 v48; // r14
  unsigned int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  _DWORD *v53; // r12
  struct tagWND **v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  struct tagWND **v57; // rbx
  struct tagWND *v58; // r15
  struct tagWND *v59; // r14
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  struct tagWND *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned int v71; // r8d
  HDC FadeInternal; // rax
  unsigned int v73; // ecx
  int v74; // eax
  int v75; // eax
  __int64 v76; // rbx
  __int64 v77; // rax
  char v78; // dl
  void *v79; // rax
  bool v80; // zf
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 v86; // rdi
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rbx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // r13d
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r9
  HDC v96; // rdx
  __int64 v97; // r8
  struct tagWND *v98; // rcx
  __int64 DCEx; // rbx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdi
  int v103; // ebx
  __int64 v104; // rbx
  __int64 v105; // rax
  int v106; // ecx
  int v107; // ecx
  int v108; // ecx
  int v109; // ecx
  int v110; // ecx
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  unsigned int ValidItem; // eax
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rbx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  struct tagMENUWND *v127; // rax
  int v128; // ebx
  __int64 v129; // r14
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // r9
  __int64 v133; // rdx
  __int64 v134; // rcx
  int v135; // r14d
  __int64 v136; // r8
  __int64 v137; // r9
  int v138; // r12d
  struct tagMENUWND *v139; // rdi
  __int64 v140; // r8
  __int64 v141; // r9
  int BestPos; // eax
  int v143; // ecx
  __int64 v144; // rcx
  int v145; // ecx
  int v146; // ecx
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  struct _LARGE_STRING **v153; // r15
  __int64 v154; // rbx
  __int64 v155; // rax
  struct _LARGE_STRING *v156; // r9
  unsigned __int64 v157; // r8
  __int64 *v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // r9
  __int64 v174; // r8
  __int64 v175; // r9
  unsigned int v177; // r13d
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 DPIMetrics; // rax
  int v181; // [rsp+58h] [rbp-B0h]
  _QWORD v182[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v183; // [rsp+70h] [rbp-98h]
  struct tagMENUWND *v184; // [rsp+78h] [rbp-90h]
  unsigned __int64 v185; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v186; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v187; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v188; // [rsp+90h] [rbp-78h] BYREF
  __int64 v189; // [rsp+98h] [rbp-70h]
  __int64 v190; // [rsp+A8h] [rbp-60h] BYREF
  struct tagMENUSTATE *v191; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v192; // [rsp+B8h] [rbp-50h]
  __int64 *v193[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v194; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v195[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v196[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v197[2]; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v198[2]; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v199[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v200; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v201[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v202[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v203[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v204[2]; // [rsp+178h] [rbp+70h] BYREF
  int **v205[2]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v206[2]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v207; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v208[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v209[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v210[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 *v211[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v212[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v213[2]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v214[2]; // [rsp+218h] [rbp+110h] BYREF
  __int64 v215; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v216[2]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v217[3]; // [rsp+248h] [rbp+140h] BYREF
  _QWORD v218[3]; // [rsp+260h] [rbp+158h] BYREF
  _QWORD v219[3]; // [rsp+278h] [rbp+170h] BYREF
  _QWORD v220[3]; // [rsp+290h] [rbp+188h] BYREF

  LODWORD(v183) = a2;
  v6 = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v182, 0LL, (__int64)a3, a4);
  v8 = 0LL;
  v181 = 0;
  if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    goto LABEL_18;
  v9 = *((_WORD *)a1 + 41);
  if ( v9 != 668 )
  {
    if ( v9 )
    {
LABEL_18:
      v19 = v8;
      goto LABEL_304;
    }
    if ( a2 != 129 )
    {
      v10 = xxxDefWindowProc(a1, a2, (__int64)a3, v6);
LABEL_17:
      v8 = v10;
      goto LABEL_18;
    }
    v11 = *((_DWORD *)a1 + 63);
    v12 = *(unsigned __int16 *)(gpsi + 332LL);
    if ( v11 + 400 >= v12 )
    {
      v18 = (void *)*((_QWORD *)a1 + 49);
      if ( v18 )
        memset(v18, 0, *((unsigned int *)a1 + 63));
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + v11 + 400 < v12 )
        goto LABEL_18;
      v13 = v12 - 400;
      v16 = Win32AllocPoolWithQuotaZInit(v12 - 400, 1937208149LL);
      if ( !v16 )
        goto LABEL_18;
      v17 = *((_QWORD *)a1 + 49);
      if ( v17 )
        Win32FreePool(v17, v14, v15);
      *((_QWORD *)a1 + 49) = v16;
      *((_DWORD *)a1 + 63) = v13;
    }
    *((_WORD *)a1 + 41) = 668;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v10 = xxxSendTransformableMessageTimeout(
            (__int64 *)a1,
            a2,
            (unsigned __int64)a3,
            (struct _LARGE_STRING *)v6,
            0,
            0,
            0LL,
            1u,
            1);
    goto LABEL_17;
  }
  v20 = *((_QWORD *)a1 + 49);
  v184 = (struct tagMENUWND *)v20;
  v21 = *(_QWORD *)(v20 + 8);
  *(_QWORD *)v20 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v182, v21);
  if ( *(_QWORD *)v182[0] )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 16LL) + 584LL); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v20 + 8) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v191,
    (struct tagMENUSTATE *)i);
  if ( *(_QWORD *)v182[0] )
    v25 = *(_QWORD *)(*(_QWORD *)v182[0] + 40LL);
  else
    v25 = 0LL;
  v19 = 1LL;
  v26 = 256LL;
  if ( !i || !v25 )
  {
    v32 = (unsigned int)v183;
    switch ( (_DWORD)v183 )
    {
      case 0x1E0:
        if ( !*(_QWORD *)v182[0] )
          goto LABEL_320;
        break;
      case 0x81:
        break;
      case 0x70:
        v28 = (__int64)v184;
LABEL_50:
        v29 = 0LL;
        goto LABEL_51;
      default:
        goto LABEL_301;
    }
    v28 = (__int64)v184;
    if ( *(char *)(*(_QWORD *)v184 + 59LL) < 0 )
      goto LABEL_320;
    goto LABEL_50;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, 256LL, v24);
  v217[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v217;
  v217[1] = v25;
  _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
  v29 = 1LL;
  v181 = 1;
  if ( !*(_QWORD *)(*(_QWORD *)v182[0] + 64LL)
    || (v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v184 + 16LL) + 584LL),
        v30 = 1,
        *(_QWORD *)v28 == *(_QWORD *)(*(_QWORD *)v182[0] + 64LL)) )
  {
    v30 = 0;
  }
  v31 = *(_DWORD *)(i + 8);
  v26 = 256LL;
  if ( (v31 & 0x100) == 0 || (v31 & 0x200) != 0 )
  {
    v32 = (unsigned int)v183;
LABEL_39:
    v28 = (__int64)v184;
    goto LABEL_51;
  }
  if ( v30 )
  {
    v32 = (unsigned int)v183;
    if ( (unsigned int)(v183 - 512) <= 0xE || (unsigned int)(v183 - 256) <= 9 || (unsigned int)(v183 - 160) <= 0xD )
      goto LABEL_300;
    goto LABEL_39;
  }
  if ( (unsigned int)xxxCallHandleMenuMessages(i, (__int64)a1, v183, (__int64)a3, v6) )
  {
LABEL_319:
    ThreadUnlock1(v32, v28);
    goto LABEL_320;
  }
  v32 = (unsigned int)v183;
  v29 = 1LL;
  v28 = (__int64)v184;
  v26 = 256LL;
LABEL_51:
  if ( (unsigned int)v32 > 0x1E1 )
  {
    if ( (unsigned int)v32 > 0x2A3 )
    {
      v32 = (unsigned int)(v32 - 791);
      if ( (_DWORD)v32 )
      {
        if ( (_DWORD)v32 != 1 )
          goto LABEL_299;
        xxxMenuDraw(a3, v25, (__int64)a1);
      }
      else
      {
        if ( (v6 & 2) == 0 || (*(_DWORD *)(v25 + 144) & 3) == 0 )
        {
          v19 = xxxDefWindowProc(a1, 791LL, (__int64)a3, v6);
          if ( !(unsigned int)MNIsUAHMenu(v25)
            || !*(_QWORD *)(*(_QWORD *)v182[0] + 16LL)
            || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v182[0] + 16LL), 149LL, v25, (__int64)a3) )
          {
            v36 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
            if ( (_DWORD)v36 == -2147352576 )
              MNDrawEdge(v25, a3, (char *)a1 + 128, 0LL);
          }
          goto LABEL_326;
        }
        if ( a3 && (*((_BYTE *)a1 + 66) & 0x40) != 0 && (GreGetLayout(a3) & 1) == 0 )
        {
          v177 = GreSetLayout(a3, (unsigned int)(*((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32)), 1LL);
        }
        else
        {
          LODWORD(v19) = 0;
          v177 = 0;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::Init(&v215, *(_QWORD *)v182[0], v26, v29);
        xxxMNDrawFullNC(a1);
        if ( (_DWORD)v19 )
          GreSetLayout(a3, (unsigned int)(*((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32)), v177);
        GreGetDCPoint(a3, 8LL, &v185);
        DPIMetrics = GetDPIMetrics(v179, v178);
        GreSetWindowOrg(a3, v185 - 3, HIDWORD(v185) - *(_DWORD *)(DPIMetrics + 28) - 3);
        xxxDefWindowProc(a1, 791LL, (__int64)a3, v6 & 0xFFFFFFFFFFFFFFFDuLL);
        GreSetWindowOrg(a3, v185, SHIDWORD(v185));
      }
      goto LABEL_316;
    }
    if ( (_DWORD)v32 == 675 )
    {
      *(_DWORD *)(i + 8) ^= ((unsigned __int16)*(_DWORD *)(i + 8) ^ (unsigned __int16)~(unsigned __int16)(*(_DWORD *)(i + 8) >> 1)) & 0x4000;
      **(_DWORD **)v182[0] &= ~0x100000u;
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
      v28 = *(_QWORD *)v182[0];
      v32 = *(_QWORD *)(*(_QWORD *)i + 56LL);
      if ( *(_QWORD *)(*(_QWORD *)v182[0] + 16LL) == v32 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v214, *(_QWORD *)v182[0], v174, v175);
        xxxMNSelectItem(v214, i, 0xFFFFFFFFLL);
      }
      goto LABEL_316;
    }
    if ( (unsigned int)v32 <= 0x1ED )
    {
      if ( (_DWORD)v32 == 493 )
      {
        if ( (unsigned __int64)a3 < *(unsigned int *)(v25 + 68) || (unsigned __int64)a3 >= 0xFFFFFFFC )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v208, *(_QWORD *)v182[0], 256LL, v29);
          xxxMNButtonDown(v208, i, (unsigned int)a3, 1LL);
        }
        goto LABEL_316;
      }
      v106 = v32 - 482;
      if ( !v106 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v182[0] + 8LL) )
        {
          v123 = *(_QWORD *)(*(_QWORD *)v182[0] + 8LL);
          v124 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, 256LL, v29);
          v188 = *(_QWORD *)(v124 + 392);
          *(_QWORD *)(v124 + 392) = &v188;
          v189 = v123;
          _InterlockedAdd((volatile signed __int32 *)(v123 + 8), 1u);
          xxxMNCompute((struct tagWND **)v25, *(struct tagWND **)(*(_QWORD *)v182[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
          ThreadUnlock1(v126, v125);
        }
        v127 = _MonitorFromWindowInternal(a1, 1, 0);
        v128 = *(_DWORD *)(v25 + 72);
        v129 = (__int64)v127;
        v184 = v127;
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v204, *(_QWORD *)v182[0], v130, v131);
        v135 = MNCheckScroll(v204, v25, v129, v132);
        if ( a3 )
        {
          v136 = 0LL;
          v137 = 0LL;
          v138 = (8 * (_BYTE)a3) & 0x20 | 0x214;
          if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v205, *(_QWORD *)v182[0], 0LL, 0LL);
            v139 = v184;
            MNGetPopupBoundsRect(v205, (__int64)v184, &v207, 1);
            v184 = (struct tagMENUWND *)*((_QWORD *)a1 + 16);
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v206, *(_QWORD *)v182[0], v140, v141);
            BestPos = FindBestPos(
                        *((_DWORD *)a1 + 32),
                        *((_DWORD *)a1 + 33),
                        v128,
                        v135,
                        (__int64)&v207,
                        0,
                        (__int64)v206,
                        (__int64)v139,
                        (__int64)v184);
            v136 = (unsigned int)(__int16)BestPos;
            v137 = (unsigned int)SHIWORD(BestPos);
          }
          else
          {
            v138 |= 2u;
          }
          xxxSetWindowPos(a1, 0LL, v136, v137, v128 + 6, v135 + 6, v138);
        }
        if ( v181 )
          ThreadUnlock1(v134, v133);
        v19 = (unsigned __int16)v128 | ((unsigned __int16)v135 << 16);
        goto LABEL_302;
      }
      v107 = v106 - 1;
      if ( v107 )
      {
        v108 = v107 - 1;
        if ( !v108 )
        {
LABEL_180:
          xxxMNCloseHierarchy(*(_QWORD *)v182[0], i, 256LL, v29);
          goto LABEL_316;
        }
        v32 = (unsigned int)(v108 - 1);
        if ( !(_DWORD)v32 )
        {
          if ( (unsigned __int64)a3 < *(unsigned int *)(v25 + 68) || (unsigned __int64)a3 >= 0xFFFFFFFC )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v202, *(_QWORD *)v182[0], 256LL, v29);
            v118 = xxxMNSelectItem(v202, i, (unsigned int)a3);
            if ( v118 )
            {
              if ( v181 )
                ThreadUnlock1(v32, v28);
              v19 = *(unsigned __int16 *)(v118 + 4) | (unsigned __int64)(*(_QWORD *)(v118 + 16) != 0LL ? 0x10 : 0);
              goto LABEL_302;
            }
          }
          goto LABEL_316;
        }
        v109 = v32 - 1;
        if ( !v109 )
        {
          xxxMNCancel(i, (unsigned int)a3, (unsigned __int16)v6, 0LL);
          goto LABEL_316;
        }
        v110 = v109 - 1;
        if ( !v110 )
        {
          ValidItem = MNFindNextValidItem(v25, 0xFFFFFFFFLL, 1LL, 1LL);
          v115 = (int)ValidItem;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)a1, 485LL, ValidItem, 0LL, 0, 0, 0LL, 1u, 1);
          if ( v181 )
            ThreadUnlock1(v117, v116);
          v19 = v115;
          goto LABEL_302;
        }
        v32 = (unsigned int)(v110 - 4);
        if ( (_DWORD)v32 )
        {
          if ( (_DWORD)v32 != 1 )
            goto LABEL_299;
          xxxPlayEventSound(5LL, v28);
          xxxShowWindowEx(a1, (unsigned __int16)(*(_WORD *)(i + 8) & 0x100 | 0x400) >> 8, 0);
          goto LABEL_316;
        }
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v201, *(_QWORD *)v182[0], 256LL, v29);
        v19 = xxxMNFindWindowFromPoint(v201, a3, v6, v111);
        if ( v181 )
          ThreadUnlock1(v113, v112);
        if ( !IsMFMWFPWindow(v19) )
          goto LABEL_302;
      }
      else
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v203, *(_QWORD *)v182[0], 256LL, v29);
        v19 = xxxMNOpenHierarchy(v203, i, v119, v120);
        if ( v181 )
          ThreadUnlock1(v122, v121);
        if ( v19 == -1 )
          goto LABEL_320;
      }
      if ( v19 )
      {
        v19 = *(_QWORD *)v19;
        goto LABEL_302;
      }
      goto LABEL_320;
    }
    v143 = v32 - 494;
    if ( !v143 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v213, *(_QWORD *)v182[0], 256LL, v29);
      xxxMNMouseMove(v213, i, v6, v173);
      goto LABEL_316;
    }
    v32 = (unsigned int)(v143 - 1);
    if ( !(_DWORD)v32 )
    {
      if ( (unsigned __int64)a3 < *(unsigned int *)(v25 + 68) || (unsigned __int64)a3 >= 0xFFFFFFFC )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v212, *(_QWORD *)v182[0], 256LL, v29);
        xxxMNButtonUp(v212, i, (unsigned int)a3, v6);
      }
      goto LABEL_316;
    }
    v144 = (unsigned int)(v32 - 1);
    if ( !(_DWORD)v144 )
    {
      if ( (_DWORD)v29 )
        ThreadUnlock1(v144, v28);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v211, *(_QWORD *)v182[0], v26, v29);
      v19 = (unsigned __int16)MNSetTimerToOpenHierarchy(v211, v170, v171, v172);
      goto LABEL_302;
    }
    v145 = v144 - 1;
    if ( !v145 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v210, *(_QWORD *)v182[0], 256LL, v29);
      xxxMNDoubleClick(i, v210, (int)a3);
      goto LABEL_316;
    }
    v146 = v145 - 1;
    if ( !v146 )
    {
      xxxActivateThisWindow(a1, 0, 0, 0);
      goto LABEL_316;
    }
    v32 = (unsigned int)(v146 - 1);
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 != 1 )
        goto LABEL_299;
      if ( (_DWORD)v29 )
        ThreadUnlock1(v32, v28);
      v92 = 0;
      if ( (*(_DWORD *)(i + 8) & 0x80u) == 0 )
        goto LABEL_320;
      if ( !*(_QWORD *)(*(_QWORD *)v182[0] + 8LL) )
        goto LABEL_320;
      if ( !IsMFMWFPWindow(*(_QWORD *)(i + 64)) )
        goto LABEL_320;
      v148 = safe_cast_fnid_to_PMENUWND(v147);
      if ( !v148 )
        goto LABEL_320;
      v152 = *(_QWORD *)(v148 + 8);
      if ( !v152 )
        goto LABEL_320;
      v153 = *(struct _LARGE_STRING ***)(v152 + 40);
      if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x100000u;
      ++*(_DWORD *)(i + 40);
      v154 = *(_QWORD *)(*(_QWORD *)v182[0] + 8LL);
      v155 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v149, v150, v151);
      v188 = *(_QWORD *)(v155 + 392);
      *(_QWORD *)(v155 + 392) = &v188;
      v189 = v154;
      _InterlockedAdd((volatile signed __int32 *)(v154 + 8), 1u);
      *(_DWORD *)(i + 8) |= 0x8000u;
      v156 = 0LL;
      if ( v153 )
        v156 = *v153;
      v157 = *(unsigned int *)(i + 72);
      v158 = *(__int64 **)(*(_QWORD *)v182[0] + 8LL);
      _InterlockedAdd(&glSendMessage, 1u);
      v159 = xxxSendTransformableMessageTimeout(v158, 291LL, v157, v156, 0, 0, 0LL, 1u, 1);
      v163 = *(unsigned int *)(i + 8);
      LODWORD(v163) = v163 & 0xFFFF7FFF;
      *(_DWORD *)(i + 8) = v163;
      if ( v159 != 1 )
      {
        *(_DWORD *)(i + 8) = v163 | 0x2000;
        MNCheckButtonDownState(i, v160, v161, v162);
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v209, *(_QWORD *)v182[0], v166, v167);
          xxxMNSetCapture(v209, i, v168, v169);
        }
        ThreadUnlock1(v165, v164);
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
        goto LABEL_320;
      }
      ThreadUnlock1(v163, v160);
      if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
        goto LABEL_320;
      goto LABEL_186;
    }
LABEL_185:
    v92 = v181;
LABEL_186:
    xxxEndMenuLoop(i, *(_QWORD *)i, v26, v29);
    if ( (*(_DWORD *)(i + 8) & 0x100) != 0 )
      xxxMNEndMenuState(i, v28, v93, v94);
    goto LABEL_317;
  }
  if ( (_DWORD)v32 == 481 )
  {
    if ( (_DWORD)v29 )
      v25 = ThreadUnlock1(v32, v28);
    if ( v25 )
    {
      v19 = *(_QWORD *)v25;
      goto LABEL_302;
    }
    goto LABEL_320;
  }
  if ( (unsigned int)v32 <= 0x81 )
  {
    if ( (_DWORD)v32 == 129 )
    {
      if ( *(_QWORD *)(v28 + 8) || *(_QWORD *)(v28 + 16) )
      {
        v80 = (_DWORD)v29 == 0;
        goto LABEL_318;
      }
      v79 = MNAllocPopup(1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v182, (__int64)v79);
      if ( *(_QWORD *)v182[0] )
      {
        *((_QWORD *)v184 + 1) = *(_QWORD *)v182[0];
        **(_DWORD **)v182[0] |= 0x40000000u;
        *(_DWORD *)(*(_QWORD *)v182[0] + 80LL) = -1;
        *((_QWORD *)&v192 + 1) = a1;
        *(_QWORD *)&v192 = *(_QWORD *)v182[0] + 16LL;
        v194 = v192;
        HMAssignmentLock(&v194);
LABEL_326:
        if ( v181 )
          ThreadUnlock1(v36, v35);
        goto LABEL_302;
      }
      goto LABEL_316;
    }
    if ( (unsigned int)v32 <= 0x18 )
    {
      if ( (_DWORD)v32 == 24 )
      {
        if ( !a3 )
          xxxMNCancel(i, 0, 0LL, 0LL);
        goto LABEL_299;
      }
      v33 = v32 - 3;
      if ( v33 && (v34 = v33 - 2) != 0 )
      {
        v32 = (unsigned int)(v34 - 1);
        if ( (_DWORD)v32 )
        {
          v32 = (unsigned int)(v32 - 9);
          if ( (_DWORD)v32 )
          {
            if ( (_DWORD)v32 == 5 && *(_QWORD *)(v25 + 128) )
            {
              MNEraseBackground(
                a3,
                *((_DWORD *)a1 + 38) - *((_DWORD *)a1 + 36),
                *((_DWORD *)a1 + 39) - *((_DWORD *)a1 + 37));
              goto LABEL_326;
            }
LABEL_299:
            if ( v181 )
LABEL_300:
              ThreadUnlock1(v32, v28);
LABEL_301:
            v19 = xxxDefWindowProc(a1, (unsigned int)v183, (__int64)a3, v6);
            goto LABEL_302;
          }
          xxxHandleMenuPainting(a1, (struct tagMENU *)v25, 256LL, v29);
          goto LABEL_316;
        }
        v37 = *(_DWORD *)(i + 8);
        if ( (v37 & 0x100) != 0 )
        {
          if ( (_WORD)a3 )
            goto LABEL_299;
          if ( (v37 & 0x200) != 0 )
            goto LABEL_299;
          if ( (**(_DWORD **)i & 0x80000) != 0 )
            goto LABEL_299;
          LOBYTE(v28) = 1;
          v6 = HMValidateHandleNoSecure(v6, v28, 256LL, v29);
          v38 = safe_cast_fnid_to_PMENUWND(v6);
          if ( !v32 )
            goto LABEL_299;
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8);
            if ( v39 )
            {
              if ( *(_QWORD *)i == *(_QWORD *)(v39 + 64) )
                goto LABEL_299;
            }
          }
          v40 = *(_DWORD *)(i + 8);
          if ( (v40 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 408LL) )
          {
            *(_DWORD *)(i + 8) = v40 & 0xFFFEFFFF;
            PostMessage((__int64)a1, 498LL, 0LL, 0LL);
            goto LABEL_299;
          }
LABEL_77:
          v41 = a1;
LABEL_78:
          PostMessage((__int64)v41, 499LL, 0LL, 0LL);
          goto LABEL_316;
        }
        if ( !(_WORD)a3 )
          goto LABEL_316;
        if ( *(_WORD *)(gptiCurrent + 608LL) >= 0x500u )
          goto LABEL_77;
        if ( !gpqForegroundPrev
          || (v42 = *(_QWORD *)(gpqForegroundPrev + 128LL), (unsigned int)FBadWindow(v42))
          || (*(_WORD *)(v42 + 82) & 0x3FFF) == 0x29C )
        {
          v45 = a1;
          v46 = 0;
          do
          {
            TopWindow = NextTopWindow(gptiCurrent, (__int64)a1, 0LL, 0);
            a1 = TopWindow;
            if ( !TopWindow )
              break;
            v48 = *((_QWORD *)TopWindow + 32);
            if ( !(unsigned int)FBadWindow(v48) && (*(_WORD *)(v48 + 82) & 0x3FFF) != 0x29C )
            {
              a1 = (struct tagWND *)v48;
              goto LABEL_85;
            }
            v49 = v46++;
          }
          while ( v49 < 0xFF );
          if ( !v46 )
            goto LABEL_85;
          v41 = v45;
          goto LABEL_78;
        }
        a1 = (struct tagWND *)v42;
LABEL_85:
        if ( !a1 )
          goto LABEL_316;
        v43 = gptiCurrent;
        v218[0] = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = v218;
        v218[1] = a1;
        _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
        v44 = *(_QWORD *)(gptiCurrent + 408LL);
        if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) == v44 )
        {
          xxxActivateThisWindow(a1, 0, 2, 0);
        }
        else if ( gpqForeground == v44 )
        {
          xxxSetForegroundWindow(a1, 0);
        }
      }
      else
      {
        v32 = *(_QWORD *)v182[0];
        if ( !*(_QWORD *)(*(_QWORD *)v182[0] + 24LL) )
          goto LABEL_316;
        v50 = *(_QWORD *)v182[0];
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v216, *(_QWORD *)v182[0], 256LL, v29);
        v53 = (_DWORD *)MNGetpItem(v216, *(unsigned int *)(v50 + 84), v51, v52);
        v54 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v182[0] + 24LL));
        v57 = v54;
        if ( !v53 )
          goto LABEL_316;
        if ( !v54 )
          goto LABEL_316;
        v58 = v54[1];
        if ( !v58 )
          goto LABEL_316;
        v59 = *v54;
        if ( !*v54 )
          goto LABEL_316;
        v60 = *((_QWORD *)v58 + 5);
        v187 = 0;
        v186 = 0;
        v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v55, v56);
        v219[0] = *(_QWORD *)(v61 + 392);
        *(_QWORD *)(v61 + 392) = v219;
        v219[1] = v59;
        _InterlockedAdd((volatile signed __int32 *)v59 + 2, 1u);
        v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64);
        v220[0] = *(_QWORD *)(v65 + 392);
        *(_QWORD *)(v65 + 392) = v220;
        v220[1] = v60;
        _InterlockedAdd((volatile signed __int32 *)(v60 + 8), 1u);
        if ( !*(_DWORD *)(v60 + 72) )
        {
          v66 = *v57;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)v66, 482LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
        }
        if ( *(_QWORD *)(*(_QWORD *)v182[0] + 40LL)
          && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v182[0] + 40LL), (__int64)v53) != -1 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v193, *(_QWORD *)v182[0], v67, v68);
          xxxMNPositionHierarchy(
            v193,
            v53,
            *(_DWORD *)(v60 + 72) + 6,
            *(_DWORD *)(v60 + 76) + 6,
            (LONG *)&v187,
            (LONG *)&v186,
            0LL);
        }
        xxxSetWindowPos(*v57, 0LL, v187, v186, 0, 0, 1029);
        ThreadUnlock1(v70, v69);
      }
LABEL_153:
      ThreadUnlock1(v43, v44);
      goto LABEL_316;
    }
    v32 = (unsigned int)(v32 - 28);
    if ( !(_DWORD)v32 )
    {
      if ( (*(_DWORD *)(i + 8) & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
        goto LABEL_316;
      if ( a3 )
      {
        PostMessage((__int64)a1, 498LL, 0LL, 0LL);
        v28 = *(_QWORD *)(gptiCurrent + 408LL);
        v26 = *(_DWORD *)(i + 8) & 0xFFFEFFFF | ((gpqForeground != v28) << 16);
        *(_DWORD *)(i + 8) = v26;
      }
      v32 = *(_QWORD *)v182[0];
      if ( !*(_QWORD *)(*(_QWORD *)v182[0] + 8LL) )
        goto LABEL_316;
      v76 = *(_QWORD *)(*(_QWORD *)v182[0] + 8LL);
      v77 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v26, v29);
      v188 = *(_QWORD *)(v77 + 392);
      *(_QWORD *)(v77 + 392) = &v188;
      v189 = v76;
      _InterlockedAdd((volatile signed __int32 *)(v76 + 8), 1u);
      if ( !a3 || (v78 = 1, (*(_DWORD *)(i + 8) & 0x10000) != 0) )
        v78 = 2;
      xxxDWP_DoNCActivate(*(_QWORD *)(*(_QWORD *)v182[0] + 8LL), v78, 1LL);
      goto LABEL_153;
    }
    v32 = (unsigned int)(v32 - 42);
    if ( (_DWORD)v32 )
    {
      v32 = (unsigned int)(v32 - 1);
      if ( (_DWORD)v32 )
      {
        if ( (_DWORD)v32 != 41 )
          goto LABEL_299;
        if ( i && (*(_DWORD *)(i + 8) & 0x400) != 0 )
        {
          v190 = *(_QWORD *)a1;
          xxxUserModeCallback(101LL, (__int64)&v190, 8u, v29);
        }
        xxxMNDestroyHandler(v184, v28, v26, v29);
        goto LABEL_316;
      }
      if ( (*(_DWORD *)(v6 + 32) & 0x40) == 0 )
        goto LABEL_299;
      v32 = *(_QWORD *)v182[0];
      if ( (**(_DWORD **)v182[0] & 0x8000000) == 0 )
        goto LABEL_299;
      if ( (gfade[12] & 0x10) != 0 )
      {
        zzzStartFade();
      }
      else
      {
        *(_DWORD *)(i + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
      }
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 32) & 0x40) == 0 )
        goto LABEL_299;
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
        && (**(_DWORD **)v182[0] & 0x8000000) != 0
        && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
        && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 3
        && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
        && (GetAppCompatFlags2(0x400u) & 1) == 0 )
      {
        *(_DWORD *)(i + 116) = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
        v71 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
        *(_DWORD *)(i + 120) = v71;
        if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
        {
          if ( !(unsigned int)MNCreateAnimationBitmap(i, *(_DWORD *)(i + 116), v71) )
            goto LABEL_123;
          *(_QWORD *)(i + 96) = _GetDCEx(a1, 1LL, 65665LL);
          v73 = (**(_DWORD **)v182[0] >> 4) & 0xF80000 | *(_DWORD *)(i + 8) & 0xFF07FFFF;
          v74 = 0;
          *(_DWORD *)(i + 8) = v73;
          if ( (v73 & 0x180000) == 0 )
            v74 = *(_DWORD *)(i + 116);
          *(_DWORD *)(i + 108) = v74;
          v75 = 0;
          if ( (v73 & 0x600000) == 0 )
            v75 = *(_DWORD *)(i + 120);
          *(_DWORD *)(i + 112) = v75;
          FadeInternal = *(HDC *)(i + 136);
        }
        else
        {
          FadeInternal = CreateFadeInternal(a1, 0LL, 175, 17, 0);
          if ( !FadeInternal )
            goto LABEL_123;
        }
        *(_DWORD *)(v25 + 56) |= 8u;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          791LL,
          (unsigned __int64)FadeInternal,
          (struct _LARGE_STRING *)0xE,
          0,
          0,
          0LL,
          1u,
          1);
        *(_DWORD *)(v25 + 56) &= ~8u;
        v32 = gfade[12];
        if ( (v32 & 0x10) != 0 )
          zzzShowFade();
        goto LABEL_299;
      }
    }
LABEL_123:
    v32 = *(_QWORD *)v182[0];
    **(_DWORD **)v182[0] &= ~0x8000000u;
    goto LABEL_299;
  }
  v28 = 131LL;
  if ( (_DWORD)v32 == 131 )
  {
    xxxDefWindowProc(a1, 131LL, (__int64)a3, v6);
    if ( (*(_DWORD *)(v25 + 144) & 3) != 0 )
    {
      v105 = GetDPIMetrics(v32, v28);
      v32 = (unsigned int)-*(_DWORD *)(v105 + 28);
      *(_DWORD *)(v6 + 4) += *(_DWORD *)(v105 + 28);
      *(_DWORD *)(v6 + 12) += v32;
    }
    goto LABEL_316;
  }
  if ( (_DWORD)v32 == 132 )
  {
    if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
      goto LABEL_299;
    LODWORD(v185) = (__int16)v6;
    HIDWORD(v185) = SWORD1(v6);
    if ( (_DWORD)v29 )
      ThreadUnlock1(v32, 131LL);
    if ( PtInRect((_DWORD *)a1 + 32, v185) )
      goto LABEL_302;
    goto LABEL_320;
  }
  if ( (_DWORD)v32 != 133 )
  {
    v81 = v32 - 256;
    if ( (_DWORD)v32 != 256 )
    {
      v32 = 2LL;
      v82 = v81 - 2;
      if ( !v82 )
        goto LABEL_188;
      v83 = v82 - 2;
      if ( v83 )
      {
        v84 = v83 - 2;
        if ( v84 )
        {
          v85 = v84 - 13;
          if ( v85 )
          {
            if ( v85 != 205 )
              goto LABEL_299;
            if ( a3 )
            {
              v86 = ValidateHmenu(a3);
              if ( v86 )
              {
                v89 = *(_QWORD *)v182[0];
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v195, *(_QWORD *)v182[0], v87, v88);
                LockPopupMenu(v195, (struct tagMENU **)(v89 + 40), v86);
              }
            }
            goto LABEL_316;
          }
          v28 = 65529LL;
          if ( a3 != (HDC)65529 )
          {
            if ( a3 == (HDC)65531 )
            {
              if ( *(_QWORD *)(i + 96) )
                MNAnimate(i, 1LL);
              goto LABEL_316;
            }
            if ( a3 == (HDC)65534 )
            {
              **(_DWORD **)v182[0] &= ~0x80u;
              SmartObjStackRefBase<tagPOPUPMENU>::Init(v197, *(_QWORD *)v182[0], 256LL, v29);
              xxxMNOpenHierarchy(v197, i, v90, v91);
              goto LABEL_316;
            }
            if ( a3 != (HDC)0xFFFF )
            {
              if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
              {
                if ( (*(_DWORD *)(i + 8) & 8) != 0 )
                {
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(v196, *(_QWORD *)v182[0], 256LL, v29);
                  xxxMNDoScroll(v196, (unsigned int)a3, 0LL);
                }
                else
                {
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
                }
              }
              goto LABEL_316;
            }
            **(_DWORD **)v182[0] &= ~0x80u;
            goto LABEL_180;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
          if ( (*(_DWORD *)(i + 8) & 0x1000) == 0 )
            goto LABEL_316;
          goto LABEL_185;
        }
LABEL_188:
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v198, *(_QWORD *)v182[0], 256LL, v29);
        xxxMNChar(v198, i, (unsigned int)a3);
        goto LABEL_316;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v199, *(_QWORD *)v182[0], 256LL, v29);
    xxxMNKeyDown(v199, i, (unsigned int)a3, v95);
    goto LABEL_316;
  }
  if ( (**(_DWORD **)v182[0] & 0x8000000) != 0 )
  {
    xxxValidateRect(a1, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(v25 + 144) & 3) != 0 )
    {
      if ( (unsigned int)MNIsUAHMenu(v25) )
      {
        v96 = 0LL;
        v97 = 65537LL;
        v98 = *(struct tagWND **)(*(_QWORD *)v182[0] + 16LL);
      }
      else
      {
        v97 = 328833LL;
        v96 = a3;
        v98 = a1;
      }
      DCEx = _GetDCEx(v98, v96, v97);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v200, *(_QWORD *)v182[0], v100, v101);
      xxxMNDrawFullNC(a1);
    }
    else
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
      {
        v19 = xxxDefWindowProc(a1, 133LL, (__int64)a3, v6);
        if ( (unsigned int)MNIsUAHMenu(v25) )
        {
          v36 = *(_QWORD *)v182[0];
          if ( *(_QWORD *)(*(_QWORD *)v182[0] + 16LL) )
          {
            v104 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v182[0] + 16LL), 0LL, 65537LL);
            xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v182[0] + 16LL), 149LL, v25, v104);
            _ReleaseDC(v104);
          }
        }
        goto LABEL_326;
      }
      if ( (unsigned int)MNIsUAHMenu(v25) )
      {
        v102 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v182[0] + 16LL), 0LL, 65537LL);
        v103 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v182[0] + 16LL), 149LL, v25, v102);
        _ReleaseDC(v102);
        if ( v103 )
          goto LABEL_316;
      }
      DCEx = _GetDCEx(a1, a3, 328833LL);
      MNDrawEdge(v25, DCEx, (char *)a1 + 128, 0LL);
    }
    _ReleaseDC(DCEx);
  }
LABEL_316:
  v92 = v181;
LABEL_317:
  v80 = v92 == 0;
LABEL_318:
  if ( !v80 )
    goto LABEL_319;
LABEL_320:
  v19 = 0LL;
LABEL_302:
  if ( v191 )
    xxxUnlockMenuStateInternal(v191, 0);
LABEL_304:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v182);
  return v19;
}

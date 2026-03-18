/*
 * XREFs of xxxMenuWindowProc @ 0x1C0207D70
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01BE8C0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000D3A0 (xxxSendUAHMenuMessage.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     xxxDefWindowProc @ 0x1C003E580 (xxxDefWindowProc.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     xxxMNCompute @ 0x1C00439EC (xxxMNCompute.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     NextTopWindow @ 0x1C005F5C0 (NextTopWindow.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     FBadWindow @ 0x1C00B3C74 (FBadWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     GreSetWindowOrg @ 0x1C00F76DC (GreSetWindowOrg.c)
 *     xxxPlayEventSound @ 0x1C01044C0 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C01086F8 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01BC3BC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     zzzShowFade @ 0x1C01C28F4 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01C295C (zzzStartFade.c)
 *     _SetTimer @ 0x1C01C4F94 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01EAAA8 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C01EAC04 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C01EAC70 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C020158C (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C0202C40 (-MNCheckScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0202DD4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0203034 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0203090 (-MNSetTimerToOpenHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0203198 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0203244 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C0203D60 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C0203DFC (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C0203E44 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C02042C0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C02043DC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C020451C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0205230 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0205474 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0207828 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C0215A64 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C0215B44 (MNEraseBackground.c)
 *     MNFindNextValidItem @ 0x1C021936C (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HDC a3, struct _LARGE_STRING *a4)
{
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // edi
  __int64 v14; // r12
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD **v22; // rdx
  _QWORD **v23; // rcx
  _QWORD *v24; // rax
  HDC i; // rbx
  __int64 v26; // r8
  struct tagMENUWND *v27; // r9
  __int64 v28; // r12
  __int64 v29; // r13
  struct tagTHREADINFO **v30; // r10
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  struct tagWND *v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rcx
  struct tagWND *v48; // r12
  unsigned int v49; // ebx
  struct tagWND *TopWindow; // rax
  __int64 v51; // r15
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  _DWORD *v55; // r15
  struct tagWND **v56; // rax
  struct tagWND **v57; // rbx
  struct tagWND *v58; // r14
  struct tagWND *v59; // r8
  _DWORD *v60; // r14
  ULONG_PTR v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // r8d
  unsigned __int64 Fade; // rax
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  struct tagTHREADINFO *v71; // rcx
  char v72; // al
  _QWORD *v73; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rcx
  _QWORD **v76; // rax
  _QWORD *v77; // rcx
  bool v78; // zf
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // eax
  __int64 v87; // rdi
  __int64 v88; // rbx
  __int64 v89; // rcx
  unsigned int v90; // r14d
  struct tagWND *v91; // rcx
  HDC v92; // rdx
  __int64 v93; // r8
  HDC DCEx; // rbx
  __int64 v95; // rdi
  int v96; // ebx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 DPIMetrics; // rax
  int v103; // ecx
  unsigned int v104; // eax
  unsigned int v105; // eax
  unsigned int v106; // eax
  unsigned int v107; // eax
  unsigned int v108; // eax
  unsigned int v109; // eax
  unsigned int v110; // eax
  __int64 v111; // rdx
  unsigned int ValidItem; // eax
  __int64 v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rbx
  __int64 v116; // rdx
  __int64 v117; // rdx
  struct tagTHREADINFO *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // ebx
  struct tagMONITOR *v123; // r12
  __int64 v124; // rdx
  int v125; // r13d
  __int64 v126; // r8
  __int64 v127; // r9
  int v128; // r15d
  int BestPos; // eax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int16 v132; // r8
  __int64 *v133; // r10
  __int64 v134; // rax
  struct _LARGE_STRING **v135; // r9
  __int64 v136; // rcx
  __int64 v137; // rdx
  struct _LARGE_STRING *v138; // r9
  unsigned __int64 v139; // r8
  ULONG_PTR v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rcx
  unsigned int v146; // eax
  unsigned int v147; // r13d
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // [rsp+28h] [rbp-E0h]
  unsigned int v156; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v157; // [rsp+60h] [rbp-A8h]
  __int64 v158; // [rsp+60h] [rbp-A8h]
  _QWORD *v159; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v160; // [rsp+70h] [rbp-98h] BYREF
  _QWORD **v161; // [rsp+78h] [rbp-90h]
  __int64 *v162; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v163; // [rsp+90h] [rbp-78h] BYREF
  struct tagMENUWND *v164; // [rsp+98h] [rbp-70h] BYREF
  __int64 v165; // [rsp+A0h] [rbp-68h] BYREF
  struct tagMENUSTATE *v166; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v167; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v168; // [rsp+B8h] [rbp-50h]
  __int128 v169; // [rsp+C8h] [rbp-40h]
  __int128 v170; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v171; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v172[3]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v173[3]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v174[3]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v175[3]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v176[4]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v177[4]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v178[4]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v179[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v180[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v181[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v182[4]; // [rsp+218h] [rbp+110h] BYREF
  __int64 v183[4]; // [rsp+238h] [rbp+130h] BYREF
  int *v184[4]; // [rsp+258h] [rbp+150h] BYREF
  __int64 v185[4]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v186[4]; // [rsp+298h] [rbp+190h] BYREF
  __int64 v187[4]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _QWORD v188[4]; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 v189[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v190[4]; // [rsp+318h] [rbp+210h] BYREF
  _QWORD v191[4]; // [rsp+338h] [rbp+230h] BYREF
  __int64 v192[4]; // [rsp+358h] [rbp+250h] BYREF
  _QWORD v193[4]; // [rsp+378h] [rbp+270h] BYREF
  __int64 v194[4]; // [rsp+398h] [rbp+290h] BYREF
  __int64 v195[4]; // [rsp+3B8h] [rbp+2B0h] BYREF
  __int64 v196[4]; // [rsp+3D8h] [rbp+2D0h] BYREF
  __int64 v197[4]; // [rsp+3F8h] [rbp+2F0h] BYREF

  v157 = (unsigned __int64)a4;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v159, 0LL);
  v8 = 0LL;
  v156 = 0;
  if ( (*((_DWORD *)a1 + 76) & 0x800) != 0 )
    goto LABEL_18;
  v9 = *((_WORD *)a1 + 41);
  if ( v9 != 668 )
  {
    if ( v9 )
    {
LABEL_18:
      v17 = v8;
      goto LABEL_77;
    }
    if ( a2 != 129 )
    {
      v10 = xxxDefWindowProc(a1, a2, (__int64)a3, (__int64)a4);
LABEL_17:
      v8 = v10;
      goto LABEL_18;
    }
    v11 = *((_DWORD *)a1 + 63);
    v12 = *(unsigned __int16 *)(gpsi + 332LL);
    if ( v11 + 400 >= v12 )
    {
      v16 = (void *)*((_QWORD *)a1 + 49);
      if ( v16 )
        memset(v16, 0, *((unsigned int *)a1 + 63));
    }
    else
    {
      if ( *((_DWORD *)a1 + 62) + v11 + 400 < v12 )
        goto LABEL_18;
      v13 = v12 - 400;
      v14 = Win32AllocPoolWithQuotaZInit(v12 - 400, 1937208149LL);
      if ( !v14 )
        goto LABEL_18;
      v15 = *((_QWORD *)a1 + 49);
      if ( v15 )
        Win32FreePool(v15);
      *((_QWORD *)a1 + 49) = v14;
      *((_DWORD *)a1 + 63) = v13;
    }
    *((_WORD *)a1 + 41) = 668;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v10 = xxxSendTransformableMessageTimeout((ULONG_PTR)a1, a2, (unsigned __int64)a3, a4, 0, 0, 0LL, 1, 1);
    goto LABEL_17;
  }
  v18 = *((_QWORD *)a1 + 49);
  v164 = (struct tagMENUWND *)v18;
  v19 = *(_QWORD *)(v18 + 8);
  *(_QWORD *)v18 = a1;
  v20 = (__int64)v159;
  if ( v159 != (_QWORD *)v19 )
  {
    if ( v159 )
    {
      v21 = v160;
      v22 = v161;
      if ( (_QWORD **)v160[1] != &v160 || *v161 != &v160 )
        __fastfail(3u);
      *v161 = v160;
      v21[1] = v22;
    }
    v159 = (_QWORD *)v19;
    if ( !v19 )
      goto LABEL_34;
    v23 = (_QWORD **)(v19 + 88);
    v24 = *v23;
    if ( (_QWORD **)(*v23)[1] != v23 )
      __fastfail(3u);
    v160 = *v23;
    v161 = v23;
    v24[1] = &v160;
    *v23 = &v160;
    v20 = (__int64)v159;
  }
  if ( !v20 )
  {
LABEL_34:
    i = 0LL;
    goto LABEL_35;
  }
  for ( i = *(HDC *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 528LL); i; i = (HDC)*((_QWORD *)i + 6) )
  {
    if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v18 + 8) + 64LL) )
      break;
  }
LABEL_35:
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v166,
    (struct tagMENUSTATE *)i);
  v28 = (__int64)v159;
  if ( v159 )
    v29 = v159[5];
  else
    v29 = 0LL;
  v17 = 1LL;
  if ( !i || !v29 )
  {
    v34 = a2;
    switch ( a2 )
    {
      case 0x1E0u:
        if ( !v159 )
          goto LABEL_347;
        break;
      case 0x81u:
        break;
      case 0x70u:
LABEL_72:
        v30 = (struct tagTHREADINFO **)gptiCurrent;
        v31 = 0LL;
        v162 = (__int64 *)gptiCurrent;
        goto LABEL_53;
      default:
        goto LABEL_74;
    }
    if ( *(char *)(*(_QWORD *)v27 + 59LL) < 0 )
      goto LABEL_347;
    v34 = a2;
    goto LABEL_72;
  }
  v30 = (struct tagTHREADINFO **)gptiCurrent;
  v31 = 1LL;
  v162 = (__int64 *)gptiCurrent;
  v156 = 1;
  v172[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v172;
  v172[1] = v29;
  ++*(_DWORD *)(v29 + 8);
  v28 = (__int64)v159;
  v26 = v159[8];
  if ( !v26 || (v32 = 1, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v27 + 16LL) + 528LL) == v26) )
    v32 = 0;
  v33 = *((unsigned int *)i + 2);
  if ( (v33 & 0x100) == 0 || (v33 & 0x200) != 0 )
  {
LABEL_52:
    v34 = a2;
    goto LABEL_53;
  }
  v26 = a2;
  if ( !v32 )
  {
    if ( (unsigned int)xxxCallHandleMenuMessages((__int64)i, (__int64)a1, a2, (__int64)a3, v157) )
    {
LABEL_346:
      ThreadUnlock1(v35, v31);
      goto LABEL_347;
    }
    v30 = (struct tagTHREADINFO **)gptiCurrent;
    v31 = 1LL;
    v28 = (__int64)v159;
    v27 = v164;
    v162 = (__int64 *)gptiCurrent;
    goto LABEL_52;
  }
  if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
    goto LABEL_92;
  v34 = a2;
LABEL_53:
  if ( v34 <= 0x1E1 )
  {
    if ( v34 == 481 )
    {
      if ( (_DWORD)v31 )
        v29 = ThreadUnlock1(481LL, v31);
      if ( v29 )
      {
        v17 = *(_QWORD *)v29;
        goto LABEL_75;
      }
      goto LABEL_347;
    }
    v35 = 129LL;
    if ( v34 <= 0x81 )
    {
      if ( v34 == 129 )
      {
        if ( *((_QWORD *)v27 + 1) || *((_QWORD *)v27 + 2) )
        {
          v78 = (_DWORD)v31 == 0;
          goto LABEL_345;
        }
        v73 = MNAllocPopup(1);
        v74 = (__int64)v159;
        if ( v159 != v73 )
        {
          if ( v159 )
          {
            v75 = v160;
            v31 = (__int64)v161;
            if ( (_QWORD **)v160[1] != &v160 || *v161 != &v160 )
              __fastfail(3u);
            *v161 = v160;
            v75[1] = v31;
          }
          v159 = v73;
          if ( !v73 )
            goto LABEL_344;
          v76 = (_QWORD **)(v73 + 11);
          v77 = *v76;
          if ( (_QWORD **)(*v76)[1] != v76 )
            __fastfail(3u);
          v160 = *v76;
          v31 = (__int64)&v160;
          v161 = v76;
          v77[1] = &v160;
          *v76 = &v160;
          v74 = (__int64)v159;
        }
        if ( v74 )
        {
          *((_QWORD *)&v169 + 1) = a1;
          *((_QWORD *)v164 + 1) = v74;
          *(_DWORD *)v159 |= 0x40000000u;
          *((_DWORD *)v159 + 20) = -1;
          *(_QWORD *)&v169 = v159 + 2;
          v170 = v169;
          HMAssignmentLock(&v170);
LABEL_353:
          if ( v156 )
            ThreadUnlock1(v156, v36);
          goto LABEL_75;
        }
        goto LABEL_344;
      }
      if ( v34 <= 0x18 )
      {
        if ( v34 == 24 )
        {
          if ( a3 )
            goto LABEL_91;
          xxxMNCancel((__int64)i, 0, 0, 0LL);
          goto LABEL_90;
        }
        if ( v34 == 3 || v34 == 5 )
        {
          if ( !*(_QWORD *)(v28 + 24) )
            goto LABEL_344;
          SmartObjStackRef<tagPOPUPMENU>::Init(v176, v28);
          v55 = (_DWORD *)MNGetpItem(v176, *(_DWORD *)(v28 + 84));
          v56 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(v159[3]);
          v57 = v56;
          if ( !v55 )
            goto LABEL_344;
          if ( !v56 )
            goto LABEL_344;
          v58 = v56[1];
          if ( !v58 )
            goto LABEL_344;
          v59 = *v56;
          if ( !*v56 )
            goto LABEL_344;
          v60 = (_DWORD *)*((_QWORD *)v58 + 5);
          LODWORD(v162) = 0;
          LODWORD(v164) = 0;
          v174[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v174;
          v174[1] = v59;
          ++*((_DWORD *)v59 + 2);
          v175[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v175;
          v175[1] = v60;
          ++v60[2];
          if ( !v60[18] )
          {
            v61 = (ULONG_PTR)*v56;
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout(v61, 0x1E2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
          }
          v62 = v159[5];
          if ( v62 && (unsigned int)MNGetpItemIndex(v62, (__int64)v55) != -1 )
          {
            SmartObjStackRef<tagPOPUPMENU>::Init(v177, v63);
            xxxMNPositionHierarchy(
              v177,
              v55,
              (unsigned int)(v60[18] + 6),
              (unsigned int)(v60[19] + 6),
              (int *)&v162,
              (int *)&v164,
              0LL);
          }
          xxxSetWindowPos(*v57, 0LL, (unsigned int)v162, (unsigned int)v164, 0, 0, 1029);
          ThreadUnlock1(v65, v64);
          goto LABEL_173;
        }
        if ( v34 != 6 )
        {
          if ( v34 != 15 )
          {
            if ( v34 == 20 && *(_QWORD *)(v29 + 128) )
            {
              MNEraseBackground(a3, v29, 0);
              goto LABEL_353;
            }
LABEL_91:
            v33 = v156;
            if ( v156 )
            {
LABEL_92:
              ThreadUnlock1(v33, v31);
              v34 = a2;
            }
LABEL_74:
            v17 = xxxDefWindowProc(a1, v34, (__int64)a3, v157);
            goto LABEL_75;
          }
          xxxHandleMenuPainting(a1, (struct tagMENU *)v29);
          goto LABEL_344;
        }
        v38 = *((_DWORD *)i + 2);
        if ( (v38 & 0x100) != 0 )
        {
          if ( (_WORD)a3 || (v38 & 0x200) != 0 )
            goto LABEL_91;
          if ( (**(_DWORD **)i & 0x80000) == 0 )
          {
            v157 = HMValidateHandleNoSecure(v157, 1);
            v39 = safe_cast_fnid_to_PMENUWND(v157);
            if ( v40 )
            {
              if ( !v39 || (v41 = *(_QWORD *)(v39 + 8)) == 0 || *(_QWORD *)i != *(_QWORD *)(v41 + 64) )
              {
                v42 = *((_DWORD *)i + 2);
                if ( (v42 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
                {
                  *((_DWORD *)i + 2) = v42 & 0xFFFEFFFF;
                  PostMessage((__int64)a1, 498LL, 0LL, 0LL);
                  goto LABEL_90;
                }
LABEL_93:
                v43 = a1;
LABEL_94:
                PostMessage((__int64)v43, 499LL, 0LL, 0LL);
                goto LABEL_344;
              }
            }
          }
LABEL_90:
          v34 = a2;
          goto LABEL_91;
        }
        if ( !(_WORD)a3 )
          goto LABEL_344;
        if ( *((_WORD *)*v30 + 276) >= 0x500u )
          goto LABEL_93;
        if ( gpqForegroundPrev )
        {
          v44 = *(_QWORD *)(gpqForegroundPrev + 96LL);
          if ( !(unsigned int)FBadWindow(v44) && (*(_WORD *)(v44 + 82) & 0x3FFF) != 0x29C )
          {
            v47 = v162;
            a1 = (struct tagWND *)v44;
LABEL_110:
            if ( !a1 )
              goto LABEL_344;
            v53 = *v47;
            v173[0] = *(_QWORD *)(v53 + 368);
            *(_QWORD *)(v53 + 368) = v173;
            v173[1] = a1;
            ++*((_DWORD *)a1 + 2);
            v54 = *(_QWORD *)(v53 + 384);
            if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == v54 )
            {
              xxxActivateThisWindow(a1, 0LL, 2, 0);
            }
            else if ( gpqForeground == v54 )
            {
              xxxSetForegroundWindow(a1, 0LL, v45, v46);
            }
LABEL_173:
            ThreadUnlock1(v53, v54);
            goto LABEL_344;
          }
          v30 = (struct tagTHREADINFO **)v162;
        }
        v48 = a1;
        v49 = 0;
        while ( 1 )
        {
          TopWindow = NextTopWindow(*v30, (__int64)a1, 0LL, 0);
          a1 = TopWindow;
          if ( !TopWindow )
            break;
          v51 = *((_QWORD *)TopWindow + 32);
          if ( !(unsigned int)FBadWindow(v51) && (*(_WORD *)(v51 + 82) & 0x3FFF) != 0x29C )
          {
            a1 = (struct tagWND *)v51;
LABEL_109:
            v47 = (__int64 *)gptiCurrent;
            goto LABEL_110;
          }
          v52 = v49++;
          if ( v52 >= 0xFF )
            break;
          v30 = (struct tagTHREADINFO **)gptiCurrent;
        }
        if ( !v49 )
          goto LABEL_109;
        v43 = v48;
        goto LABEL_94;
      }
      if ( v34 == 28 )
      {
        if ( ((_DWORD)i[2] & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
          goto LABEL_344;
        if ( a3 )
        {
          PostMessage((__int64)a1, 498LL, 0LL, 0LL);
          v30 = (struct tagTHREADINFO **)gptiCurrent;
          *((_DWORD *)i + 2) = (_DWORD)i[2] & 0xFFFEFFFF | ((gpqForeground != *(_QWORD *)(gptiCurrent + 384LL)) << 16);
          v28 = (__int64)v159;
        }
        v31 = *(_QWORD *)(v28 + 8);
        if ( !v31 )
          goto LABEL_344;
        v71 = *v30;
        v167 = *((_QWORD *)*v30 + 46);
        *((_QWORD *)v71 + 46) = &v167;
        v168 = v31;
        ++*(_DWORD *)(v31 + 8);
        if ( !a3 || (v72 = 1, ((_DWORD)i[2] & 0x10000) != 0) )
          v72 = 2;
        xxxDWP_DoNCActivate(v159[1], v72, 1LL);
        goto LABEL_173;
      }
      if ( v34 != 70 )
      {
        if ( v34 == 71 )
        {
          if ( (*(_DWORD *)(v157 + 32) & 0x40) != 0 && (*(_DWORD *)v28 & 0x8000000) != 0 )
          {
            if ( (gfade[12] & 0x10) != 0 )
            {
              zzzStartFade();
            }
            else
            {
              *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
            }
            *(_DWORD *)v159 &= ~0x8000000u;
          }
          goto LABEL_90;
        }
        if ( v34 != 112 )
          goto LABEL_91;
        if ( i && ((_DWORD)i[2] & 0x400) != 0 )
        {
          v165 = *(_QWORD *)a1;
          xxxUserModeCallback(101LL, (__int64)&v165, 8LL, (__int64)v27, v154);
        }
        xxxMNDestroyHandler(v164);
        goto LABEL_344;
      }
      if ( (*(_DWORD *)(v157 + 32) & 0x40) == 0 )
        goto LABEL_90;
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) != 0x80000002 || (*(_DWORD *)v28 & 0x8000000) == 0 )
      {
LABEL_155:
        *(_DWORD *)v28 &= ~0x8000000u;
        goto LABEL_90;
      }
      if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
        && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 3
        && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
        && (GetAppCompatFlags2(0x400u) & 1) == 0 )
      {
        *((_DWORD *)i + 29) = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
        v66 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
        *((_DWORD *)i + 30) = v66;
        if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
        {
          if ( !(unsigned int)MNCreateAnimationBitmap(i, *((_DWORD *)i + 29), v66) )
            goto LABEL_154;
          *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
          v68 = 0;
          v69 = *((_DWORD *)i + 2) ^ (*((_DWORD *)i + 2) ^ (*(_DWORD *)v159 >> 4)) & 0xF80000;
          *((_DWORD *)i + 2) = v69;
          if ( (v69 & 0x180000) == 0 )
            v68 = *((_DWORD *)i + 29);
          *((_DWORD *)i + 27) = v68;
          v70 = 0;
          if ( (v69 & 0x600000) == 0 )
            v70 = *((_DWORD *)i + 30);
          *((_DWORD *)i + 28) = v70;
          Fade = *((_QWORD *)i + 17);
        }
        else
        {
          Fade = CreateFade((__int64)a1, 0LL, 0xAFu, 17, *((_DWORD *)a1 + 92));
          if ( !Fade )
            goto LABEL_154;
        }
        *(_DWORD *)(v29 + 56) |= 8u;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0x317u, Fade, (struct _LARGE_STRING *)0xE, 0, 0, 0LL, 1, 1);
        *(_DWORD *)(v29 + 56) &= ~8u;
        if ( (gfade[12] & 0x10) != 0 )
          zzzShowFade();
        goto LABEL_90;
      }
LABEL_154:
      v28 = (__int64)v159;
      goto LABEL_155;
    }
    v79 = v34 - 131;
    if ( !v79 )
    {
      xxxDefWindowProc(a1, 0x83u, (__int64)a3, v157);
      if ( (*(_DWORD *)(v29 + 144) & 3) != 0 )
      {
        DPIMetrics = GetDPIMetrics(v99, v31, v100, v101, v154);
        v103 = -*(_DWORD *)(DPIMetrics + 28);
        *(_DWORD *)(v157 + 4) += *(_DWORD *)(DPIMetrics + 28);
        *(_DWORD *)(v157 + 12) += v103;
      }
      goto LABEL_344;
    }
    v80 = v79 - 1;
    if ( !v80 )
    {
      if ( ((_DWORD)i[2] & 0x100) != 0 )
      {
        LODWORD(v163) = (__int16)v157;
        HIDWORD(v163) = SWORD1(v157);
        if ( (_DWORD)v31 )
          ThreadUnlock1(v157 >> 16, v31);
        if ( PtInRect((_DWORD *)a1 + 32, v163) )
          goto LABEL_75;
        goto LABEL_347;
      }
      goto LABEL_90;
    }
    v81 = v80 - 1;
    if ( !v81 )
    {
      if ( (*(_DWORD *)v28 & 0x8000000) != 0 )
      {
        xxxValidateRect(a1, 0LL);
      }
      else
      {
        if ( (*(_DWORD *)(v29 + 144) & 3) != 0 )
        {
          if ( (unsigned int)MNIsUAHMenu(v29) )
          {
            v91 = *(struct tagWND **)(v28 + 16);
            v92 = 0LL;
            v93 = 65537LL;
          }
          else
          {
            v93 = 328833LL;
            v92 = a3;
            v91 = a1;
          }
          DCEx = (HDC)_GetDCEx(v91, v92, v93);
          SmartObjStackRef<tagPOPUPMENU>::Init(v183, (__int64)v159);
          xxxMNDrawFullNC(a1, DCEx, v183);
        }
        else
        {
          if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
          {
            v17 = xxxDefWindowProc(a1, 0x85u, (__int64)a3, v157);
            if ( (unsigned int)MNIsUAHMenu(v29) )
            {
              v97 = v159[2];
              if ( v97 )
              {
                v98 = _GetDCEx(v97, 0LL, 65537LL);
                xxxSendUAHMenuMessage(v159[2], 149LL, v29, v98);
                _ReleaseDC(v98);
              }
            }
            goto LABEL_353;
          }
          if ( (unsigned int)MNIsUAHMenu(v29) )
          {
            v95 = _GetDCEx(*(_QWORD *)(v28 + 16), 0LL, 65537LL);
            v96 = xxxSendUAHMenuMessage(v159[2], 149LL, v29, v95);
            _ReleaseDC(v95);
            if ( v96 )
              goto LABEL_344;
          }
          DCEx = (HDC)_GetDCEx(a1, a3, 328833LL);
          MNDrawEdge(v29, DCEx, (char *)a1 + 128, 0LL);
        }
        _ReleaseDC(DCEx);
      }
LABEL_344:
      v35 = v156;
      v78 = v156 == 0;
      goto LABEL_345;
    }
    v82 = v81 - 123;
    if ( v82 )
    {
      v83 = v82 - 2;
      if ( !v83 )
        goto LABEL_218;
      v84 = v83 - 2;
      if ( v84 )
      {
        v85 = v84 - 2;
        if ( v85 )
        {
          v86 = v85 - 13;
          if ( v86 )
          {
            if ( v86 != 205 )
              goto LABEL_90;
            if ( a3 )
            {
              v87 = ValidateHmenu(a3);
              if ( v87 )
              {
                v88 = (__int64)v159;
                SmartObjStackRef<tagPOPUPMENU>::Init(v178, (__int64)v159);
                LockPopupMenu(v178, (struct tagMENU **)(v88 + 40), v87);
              }
            }
            goto LABEL_344;
          }
          v31 = 65529LL;
          if ( a3 != (HDC)65529 )
          {
            if ( a3 == (HDC)65531 )
            {
              if ( *((_QWORD *)i + 12) )
                MNAnimate(i, 1LL);
              goto LABEL_344;
            }
            if ( a3 == (HDC)65534 )
            {
              *(_DWORD *)v28 &= ~0x80u;
              SmartObjStackRef<tagPOPUPMENU>::Init(v180, (__int64)v159);
              xxxMNOpenHierarchy(v180, (__int64)i);
              goto LABEL_344;
            }
            if ( a3 != (HDC)0xFFFF )
            {
              if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
              {
                if ( ((_DWORD)i[2] & 8) != 0 )
                {
                  SmartObjStackRef<tagPOPUPMENU>::Init(v179, v28);
                  xxxMNDoScroll(v179, (unsigned int)a3, 0);
                }
                else
                {
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
                }
              }
              goto LABEL_344;
            }
            *(_DWORD *)v28 &= ~0x80u;
            v89 = (__int64)v159;
LABEL_275:
            xxxMNCloseHierarchy(v89, (__int64)i);
            goto LABEL_344;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
          if ( ((_DWORD)i[2] & 0x1000) == 0 )
            goto LABEL_344;
          goto LABEL_214;
        }
LABEL_218:
        SmartObjStackRef<tagPOPUPMENU>::Init(v181, v28);
        xxxMNChar(v181, (__int64)i, (unsigned int)a3);
        goto LABEL_344;
      }
    }
    SmartObjStackRef<tagPOPUPMENU>::Init(v182, v28);
    xxxMNKeyDown(v182, (__int64)i, (unsigned int)a3);
    goto LABEL_344;
  }
  if ( v34 > 0x2A3 )
  {
    v31 = 791LL;
    if ( v34 != 791 )
    {
      if ( v34 != 792 )
        goto LABEL_91;
      xxxMenuDraw(a3, v29, (__int64)a1);
      goto LABEL_344;
    }
    if ( (v157 & 2) == 0 || (*(_DWORD *)(v29 + 144) & 3) == 0 )
    {
      v17 = xxxDefWindowProc(a1, 0x317u, (__int64)a3, v157);
      if ( (!(unsigned int)MNIsUAHMenu(v29)
         || (v153 = v159[2]) == 0
         || !(unsigned int)xxxSendUAHMenuMessage(v153, 149LL, v29, (__int64)a3))
        && ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      {
        MNDrawEdge(v29, a3, (char *)a1 + 128, 0LL);
      }
      goto LABEL_353;
    }
    if ( a3 && (*((_BYTE *)a1 + 66) & 0x40) != 0 )
    {
      if ( (GreGetLayout(a3) & 1) == 0 )
      {
        v146 = GreSetLayout(a3, (unsigned int)(*((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32)), 1LL);
        v28 = (__int64)v159;
        v147 = v146;
LABEL_341:
        SmartObjStackRef<tagPOPUPMENU>::Init(v197, v28);
        xxxMNDrawFullNC(a1, a3, v197);
        if ( (_DWORD)v17 )
          GreSetLayout(a3, (unsigned int)(*((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32)), v147);
        GreGetDCPoint(a3, 8LL, &v163);
        v152 = GetDPIMetrics(v149, v148, v150, v151, v154);
        GreSetWindowOrg(a3, v163 - 3, HIDWORD(v163) - *(_DWORD *)(v152 + 28) - 3);
        xxxDefWindowProc(a1, 0x317u, (__int64)a3, v157 & 0xFFFFFFFFFFFFFFFDuLL);
        GreSetWindowOrg(a3, v163, SHIDWORD(v163));
        goto LABEL_344;
      }
      v28 = (__int64)v159;
    }
    LODWORD(v17) = 0;
    v147 = 0;
    goto LABEL_341;
  }
  if ( v34 == 675 )
  {
    *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
    *(_DWORD *)v159 &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
    v31 = (__int64)v159;
    if ( v159[2] == *(_QWORD *)(*(_QWORD *)i + 56LL) )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v196, (__int64)v159);
      xxxMNSelectItem(v196, (__int64)i, 0xFFFFFFFF);
    }
    goto LABEL_344;
  }
  if ( v34 <= 0x1ED )
  {
    if ( v34 == 493 )
    {
      if ( (unsigned __int64)a3 < *(unsigned int *)(v29 + 68) || (unsigned __int64)a3 >= 0xFFFFFFFC )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v190, v28);
        xxxMNButtonDown(v190, (__int64)i, (unsigned int)a3, 1);
      }
      goto LABEL_344;
    }
    v104 = v34 - 482;
    if ( !v104 )
    {
      v117 = *(_QWORD *)(v28 + 8);
      if ( v117 )
      {
        v118 = *v30;
        v167 = *((_QWORD *)*v30 + 46);
        *((_QWORD *)v118 + 46) = &v167;
        v168 = v117;
        ++*(_DWORD *)(v117 + 8);
        xxxMNCompute((struct tagMENU *)v29, v159[1], (__int64)a1, 0, 0, 0, 0LL);
        ThreadUnlock1(v120, v119);
      }
      v121 = MonitorFromWindow((__int64)a1, 1u);
      v122 = *(_DWORD *)(v29 + 72);
      v123 = (struct tagMONITOR *)v121;
      SmartObjStackRef<tagPOPUPMENU>::Init(v187, (__int64)v159);
      v125 = MNCheckScroll(v187, v29, (__int64)v123);
      if ( a3 )
      {
        v126 = 0LL;
        v127 = 0LL;
        v128 = (8 * (_BYTE)a3) & 0x20 | 0x214;
        if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v188, (__int64)v159);
          MNGetPopupBoundsRect(v188, (__int64)v123, &v171, 1);
          v158 = *((_QWORD *)a1 + 16);
          SmartObjStackRef<tagPOPUPMENU>::Init(v189, (__int64)v159);
          BestPos = FindBestPos(
                      *((_DWORD *)a1 + 32),
                      *((_DWORD *)a1 + 33),
                      (__int64)&v171,
                      0,
                      (__int64)v189,
                      v123,
                      v158);
          v126 = (unsigned int)(__int16)BestPos;
          v127 = (unsigned int)SHIWORD(BestPos);
        }
        else
        {
          v128 |= 2u;
        }
        xxxSetWindowPos(a1, 0LL, v126, v127, v122 + 6, v125 + 6, v128);
      }
      if ( v156 )
        ThreadUnlock1(v156, v124);
      v17 = (unsigned __int16)v122 | ((unsigned __int16)v125 << 16);
      goto LABEL_75;
    }
    v105 = v104 - 1;
    if ( v105 )
    {
      v106 = v105 - 1;
      if ( !v106 )
      {
        v89 = v28;
        goto LABEL_275;
      }
      v107 = v106 - 1;
      if ( !v107 )
      {
        if ( (unsigned __int64)a3 < *(unsigned int *)(v29 + 68) || (unsigned __int64)a3 >= 0xFFFFFFFC )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v185, v28);
          v115 = xxxMNSelectItem(v185, (__int64)i, (unsigned int)a3);
          if ( v115 )
          {
            if ( v156 )
              ThreadUnlock1(v156, v31);
            v17 = (*(_QWORD *)(v115 + 16) != 0LL ? 0x10 : 0) | (unsigned __int64)*(unsigned __int16 *)(v115 + 4);
            goto LABEL_75;
          }
        }
        goto LABEL_344;
      }
      v108 = v107 - 1;
      if ( !v108 )
      {
        xxxMNCancel((__int64)i, (unsigned int)a3, (unsigned __int16)v157, 0LL);
        goto LABEL_344;
      }
      v109 = v108 - 1;
      if ( !v109 )
      {
        ValidItem = MNFindNextValidItem(v29, 0xFFFFFFFFLL, 1LL, 1LL);
        v113 = (int)ValidItem;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0x1E5u, ValidItem, 0LL, 0, 0, 0LL, 1, 1);
        if ( v156 )
          ThreadUnlock1(v156, v114);
        v17 = v113;
        goto LABEL_75;
      }
      v110 = v109 - 4;
      if ( v110 )
      {
        if ( v110 != 1 )
          goto LABEL_90;
        xxxPlayEventSound(5LL, v31, v26, (__int64)v27);
        xxxShowWindowEx(
          a1,
          (unsigned __int16)((_WORD)i[2] & 0x100 | 0x400) >> 8,
          (((_DWORD)i[2] & 0x100 | 0x400u) >> 8) & 0x10000);
        goto LABEL_344;
      }
      SmartObjStackRef<tagPOPUPMENU>::Init(v184, v28);
      v17 = xxxMNFindWindowFromPoint(v184, a3, v157);
      if ( v156 )
        ThreadUnlock1(v156, v111);
      if ( !IsMFMWFPWindow(v17) )
        goto LABEL_75;
    }
    else
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v186, v28);
      v17 = xxxMNOpenHierarchy(v186, (__int64)i);
      if ( v156 )
        ThreadUnlock1(v156, v116);
      if ( v17 == -1 )
        goto LABEL_347;
    }
    if ( v17 )
    {
      v17 = *(_QWORD *)v17;
      goto LABEL_75;
    }
    goto LABEL_347;
  }
  switch ( v34 )
  {
    case 0x1EEu:
      SmartObjStackRef<tagPOPUPMENU>::Init(v195, v28);
      xxxMNMouseMove(v195, (__int64)i, v157);
      goto LABEL_344;
    case 0x1EFu:
      if ( (unsigned __int64)a3 < *(unsigned int *)(v29 + 68) || (unsigned __int64)a3 >= 0xFFFFFFFC )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v194, v28);
        xxxMNButtonUp(v194, (__int64)i, (int)a3, v157);
      }
      goto LABEL_344;
    case 0x1F0u:
      if ( (_DWORD)v31 )
      {
        ThreadUnlock1(v34 - 496, v31);
        v28 = (__int64)v159;
      }
      SmartObjStackRef<tagPOPUPMENU>::Init(v193, v28);
      v17 = (unsigned __int16)MNSetTimerToOpenHierarchy(v193);
      goto LABEL_75;
    case 0x1F1u:
      SmartObjStackRef<tagPOPUPMENU>::Init(v192, v28);
      xxxMNDoubleClick((__int64)i, v192, (int)a3);
      goto LABEL_344;
    case 0x1F2u:
      xxxActivateThisWindow(a1, 0LL, 0, 0);
      goto LABEL_344;
  }
  if ( v34 != 499 )
  {
    if ( v34 != 500 )
      goto LABEL_91;
    if ( (_DWORD)v31 )
    {
      ThreadUnlock1(v34 - 499, v31);
      v28 = (__int64)v159;
    }
    v90 = 0;
    if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
      goto LABEL_347;
    if ( !*(_QWORD *)(v28 + 8) )
      goto LABEL_347;
    if ( !IsMFMWFPWindow(*((_QWORD *)i + 8)) )
      goto LABEL_347;
    v131 = safe_cast_fnid_to_PMENUWND(v130);
    if ( !v131 )
      goto LABEL_347;
    v134 = *(_QWORD *)(v131 + 8);
    if ( !v134 )
      goto LABEL_347;
    v135 = *(struct _LARGE_STRING ***)(v134 + 40);
    if ( (v132 & 0x100) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*v133 + 384) + 340LL) &= ~0x100000u;
      v133 = (__int64 *)gptiCurrent;
    }
    ++*((_DWORD *)i + 10);
    v136 = *v133;
    v137 = v159[1];
    v167 = *(_QWORD *)(*v133 + 368);
    *(_QWORD *)(v136 + 368) = &v167;
    v168 = v137;
    ++*(_DWORD *)(v137 + 8);
    *((_DWORD *)i + 2) |= 0x8000u;
    if ( v135 )
      v138 = *v135;
    else
      v138 = 0LL;
    v139 = *((unsigned int *)i + 18);
    v140 = v159[1];
    _InterlockedAdd(&glSendMessage, 1u);
    v141 = xxxSendTransformableMessageTimeout(v140, 0x123u, v139, v138, 0, 0, 0LL, 1, 1);
    v143 = *((unsigned int *)i + 2);
    LODWORD(v143) = v143 & 0xFFFF7FFF;
    *((_DWORD *)i + 2) = v143;
    if ( v141 != 1 )
    {
      *((_DWORD *)i + 2) = v143 | 0x2000;
      MNCheckButtonDownState((__int64)i);
      if ( ((_DWORD)i[2] & 0x100) == 0 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v191, (__int64)v159);
        xxxMNSetCapture(v191, (__int64)i);
      }
      ThreadUnlock1(v145, v144);
      xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
      goto LABEL_347;
    }
    ThreadUnlock1(v143, v142);
    if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
      goto LABEL_347;
    goto LABEL_215;
  }
LABEL_214:
  v90 = v156;
LABEL_215:
  xxxEndMenuLoop((__int64)i, *(_QWORD *)i);
  if ( ((_DWORD)i[2] & 0x100) != 0 )
    xxxMNEndMenuState((__int64)i);
  v78 = v90 == 0;
LABEL_345:
  if ( !v78 )
    goto LABEL_346;
LABEL_347:
  v17 = 0LL;
LABEL_75:
  if ( v166 )
    xxxUnlockMenuStateInternal(v166, 0);
LABEL_77:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v159);
  return v17;
}

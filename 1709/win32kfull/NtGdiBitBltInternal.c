/*
 * XREFs of NtGdiBitBltInternal @ 0x1C001EE10
 * Callers:
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     NtGdiBitBlt @ 0x1C001EDA0 (NtGdiBitBlt.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     UpdateSpriteArea @ 0x1C00E4894 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E61EC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtUserBitBltSysBmp @ 0x1C01118E0 (NtUserBitBltSysBmp.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     RecolorDeskPattern @ 0x1C0126200 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C013C380 (CreateCompatiblePublicDC.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01EFD48 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0205578 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C020D040 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020E2F0 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020EC5C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0215A78 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C0216480 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C021A97C (BltColor.c)
 *     DxgkEngBltViaGDI @ 0x1C0251B40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0018388 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002220C (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00225E0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0022FE4 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00277E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027CB0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0071E94 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C0072A88 (GreClientRgnUpdated.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEA8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008AEE8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C009BD3C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0252EE8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C02530A0 (SimBitBlt.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0277128 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02795C0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG left,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        unsigned int a8,
        int a9,
        int a10,
        char a11)
{
  LONG x; // r15d
  LONG top; // esi
  __int64 v15; // rdx
  unsigned int v16; // r12d
  int v18; // r14d
  DC *v19; // rcx
  __int64 v20; // rdx
  DC *v21; // rax
  int v22; // ebx
  LONG y; // ebx
  DC *v24; // rdx
  DC *v25; // r9
  __int64 v26; // r10
  int v27; // r8d
  __int64 v28; // rbx
  unsigned int v29; // eax
  struct MATRIX *v30; // rdx
  int v31; // ecx
  LONG v32; // edx
  int v33; // r9d
  LONG v34; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  LONG v37; // eax
  LONG v38; // eax
  DC *v39; // rcx
  int v40; // eax
  DC *v41; // r8
  HDC v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // r15
  unsigned __int8 v45; // cl
  __int64 v46; // rdx
  char *v47; // rdi
  __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // rcx
  int v51; // r9d
  __int64 v52; // rdx
  __int64 v53; // r14
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  __int64 v58; // rdi
  int v59; // r11d
  __int64 v60; // rax
  int v61; // r10d
  int v62; // ebx
  unsigned int v63; // r12d
  __int64 v64; // rax
  int v65; // eax
  LONG v66; // ecx
  LONG v67; // r10d
  struct _RECTL v68; // xmm6
  char *v69; // rbx
  struct REGION *v70; // rax
  int v71; // ecx
  __int64 v72; // rax
  LONG v73; // r10d
  int v74; // edx
  int v75; // r9d
  struct _RECTL *v76; // rcx
  LONG v77; // r11d
  LONG v78; // eax
  XLATEOBJ *v79; // rbx
  __int64 v80; // r15
  __int64 v81; // r14
  __int64 v82; // rax
  int v83; // ecx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  int v89; // ecx
  unsigned int v90; // r13d
  __int64 v91; // r12
  unsigned int i; // r11d
  int v93; // eax
  unsigned int v94; // eax
  __int64 v95; // r9
  __int64 v96; // r10
  unsigned int v97; // eax
  __int64 v98; // r9
  __int64 v99; // r10
  XLATEOBJ *v100; // rdx
  FLONG flXlate; // r8d
  unsigned int v102; // eax
  __int64 XlateObject; // rax
  HDC v104; // rsi
  DC *v105; // r14
  DC *v106; // r13
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r12
  __int128 *v110; // rax
  bool v111; // zf
  __int64 v112; // rdi
  __int64 v113; // rax
  unsigned int v114; // eax
  __int64 v115; // rax
  int (*v116)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  int v119; // r11d
  __int64 cEntries; // rax
  unsigned int v121; // ecx
  DC *v122; // rdx
  SURFACE *v123; // rbx
  int v124; // r12d
  DC *v125; // rdx
  SURFACE *v126; // rcx
  DC *v127; // rdx
  SURFACE *v128; // rbx
  __int64 v129; // r8
  __int64 v130; // rax
  DC *v131; // rcx
  __int64 v132; // rbx
  __int64 v133; // rax
  DC *v134; // rcx
  __int64 v135; // rbx
  __int64 CurrentProcess; // rax
  __int64 v137; // rbx
  __int64 v138; // rax
  DC *v139; // rcx
  __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rbx
  __int64 v143; // rax
  DC *v144; // rcx
  __int64 v145; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 *v156; // rdi
  __int64 v157; // rax
  DC *v158; // r14
  __int64 v159; // rbx
  __int64 v160; // rsi
  DC *v161; // rcx
  char v162; // bl
  __int64 v163; // rax
  DCVISRGNSHARELOCK *v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 *v169; // rdi
  __int64 v170; // rax
  DC *v171; // r14
  __int64 v172; // rbx
  __int64 v173; // rsi
  DC *v174; // rcx
  char v175; // bl
  __int64 v176; // rax
  DCVISRGNSHARELOCK *v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rbx
  __int64 v180; // rbx
  signed __int32 v181[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v182; // [rsp+20h] [rbp-E0h]
  HDC v183; // [rsp+28h] [rbp-D8h]
  POINTL *v184; // [rsp+30h] [rbp-D0h]
  int v185; // [rsp+70h] [rbp-90h] BYREF
  DC *v186; // [rsp+78h] [rbp-88h] BYREF
  __int64 v187; // [rsp+80h] [rbp-80h]
  int v188; // [rsp+88h] [rbp-78h] BYREF
  signed int v189; // [rsp+8Ch] [rbp-74h] BYREF
  DC *v190; // [rsp+90h] [rbp-70h] BYREF
  __int64 v191; // [rsp+98h] [rbp-68h]
  int v192; // [rsp+A0h] [rbp-60h] BYREF
  XLATEOBJ *v193; // [rsp+A8h] [rbp-58h] BYREF
  char v194; // [rsp+B0h] [rbp-50h] BYREF
  char v195[15]; // [rsp+B1h] [rbp-4Fh] BYREF
  __int128 v196; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v197; // [rsp+D0h] [rbp-30h]
  __int64 v198; // [rsp+E0h] [rbp-20h]
  __int64 v199; // [rsp+E8h] [rbp-18h] BYREF
  char v200; // [rsp+F0h] [rbp-10h]
  int v201; // [rsp+F4h] [rbp-Ch]
  __int64 v202; // [rsp+F8h] [rbp-8h]
  _QWORD **v203; // [rsp+100h] [rbp+0h]
  unsigned int v204; // [rsp+108h] [rbp+8h]
  DC *v205; // [rsp+110h] [rbp+10h] BYREF
  __int64 v206; // [rsp+118h] [rbp+18h]
  DC *v207; // [rsp+120h] [rbp+20h] BYREF
  __int64 v208; // [rsp+128h] [rbp+28h]
  __int64 v209; // [rsp+130h] [rbp+30h]
  __int64 v210; // [rsp+138h] [rbp+38h]
  __int64 v211; // [rsp+140h] [rbp+40h]
  HDC v212; // [rsp+148h] [rbp+48h]
  int v213; // [rsp+150h] [rbp+50h]
  __int64 v214; // [rsp+158h] [rbp+58h]
  __int64 v215; // [rsp+160h] [rbp+60h]
  HDC v216; // [rsp+168h] [rbp+68h]
  int v217; // [rsp+170h] [rbp+70h]
  int v218; // [rsp+174h] [rbp+74h]
  int v219; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v220; // [rsp+17Ch] [rbp+7Ch]
  unsigned int v221; // [rsp+180h] [rbp+80h]
  int v222; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v223; // [rsp+188h] [rbp+88h]
  HDC v224; // [rsp+190h] [rbp+90h]
  int v225[2]; // [rsp+198h] [rbp+98h]
  HDC v226; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v227; // [rsp+1A8h] [rbp+A8h]
  __int64 v228; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v229; // [rsp+1B8h] [rbp+B8h] BYREF
  int v230; // [rsp+1C0h] [rbp+C0h]
  int v231; // [rsp+1C4h] [rbp+C4h]
  __int64 v232; // [rsp+1C8h] [rbp+C8h]
  struct MATRIX *v233; // [rsp+1D0h] [rbp+D0h] BYREF
  int v234; // [rsp+1D8h] [rbp+D8h]
  int v235; // [rsp+1DCh] [rbp+DCh]
  _QWORD v236[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v237[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  DC *v238[2]; // [rsp+200h] [rbp+100h] BYREF
  DC *v239[2]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v240; // [rsp+220h] [rbp+120h] BYREF
  __int64 v241; // [rsp+228h] [rbp+128h] BYREF
  __int64 v242; // [rsp+230h] [rbp+130h] BYREF
  RECTL v243; // [rsp+240h] [rbp+140h] BYREF
  POINTL v244; // [rsp+250h] [rbp+150h] BYREF
  int v245; // [rsp+258h] [rbp+158h]
  int v246; // [rsp+25Ch] [rbp+15Ch]
  struct _RECTL v247; // [rsp+260h] [rbp+160h] BYREF
  int v248; // [rsp+330h] [rbp+230h]

  x = a7;
  v226 = a1;
  top = a3;
  v185 = a5;
  v224 = a6;
  v15 = a8;
  v16 = 0;
  v188 = a8;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(
             a1,
             left,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a4,
             a5,
             a9 & 0xDFFFFFFF,
             a10,
             (a9 & 0x20000000) != 0 ? 2 : 0);
  v189 = a9 & 0xDFFFFFFF;
  LOBYTE(v15) = 1;
  v187 = 0LL;
  v18 = a9 & 0x5FFFFFFF;
  v186 = (DC *)HmgLockEx(a1, v15, 0LL);
  if ( !v186 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_10;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v186) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v186 + 3);
    v19 = 0LL;
    v186 = 0LL;
    goto LABEL_352;
  }
  v19 = v186;
  if ( (*((_DWORD *)v186 + 134) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v186);
LABEL_10:
    v19 = v186;
  }
  if ( v19 )
  {
    if ( (*((_DWORD *)v19 + 9) & 0x10000) == 0 )
    {
      v20 = BYTE1(v18);
      if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
        bSpDwmValidateSurface((struct XDCOBJ *)&v186, left, top, a4, a5);
      v191 = 0LL;
      LOBYTE(v20) = 1;
      v21 = (DC *)HmgLockEx(v224, v20, 0LL);
      v190 = v21;
      if ( v21 )
      {
        if ( HIDWORD(v191) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v21 + 6) + 32LL) & 0x8000) == 0 )
          {
LABEL_22:
            _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
            v190 = 0LL;
            goto LABEL_349;
          }
          v22 = *((_DWORD *)v21 + 636);
          if ( v22 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            v21 = v190;
            goto LABEL_22;
          }
        }
        if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v190) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v190 + 3);
          v190 = 0LL;
          goto LABEL_349;
        }
        if ( (*((_DWORD *)v190 + 134) & 4) != 0 )
          DC::vMarkTransformDirty(v190);
      }
      else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      {
        PsGetWin32KFilterSet();
      }
      if ( !v190 )
      {
LABEL_349:
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v186);
        v189 = 0;
        v180 = *(_QWORD *)v186;
        HmgDecrementExclusiveReferenceCountEx(v186, HIDWORD(v187), &v189);
        if ( v189 )
          bDeleteDCInternalEx(v180, 0LL);
        return v16;
      }
      y = v188;
      bSpDwmValidateSurface((struct XDCOBJ *)&v190, a7, v188, a4, v185);
      v24 = v190;
      v25 = v186;
      v26 = *((_QWORD *)v186 + 10);
      v27 = *(_DWORD *)(v26 + 312);
      if ( (((unsigned __int8)v27 ^ *(_BYTE *)(*((_QWORD *)v190 + 10) + 312LL)) & 7) != 0
        && (v189 < 0 && (v27 & 1) != 0 || (v27 & 9) == 9) )
      {
        v28 = *(_QWORD *)(v26 + 320);
        v29 = DC::dwSetLayout(v186, -1, 0);
        v25 = v186;
        v24 = v190;
        left = v28 - a4 - left;
        v220 = 0x80000000;
        y = v188;
      }
      else
      {
        v29 = v223;
        v220 = 0;
      }
      v221 = v29;
      v230 = *(_DWORD *)(*((_QWORD *)v25 + 10) + 68LL);
      v231 = *(_DWORD *)(*((_QWORD *)v25 + 10) + 312LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v25 + 10) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v229, (struct XDCOBJ *)&v186, 0x204u, 0);
        v24 = v190;
      }
      else
      {
        v229 = (unsigned __int64)v25 + 336;
      }
      v234 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 68LL);
      v235 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 312LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 10) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v233, (struct XDCOBJ *)&v190, 0x204u, 0);
        v30 = v233;
      }
      else
      {
        v30 = (DC *)((char *)v24 + 336);
        v233 = v30;
      }
      if ( (*(_DWORD *)(v229 + 32) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v229, v30) )
      {
        v31 = v185;
        v32 = a7 + a4;
        v33 = (int)v233;
        v244.x = a7;
        v244.y = y;
        v34 = y + v185;
        v245 = a7 + a4;
        v246 = y + v185;
        if ( (*((_BYTE *)v233 + 32) & 0x43) != 0x43 )
        {
          bCvtPts1((unsigned __int64)v233, &v244, 2LL);
          v34 = v246;
          v32 = v245;
          v31 = v185;
          y = v244.y;
          x = v244.x;
        }
        if ( v235 )
        {
          ++x;
          ++v32;
          v244.x = x;
          v245 = v32;
        }
        if ( x > v32 )
        {
          v244.x = v32;
          v245 = x;
        }
        if ( y > v34 )
        {
          v244.y = v34;
          v246 = y;
        }
        bottom = v31 + top;
        v243.left = left;
        right = left + a4;
        v243.top = top;
        v243.right = left + a4;
        v243.bottom = v31 + top;
        if ( (*(_BYTE *)(v229 + 32) & 0x43) != 0x43 )
        {
          bCvtPts1(v229, &v243, 2LL);
          bottom = v243.bottom;
          right = v243.right;
          top = v243.top;
          left = v243.left;
        }
        if ( v231 )
        {
          ++left;
          ++right;
          v243.left = left;
          v243.right = right;
        }
        if ( left > right )
        {
          v37 = left;
          v243.left = right;
          left = right;
          v243.right = v37;
          right = v37;
        }
        if ( top > bottom )
        {
          v38 = top;
          v243.top = bottom;
          top = bottom;
          v243.bottom = v38;
          bottom = v38;
        }
        if ( left != right && top != bottom )
        {
          v39 = v186;
          v40 = *((_DWORD *)v186 + 9);
          if ( (v40 & 0xE0) != 0 )
          {
            if ( (v40 & 0x20) != 0 )
            {
              ERECTL::operator|=((_DWORD *)v186 + 370, &v243);
              v39 = v186;
            }
            if ( (*((_DWORD *)v39 + 9) & 0x80u) != 0 )
              ERECTL::operator|=((_DWORD *)v39 + 378, &v243);
          }
          v200 = 0;
          v199 = 0LL;
          v201 = 0;
          v206 = 0LL;
          v208 = 0LL;
          v196 = 0LL;
          v197 = 0LL;
          v198 = 0LL;
          v204 = 0;
          v202 = 0LL;
          v203 = 0LL;
          v209 = 0LL;
          v212 = 0LL;
          v210 = 0LL;
          v211 = 0LL;
          v216 = 0LL;
          v214 = 0LL;
          v215 = 0LL;
          v205 = 0LL;
          v207 = 0LL;
          if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                (DEVLOCKBLTOBJ *)&v196,
                                (struct XDCOBJ *)&v186,
                                (struct XDCOBJ *)&v190,
                                v33) )
          {
            v124 = XDCOBJ::bFullScreen((XDCOBJ *)&v190);
            v16 = XDCOBJ::bFullScreen((XDCOBJ *)&v186) | v124;
            goto LABEL_219;
          }
          v41 = v186;
          v42 = (HDC)*((_QWORD *)v186 + 64);
          v224 = v42;
          if ( !v42 )
          {
            v16 = 1;
            goto LABEL_219;
          }
          v43 = *((_QWORD *)v42 + 16);
          v44 = *((_QWORD *)v186 + 12);
          v45 = (a9 & 0x5FFFFFFFu) >> 16;
          v218 = (v45 << 8) | v45;
          if ( ((v45 ^ (unsigned __int8)(16 * v45)) & 0xF0) != 0 )
          {
            v46 = *((_QWORD *)v186 + 10);
            v47 = (char *)v186 + 1600;
            v232 = (__int64)v186 + 1600;
            if ( (*(_DWORD *)(v46 + 8) & 0x1000) != 0 )
            {
              GreDCSelectBrush(v186, *(_QWORD *)(v46 + 16));
              v41 = v186;
            }
            v48 = *((_QWORD *)v41 + 10);
            v49 = *(_DWORD *)(v48 + 8);
            if ( (v49 & 1) != 0 || (*((_DWORD *)v41 + 83) & 1) != 0 )
            {
              LODWORD(v184) = 1;
              *(_DWORD *)(v48 + 8) = v49 & 0xFFFFFFFE;
              v183 = v42;
              v182 = v43;
              *((_DWORD *)v186 + 83) &= ~1u;
              EBRUSHOBJ::vInitBrush(v47, v186, *((_QWORD *)v186 + 18), v44, v182, v183, (_DWORD)v184);
              v41 = v186;
            }
          }
          else
          {
            v232 = 0LL;
          }
          v50 = (__int64)v41 + 8 * (*((_DWORD *)v41 + 10) & 1);
          v51 = *(_DWORD *)(v50 + 1432) + v243.left;
          v243.left = v51;
          v243.right += *(_DWORD *)(v50 + 1432);
          v52 = (unsigned int)(*(_DWORD *)(v50 + 1436) + v243.top);
          v243.top += *(_DWORD *)(v50 + 1436);
          v243.bottom += *(_DWORD *)(v50 + 1436);
          v53 = *((_QWORD *)v190 + 64);
          v227 = v53;
          if ( !v53 )
            goto LABEL_235;
          if ( (a11 & 2) != 0 )
            goto LABEL_97;
          if ( *(_DWORD *)(v53 + 592) )
          {
            if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v53 + 592) )
              goto LABEL_116;
            v41 = v186;
            v52 = (unsigned int)v243.top;
            v51 = v243.left;
          }
          v54 = *(_DWORD *)(v53 + 112);
          if ( (v54 & 0x800) != 0 )
          {
            v55 = UserSurfaceAccessCheck(*(_QWORD *)(v53 + 584), v52);
          }
          else
          {
            if ( (v54 & 0x10000000) == 0 )
            {
LABEL_88:
              if ( ((_DWORD)v42[29] & 8) != 0 || *((_QWORD *)v42 + 29) )
              {
                v50 = 512LL;
                if ( (*((_WORD *)v42 + 51) & 0x200) != 0 )
                  goto LABEL_116;
              }
              v56 = *((_DWORD *)v42 + 28);
              if ( (v56 & 0x800) != 0 )
              {
                v57 = UserSurfaceAccessCheck(*((_QWORD *)v42 + 73), v52);
                goto LABEL_95;
              }
              if ( (v56 & 0x10000000) != 0 )
              {
                v57 = UserScreenAccessCheck(v50, v52);
LABEL_95:
                if ( v57 )
                {
                  v41 = v186;
                  LODWORD(v52) = v243.top;
                  v51 = v243.left;
                  goto LABEL_97;
                }
LABEL_116:
                EngSetLastError(6u);
                goto LABEL_219;
              }
LABEL_97:
              v58 = *(_QWORD *)(v53 + 128);
              v59 = 0;
              v60 = *((_DWORD *)v190 + 10) & 1;
              v61 = 0;
              v62 = v51 - *((_DWORD *)v190 + 2 * v60 + 358) - v244.x;
              v63 = v52 - *((_DWORD *)v190 + 2 * v60 + 359) - v244.y;
              v64 = *(_QWORD *)(v53 + 48);
              v217 = v62;
              v223 = v63;
              if ( v64 && v53 == *(_QWORD *)(v64 + 2568) && (*(_DWORD *)(v64 + 32) & 0x20000) != 0 )
              {
                v61 = *(_DWORD *)(v64 + 2600);
                v59 = *(_DWORD *)(v64 + 2604);
              }
              if ( v62 + v61 > v51 )
                v51 = v62 + v61;
              v243.left = v51;
              if ( (int)(v63 + v59) > (int)v52 )
                LODWORD(v52) = v63 + v59;
              v65 = v243.bottom;
              v243.top = v52;
              v66 = v61 + v62 + *(_DWORD *)(v53 + 56);
              v67 = v243.right;
              if ( v66 < v243.right )
                v67 = v66;
              v243.right = v67;
              if ( (int)(v59 + v63 + *(_DWORD *)(v53 + 60)) < v243.bottom )
                v65 = v59 + v63 + *(_DWORD *)(v53 + 60);
              v243.bottom = v65;
              if ( v51 < v67 && (int)v52 < v65 )
              {
                *(_QWORD *)v225 = 0LL;
                if ( v51 < *((_DWORD *)v41 + 354)
                  || v67 > *((_DWORD *)v41 + 356)
                  || (int)v52 < *((_DWORD *)v41 + 355)
                  || v65 > *((_DWORD *)v41 + 357) )
                {
                  v69 = (char *)v41 + 2200;
                  *(_QWORD *)v225 = (char *)v41 + 2200;
                  v70 = XDCOBJ::prgnEffRao((XDCOBJ *)&v186);
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v69, v70, (struct ERECTL *)&v243, 2);
                  v68 = *(struct _RECTL *)(v69 + 4);
                  v243 = v68;
                  if ( ERECTL::bEmpty((ERECTL *)&v243) )
                  {
                    v16 = 1;
                    goto LABEL_219;
                  }
                  v41 = v186;
                  v62 = v217;
                }
                else
                {
                  v68 = v243;
                }
                v71 = *((_DWORD *)v41 + 9);
                if ( (v71 & 0xE0) == 0 )
                  goto LABEL_139;
                v247 = v68;
                v72 = *((_DWORD *)v41 + 10) & 1;
                v73 = v243.left - *((_DWORD *)v41 + 2 * v72 + 358);
                v247.left = v73;
                v74 = v68.right - *((_DWORD *)v41 + 2 * v72 + 358);
                v247.right = v74;
                v75 = v68.top - *((_DWORD *)v41 + 2 * v72 + 359);
                v247.top = v75;
                v247.bottom = v68.bottom - *((_DWORD *)v41 + 2 * v72 + 359);
                if ( (v71 & 0x40) == 0 )
                {
LABEL_139:
                  v78 = v243.left - v62;
                  v79 = 0LL;
                  v244.x = v78;
                  v193 = 0LL;
                  v244.y = v243.top - v63;
                  if ( *((_QWORD *)v190 + 64) == *((_QWORD *)v41 + 64) )
                  {
                    v80 = 0LL;
                    goto LABEL_194;
                  }
                  v185 = a10;
                  v81 = *((_QWORD *)v190 + 12);
                  if ( a10 == -1 )
                    v185 = *(_DWORD *)(*((_QWORD *)v190 + 10) + 36LL);
                  v82 = *((_QWORD *)v41 + 10);
                  v83 = *(_DWORD *)(v82 + 32);
                  v192 = *(_DWORD *)(v82 + 40);
                  v189 = *((_DWORD *)v41 + 28);
                  v188 = v83;
                  if ( (v58
                     || v43
                     && ((*(_DWORD *)(v43 + 24) & 0x800) == 0
                      || (v84 = *(_QWORD *)(v44 + 80)) != 0 && v84 != *(_QWORD *)(v44 + 72)))
                    && (v43
                     || (*(_DWORD *)(v58 + 24) & 0x800) == 0
                     || (v85 = *(_QWORD *)(v44 + 80)) != 0 && v85 != *(_QWORD *)(v44 + 72)) )
                  {
                    if ( !v58 )
                    {
LABEL_182:
                      XlateObject = CreateXlateObject(0LL, (unsigned int)v189, v58, v43, v81, v44, v192, v188, v185, 0);
                      v193 = (XLATEOBJ *)XlateObject;
                      v79 = (XLATEOBJ *)XlateObject;
                      if ( XlateObject )
                      {
                        if ( v58 && v43 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache(&v193, v58, v43, v81, v44);
                        v16 = 1;
                      }
                      else
                      {
                        v16 = 0;
                      }
LABEL_190:
                      v41 = v186;
LABEL_191:
                      v80 = (__int64)v79;
                      if ( (*((_DWORD *)v41 + 9) & 1) == 0 )
                      {
                        v245 = v243.right - v217;
                        v246 = v243.bottom - v223;
                      }
                      if ( !v16 )
                        goto LABEL_216;
LABEL_194:
                      v104 = v224;
                      ++*((_DWORD *)v224 + 23);
                      v105 = v186;
                      v106 = v190;
                      if ( *((_QWORD *)v186 + 6) == *((_QWORD *)v190 + 6)
                        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v186) && *(_QWORD *)(v107 + 3536) == v108 )
                      {
                        v109 = v227;
                      }
                      else
                      {
                        v109 = v227;
                        if ( *(_WORD *)(v227 + 100) || *(_QWORD *)(v227 + 24) || (*(_DWORD *)(v107 + 32) & 0x80u) != 0 )
                        {
                          v110 = &v196;
                          if ( (*(_DWORD *)(*((_QWORD *)v104 + 6) + 32LL) & 0x80u) == 0 )
                            v110 = 0LL;
                          v16 = SimBitBlt(
                                  (int)v104 + 24,
                                  (int)v227 + 24,
                                  0,
                                  v225[0],
                                  v80,
                                  &v243,
                                  &v244,
                                  0LL,
                                  v232,
                                  (POINTL *)v105 + 199,
                                  v218,
                                  (__int64)v110);
LABEL_216:
                          if ( v79 )
                          {
                            cEntries = (int)v79[1].cEntries;
                            if ( (int)cEntries < 0 )
                            {
                              if ( (_DWORD)cEntries == -1 )
                                FreeThreadBufferWithTag(v79);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                            }
                          }
LABEL_219:
                          v121 = v204;
                          if ( (v204 & 0x1000) == 0 )
                            goto LABEL_259;
                          if ( (v204 & 0x8000) != 0 )
                          {
                            v122 = v205;
                            if ( v205 )
                            {
                              v123 = (SURFACE *)*((_QWORD *)v205 + 64);
                              if ( (v204 & 0x400) != 0 )
                              {
                                bUnHookRedir((struct XDCOBJ *)&v205);
                                v122 = v205;
                                LOWORD(v121) = v204 & 0xFBFF;
                                v204 &= ~0x400u;
                              }
                              if ( (v121 & 0x2000) != 0 )
                              {
                                bUnHookBmpDrv((struct XDCOBJ *)&v205);
                                v122 = v205;
                                LOWORD(v121) = v204 & 0xDFFF;
                                v204 &= ~0x2000u;
                              }
                              if ( (v121 & 0x1000) != 0 )
                              {
                                if ( (*((_DWORD *)v122 + 11) & 1) == 0 )
                                {
                                  SURFACE::bUnMap(v123, &v196, v122);
                                  v122 = v205;
                                }
                                *((_DWORD *)v122 + 11) &= ~1u;
                              }
                            }
                            _InterlockedOr(v181, 0);
                            if ( v207 )
                              DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v196);
                          }
                          else
                          {
                            v125 = v207;
                            if ( v207 )
                            {
                              if ( (*((_DWORD *)v207 + 11) & 1) == 0 )
                              {
                                v126 = (SURFACE *)*((_QWORD *)v207 + 64);
                                if ( v126 )
                                {
                                  SURFACE::bUnMap(v126, &v196, 0LL);
                                  v125 = v207;
                                }
                              }
                              *((_DWORD *)v125 + 11) &= ~1u;
                            }
                            _InterlockedOr(v181, 0);
                            v127 = v205;
                            v121 = v204;
                            if ( !v205 )
                              goto LABEL_260;
                            v128 = (SURFACE *)*((_QWORD *)v205 + 64);
                            if ( (v204 & 0x400) != 0 )
                            {
                              bUnHookRedir((struct XDCOBJ *)&v205);
                              v127 = v205;
                              v121 = v204 & 0xFFFFFBFF;
                              v204 &= ~0x400u;
                            }
                            if ( (v121 & 0x2000) != 0 )
                            {
                              bUnHookBmpDrv((struct XDCOBJ *)&v205);
                              v127 = v205;
                              v121 = v204 & 0xFFFFDFFF;
                              v204 &= ~0x2000u;
                            }
                            if ( (v121 & 0x1000) == 0 )
                              goto LABEL_253;
                            if ( (*((_DWORD *)v127 + 11) & 1) == 0 )
                            {
                              SURFACE::bUnMap(v128, &v196, v127);
                              v127 = v205;
                            }
                            *((_DWORD *)v127 + 11) &= ~1u;
                          }
                          v127 = v205;
                          v121 = v204;
LABEL_253:
                          if ( !v127
                            || (v121 & 0x1000) == 0
                            || (*((_DWORD *)v127 + 9) & 0x4000) == 0
                            || !*((_QWORD *)v127 + 61)
                            || !*((_DWORD *)v127 + 126) )
                          {
                            goto LABEL_260;
                          }
                          GreUpdateSpriteDevLockEnd((struct XDCOBJ *)&v205, v121 & 0x400000);
                          v121 = v204;
LABEL_259:
                          v127 = v205;
LABEL_260:
                          v129 = v199;
                          if ( v199 )
                          {
                            if ( *v203 )
                            {
                              hbmSelectBitmap(**v203, v202, 1LL);
                              v129 = v199;
                            }
                            if ( v129 )
                            {
                              DEC_SHARE_REF_CNT(v129);
                              v129 = v199;
                            }
                            bDeleteSurface(*(_QWORD *)(v129 + 32));
                            v127 = v205;
                            v121 = v204;
                            v199 = 0LL;
                            v203 = 0LL;
                          }
                          if ( (v121 & 0x1000) != 0 )
                          {
                            if ( (v121 & 0x8000) != 0 )
                            {
                              if ( v127 )
                              {
                                v130 = *((_QWORD *)v127 + 6);
                                if ( (v121 & 0x10) != 0 )
                                {
                                  *((_DWORD *)v127 + 9) &= ~0x4000u;
                                  v131 = v205;
                                  *((_QWORD *)v205 + 64) = *(_QWORD *)(v130 + 2568);
                                  DC::vInheritSurfaceDpiScale(v131);
                                }
                                DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v196, (struct XDCOBJ *)&v205);
                                if ( v205 )
                                {
                                  XDCOBJ::RestoreAttributes((XDCOBJ *)&v205);
                                  v192 = 0;
                                  v132 = *(_QWORD *)v205;
                                  HmgDecrementExclusiveReferenceCountEx(v205, HIDWORD(v206), &v192);
                                  if ( v192 )
                                    bDeleteDCInternalEx(v132, 0LL);
                                }
                                v205 = 0LL;
                              }
                              _InterlockedOr(v181, 0);
                              if ( v207 )
                              {
                                v133 = *((_QWORD *)v207 + 6);
                                if ( (v204 & 0x20) != 0 )
                                {
                                  *((_DWORD *)v207 + 9) &= ~0x4000u;
                                  v134 = v207;
                                  *((_QWORD *)v207 + 64) = *(_QWORD *)(v133 + 2568);
                                  DC::vInheritSurfaceDpiScale(v134);
                                }
                                if ( v209 )
                                {
                                  v135 = *(_QWORD *)(v209 + 72);
                                  CurrentProcess = PsGetCurrentProcess();
                                  MmUnmapViewOfSection(CurrentProcess, v135);
                                }
                                DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v196, (struct XDCOBJ *)&v207);
                                if ( v207 )
                                {
                                  XDCOBJ::RestoreAttributes((XDCOBJ *)&v207);
                                  v188 = 0;
                                  v137 = *(_QWORD *)v207;
                                  HmgDecrementExclusiveReferenceCountEx(v207, HIDWORD(v208), &v188);
                                  if ( v188 )
                                    bDeleteDCInternalEx(v137, 0LL);
                                }
                                v207 = 0LL;
                              }
                              v204 &= ~0x8000u;
                            }
                            else
                            {
                              if ( v207 )
                              {
                                v138 = *((_QWORD *)v207 + 6);
                                if ( (v121 & 0x20) != 0 )
                                {
                                  *((_DWORD *)v207 + 9) &= ~0x4000u;
                                  v139 = v207;
                                  *((_QWORD *)v207 + 64) = *(_QWORD *)(v138 + 2568);
                                  DC::vInheritSurfaceDpiScale(v139);
                                }
                                if ( v209 )
                                {
                                  v140 = *(_QWORD *)(v209 + 72);
                                  v141 = PsGetCurrentProcess();
                                  MmUnmapViewOfSection(v141, v140);
                                }
                                DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v196, (struct XDCOBJ *)&v207);
                                if ( v207 )
                                {
                                  XDCOBJ::RestoreAttributes((XDCOBJ *)&v207);
                                  v185 = 0;
                                  v142 = *(_QWORD *)v207;
                                  HmgDecrementExclusiveReferenceCountEx(v207, HIDWORD(v208), &v185);
                                  if ( v185 )
                                    bDeleteDCInternalEx(v142, 0LL);
                                }
                                v207 = 0LL;
                              }
                              _InterlockedOr(v181, 0);
                              if ( v205 )
                              {
                                v143 = *((_QWORD *)v205 + 6);
                                if ( (v204 & 0x10) != 0 )
                                {
                                  *((_DWORD *)v205 + 9) &= ~0x4000u;
                                  v144 = v205;
                                  *((_QWORD *)v205 + 64) = *(_QWORD *)(v143 + 2568);
                                  DC::vInheritSurfaceDpiScale(v144);
                                }
                                DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v196, (struct XDCOBJ *)&v205);
                                if ( v205 )
                                {
                                  XDCOBJ::RestoreAttributes((XDCOBJ *)&v205);
                                  v219 = 0;
                                  v145 = *(_QWORD *)v205;
                                  HmgDecrementExclusiveReferenceCountEx(v205, HIDWORD(v206), &v219);
                                  if ( v219 )
                                    bDeleteDCInternalEx(v145, 0LL);
                                }
                                v205 = 0LL;
                              }
                            }
                            GreDecLockCount();
                            v204 &= ~0x1000u;
                            CurrentThread = KeGetCurrentThread();
                            if ( !(unsigned int)IsThreadCrossSessionAttached(v148, v147, v149, v150) )
                            {
                              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
                              if ( ThreadWin32Thread )
                              {
                                v152 = *ThreadWin32Thread;
                                if ( v152 )
                                {
                                  *(_QWORD *)(v152 + 320) = 0LL;
                                  *(_QWORD *)(v152 + 312) = 0LL;
                                }
                              }
                            }
                            v121 = v204;
                          }
                          else if ( (v121 & 0x800000) != 0 )
                          {
                            GreDecLockCount();
                            v121 = v204 & 0xFF7FFFFF;
                            v204 &= ~0x800000u;
                          }
                          if ( (_QWORD)v196 )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v196);
                            GreReleaseSemaphoreInternal(v196);
                            v121 = v204;
                          }
                          if ( *((_QWORD *)&v196 + 1) )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)&v196 + 1));
                            GreReleaseSemaphoreInternal(*((_QWORD *)&v196 + 1));
                            v121 = v204;
                          }
                          if ( (v121 & 8) != 0 )
                            v204 = v121 & 0xFFFFFFF7;
                          if ( (_QWORD)v197 )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v197);
                            GreReleaseSemaphoreInternal(v197);
                          }
                          if ( v211 )
                          {
                            v238[1] = 0LL;
                            XDCOBJ::vLock((XDCOBJ *)v238, v212);
                            LOBYTE(v153) = 5;
                            v154 = HmgShareLock(v210, v153);
                            LOBYTE(v155) = 5;
                            v156 = (__int64 *)v154;
                            v157 = HmgShareLock(v211, v155);
                            v158 = v238[0];
                            v159 = v157;
                            v160 = *v156;
                            v161 = v238[0];
                            *((_QWORD *)v238[0] + 64) = v157;
                            DC::vInheritSurfaceDpiScale(v161);
                            DEC_SHARE_REF_CNT(v156);
                            DEC_SHARE_REF_CNT(v159);
                            GreDereferenceObject(v160, 1LL);
                            v212 = 0LL;
                            v210 = 0LL;
                            *((_DWORD *)v158 + 9) |= v213;
                            if ( (*((_DWORD *)v158 + 9) & 0x200) != 0 )
                            {
                              v162 = 0;
                              if ( !(unsigned int)GreGetLockCount()
                                && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                              {
                                GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                                EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                                v162 = 1;
                              }
                              DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v194);
                              LOBYTE(v182) = 5;
                              v163 = HmgShareUnlockRemoveObject(v211, 0LL, 0LL, 0LL, v182);
                              if ( v163 )
                                SURFACE::bDeleteSurface(v163, 0LL, 1LL);
                              *((_QWORD *)v158 + 65) = 0LL;
                              DC::vClearRendering(v158);
                              v211 = 0LL;
                              DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v164);
                              if ( v162 )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                                GreReleaseSemaphoreInternal(ghsemGreLock);
                              }
                            }
                            else
                            {
                              LOBYTE(v182) = 5;
                              v165 = HmgShareUnlockRemoveObject(v211, 0LL, 0LL, 0LL, v182);
                              if ( v165 )
                                SURFACE::bDeleteSurface(v165, 0LL, 1LL);
                              *((_QWORD *)v158 + 65) = 0LL;
                              v211 = 0LL;
                            }
                            XDCOBJ::vUnlockFast((XDCOBJ *)v238);
                            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                          }
                          if ( v215 )
                          {
                            v239[1] = 0LL;
                            XDCOBJ::vLock((XDCOBJ *)v239, v216);
                            LOBYTE(v166) = 5;
                            v167 = HmgShareLock(v214, v166);
                            LOBYTE(v168) = 5;
                            v169 = (__int64 *)v167;
                            v170 = HmgShareLock(v215, v168);
                            v171 = v239[0];
                            v172 = v170;
                            v173 = *v169;
                            v174 = v239[0];
                            *((_QWORD *)v239[0] + 64) = v170;
                            DC::vInheritSurfaceDpiScale(v174);
                            DEC_SHARE_REF_CNT(v169);
                            DEC_SHARE_REF_CNT(v172);
                            GreDereferenceObject(v173, 1LL);
                            v216 = 0LL;
                            v214 = 0LL;
                            if ( (*((_DWORD *)v171 + 9) & 0x200) != 0 )
                            {
                              v175 = 0;
                              if ( !(unsigned int)GreGetLockCount()
                                && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                              {
                                GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                                EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                                v175 = 1;
                              }
                              DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v195);
                              LOBYTE(v182) = 5;
                              v176 = HmgShareUnlockRemoveObject(v215, 0LL, 0LL, 0LL, v182);
                              if ( v176 )
                                SURFACE::bDeleteSurface(v176, 0LL, 1LL);
                              *((_QWORD *)v171 + 65) = 0LL;
                              DC::vClearRendering(v171);
                              v215 = 0LL;
                              DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v177);
                              if ( v175 )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                                GreReleaseSemaphoreInternal(ghsemGreLock);
                              }
                            }
                            else
                            {
                              LOBYTE(v182) = 5;
                              v178 = HmgShareUnlockRemoveObject(v215, 0LL, 0LL, 0LL, v182);
                              if ( v178 )
                                SURFACE::bDeleteSurface(v178, 0LL, 1LL);
                              *((_QWORD *)v171 + 65) = 0LL;
                              v215 = 0LL;
                            }
                            XDCOBJ::vUnlockFast((XDCOBJ *)v239);
                            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                          }
                          SURFMEM::~SURFMEM((SURFMEM *)&v199);
                          goto LABEL_345;
                        }
                      }
                      if ( v218 == 52428 )
                      {
                        v111 = (a11 & 1) == 0;
                        v248 = a11 & 1;
                        v112 = *((_QWORD *)v104 + 6);
                        if ( !v111 )
                        {
                          EtwWindowRendering(
                            *((_QWORD *)v105 + 60),
                            *((_QWORD *)v105 + 61),
                            **((_QWORD **)v105 + 64),
                            (unsigned int)v243.left,
                            v243.top,
                            v243.right,
                            v243.bottom,
                            *((_QWORD *)v106 + 60),
                            *((_QWORD *)v106 + 61),
                            **((_QWORD **)v106 + 64),
                            v244.x,
                            v244.y,
                            v244.x + abs32(v243.right - v243.bottom),
                            v244.y + abs32(v243.bottom - v243.top));
                          v104 = v224;
                          *((_WORD *)v224 + 51) |= 0x40u;
                          v113 = W32GetThreadWin32Thread(KeGetCurrentThread());
                          if ( v113 )
                            *(_BYTE *)(v113 + 328) = 0;
                          GreClientRgnUpdated(0LL);
                          GreClientRgnUpdatedStable();
                          v79 = v193;
                        }
                        if ( ((_DWORD)v104[28] & 0x400) != 0 )
                          v114 = (*(__int64 (__fastcall **)(HDC, __int64, _QWORD, __int64, RECTL *, POINTL *))(v112 + 2856))(
                                   v104 + 6,
                                   v109 + 24,
                                   *(_QWORD *)v225,
                                   v80,
                                   &v243,
                                   &v244);
                        else
                          v114 = ((__int64 (__fastcall *)(HDC, __int64, _QWORD, __int64, RECTL *, POINTL *))EngCopyBits)(
                                   v104 + 6,
                                   v109 + 24,
                                   *(_QWORD *)v225,
                                   v80,
                                   &v243,
                                   &v244);
                        v16 = v114;
                        if ( v248 )
                        {
                          *((_WORD *)v104 + 51) &= ~0x40u;
                          v115 = W32GetThreadWin32Thread(KeGetCurrentThread());
                          v79 = v193;
                          if ( v115 )
                            *(_BYTE *)(v115 + 328) = 1;
                        }
                      }
                      else
                      {
                        v116 = SURFACE::pfnBitBlt((SURFACE *)v104);
                        v16 = ((__int64 (__fastcall *)(HDC, __int64, _QWORD, _QWORD, __int64, RECTL *, POINTL *, _QWORD, __int64, __int64, int))v116)(
                                v104 + 6,
                                v117,
                                0LL,
                                *(_QWORD *)v225,
                                v80,
                                &v243,
                                &v244,
                                0LL,
                                v232,
                                v118,
                                v119);
                      }
                      goto LABEL_216;
                    }
                    if ( !v43
                      || ((v86 = *(_QWORD *)(v58 + 128), v86 == v58)
                        ? (v87 = *(_DWORD *)(v58 + 32))
                        : (v87 = *(_DWORD *)(v86 + 32)),
                          (v88 = *(_QWORD *)(v43 + 128), v88 == v43)
                        ? (v89 = *(_DWORD *)(v43 + 32))
                        : (v89 = *(_DWORD *)(v88 + 32)),
                          v87 != v89) )
                    {
                      if ( v43 )
                      {
                        v90 = *(_DWORD *)(v58 + 56);
                        v241 = v44;
                        v242 = v81;
                        v240 = v43;
                        v226 = (HDC)ghsemPalette;
                        GreAcquireSemaphore(ghsemPalette);
                        v91 = *(_QWORD *)(v58 + 128);
                        for ( i = 0; i < 8; ++i )
                        {
                          if ( v91 == v58 )
                            v93 = *(_DWORD *)(v58 + 32);
                          else
                            v93 = *(_DWORD *)(v91 + 32);
                          if ( *((_DWORD *)&xlateTable + 8 * v90 + 4) == v93 )
                          {
                            v94 = XEPALOBJ::ulTime((XEPALOBJ *)&v240);
                            if ( *(_DWORD *)(v95 + v96 + 20) == v94 )
                            {
                              v97 = XEPALOBJ::ulTime((XEPALOBJ *)&v241);
                              if ( *(_DWORD *)(v98 + v99 + 28) == v97 )
                              {
                                v100 = *(XLATEOBJ **)(v98 + v99 + 8);
                                v193 = v100;
                                flXlate = v100[3].flXlate;
                                if ( (flXlate & 0x6000) == 0 )
                                {
                                  if ( (v100->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                    || (v100->flXlate & 4) != 0
                                    && v185 == v100[1].iUniq
                                    && (v102 = XEPALOBJ::ulTime((XEPALOBJ *)&v242), *(_DWORD *)(v98 + v99 + 24) == v102)
                                    || (flXlate & 0x100) != 0
                                    && v192 == v100[1].flXlate
                                    && v188 == *(_DWORD *)&v100[1].iSrcType )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)(v98 + v99));
                                    *(_DWORD *)(v58 + 56) = v90;
                                    SEMOBJ::vUnlock((SEMOBJ *)&v226);
                                    v79 = v193;
                                    v16 = 1;
                                    goto LABEL_190;
                                  }
                                }
                              }
                            }
                          }
                          v90 = ((_BYTE)v90 + 1) & 7;
                        }
                        if ( ghsemPalette )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                          GreReleaseSemaphoreInternal(ghsemPalette);
                        }
                      }
                      goto LABEL_182;
                    }
                  }
                  v79 = xloIdent;
                  v16 = 1;
                  v193 = xloIdent;
                  goto LABEL_191;
                }
                v76 = (struct _RECTL *)((char *)v41 + 1496);
                v77 = *((_DWORD *)v41 + 374);
                if ( v77 == *((_DWORD *)v41 + 376) || *((_DWORD *)v41 + 375) == *((_DWORD *)v41 + 377) )
                {
                  *v76 = v247;
                }
                else
                {
                  if ( v73 < v77 )
                  {
                    v76->left = v73;
                    v41 = v186;
                    v74 = v247.right;
                    v75 = v247.top;
                  }
                  if ( v75 < v76->top )
                  {
                    v76->top = v75;
                    v41 = v186;
                    v74 = v247.right;
                  }
                  if ( v74 > v76->right )
                  {
                    v76->right = v74;
                    v41 = v186;
                  }
                  if ( v247.bottom <= v76->bottom )
                    goto LABEL_133;
                  v76->bottom = v247.bottom;
                }
                v41 = v186;
LABEL_133:
                v228 = *((_QWORD *)v41 + 198);
                if ( v228 )
                {
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v237);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v237);
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v236);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v236);
                  if ( v237[0] )
                  {
                    if ( v236[0] )
                    {
                      RGNOBJ::vSet((RGNOBJ *)v236, &v247);
                      if ( RGNOBJ::bMerge(
                             (RGNOBJ *)v237,
                             (struct RGNOBJ *)&v228,
                             (struct RGNOBJ *)v236,
                             BYTE2(gafjRgnOp)) )
                      {
                        RGNOBJ::vSwap((RGNOBJ *)&v228, (struct RGNOBJ *)v237);
                        *((_QWORD *)v186 + 198) = v228;
                      }
                    }
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v236);
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v237);
                  v41 = v186;
                }
                goto LABEL_139;
              }
LABEL_235:
              v16 = 1;
              goto LABEL_219;
            }
            v55 = UserScreenAccessCheck(v50, v52);
          }
          if ( !v55 )
            goto LABEL_116;
          v41 = v186;
          v52 = (unsigned int)v243.top;
          v51 = v243.left;
          goto LABEL_88;
        }
        v16 = 1;
      }
      else
      {
        v16 = GreStretchBltInternal(v226, left, top, a4, v185, v224, a7, y, a4, v185, v18, a10, 0);
      }
LABEL_345:
      if ( v220 )
        DC::dwSetLayout(v186, -1, v221);
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v190);
      v222 = 0;
      v179 = *(_QWORD *)v190;
      HmgDecrementExclusiveReferenceCountEx(v190, HIDWORD(v191), &v222);
      if ( v222 )
        bDeleteDCInternalEx(v179, 0LL);
      goto LABEL_349;
    }
LABEL_352:
    if ( v19 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v186);
  }
  return v16;
}

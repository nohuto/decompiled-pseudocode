/*
 * XREFs of NtGdiBitBltInternal @ 0x1C006FAB0
 * Callers:
 *     xxxClientGetTextExtentPointW @ 0x1C000CC7C (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C (-UT_InvertCaret@@YAXXZ.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067408 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiBitBlt @ 0x1C006FA90 (NtGdiBitBlt.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009EAEC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00D65E0 (NtUserBitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1C011C450 (RecolorDeskPattern.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     UpdateSpriteArea @ 0x1C013534C (UpdateSpriteArea.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01E3D2C (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0200C88 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020103C (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0203A74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C020BA84 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020CF5C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0210840 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0214B68 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C0215560 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C0219728 (BltColor.c)
 *     DxgkEngBltViaGDI @ 0x1C0250100 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreClientRgnUpdatedStable @ 0x1C006CBE4 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA14 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006FA54 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0072FD4 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007302C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007316C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0073288 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00733A4 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0081748 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00842D8 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0086D84 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0089750 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0096770 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0195894 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02513F8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C025159C (SimBitBlt.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027A734 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C027CBD0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        int a2,
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
  int v12; // r15d
  int v13; // esi
  __int64 v15; // rdx
  unsigned int v16; // r12d
  int v18; // r14d
  DC *v19; // rcx
  __int64 v20; // rdx
  DC *v21; // rax
  int v22; // ebx
  DC *v23; // rcx
  int v24; // ebx
  DC *v25; // rdx
  DC *v26; // r9
  __int64 v27; // r10
  int v28; // r8d
  __int64 v29; // rbx
  unsigned int v30; // eax
  struct MATRIX *v31; // rdx
  int v32; // ecx
  int v33; // edx
  int v34; // r9d
  int v35; // r8d
  int v36; // r8d
  int v37; // edx
  int v38; // eax
  int v39; // eax
  DC *v40; // rcx
  int v41; // eax
  DC *v42; // r8
  HDC v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned __int8 v46; // cl
  __int64 v47; // rdx
  char *v48; // rdi
  __int64 v49; // rdx
  int v50; // ecx
  __int64 v51; // r14
  __int64 v52; // rax
  DC *v53; // r10
  __int64 v54; // r9
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // r13
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rdi
  int v63; // ecx
  __int64 v64; // rax
  int v65; // r12d
  unsigned int v66; // r14d
  int v67; // r11d
  int v68; // ebx
  __int64 v69; // rax
  int v70; // eax
  int v71; // ecx
  int v72; // r11d
  int v73; // ecx
  __int128 v74; // xmm6
  char *v75; // rbx
  struct REGION *v76; // rax
  XLATEOBJ *v77; // rbx
  __int64 v78; // rax
  XLATEOBJ *v79; // r15
  __int64 v80; // r14
  __int64 v81; // rax
  int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // edx
  __int64 v87; // rax
  int v88; // ecx
  unsigned int v89; // r13d
  struct _XLATETABLE near *v90; // r11
  unsigned int v91; // r10d
  __int64 v92; // r12
  int v93; // eax
  unsigned int v94; // eax
  __int64 v95; // r9
  unsigned int v96; // eax
  __int64 v97; // r9
  XLATEOBJ *v98; // rdx
  FLONG flXlate; // r8d
  unsigned int v100; // eax
  __int64 XlateObject; // rax
  HDC v102; // rsi
  DC *v103; // r14
  DC *v104; // r13
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r12
  __int128 *v108; // rax
  bool v109; // zf
  __int64 v110; // rdi
  __int64 v111; // rax
  unsigned int v112; // eax
  __int64 v113; // rax
  int (*v114)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v115; // rdx
  __int64 v116; // r8
  int v117; // r9d
  __int64 cEntries; // rax
  __int64 v119; // rcx
  int v120; // r12d
  DC *v121; // rdx
  SURFACE *v122; // rcx
  DC *v123; // rdx
  SURFACE *v124; // rbx
  __int64 v125; // rdx
  __int64 v126; // rax
  DC *v127; // rcx
  __int64 v128; // rbx
  __int64 CurrentProcess; // rax
  __int64 v130; // rax
  DC *v131; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rdx
  HSURF *v137; // rdi
  __int64 v138; // rax
  DC *v139; // r14
  __int64 v140; // rbx
  HSURF v141; // rsi
  DC *v142; // rcx
  char v143; // bl
  __int64 v144; // rax
  DCVISRGNSHARELOCK *v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rdx
  HSURF *v150; // rdi
  __int64 v151; // rax
  DC *v152; // r14
  __int64 v153; // rbx
  HSURF v154; // rsi
  DC *v155; // rcx
  char v156; // bl
  __int64 v157; // rax
  DCVISRGNSHARELOCK *v158; // rcx
  __int64 v159; // rax
  signed __int32 v160[8]; // [rsp+0h] [rbp-100h] BYREF
  int v161[2]; // [rsp+20h] [rbp-E0h]
  HDC v162; // [rsp+28h] [rbp-D8h]
  int v163[2]; // [rsp+30h] [rbp-D0h]
  int v164; // [rsp+70h] [rbp-90h]
  DC *v165[2]; // [rsp+78h] [rbp-88h] BYREF
  DC *v166; // [rsp+88h] [rbp-78h] BYREF
  __int64 v167; // [rsp+90h] [rbp-70h]
  int v168; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v169; // [rsp+A0h] [rbp-60h] BYREF
  int v170; // [rsp+A8h] [rbp-58h]
  char v171; // [rsp+ACh] [rbp-54h] BYREF
  char v172[3]; // [rsp+ADh] [rbp-53h] BYREF
  int v173; // [rsp+B0h] [rbp-50h]
  int v174; // [rsp+B4h] [rbp-4Ch]
  unsigned int v175; // [rsp+B8h] [rbp-48h]
  unsigned int v176; // [rsp+BCh] [rbp-44h]
  HDC v177; // [rsp+C0h] [rbp-40h]
  __int128 v178; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v179; // [rsp+E0h] [rbp-20h]
  __int64 v180; // [rsp+F0h] [rbp-10h]
  __int64 v181; // [rsp+F8h] [rbp-8h] BYREF
  char v182; // [rsp+100h] [rbp+0h]
  int v183; // [rsp+104h] [rbp+4h]
  __int64 v184; // [rsp+108h] [rbp+8h]
  _QWORD **v185; // [rsp+110h] [rbp+10h]
  unsigned int v186; // [rsp+118h] [rbp+18h]
  DC *v187[2]; // [rsp+120h] [rbp+20h] BYREF
  DC *v188[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v189; // [rsp+140h] [rbp+40h]
  __int64 v190; // [rsp+148h] [rbp+48h]
  __int64 v191; // [rsp+150h] [rbp+50h]
  HDC v192; // [rsp+158h] [rbp+58h]
  int v193; // [rsp+160h] [rbp+60h]
  __int64 v194; // [rsp+168h] [rbp+68h]
  __int64 v195; // [rsp+170h] [rbp+70h]
  HDC v196; // [rsp+178h] [rbp+78h]
  char *v197; // [rsp+180h] [rbp+80h]
  unsigned int v198; // [rsp+188h] [rbp+88h]
  int v199; // [rsp+18Ch] [rbp+8Ch]
  __int64 v200; // [rsp+190h] [rbp+90h]
  char *v201; // [rsp+198h] [rbp+98h]
  HDC v202; // [rsp+1A0h] [rbp+A0h] BYREF
  char *v203; // [rsp+1A8h] [rbp+A8h] BYREF
  int v204; // [rsp+1B0h] [rbp+B0h]
  int v205; // [rsp+1B4h] [rbp+B4h]
  struct MATRIX *v206; // [rsp+1B8h] [rbp+B8h] BYREF
  int v207; // [rsp+1C0h] [rbp+C0h]
  int v208; // [rsp+1C4h] [rbp+C4h]
  DC *v209[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  DC *v210[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v211; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v212; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v213; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v214; // [rsp+200h] [rbp+100h] BYREF
  struct ECLIPOBJ *v215[2]; // [rsp+210h] [rbp+110h] BYREF
  int v216; // [rsp+220h] [rbp+120h] BYREF
  int v217; // [rsp+224h] [rbp+124h]
  int v218; // [rsp+228h] [rbp+128h]
  int v219; // [rsp+22Ch] [rbp+12Ch]
  int v220; // [rsp+2F0h] [rbp+1F0h]

  v12 = a7;
  v202 = a1;
  v13 = a3;
  v164 = a5;
  v177 = a6;
  v15 = a8;
  v16 = 0;
  v168 = a8;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(
             a1,
             a2,
             a3,
             a5,
             a6,
             a7,
             a8,
             a4,
             a5,
             a9 & 0xDFFFFFFF,
             a10,
             (a9 & 0x20000000) != 0 ? 2 : 0);
  v170 = a9 & 0xDFFFFFFF;
  LOBYTE(v15) = 1;
  v165[1] = 0LL;
  v18 = a9 & 0x5FFFFFFF;
  v165[0] = (DC *)HmgLockEx(a1, v15, 0LL);
  if ( v165[0] )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v165) )
    {
      v19 = v165[0];
      if ( (*((_DWORD *)v165[0] + 134) & 4) != 0 )
      {
        DC::vMarkTransformDirty(v165[0]);
        v19 = v165[0];
      }
      if ( v19 && (*((_DWORD *)v19 + 9) & 0x10000) == 0 )
      {
        v20 = BYTE1(v18);
        if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
          bSpDwmValidateSurface((struct XDCOBJ *)v165, a2, v13, a4, a5);
        v167 = 0LL;
        LOBYTE(v20) = 1;
        v21 = (DC *)HmgLockEx(v177, v20, 0LL);
        v166 = v21;
        if ( !v21 )
          goto LABEL_304;
        if ( HIDWORD(v167) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v21 + 6) + 32LL) & 0x8000) == 0 )
          {
LABEL_22:
            _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
            v166 = 0LL;
LABEL_304:
            XDCOBJ::RestoreAttributes((XDCOBJ *)v165);
            _InterlockedDecrement((volatile signed __int32 *)v165[0] + 3);
            return v16;
          }
          v22 = *((_DWORD *)v21 + 636);
          if ( v22 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            v21 = v166;
            goto LABEL_22;
          }
        }
        if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v166) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v166 + 3);
          v166 = 0LL;
          goto LABEL_304;
        }
        v23 = v166;
        if ( (*((_DWORD *)v166 + 134) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v166);
          v23 = v166;
        }
        if ( !v23 )
          goto LABEL_304;
        v24 = v168;
        bSpDwmValidateSurface((struct XDCOBJ *)&v166, a7, v168, a4, v164);
        v25 = v166;
        v26 = v165[0];
        v27 = *((_QWORD *)v165[0] + 10);
        v28 = *(_DWORD *)(v27 + 312);
        if ( (((unsigned __int8)v28 ^ *(_BYTE *)(*((_QWORD *)v166 + 10) + 312LL)) & 7) != 0
          && (v170 < 0 && (v28 & 1) != 0 || (v28 & 9) == 9) )
        {
          v29 = *(_QWORD *)(v27 + 320);
          v30 = DC::dwSetLayout(v165[0], -1, 0);
          v26 = v165[0];
          v25 = v166;
          a2 = v29 - a4 - a2;
          v175 = 0x80000000;
          v24 = v168;
        }
        else
        {
          v30 = v176;
          v175 = 0;
        }
        v170 = v30;
        v204 = *(_DWORD *)(*((_QWORD *)v26 + 10) + 68LL);
        v205 = *(_DWORD *)(*((_QWORD *)v26 + 10) + 312LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v26 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v203, (struct XDCOBJ *)v165, 0x204u, 0);
          v25 = v166;
        }
        else
        {
          v203 = (char *)v26 + 336;
        }
        v207 = *(_DWORD *)(*((_QWORD *)v25 + 10) + 68LL);
        v208 = *(_DWORD *)(*((_QWORD *)v25 + 10) + 312LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v25 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v206, (struct XDCOBJ *)&v166, 0x204u, 0);
          v31 = v206;
        }
        else
        {
          v31 = (DC *)((char *)v25 + 336);
          v206 = v31;
        }
        if ( (v203[32] & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v203, v31) )
        {
          v32 = v164;
          v33 = a7 + a4;
          v34 = (int)v206;
          v216 = a7;
          v217 = v24;
          v35 = v24 + v164;
          v218 = a7 + a4;
          v219 = v24 + v164;
          if ( (*((_BYTE *)v206 + 32) & 0x43) != 0x43 )
          {
            bCvtPts1(v206, &v216, 2LL);
            v35 = v219;
            v33 = v218;
            v32 = v164;
            v24 = v217;
            v12 = v216;
          }
          if ( v208 )
          {
            ++v12;
            ++v33;
            v216 = v12;
            v218 = v33;
          }
          if ( v12 > v33 )
          {
            v216 = v33;
            v218 = v12;
          }
          if ( v24 > v35 )
          {
            v217 = v35;
            v219 = v24;
          }
          v36 = v32 + v13;
          v215[0] = (struct ECLIPOBJ *)__PAIR64__(v13, a2);
          v37 = a2 + a4;
          LODWORD(v215[1]) = a2 + a4;
          HIDWORD(v215[1]) = v32 + v13;
          if ( (v203[32] & 0x43) != 0x43 )
          {
            bCvtPts1(v203, v215, 2LL);
            v36 = HIDWORD(v215[1]);
            v37 = (int)v215[1];
            v13 = HIDWORD(v215[0]);
            a2 = (int)v215[0];
          }
          if ( v205 )
          {
            ++a2;
            ++v37;
            LODWORD(v215[0]) = a2;
            LODWORD(v215[1]) = v37;
          }
          if ( a2 > v37 )
          {
            v38 = a2;
            LODWORD(v215[0]) = v37;
            a2 = v37;
            LODWORD(v215[1]) = v38;
            v37 = v38;
          }
          if ( v13 > v36 )
          {
            v39 = v13;
            HIDWORD(v215[0]) = v36;
            v13 = v36;
            HIDWORD(v215[1]) = v39;
            v36 = v39;
          }
          if ( a2 != v37 && v13 != v36 )
          {
            v40 = v165[0];
            v41 = *((_DWORD *)v165[0] + 9);
            if ( (v41 & 0xE0) != 0 )
            {
              if ( (v41 & 0x20) != 0 )
              {
                ERECTL::operator|=((char *)v165[0] + 1480, v215);
                v40 = v165[0];
              }
              if ( (*((_DWORD *)v40 + 9) & 0x80u) != 0 )
                ERECTL::operator|=((char *)v40 + 1512, v215);
            }
            v182 = 0;
            v181 = 0LL;
            v183 = 0;
            v187[1] = 0LL;
            v188[1] = 0LL;
            v178 = 0LL;
            v179 = 0LL;
            v180 = 0LL;
            v186 = 0;
            v184 = 0LL;
            v185 = 0LL;
            v189 = 0LL;
            v192 = 0LL;
            v190 = 0LL;
            v191 = 0LL;
            v196 = 0LL;
            v194 = 0LL;
            v195 = 0LL;
            v187[0] = 0LL;
            v188[0] = 0LL;
            if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                  (DEVLOCKBLTOBJ *)&v178,
                                  (struct XDCOBJ *)v165,
                                  (struct XDCOBJ *)&v166,
                                  v34) )
            {
              v120 = XDCOBJ::bFullScreen((XDCOBJ *)&v166);
              v16 = XDCOBJ::bFullScreen((XDCOBJ *)v165) | v120;
              goto LABEL_204;
            }
            v42 = v165[0];
            v43 = (HDC)*((_QWORD *)v165[0] + 64);
            v177 = v43;
            if ( !v43 )
            {
              v16 = 1;
              goto LABEL_204;
            }
            v44 = *((_QWORD *)v43 + 16);
            v45 = *((_QWORD *)v165[0] + 12);
            v46 = (a9 & 0x5FFFFFFFu) >> 16;
            v174 = (v46 << 8) | v46;
            if ( ((v46 ^ (unsigned __int8)(16 * v46)) & 0xF0) != 0 )
            {
              v47 = *((_QWORD *)v165[0] + 10);
              v48 = (char *)v165[0] + 1600;
              v201 = (char *)v165[0] + 1600;
              if ( (*(_DWORD *)(v47 + 8) & 0x1000) != 0 )
              {
                GreDCSelectBrush(v165[0], *(_QWORD *)(v47 + 16));
                v42 = v165[0];
              }
              v49 = *((_QWORD *)v42 + 10);
              v50 = *(_DWORD *)(v49 + 8);
              if ( (v50 & 1) != 0 || (*((_DWORD *)v42 + 83) & 1) != 0 )
              {
                v163[0] = 1;
                *(_DWORD *)(v49 + 8) = v50 & 0xFFFFFFFE;
                v162 = v43;
                *(_QWORD *)v161 = v44;
                *((_DWORD *)v165[0] + 83) &= ~1u;
                EBRUSHOBJ::vInitBrush(v48, v165[0], *((_QWORD *)v165[0] + 18), v45, *(_QWORD *)v161, v162, v163[0]);
                v42 = v165[0];
              }
            }
            else
            {
              v201 = 0LL;
            }
            v51 = 1432LL;
            v52 = 1432LL;
            v53 = v166;
            if ( (*((_BYTE *)v42 + 40) & 1) != 0 )
              v52 = 1440LL;
            v54 = (unsigned int)(*(_DWORD *)((char *)v42 + v52) + LODWORD(v215[0]));
            LODWORD(v215[0]) += *(_DWORD *)((char *)v42 + v52);
            v55 = (__int64)v42 + v52;
            LODWORD(v215[1]) += *(_DWORD *)((char *)v42 + v52);
            v56 = (unsigned int)(*(_DWORD *)((char *)v42 + v52 + 4) + HIDWORD(v215[0]));
            HIDWORD(v215[0]) += *(_DWORD *)((char *)v42 + v52 + 4);
            HIDWORD(v215[1]) += *(_DWORD *)((char *)v42 + v52 + 4);
            v57 = *((_QWORD *)v166 + 64);
            v200 = v57;
            if ( !v57 )
              goto LABEL_213;
            if ( (a11 & 2) != 0 )
            {
LABEL_96:
              v62 = *(_QWORD *)(v57 + 128);
              v63 = *((_DWORD *)v53 + 10) & 1;
              if ( v63 )
                v51 = 1440LL;
              v64 = 1436LL;
              v65 = v54 - *(_DWORD *)((char *)v53 + v51) - v216;
              v199 = v65;
              if ( v63 )
                v64 = 1444LL;
              v66 = v56 - *(_DWORD *)((char *)v53 + v64) - v217;
              v67 = 0;
              v68 = 0;
              v176 = v66;
              v69 = *(_QWORD *)(v57 + 48);
              if ( v69 && v57 == *(_QWORD *)(v69 + 2568) && (*(_DWORD *)(v69 + 32) & 0x20000) != 0 )
              {
                v67 = *(_DWORD *)(v69 + 2600);
                v68 = *(_DWORD *)(v69 + 2604);
              }
              if ( v67 + v65 > (int)v54 )
                LODWORD(v54) = v67 + v65;
              LODWORD(v215[0]) = v54;
              if ( (int)(v68 + v66) > (int)v56 )
                v56 = v68 + v66;
              v70 = HIDWORD(v215[1]);
              HIDWORD(v215[0]) = v56;
              v71 = v67 + *(_DWORD *)(v57 + 56);
              v72 = (int)v215[1];
              v73 = v65 + v71;
              if ( v73 < SLODWORD(v215[1]) )
                v72 = v73;
              LODWORD(v215[1]) = v72;
              if ( (int)(v66 + v68 + *(_DWORD *)(v57 + 60)) < SHIDWORD(v215[1]) )
                v70 = v66 + v68 + *(_DWORD *)(v57 + 60);
              HIDWORD(v215[1]) = v70;
              if ( (int)v54 < v72 && (int)v56 < v70 )
              {
                v197 = 0LL;
                if ( (int)v54 < *((_DWORD *)v42 + 354)
                  || v72 > *((_DWORD *)v42 + 356)
                  || (int)v56 < *((_DWORD *)v42 + 355)
                  || v70 > *((_DWORD *)v42 + 357) )
                {
                  v75 = (char *)v42 + 2200;
                  v197 = (char *)v42 + 2200;
                  v76 = XDCOBJ::prgnEffRao((XDCOBJ *)v165);
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v75, v76, (struct ERECTL *)v215, 2);
                  v74 = *(_OWORD *)(v75 + 4);
                  *(_OWORD *)v215 = v74;
                  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v215) )
                  {
                    v16 = 1;
                    goto LABEL_204;
                  }
                  v42 = v165[0];
                  v53 = v166;
                  v56 = HIDWORD(v215[0]);
                  LODWORD(v54) = v215[0];
                }
                else
                {
                  v74 = *(_OWORD *)v215;
                }
                if ( (*((_DWORD *)v42 + 9) & 0xE0) != 0 )
                {
                  v214 = v74;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v165, (struct ECLIPOBJ *)v56, (struct ERECTL *)&v214);
                  v42 = v165[0];
                  v53 = v166;
                  LODWORD(v56) = HIDWORD(v215[0]);
                  LODWORD(v54) = v215[0];
                }
                v216 = v54 - v65;
                v77 = 0LL;
                v217 = v56 - v66;
                v78 = *((_QWORD *)v42 + 64);
                v169 = 0LL;
                if ( *((_QWORD *)v53 + 64) == v78 )
                {
                  v79 = 0LL;
                  goto LABEL_179;
                }
                v80 = *((_QWORD *)v53 + 12);
                v164 = a10;
                if ( a10 == -1 )
                  v164 = *(_DWORD *)(*((_QWORD *)v53 + 10) + 36LL);
                v81 = *((_QWORD *)v42 + 10);
                v82 = *(_DWORD *)(v81 + 32);
                v173 = *(_DWORD *)(v81 + 40);
                v198 = *((_DWORD *)v42 + 28);
                v168 = v82;
                if ( (v62
                   || v44
                   && ((*(_DWORD *)(v44 + 24) & 0x800) == 0
                    || (v83 = *(_QWORD *)(v45 + 80)) != 0 && v83 != *(_QWORD *)(v45 + 72)))
                  && (v44
                   || (*(_DWORD *)(v62 + 24) & 0x800) == 0
                   || (v84 = *(_QWORD *)(v45 + 80)) != 0 && v84 != *(_QWORD *)(v45 + 72)) )
                {
                  if ( !v62 )
                  {
LABEL_167:
                    XlateObject = CreateXlateObject(0LL, v198, v62, v44, v80, v45, v173, v168, v164, 0);
                    v169 = (XLATEOBJ *)XlateObject;
                    v77 = (XLATEOBJ *)XlateObject;
                    if ( XlateObject )
                    {
                      if ( v62 && v44 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                        EXLATEOBJ::vAddToCache(&v169, v62, v44, v80, v45);
                      v16 = 1;
                    }
                    else
                    {
                      v16 = 0;
                    }
LABEL_175:
                    v42 = v165[0];
LABEL_176:
                    v79 = v77;
                    if ( (*((_DWORD *)v42 + 9) & 1) == 0 )
                    {
                      v218 = LODWORD(v215[1]) - v199;
                      v219 = HIDWORD(v215[1]) - v176;
                    }
                    if ( !v16 )
                      goto LABEL_201;
LABEL_179:
                    v102 = v177;
                    ++*((_DWORD *)v177 + 23);
                    v103 = v165[0];
                    v104 = v166;
                    if ( *((_QWORD *)v165[0] + 6) == *((_QWORD *)v166 + 6)
                      || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v165) && *(_QWORD *)(v105 + 3536) == v106 )
                    {
                      v107 = v200;
                    }
                    else
                    {
                      v107 = v200;
                      if ( *(_WORD *)(v200 + 100) || *(_QWORD *)(v200 + 24) || (*(_DWORD *)(v105 + 32) & 0x80u) != 0 )
                      {
                        v108 = &v178;
                        if ( (*(_DWORD *)(*((_QWORD *)v102 + 6) + 32LL) & 0x80u) == 0 )
                          v108 = 0LL;
                        v16 = SimBitBlt(
                                v102 + 6,
                                v200 + 24,
                                0LL,
                                v197,
                                v79,
                                v215,
                                &v216,
                                0LL,
                                v201,
                                (char *)v103 + 1592,
                                v174,
                                v108);
LABEL_201:
                        if ( v77 )
                        {
                          cEntries = (int)v77[1].cEntries;
                          if ( (int)cEntries < 0 )
                          {
                            if ( (_DWORD)cEntries == -1 )
                              FreeThreadBufferWithTag(v77);
                          }
                          else
                          {
                            _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                          }
                        }
LABEL_204:
                        v119 = v186;
                        if ( (v186 & 0x1000) == 0 )
                        {
LABEL_237:
                          v125 = v181;
                          if ( v181 )
                          {
                            if ( *v185 )
                            {
                              hbmSelectBitmap(**v185, v184, 1LL);
                              v125 = v181;
                            }
                            if ( v125 )
                            {
                              DEC_SHARE_REF_CNT(v125);
                              v125 = v181;
                            }
                            bDeleteSurface(*(_QWORD *)(v125 + 32));
                            v119 = v186;
                            v181 = 0LL;
                            v185 = 0LL;
                          }
                          if ( (v119 & 0x1000) != 0 )
                          {
                            if ( (v119 & 0x8000) != 0 )
                            {
                              DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)&v178);
                              _InterlockedOr(v160, 0);
                              DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)&v178);
                              v186 &= ~0x8000u;
                            }
                            else
                            {
                              if ( v188[0] )
                              {
                                v126 = *((_QWORD *)v188[0] + 6);
                                if ( (v119 & 0x20) != 0 )
                                {
                                  *((_DWORD *)v188[0] + 9) &= ~0x4000u;
                                  v127 = v188[0];
                                  *((_QWORD *)v188[0] + 64) = *(_QWORD *)(v126 + 2568);
                                  DC::vInheritSurfaceDpiScale(v127);
                                }
                                if ( v189 )
                                {
                                  v128 = *(_QWORD *)(v189 + 72);
                                  CurrentProcess = PsGetCurrentProcess(v119);
                                  MmUnmapViewOfSection(CurrentProcess, v128);
                                }
                                DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v178, (struct XDCOBJ *)v188);
                                if ( v188[0] )
                                {
                                  XDCOBJ::RestoreAttributes((XDCOBJ *)v188);
                                  _InterlockedDecrement((volatile signed __int32 *)v188[0] + 3);
                                }
                                v188[0] = 0LL;
                              }
                              _InterlockedOr(v160, 0);
                              if ( v187[0] )
                              {
                                v130 = *((_QWORD *)v187[0] + 6);
                                if ( (v186 & 0x10) != 0 )
                                {
                                  *((_DWORD *)v187[0] + 9) &= ~0x4000u;
                                  v131 = v187[0];
                                  *((_QWORD *)v187[0] + 64) = *(_QWORD *)(v130 + 2568);
                                  DC::vInheritSurfaceDpiScale(v131);
                                }
                                DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v178, (struct XDCOBJ *)v187);
                                if ( v187[0] )
                                {
                                  XDCOBJ::RestoreAttributes((XDCOBJ *)v187);
                                  _InterlockedDecrement((volatile signed __int32 *)v187[0] + 3);
                                }
                                v187[0] = 0LL;
                              }
                            }
                            GreDecLockCount();
                            v186 &= ~0x1000u;
                            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                            if ( ThreadWin32Thread )
                            {
                              v133 = *ThreadWin32Thread;
                              if ( v133 )
                              {
                                *(_QWORD *)(v133 + 320) = 0LL;
                                *(_QWORD *)(v133 + 312) = 0LL;
                              }
                            }
                            LODWORD(v119) = v186;
                          }
                          if ( (_QWORD)v178 )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v178);
                            GreReleaseSemaphoreInternal(v178);
                            LODWORD(v119) = v186;
                          }
                          if ( *((_QWORD *)&v178 + 1) )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)&v178 + 1));
                            GreReleaseSemaphoreInternal(*((_QWORD *)&v178 + 1));
                            LODWORD(v119) = v186;
                          }
                          if ( (v119 & 8) != 0 )
                            v186 = v119 & 0xFFFFFFF7;
                          if ( (_QWORD)v179 )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v179);
                            GreReleaseSemaphoreInternal(v179);
                          }
                          if ( v191 )
                          {
                            v209[1] = 0LL;
                            XDCOBJ::vLock((XDCOBJ *)v209, v192);
                            LOBYTE(v134) = 5;
                            v135 = HmgShareLock(v190, v134);
                            LOBYTE(v136) = 5;
                            v137 = (HSURF *)v135;
                            v138 = HmgShareLock(v191, v136);
                            v139 = v209[0];
                            v140 = v138;
                            v141 = *v137;
                            v142 = v209[0];
                            *((_QWORD *)v209[0] + 64) = v138;
                            DC::vInheritSurfaceDpiScale(v142);
                            DEC_SHARE_REF_CNT(v137);
                            DEC_SHARE_REF_CNT(v140);
                            GreDereferenceObject(v141, 1u);
                            v192 = 0LL;
                            v190 = 0LL;
                            *((_DWORD *)v139 + 9) |= v193;
                            if ( (*((_DWORD *)v139 + 9) & 0x200) != 0 )
                            {
                              v143 = 0;
                              if ( !(unsigned int)GreGetLockCount()
                                && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                              {
                                GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                                EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                                v143 = 1;
                              }
                              DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v171);
                              LOBYTE(v161[0]) = 5;
                              v144 = HmgShareUnlockRemoveObject(v191, 0LL, 0LL, 0LL, v161[0]);
                              if ( v144 )
                                SURFACE::bDeleteSurface(v144, 0LL, 1LL);
                              *((_QWORD *)v139 + 65) = 0LL;
                              DC::vClearRendering(v139);
                              v191 = 0LL;
                              DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v145);
                              if ( v143 )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                                GreReleaseSemaphoreInternal(ghsemGreLock);
                              }
                            }
                            else
                            {
                              LOBYTE(v161[0]) = 5;
                              v146 = HmgShareUnlockRemoveObject(v191, 0LL, 0LL, 0LL, v161[0]);
                              if ( v146 )
                                SURFACE::bDeleteSurface(v146, 0LL, 1LL);
                              *((_QWORD *)v139 + 65) = 0LL;
                              v191 = 0LL;
                            }
                            XDCOBJ::vUnlock((XDCOBJ *)v209);
                            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                          }
                          if ( v195 )
                          {
                            v210[1] = 0LL;
                            XDCOBJ::vLock((XDCOBJ *)v210, v196);
                            LOBYTE(v147) = 5;
                            v148 = HmgShareLock(v194, v147);
                            LOBYTE(v149) = 5;
                            v150 = (HSURF *)v148;
                            v151 = HmgShareLock(v195, v149);
                            v152 = v210[0];
                            v153 = v151;
                            v154 = *v150;
                            v155 = v210[0];
                            *((_QWORD *)v210[0] + 64) = v151;
                            DC::vInheritSurfaceDpiScale(v155);
                            DEC_SHARE_REF_CNT(v150);
                            DEC_SHARE_REF_CNT(v153);
                            GreDereferenceObject(v154, 1u);
                            v196 = 0LL;
                            v194 = 0LL;
                            if ( (*((_DWORD *)v152 + 9) & 0x200) != 0 )
                            {
                              v156 = 0;
                              if ( !(unsigned int)GreGetLockCount()
                                && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                              {
                                GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                                EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                                v156 = 1;
                              }
                              DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v172);
                              LOBYTE(v161[0]) = 5;
                              v157 = HmgShareUnlockRemoveObject(v195, 0LL, 0LL, 0LL, v161[0]);
                              if ( v157 )
                                SURFACE::bDeleteSurface(v157, 0LL, 1LL);
                              *((_QWORD *)v152 + 65) = 0LL;
                              DC::vClearRendering(v152);
                              v195 = 0LL;
                              DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v158);
                              if ( v156 )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                                GreReleaseSemaphoreInternal(ghsemGreLock);
                              }
                            }
                            else
                            {
                              LOBYTE(v161[0]) = 5;
                              v159 = HmgShareUnlockRemoveObject(v195, 0LL, 0LL, 0LL, v161[0]);
                              if ( v159 )
                                SURFACE::bDeleteSurface(v159, 0LL, 1LL);
                              *((_QWORD *)v152 + 65) = 0LL;
                              v195 = 0LL;
                            }
                            XDCOBJ::vUnlock((XDCOBJ *)v210);
                            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                          }
                          SURFMEM::~SURFMEM((SURFMEM *)&v181);
                          goto LABEL_301;
                        }
                        if ( (v186 & 0x8000) != 0 )
                        {
                          if ( v187[0] )
                            DEVLOCKBLTOBJ::bUnMapTrgSurfaceView((DEVLOCKBLTOBJ *)&v178);
                          _InterlockedOr(v160, 0);
                          if ( v188[0] )
                            DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v178);
                        }
                        else
                        {
                          v121 = v188[0];
                          if ( v188[0] )
                          {
                            if ( (*((_DWORD *)v188[0] + 11) & 1) == 0 )
                            {
                              v122 = (SURFACE *)*((_QWORD *)v188[0] + 64);
                              if ( v122 )
                              {
                                SURFACE::bUnMap(v122, &v178, 0LL);
                                v121 = v188[0];
                              }
                            }
                            *((_DWORD *)v121 + 11) &= ~1u;
                          }
                          _InterlockedOr(v160, 0);
                          v123 = v187[0];
                          v119 = v186;
                          if ( !v187[0] )
                            goto LABEL_237;
                          v124 = (SURFACE *)*((_QWORD *)v187[0] + 64);
                          if ( (v186 & 0x400) != 0 )
                          {
                            bUnHookRedir((struct XDCOBJ *)v187);
                            v119 = v186;
                            v123 = v187[0];
                            LODWORD(v119) = v186 & 0xFFFFFBFF;
                            v186 &= ~0x400u;
                          }
                          if ( (v119 & 0x2000) != 0 )
                          {
                            bUnHookBmpDrv((struct XDCOBJ *)v187);
                            v119 = v186;
                            v123 = v187[0];
                            LODWORD(v119) = v186 & 0xFFFFDFFF;
                            v186 &= ~0x2000u;
                          }
                          if ( (v119 & 0x1000) == 0 )
                            goto LABEL_231;
                          if ( (*((_DWORD *)v123 + 11) & 1) == 0 )
                          {
                            SURFACE::bUnMap(v124, &v178, v123);
                            v123 = v187[0];
                          }
                          *((_DWORD *)v123 + 11) &= ~1u;
                        }
                        v123 = v187[0];
                        v119 = v186;
LABEL_231:
                        if ( v123
                          && (v119 & 0x1000) != 0
                          && (*((_DWORD *)v123 + 9) & 0x4000) != 0
                          && *((_QWORD *)v123 + 61)
                          && *((_DWORD *)v123 + 126) )
                        {
                          GreUpdateSpriteDevLockEnd((struct XDCOBJ *)v187, v119 & 0x400000);
                          v119 = v186;
                        }
                        goto LABEL_237;
                      }
                    }
                    if ( v174 == 52428 )
                    {
                      v109 = (a11 & 1) == 0;
                      v220 = a11 & 1;
                      v110 = *((_QWORD *)v102 + 6);
                      if ( !v109 )
                      {
                        EtwWindowRendering(
                          *((_QWORD *)v103 + 60),
                          *((_QWORD *)v103 + 61),
                          **((_QWORD **)v103 + 64),
                          LODWORD(v215[0]),
                          HIDWORD(v215[0]),
                          v215[1],
                          HIDWORD(v215[1]),
                          *((_QWORD *)v104 + 60),
                          *((_QWORD *)v104 + 61),
                          **((_QWORD **)v104 + 64),
                          v216,
                          v217,
                          v216 + abs32(LODWORD(v215[1]) - HIDWORD(v215[1])),
                          v217 + abs32(HIDWORD(v215[1]) - HIDWORD(v215[0])));
                        v102 = v177;
                        *((_WORD *)v177 + 51) |= 0x40u;
                        v111 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                        if ( v111 )
                          *(_BYTE *)(v111 + 328) = 0;
                        GreClientRgnUpdated(0);
                        GreClientRgnUpdatedStable();
                        v77 = v169;
                      }
                      if ( ((_DWORD)v102[28] & 0x400) != 0 )
                        v112 = (*(__int64 (__fastcall **)(HDC, __int64, char *, XLATEOBJ *, struct ECLIPOBJ **, int *))(v110 + 2856))(
                                 v102 + 6,
                                 v107 + 24,
                                 v197,
                                 v79,
                                 v215,
                                 &v216);
                      else
                        v112 = ((__int64 (__fastcall *)(HDC, __int64, char *, XLATEOBJ *, struct ECLIPOBJ **, int *))EngCopyBits)(
                                 v102 + 6,
                                 v107 + 24,
                                 v197,
                                 v79,
                                 v215,
                                 &v216);
                      v16 = v112;
                      if ( v220 )
                      {
                        *((_WORD *)v102 + 51) &= ~0x40u;
                        v113 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                        v77 = v169;
                        if ( v113 )
                          *(_BYTE *)(v113 + 328) = 1;
                      }
                    }
                    else
                    {
                      v114 = SURFACE::pfnBitBlt((SURFACE *)v102);
                      v16 = ((__int64 (__fastcall *)(HDC, __int64, _QWORD, char *, XLATEOBJ *, struct ECLIPOBJ **, int *, _QWORD, char *, __int64, int))v114)(
                              v102 + 6,
                              v115,
                              0LL,
                              v197,
                              v79,
                              v215,
                              &v216,
                              0LL,
                              v201,
                              v116,
                              v117);
                    }
                    goto LABEL_201;
                  }
                  if ( !v44
                    || ((v85 = *(_QWORD *)(v62 + 128), v85 == v62)
                      ? (v86 = *(_DWORD *)(v62 + 32))
                      : (v86 = *(_DWORD *)(v85 + 32)),
                        (v87 = *(_QWORD *)(v44 + 128), v87 == v44)
                      ? (v88 = *(_DWORD *)(v44 + 32))
                      : (v88 = *(_DWORD *)(v87 + 32)),
                        v86 != v88) )
                  {
                    if ( v44 )
                    {
                      v89 = *(_DWORD *)(v62 + 56);
                      v212 = v45;
                      v213 = v80;
                      v211 = v44;
                      v202 = (HDC)ghsemPalette;
                      GreAcquireSemaphore(ghsemPalette);
                      v90 = xlateTable;
                      v91 = 0;
                      v92 = *(_QWORD *)(v62 + 128);
                      do
                      {
                        if ( v92 == v62 )
                          v93 = *(_DWORD *)(v62 + 32);
                        else
                          v93 = *(_DWORD *)(v92 + 32);
                        if ( *((_DWORD *)v90 + 8 * v89 + 4) == v93 )
                        {
                          v94 = XEPALOBJ::ulTime((XEPALOBJ *)&v211);
                          if ( *(_DWORD *)((char *)v90 + v95 + 20) == v94 )
                          {
                            v96 = XEPALOBJ::ulTime((XEPALOBJ *)&v212);
                            if ( *(_DWORD *)((char *)v90 + v97 + 28) == v96 )
                            {
                              v98 = *(XLATEOBJ **)((char *)v90 + v97 + 8);
                              v169 = v98;
                              flXlate = v98[3].flXlate;
                              if ( (flXlate & 0x6000) == 0 )
                              {
                                if ( (v98->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                  || (v98->flXlate & 4) != 0
                                  && v164 == v98[1].iUniq
                                  && (v100 = XEPALOBJ::ulTime((XEPALOBJ *)&v213),
                                      *(_DWORD *)((char *)v90 + v97 + 24) == v100)
                                  || (flXlate & 0x100) != 0
                                  && v173 == v98[1].flXlate
                                  && v168 == *(_DWORD *)&v98[1].iSrcType )
                                {
                                  _InterlockedIncrement((volatile signed __int32 *)((char *)v90 + v97));
                                  *(_DWORD *)(v62 + 56) = v89;
                                  SEMOBJ::~SEMOBJ((SEMOBJ *)&v202);
                                  v77 = v169;
                                  v16 = 1;
                                  goto LABEL_175;
                                }
                              }
                            }
                          }
                        }
                        ++v91;
                        v89 = ((_BYTE)v89 + 1) & 7;
                      }
                      while ( v91 < 8 );
                      if ( ghsemPalette )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                        GreReleaseSemaphoreInternal(ghsemPalette);
                      }
                    }
                    goto LABEL_167;
                  }
                }
                v77 = xloIdent;
                v16 = 1;
                v169 = xloIdent;
                goto LABEL_176;
              }
LABEL_213:
              v16 = 1;
              goto LABEL_204;
            }
            if ( *(_DWORD *)(v57 + 592) )
            {
              if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v57 + 592) )
                goto LABEL_119;
              v42 = v165[0];
              v53 = v166;
              v56 = HIDWORD(v215[0]);
              v54 = LODWORD(v215[0]);
            }
            v58 = *(_DWORD *)(v57 + 112);
            if ( (v58 & 0x800) != 0 )
            {
              v59 = UserSurfaceAccessCheck(*(_QWORD *)(v57 + 584), v56, v42, v54);
            }
            else
            {
              if ( (v58 & 0x10000000) == 0 )
              {
LABEL_87:
                if ( ((_DWORD)v43[29] & 8) == 0 && !*((_QWORD *)v43 + 29)
                  || (v55 = 512LL, (*((_WORD *)v43 + 51) & 0x200) == 0) )
                {
                  v60 = *((_DWORD *)v43 + 28);
                  if ( (v60 & 0x800) != 0 )
                  {
                    v61 = UserSurfaceAccessCheck(*((_QWORD *)v43 + 73), v56, v42, v54);
                  }
                  else
                  {
                    if ( (v60 & 0x10000000) == 0 )
                      goto LABEL_96;
                    v61 = UserScreenAccessCheck(v55, v56, v42, v54);
                  }
                  if ( v61 )
                  {
                    v42 = v165[0];
                    v53 = v166;
                    v56 = HIDWORD(v215[0]);
                    LODWORD(v54) = v215[0];
                    goto LABEL_96;
                  }
                }
LABEL_119:
                EngSetLastError(6u);
                goto LABEL_204;
              }
              v59 = UserScreenAccessCheck(v55, v56, v42, v54);
            }
            if ( !v59 )
              goto LABEL_119;
            v42 = v165[0];
            v53 = v166;
            v56 = HIDWORD(v215[0]);
            v54 = LODWORD(v215[0]);
            goto LABEL_87;
          }
          v16 = 1;
        }
        else
        {
          v16 = GreStretchBltInternal(v202, a2, v13, v164, v177, a7, v24, a4, v164, v18, a10, 0);
        }
LABEL_301:
        if ( v175 )
          DC::dwSetLayout(v165[0], -1, v170);
        XDCOBJ::RestoreAttributes((XDCOBJ *)&v166);
        _InterlockedDecrement((volatile signed __int32 *)v166 + 3);
        goto LABEL_304;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)v165[0] + 3);
      v165[0] = 0LL;
    }
  }
  XDCOBJ::vUnlock((XDCOBJ *)v165);
  return v16;
}

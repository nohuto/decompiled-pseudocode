/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8
 * Callers:
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000A004 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C000A3E8 (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C000A7F0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C011AAA4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C025921C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0259810 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D970 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025DB34 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E000 (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E3CC (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C000A5C8 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001E550 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0071E94 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C0072A88 (GreClientRgnUpdated.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00EBED4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED06C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00ED1C4 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED3B0 (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00ED740 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C0114930 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011AB24 (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025EE94 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F2F4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0262BDC (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C02632E4 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _POINTL v4; // rdi
  struct SPRITE *v5; // rbx
  struct _RECTL *v6; // rsi
  LONG x; // edx
  LONG y; // r8d
  int v10; // ecx
  int v11; // eax
  LONG v12; // edx
  int v13; // ecx
  unsigned int v14; // esi
  struct REGION *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  int v28; // ecx
  struct _SURFOBJ *v29; // r10
  int v30; // edi
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // r9d
  int v39; // r8d
  struct _SURFOBJ *Surface; // rax
  struct _RECTL *v41; // r8
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v44; // rax
  struct _RECTL v45; // xmm0
  LONG v46; // edx
  unsigned __int8 v47; // r8
  int v48; // ecx
  struct _XLATEOBJ *v49; // rax
  bool v50; // dl
  struct _CLIPOBJ *v51; // rax
  ULONG v52; // ecx
  struct _POINTL v53; // rax
  struct _XLATEOBJ *v54; // rax
  LONG v55; // esi
  LONG v56; // eax
  bool v57; // zf
  __int64 v58; // rcx
  unsigned int v59; // r9d
  unsigned int v60; // r8d
  struct SPRITE **v61; // rdx
  LONG v62; // ecx
  int v63; // [rsp+20h] [rbp-E0h]
  bool v64; // [rsp+60h] [rbp-A0h]
  struct _XLATEOBJ *v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  struct _POINTL v67; // [rsp+78h] [rbp-88h] BYREF
  int v68; // [rsp+80h] [rbp-80h]
  struct _POINTL v69; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v70; // [rsp+90h] [rbp-70h] BYREF
  int v71; // [rsp+98h] [rbp-68h]
  struct _RECTL *v72; // [rsp+A0h] [rbp-60h] BYREF
  struct SPRITE *v73; // [rsp+A8h] [rbp-58h] BYREF
  int v74; // [rsp+B0h] [rbp-50h]
  struct _POINTL v75; // [rsp+B8h] [rbp-48h] BYREF
  struct _POINTL *v76; // [rsp+C0h] [rbp-40h]
  struct _RECTL *v77; // [rsp+C8h] [rbp-38h]
  _QWORD v78[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v80; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v81[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v82[52]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v83; // [rsp+138h] [rbp+38h]
  __int64 v84; // [rsp+150h] [rbp+50h]
  int v85; // [rsp+158h] [rbp+58h]
  int v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+190h] [rbp+90h]

  v4 = (struct _POINTL)*((_QWORD *)a1 + 2);
  v5 = a1;
  v6 = (struct _RECTL *)*((_QWORD *)a1 + 14);
  LODWORD(v65) = a3;
  v69 = v4;
  v77 = v6;
  v71 = a4;
  v76 = a2;
  v73 = a1;
  v68 = 1;
  if ( a2 )
  {
    *((struct _POINTL *)a1 + 14) = *a2;
    x = a2->x;
    y = a2->y;
    si128.right = x + *((_DWORD *)a1 + 26) - *((_DWORD *)a1 + 24);
    v10 = *((_DWORD *)a1 + 27) - *((_DWORD *)a1 + 25);
    si128.left = x;
    si128.bottom = y + v10;
    si128.top = y;
  }
  else
  {
    si128.bottom = 0x80000000;
  }
  if ( (*(_DWORD *)v5 & 0x11) != 0 || !bIntersect((const struct _RECTL *)(*(_QWORD *)&v4 + 48LL), &si128, &si128) )
  {
    v11 = 0;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  }
  else
  {
    v11 = 32;
  }
  v12 = *(_DWORD *)v5;
  v13 = *(_DWORD *)v5 & 0x20;
  v67.x = *(_DWORD *)v5;
  if ( v11 == v13 )
  {
    if ( si128.left == *((_DWORD *)v5 + 20)
      && si128.top == *((_DWORD *)v5 + 21)
      && si128.right == *((_DWORD *)v5 + 22)
      && si128.bottom == *((_DWORD *)v5 + 23) )
    {
      if ( gpto && *((_DWORD *)v5 + 1) == 2 )
        vSpCheckForWndobjOverlap(*(struct _SPRITESTATE **)&v4, (struct _RECTL *)v5 + 5, (struct _RECTL *)v5 + 5);
LABEL_11:
      v14 = v68;
      goto LABEL_12;
    }
    v12 = v67.x;
  }
  if ( v13 )
  {
    *(_DWORD *)v5 = v12 & 0xFFFFFFDF;
    --*(_DWORD *)(*(_QWORD *)&v4 + 64LL);
  }
  if ( *((_QWORD *)v5 + 20) )
  {
    if ( !(_DWORD)v65 )
    {
      vSpRedrawUncoveredArea(v5, &si128);
      goto LABEL_55;
    }
  }
  else if ( !(_DWORD)v65 )
  {
    goto LABEL_55;
  }
  v84 = 0LL;
  v85 = 0;
  v87 = 0LL;
  v83 = 0LL;
  v16 = (struct REGION *)*((_QWORD *)v5 + 23);
  v86 = 1;
  if ( v16 )
  {
    XCLIPOBJ::vSetup((XCLIPOBJ *)v81, v16, (struct SPRITE *)((char *)v5 + 80), 0);
    v70 = (struct _CLIPOBJ *)v81;
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v82) )
      goto LABEL_55;
  }
  else
  {
    v70 = 0LL;
  }
  if ( *((_QWORD *)v5 + 16) )
  {
    if ( *((_DWORD *)v5 + 56) == 3 && !*((_BYTE *)v5 + 231) || *((_DWORD *)v5 + 1) == 1 )
    {
      vSpRedrawArea(*(struct _SPRITESTATE **)&v4, (struct _RECTL *)v5 + 5, 1);
    }
    else
    {
      vSpDirectDriverAccess(*(struct _SPRITESTATE **)&v4, 0);
      v17 = *(_QWORD *)(*(_QWORD *)&v4 + 40LL);
      v78[0] = 0LL;
      v18 = SURFOBJ_TO_SURFACE_NOT_NULL(v17);
      v19 = *(_QWORD *)(*(_QWORD *)&v4 + 40LL);
      v20 = *((_QWORD *)v5 + 18);
      v21 = *(_QWORD *)(v18 + 128);
      v22 = *(_DWORD *)(*((_QWORD *)v5 + 16) + 72LL);
      v65 = 0LL;
      if ( (*(_DWORD *)(v19 + 72) == v22 && (*(_DWORD *)v5 & 0x40) == 0
         || (unsigned int)EXLATEOBJ::bInitXlateObj(&v65, 0LL, 0LL, v20, v21, ppalDefault, ppalDefault, 0, 0, 0, 0))
        && SURFREFVIEW::bMap((SURFREFVIEW *)v78, *((struct _SURFOBJ **)v5 + 16)) )
      {
        v72 = (struct _RECTL *)((char *)v5 + 80);
        v75.x = *((_DWORD *)v5 + 20) - (_DWORD)v6;
        v75.y = *((_DWORD *)v5 + 21) - HIDWORD(v77);
        v23 = *(_QWORD *)(*(_QWORD *)&v4 + 40LL);
        v24 = 0LL;
        v66 = v23;
        if ( v23
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v66) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v66) + 112) & 0x200) == 0 )
        {
          v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v66);
          GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
        }
        v25 = *((_QWORD *)v5 + 16);
        v26 = 0LL;
        v66 = v25;
        if ( v25
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v66) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v66) + 112) & 0x200) == 0 )
        {
          v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v66);
          GreLockDisplayDevice(*(_QWORD *)(v26 + 48));
        }
        SpBitBlt(
          *(struct _SURFOBJ **)(*(_QWORD *)&v69 + 40LL),
          *((struct _SURFOBJ **)v73 + 16),
          0LL,
          v70,
          v65,
          v72,
          &v75,
          0LL,
          0LL,
          0LL,
          0xCCCCu);
        if ( v26 )
          GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
        if ( v24 )
          GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
        v4 = v69;
        v5 = v73;
      }
      vSpDirectDriverAccess(*(struct _SPRITESTATE **)&v4, 1);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v78);
    }
    GreClientRgnUpdated(0LL);
    GreClientRgnUpdatedStable();
  }
LABEL_55:
  v27 = si128.right - si128.left;
  v28 = si128.bottom - si128.top;
  LODWORD(v65) = si128.right - si128.left;
  LODWORD(v66) = si128.bottom - si128.top;
  if ( si128.right == si128.left )
  {
    if ( v71 == 1 && *(_DWORD *)(*(_QWORD *)&v4 + 64LL) == v27 && *(_DWORD *)(*(_QWORD *)&v4 + 8LL) != v27 )
      vSpUnhook(*(struct _SPRITESTATE **)&v4);
    goto LABEL_91;
  }
  *(_DWORD *)v5 |= 0x20u;
  ++*(_DWORD *)(*(_QWORD *)&v4 + 64LL);
  if ( v71 == 1 && !*(_DWORD *)(*(_QWORD *)&v4 + 8LL) )
  {
    vSpHook(*(struct _SPRITESTATE **)&v4);
    v27 = (int)v65;
    v28 = v66;
  }
  v29 = (struct _SURFOBJ *)*((_QWORD *)v5 + 20);
  if ( v29 && v27 <= v29->sizlBitmap.cx && v28 <= v29->sizlBitmap.cy )
  {
    if ( si128.left < *((_DWORD *)v5 + 20)
      || si128.top < *((_DWORD *)v5 + 21)
      || si128.right > *((_DWORD *)v5 + 22)
      || si128.bottom > *((_DWORD *)v5 + 23) )
    {
      v30 = *((_DWORD *)v5 + 52);
      v31 = 0;
      v32 = 0;
      if ( si128.left >= v30 )
      {
        v33 = *((_DWORD *)v5 + 54);
        if ( si128.right > v33 )
          v31 = si128.right - v33;
      }
      else
      {
        v31 = si128.left - v30;
      }
      v34 = *((_DWORD *)v5 + 53);
      LODWORD(v66) = v34;
      if ( si128.top >= v34 )
      {
        v35 = *((_DWORD *)v5 + 55);
        if ( si128.bottom > v35 )
          v32 = si128.bottom - v35;
      }
      else
      {
        v32 = si128.top - v34;
      }
      v36 = v66;
      *((_DWORD *)v5 + 54) += v31;
      v37 = v32 + v36;
      *((_DWORD *)v5 + 55) += v32;
      *((_DWORD *)v5 + 53) = v37;
      *((_DWORD *)v5 + 52) = v31 + v30;
      *((_DWORD *)v5 + 43) = -v37;
      *((_DWORD *)v5 + 42) = -(v31 + v30);
      vSpSmallUnderlayCopy(
        v5,
        (struct _POINTL *)v5 + 21,
        v29,
        (struct _POINTL *)v5 + 21,
        v29,
        v31,
        v32,
        &si128,
        (struct _RECTL *)v5 + 5);
      v4 = v69;
    }
    goto LABEL_91;
  }
  v38 = *((_DWORD *)v5 + 45);
  v39 = *((_DWORD *)v5 + 44);
  if ( v28 > v38 )
    v38 = v28;
  if ( v27 > v39 )
    v39 = v27;
  Surface = psoSpCreateSurface(*(struct _SPRITESTATE **)&v4, 0, v39, v38, v63);
  v72 = (struct _RECTL *)Surface;
  if ( Surface )
  {
    Surface->fjBitmap |= 4u;
    v69.x = -si128.left;
    v69.y = -si128.top;
    if ( (int)v65 > 128 || (int)v66 > 128 )
      vSpBigUnderlayCopy(*(struct _SPRITESTATE **)&v4, &v69, Surface, &si128);
    else
      vSpSmallUnderlayCopy(
        v5,
        &v69,
        Surface,
        (struct _POINTL *)v5 + 21,
        *((struct _SURFOBJ **)v5 + 20),
        0,
        0,
        &si128,
        (struct _RECTL *)v5 + 5);
    vSpDeleteSurface(*((SURFOBJ **)v5 + 20));
    v41 = v72;
    left = si128.left;
    top = si128.top;
    v44 = v69;
    *((_DWORD *)v5 + 52) = si128.left;
    *((_QWORD *)v5 + 20) = v41;
    *((struct _POINTL *)v5 + 21) = v44;
    *((_DWORD *)v5 + 53) = top;
    *((_DWORD *)v5 + 54) = v41[2].left + left;
    *((_DWORD *)v5 + 55) = top + v41[2].top;
LABEL_91:
    v45 = (struct _RECTL)*((_OWORD *)v5 + 5);
    v46 = *(_DWORD *)v5;
    v47 = v67.x;
    v48 = v67.x ^ *(_DWORD *)v5;
    v49 = (struct _XLATEOBJ *)*((_QWORD *)v5 + 24);
    v65 = v49;
    v80 = v45;
    *((struct _RECTL *)v5 + 5) = si128;
    if ( (v48 & 0x20) != 0 )
    {
      v50 = (v47 & 0x20) == 0 && (v46 & 0x20) != 0;
      v64 = v50;
      if ( v49 )
        goto LABEL_107;
      v51 = (struct _CLIPOBJ *)*((_QWORD *)v5 + 1);
      v70 = v51;
      if ( !v51 )
        goto LABEL_129;
      if ( !v50 )
        goto LABEL_129;
      v52 = 0;
      LODWORD(v66) = 0;
      if ( !v51[1].iUniq )
        goto LABEL_129;
      while ( 1 )
      {
        v53 = (struct _POINTL)*((_QWORD *)&v70[1].rclBounds.top + v52);
        v75 = v53;
        if ( *(struct SPRITE **)&v53 != v5 )
        {
          v72 = *(struct _RECTL **)(*(_QWORD *)&v53 + 192LL);
          if ( v72 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v73);
            if ( v73 && RGNOBJ::bCopy((RGNOBJ *)&v73, (struct RGNOBJ *)&v72) )
            {
              LODWORD(v70) = -*(_DWORD *)(*(_QWORD *)&v75 + 112LL);
              HIDWORD(v70) = -*(_DWORD *)(*(_QWORD *)&v75 + 116LL);
              RGNOBJ::bOffset((RGNOBJ *)&v73, (struct _POINTL *)&v70);
              v57 = v74 == 1;
              v54 = (struct _XLATEOBJ *)v73;
              *((_QWORD *)v5 + 24) = v73;
              v65 = v54;
              if ( !v57 )
                goto LABEL_106;
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
LABEL_105:
              v54 = v65;
LABEL_106:
              v50 = v64;
              if ( v54 )
              {
LABEL_107:
                if ( v50 )
                  v55 = v76->x;
                else
                  v55 = -(int)v6;
                v67.x = v55;
                if ( v50 )
                  v56 = v76->y;
                else
                  v56 = -HIDWORD(v77);
                v67.y = v56;
                if ( !v55 )
                {
                  v57 = v56 == 0;
                  goto LABEL_127;
                }
                goto LABEL_128;
              }
              goto LABEL_129;
            }
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
            if ( v74 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v73);
          }
        }
        v52 = v66 + 1;
        LODWORD(v66) = v52;
        if ( v52 >= v70[1].iUniq )
          goto LABEL_105;
      }
    }
    if ( !v49 || (v47 & (unsigned __int8)v46 & 0x20) == 0 )
      goto LABEL_129;
    v58 = *((_QWORD *)v5 + 1);
    if ( v58 )
    {
      v59 = *(_DWORD *)(v58 + 24);
      v60 = 0;
      if ( v59 )
      {
        v61 = (struct SPRITE **)(v58 + 32);
        while ( *v61 == v5 || (*(_DWORD *)*v61 & 0x20) == 0 )
        {
          ++v60;
          ++v61;
          if ( v60 >= v59 )
            goto LABEL_124;
        }
        v72 = v6;
        RGNOBJ::vSet((RGNOBJ *)&v65, (struct _RECTL *)v5 + 6);
        RGNOBJ::bOffset((RGNOBJ *)&v65, (struct _POINTL *)&v72);
        v49 = v65;
      }
    }
LABEL_124:
    if ( v49 )
    {
      v62 = v76->y - HIDWORD(v77);
      v67.x = v76->x - (_DWORD)v6;
      v67.y = v62;
      if ( v67.x )
        goto LABEL_128;
      v57 = v62 == 0;
LABEL_127:
      if ( !v57 )
LABEL_128:
        RGNOBJ::bOffset((RGNOBJ *)&v65, &v67);
    }
LABEL_129:
    *(_DWORD *)(*(_QWORD *)&v4 + 124LL) = 0;
    ++giSpriteUniqueness;
    vSpOrderInY(v5);
    if ( gpto )
      vSpCheckForWndobjOverlap(*(struct _SPRITESTATE **)&v4, &si128, &v80);
    if ( !*(_DWORD *)(*(_QWORD *)&v4 + 124LL) )
      vSpComputeSpriteRanges(*(struct _SPRITESTATE **)&v4);
    vSpRemoveAllSpriteOverlapPresents(**(HDEV **)&v4);
    goto LABEL_11;
  }
  v14 = 0;
  bSpUpdatePosition(v5, 0LL, 0, 0);
LABEL_12:
  if ( v71 == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&v4 + 64LL) )
    {
      if ( !*(_DWORD *)(*(_QWORD *)&v4 + 8LL) )
        vSpHook(*(struct _SPRITESTATE **)&v4);
    }
    else if ( *(_DWORD *)(*(_QWORD *)&v4 + 8LL) )
    {
      vSpUnhook(*(struct _SPRITESTATE **)&v4);
    }
  }
  return v14;
}

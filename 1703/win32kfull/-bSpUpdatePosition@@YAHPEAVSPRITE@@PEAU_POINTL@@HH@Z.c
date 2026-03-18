/*
 * XREFs of ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C01108A0 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0257CEC (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02582E0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C025CF7C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z @ 0x1C025D7C0 (-pSpConvertSpriteFromMeta@@YAPEAVSPRITE@@PEAUHDEV__@@0PEAU_METASPRITE@@@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C025D980 (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C025DEFC (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C025E27C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z @ 0x1C025E648 (-pSpTransferSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAV1@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0260D84 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0024A3C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C006CBE4 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C006F270 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A51E4 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00A7D70 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00A843C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00A87C0 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010B384 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C011094C (-vSpUnhook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F154 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C025F5B4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpOrderInY@@YAXPEAVSPRITE@@@Z @ 0x1C0261C84 (-vSpOrderInY@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0263810 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0263F3C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bSpUpdatePosition(struct SPRITE *a1, struct _POINTL *a2, int a3, int a4)
{
  struct _RECTL *v4; // rdi
  struct SPRITE *v5; // rbx
  struct _RECTL *v6; // rsi
  LONG x; // edx
  LONG y; // r8d
  int v10; // ecx
  int v11; // eax
  LONG v12; // edx
  int v13; // ecx
  struct REGION *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // r10
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // r8d
  _QWORD *v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  int v26; // ecx
  struct _SURFOBJ *v27; // r10
  int v28; // edi
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  signed int v36; // r9d
  signed int v37; // r8d
  struct _SURFOBJ *Surface; // rax
  unsigned int v39; // esi
  struct _RECTL *v40; // r8
  LONG left; // ecx
  LONG top; // edx
  struct _POINTL v43; // rax
  struct _RECTL v44; // xmm0
  unsigned __int8 v45; // r11
  LONG v46; // r8d
  struct _POINTL v47; // rax
  int v48; // r9d
  char v49; // r10
  int v50; // r10d
  BOOL v51; // ecx
  struct _CLIPOBJ *v52; // rax
  ULONG v53; // ecx
  struct _POINTL v54; // rax
  struct _POINTL v55; // rax
  LONG v56; // esi
  LONG v57; // eax
  bool v58; // zf
  __int64 v59; // rcx
  unsigned int v60; // r9d
  unsigned int v61; // r8d
  struct SPRITE **v62; // rdx
  LONG v63; // ecx
  struct _POINTL *v64; // rdx
  struct _POINTL v66; // [rsp+60h] [rbp-A0h] BYREF
  struct _XLATEOBJ *v67; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v68; // [rsp+70h] [rbp-90h]
  struct _POINTL v69; // [rsp+78h] [rbp-88h] BYREF
  int v70; // [rsp+80h] [rbp-80h]
  struct _CLIPOBJ *v71; // [rsp+88h] [rbp-78h] BYREF
  int v72; // [rsp+90h] [rbp-70h]
  struct _RECTL *v73; // [rsp+98h] [rbp-68h] BYREF
  struct SPRITE *v74; // [rsp+A0h] [rbp-60h] BYREF
  int v75; // [rsp+A8h] [rbp-58h]
  struct _POINTL v76; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL *v77; // [rsp+B8h] [rbp-48h]
  struct _RECTL *v78; // [rsp+C0h] [rbp-40h]
  _QWORD v79[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL si128; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v81; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v82[4]; // [rsp+100h] [rbp+0h] BYREF
  char v83[52]; // [rsp+104h] [rbp+4h] BYREF
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+150h] [rbp+50h]
  int v86; // [rsp+158h] [rbp+58h]
  int v87; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+190h] [rbp+90h]

  v4 = (struct _RECTL *)*((_QWORD *)a1 + 2);
  v5 = a1;
  v6 = (struct _RECTL *)*((_QWORD *)a1 + 14);
  LODWORD(v67) = a3;
  v66 = (struct _POINTL)v4;
  v78 = v6;
  v72 = a4;
  v77 = a2;
  v74 = a1;
  v70 = 1;
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
  if ( (*(_DWORD *)v5 & 0x11) != 0 || !bIntersect(v4 + 3, &si128, &si128) )
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
  v69.x = *(_DWORD *)v5;
  if ( v11 == v13 )
  {
    if ( si128.left == *((_DWORD *)v5 + 20)
      && si128.top == *((_DWORD *)v5 + 21)
      && si128.right == *((_DWORD *)v5 + 22)
      && si128.bottom == *((_DWORD *)v5 + 23) )
    {
      if ( *((_DWORD *)v5 + 1) == 2 && gpto )
        vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, (struct _RECTL *)v5 + 5, (struct _RECTL *)v5 + 5);
      goto LABEL_137;
    }
    v12 = v69.x;
  }
  if ( v13 )
  {
    *(_DWORD *)v5 = v12 & 0xFFFFFFDF;
    --v4[4].left;
  }
  if ( !*((_QWORD *)v5 + 20) )
  {
    if ( !(_DWORD)v67 )
      goto LABEL_53;
LABEL_23:
    v85 = 0LL;
    v86 = 0;
    v88 = 0LL;
    v84 = 0LL;
    v14 = (struct REGION *)*((_QWORD *)v5 + 23);
    v87 = 1;
    if ( v14 )
    {
      XCLIPOBJ::vSetup((XCLIPOBJ *)v82, v14, (struct SPRITE *)((char *)v5 + 80), 0);
      v71 = (struct _CLIPOBJ *)v82;
      if ( ERECTL::bEmpty((ERECTL *)v83) )
        goto LABEL_53;
    }
    else
    {
      v71 = 0LL;
    }
    if ( *((_QWORD *)v5 + 16) )
    {
      if ( *((_DWORD *)v5 + 56) == 3 && !*((_BYTE *)v5 + 231) || *((_DWORD *)v5 + 1) == 1 )
      {
        vSpRedrawArea((struct _SPRITESTATE *)v4, (struct _RECTL *)v5 + 5, 1);
      }
      else
      {
        vSpDirectDriverAccess((struct _SPRITESTATE *)v4, 0);
        v15 = *(_QWORD **)&v4[2].right;
        v79[0] = 0LL;
        v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
        v17 = *(_QWORD **)&v4[2].right;
        v18 = *((_QWORD *)v5 + 18);
        v19 = *(_QWORD *)(v16 + 128);
        v20 = *(_DWORD *)(*((_QWORD *)v5 + 16) + 72LL);
        v67 = 0LL;
        if ( (*((_DWORD *)v17 + 18) == v20 && (*(_DWORD *)v5 & 0x40) == 0
           || (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v67,
                              0LL,
                              0,
                              v18,
                              v19,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0))
          && SURFREFVIEW::bMap((SURFREFVIEW *)v79, *((struct _SURFOBJ **)v5 + 16)) )
        {
          v73 = (struct _RECTL *)((char *)v5 + 80);
          v76.x = *((_DWORD *)v5 + 20) - (_DWORD)v6;
          v76.y = *((_DWORD *)v5 + 21) - HIDWORD(v78);
          v21 = *(_QWORD **)&v4[2].right;
          v22 = 0LL;
          v68 = v21;
          if ( v21
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v21) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v68) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v68) + 112) & 0x200) == 0 )
          {
            v22 = SURFOBJ_TO_SURFACE_NOT_NULL(v68);
            GreLockDisplayDevice(*(_QWORD *)(v22 + 48));
          }
          v23 = (_QWORD *)*((_QWORD *)v5 + 16);
          v24 = 0LL;
          v68 = v23;
          if ( v23
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v68) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v68) + 112) & 0x200) == 0 )
          {
            v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v68);
            GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
          }
          SpBitBlt(
            *(struct _SURFOBJ **)(*(_QWORD *)&v66 + 40LL),
            *((struct _SURFOBJ **)v74 + 16),
            0LL,
            v71,
            v67,
            v73,
            &v76,
            0LL,
            0LL,
            0LL,
            0xCCCCu);
          if ( v24 )
            GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
          if ( v22 )
            GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
          v4 = (struct _RECTL *)v66;
          v5 = v74;
        }
        vSpDirectDriverAccess((struct _SPRITESTATE *)v4, 1);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
        SURFREFVIEW::bUnMap((SURFREFVIEW *)v79);
      }
      GreClientRgnUpdated(0);
      GreClientRgnUpdatedStable();
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v67 )
    goto LABEL_23;
  vSpRedrawUncoveredArea(v5, &si128);
LABEL_53:
  v25 = si128.right - si128.left;
  v26 = si128.bottom - si128.top;
  LODWORD(v67) = si128.right - si128.left;
  LODWORD(v68) = si128.bottom - si128.top;
  if ( si128.right == si128.left )
  {
    if ( v72 == 1 && v4[4].left == v25 && v4->right != v25 )
      vSpUnhook((struct _SPRITESTATE *)v4);
  }
  else
  {
    *(_DWORD *)v5 |= 0x20u;
    ++v4[4].left;
    if ( v72 == 1 && !v4->right )
    {
      vSpHook((struct _SPRITESTATE *)v4);
      v25 = (int)v67;
      v26 = (int)v68;
    }
    v27 = (struct _SURFOBJ *)*((_QWORD *)v5 + 20);
    if ( v27 && v25 <= v27->sizlBitmap.cx && v26 <= v27->sizlBitmap.cy )
    {
      if ( si128.left < *((_DWORD *)v5 + 20)
        || si128.top < *((_DWORD *)v5 + 21)
        || si128.right > *((_DWORD *)v5 + 22)
        || si128.bottom > *((_DWORD *)v5 + 23) )
      {
        v28 = *((_DWORD *)v5 + 52);
        v29 = 0;
        v30 = 0;
        if ( si128.left >= v28 )
        {
          v31 = *((_DWORD *)v5 + 54);
          if ( si128.right > v31 )
            v29 = si128.right - v31;
        }
        else
        {
          v29 = si128.left - v28;
        }
        v32 = *((_DWORD *)v5 + 53);
        LODWORD(v68) = v32;
        if ( si128.top >= v32 )
        {
          v33 = *((_DWORD *)v5 + 55);
          if ( si128.bottom > v33 )
            v30 = si128.bottom - v33;
        }
        else
        {
          v30 = si128.top - v32;
        }
        v34 = (int)v68;
        *((_DWORD *)v5 + 54) += v29;
        v35 = v30 + v34;
        *((_DWORD *)v5 + 55) += v30;
        *((_DWORD *)v5 + 53) = v35;
        *((_DWORD *)v5 + 52) = v29 + v28;
        *((_DWORD *)v5 + 43) = -v35;
        *((_DWORD *)v5 + 42) = -(v29 + v28);
        vSpSmallUnderlayCopy(
          v5,
          (struct _POINTL *)v5 + 21,
          v27,
          (struct _POINTL *)v5 + 21,
          v27,
          v29,
          v30,
          &si128,
          (struct _RECTL *)v5 + 5);
        v4 = (struct _RECTL *)v66;
      }
    }
    else
    {
      v36 = *((_DWORD *)v5 + 45);
      v37 = *((_DWORD *)v5 + 44);
      if ( v26 > v36 )
        v36 = v26;
      if ( v25 > v37 )
        v37 = v25;
      Surface = psoSpCreateSurface((struct _SPRITESTATE *)v4, 0, v37, v36);
      v73 = (struct _RECTL *)Surface;
      if ( !Surface )
      {
        v39 = 0;
        bSpUpdatePosition(v5, 0LL, 0, 0);
        goto LABEL_138;
      }
      Surface->fjBitmap |= 4u;
      v66.x = -si128.left;
      v66.y = -si128.top;
      if ( (int)v67 > 128 || (int)v68 > 128 )
        vSpBigUnderlayCopy((struct _SPRITESTATE *)v4, &v66, Surface, &si128);
      else
        vSpSmallUnderlayCopy(
          v5,
          &v66,
          Surface,
          (struct _POINTL *)v5 + 21,
          *((struct _SURFOBJ **)v5 + 20),
          0,
          0,
          &si128,
          (struct _RECTL *)v5 + 5);
      vSpDeleteSurface(*((SURFOBJ **)v5 + 20));
      v40 = v73;
      left = si128.left;
      top = si128.top;
      v43 = v66;
      *((_DWORD *)v5 + 52) = si128.left;
      *((_QWORD *)v5 + 20) = v40;
      *((struct _POINTL *)v5 + 21) = v43;
      *((_DWORD *)v5 + 53) = top;
      *((_DWORD *)v5 + 54) = v40[2].left + left;
      *((_DWORD *)v5 + 55) = top + v40[2].top;
    }
  }
  v44 = (struct _RECTL)*((_OWORD *)v5 + 5);
  v45 = v69.x;
  v46 = *(_DWORD *)v5;
  v47 = (struct _POINTL)*((_QWORD *)v5 + 24);
  v48 = v69.x & 0x20;
  v49 = *(_DWORD *)v5;
  v66 = v47;
  v50 = v49 & 0x20;
  v81 = v44;
  *((struct _RECTL *)v5 + 5) = si128;
  if ( (v50 != 0) != (v48 != 0) )
  {
    v51 = !v48 && v50;
    LODWORD(v67) = v51;
    if ( v47 )
      goto LABEL_109;
    v52 = (struct _CLIPOBJ *)*((_QWORD *)v5 + 1);
    v71 = v52;
    if ( !v52 )
      goto LABEL_132;
    if ( !v51 )
      goto LABEL_132;
    v53 = 0;
    LODWORD(v68) = 0;
    if ( !v52[1].iUniq )
      goto LABEL_132;
    while ( 1 )
    {
      v54 = (struct _POINTL)*((_QWORD *)&v71[1].rclBounds.top + v53);
      v76 = v54;
      if ( *(struct SPRITE **)&v54 != v5 )
      {
        v73 = *(struct _RECTL **)(*(_QWORD *)&v54 + 192LL);
        if ( v73 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v74);
          if ( v74 && RGNOBJ::bCopy((RGNOBJ *)&v74, (struct RGNOBJ *)&v73) )
          {
            LODWORD(v71) = -*(_DWORD *)(*(_QWORD *)&v76 + 112LL);
            HIDWORD(v71) = -*(_DWORD *)(*(_QWORD *)&v76 + 116LL);
            RGNOBJ::bOffset((RGNOBJ *)&v74, (struct _POINTL *)&v71);
            v58 = v75 == 1;
            v55 = (struct _POINTL)v74;
            *((_QWORD *)v5 + 24) = v74;
            v66 = v55;
            if ( !v58 )
              goto LABEL_108;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
LABEL_107:
            v55 = v66;
LABEL_108:
            if ( v55 )
            {
LABEL_109:
              if ( (_DWORD)v67 )
                v56 = v77->x;
              else
                v56 = -(int)v6;
              v69.x = v56;
              if ( (_DWORD)v67 )
                v57 = v77->y;
              else
                v57 = -HIDWORD(v78);
              v69.y = v57;
              if ( !v56 )
              {
                v58 = v57 == 0;
                goto LABEL_130;
              }
              goto LABEL_131;
            }
            goto LABEL_132;
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
          if ( v75 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v74);
        }
      }
      v53 = (_DWORD)v68 + 1;
      LODWORD(v68) = v53;
      if ( v53 >= v71[1].iUniq )
        goto LABEL_107;
    }
  }
  if ( !*(_QWORD *)&v47 || (v45 & (unsigned __int8)v46 & 0x20) == 0 )
    goto LABEL_132;
  v59 = *((_QWORD *)v5 + 1);
  if ( v59 )
  {
    v60 = *(_DWORD *)(v59 + 24);
    v61 = 0;
    if ( v60 )
    {
      v62 = (struct SPRITE **)(v59 + 32);
      while ( *v62 == v5 || (*(_DWORD *)*v62 & 0x20) == 0 )
      {
        ++v61;
        ++v62;
        if ( v61 >= v60 )
          goto LABEL_127;
      }
      v73 = v6;
      RGNOBJ::vSet((RGNOBJ *)&v66, (struct _RECTL *)v5 + 6);
      RGNOBJ::bOffset((RGNOBJ *)&v66, (struct _POINTL *)&v73);
      v47 = v66;
    }
  }
LABEL_127:
  if ( v47 )
  {
    v63 = v77->y - HIDWORD(v78);
    v69.x = v77->x - (_DWORD)v6;
    v69.y = v63;
    if ( v69.x )
      goto LABEL_131;
    v58 = v63 == 0;
LABEL_130:
    if ( !v58 )
LABEL_131:
      RGNOBJ::bOffset((RGNOBJ *)&v66, &v69);
  }
LABEL_132:
  v4[7].bottom = 0;
  ++giSpriteUniqueness;
  vSpOrderInY(v5);
  if ( gpto )
    vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, &si128, &v81);
  if ( !v4[7].bottom )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)v4);
  vSpRemoveAllSpriteOverlapPresents(*(_QWORD **)&v4->left, v64);
LABEL_137:
  v39 = v70;
LABEL_138:
  if ( v72 == 1 )
  {
    if ( v4[4].left )
    {
      if ( !v4->right )
        vSpHook((struct _SPRITESTATE *)v4);
    }
    else if ( v4->right )
    {
      vSpUnhook((struct _SPRITESTATE *)v4);
    }
  }
  return v39;
}

/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C000A7F0
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C000A5F0 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C025D6E0 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C000A1C8 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00125A8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBE8 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C025CE28 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E6E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C025E8B0 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260838 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0261DCC (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C02653DC (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpUpdateSprite(
        struct SPRITE *a1,
        HDC a2,
        struct _POINTL *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct _POINTL *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct _RECTL *a10)
{
  struct _BLENDFUNCTION *v11; // r14
  struct _RECTL *v12; // r13
  unsigned int v13; // esi
  unsigned int v14; // edi
  int v15; // r15d
  __int64 v16; // rcx
  struct _BLENDFUNCTION v17; // ecx
  unsigned int v18; // r12d
  HDC v19; // rdx
  int v20; // ecx
  unsigned int v21; // edx
  _DWORD *v23; // r12
  __int64 v24; // rcx
  LONG v25; // eax
  LONG cx; // eax
  LONG cy; // edx
  LONG v28; // eax
  int v29; // eax
  struct _POINTL *v30; // rdx
  unsigned int v31; // r8d
  int updated; // edi
  struct _POINTL *v33; // rcx
  int v34; // eax
  LONG v35; // ecx
  LONG v36; // edx
  int v37; // eax
  LONG v38; // r8d
  LONG bottom; // r9d
  __int64 v40; // rax
  __int64 v41; // rax
  struct _BLENDFUNCTION v42; // [rsp+50h] [rbp-B0h] BYREF
  HDC v43; // [rsp+58h] [rbp-A8h]
  struct tagSIZE *v44; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v45; // [rsp+68h] [rbp-98h]
  struct _POINTL *v46; // [rsp+70h] [rbp-90h]
  struct _SPRITESTATE *v47; // [rsp+78h] [rbp-88h]
  _QWORD v48[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL v49; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v50[192]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v51; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v52; // [rsp+170h] [rbp+70h] BYREF
  __int64 v53; // [rsp+180h] [rbp+80h]
  struct _RECTL v54; // [rsp+190h] [rbp+90h] BYREF
  __int64 v55; // [rsp+1A0h] [rbp+A0h]

  v11 = a8;
  v12 = a10;
  v43 = a5;
  v45 = a6;
  v44 = a4;
  v46 = a3;
  *(_QWORD *)&v51.left = a2;
  if ( a1 )
  {
    v47 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
    v48[0] = *(_QWORD *)v47;
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v50, (struct PDEVOBJ *)v48);
    v42 = 0;
    v13 = 1;
    v14 = a9;
    if ( (a9 & 0x10000000) != 0 )
    {
      v14 = a9 & 0xEFFFFFFF;
      v42 = (struct _BLENDFUNCTION)1;
    }
    v15 = 0;
    if ( (v14 & 0x200000) != 0 )
    {
      v14 &= ~0x200000u;
      v15 = 1;
    }
    SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v47 + 128));
    v16 = *((_QWORD *)a1 + 16);
    if ( v16 )
    {
      v23 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v23) )
      {
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v24 + 280));
        if ( (*(_DWORD *)a1 & 0x200) != 0 )
        {
          v25 = v23[14];
          *(_QWORD *)&v49.left = 0LL;
          v49.right = v25;
          v49.bottom = v23[15];
          if ( a10 )
          {
            v54 = *a10;
            ERECTL::operator*=(&v54, &v49);
          }
          else
          {
            v54 = v49;
          }
          v12 = &v54;
        }
        DCOBJ::DCOBJ((DCOBJ *)&v52, v43);
        if ( *(_QWORD *)&v52.left && v44 )
        {
          cx = v23[14];
          cy = v44->cy;
          if ( v44->cx < cx )
            cx = v44->cx;
          v49.left = cx;
          v28 = v23[15];
          if ( cy < v28 )
            v28 = cy;
          v49.top = v28;
          v44 = (struct tagSIZE *)&v49;
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v23 + 70));
        if ( *(_QWORD *)&v52.left )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v52);
      }
    }
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v47 + 128));
    if ( (v14 & 0x20000000) != 0 )
    {
      v17 = v42;
      v14 &= ~0x20000000u;
      *((_DWORD *)a1 + 56) = v14 | (*(_DWORD *)&v42 << 28);
      if ( (v14 & 2) != 0 && a8 )
        *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
      v18 = a7;
      *((_DWORD *)a1 + 58) = a7;
      if ( v17 )
      {
        vSpCreateExMirror(**((HDEV **)a1 + 2));
        *(_DWORD *)a1 |= 0x100u;
      }
      v19 = v43;
      if ( !v43 )
      {
        v20 = *((_DWORD *)a1 + 56);
        v21 = *((_DWORD *)a1 + 51);
        v42 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
        if ( v20 == 3 && !a8->AlphaFormat )
        {
          v20 = 2;
          v42 = *a8;
          v11 = &v42;
          v42.AlphaFormat = 1;
          v21 = a7;
        }
        *((_DWORD *)a1 + 1) = v20;
        *((_DWORD *)a1 + 51) = v21;
        *((struct _BLENDFUNCTION *)a1 + 50) = *v11;
        goto LABEL_16;
      }
    }
    else
    {
      if ( v14 == 0x40000000 )
      {
        v14 = *((_DWORD *)a1 + 56);
        if ( (v14 & 0x10000000) != 0 )
          v14 &= ~0x10000000u;
        if ( (*(_DWORD *)a1 & 0x40) != 0 && !v14 )
          v14 = *((_DWORD *)a1 + 1);
        v11 = &v42;
        v18 = *((_DWORD *)a1 + 58);
        v42 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
      }
      else
      {
        v18 = a7;
      }
      v19 = v43;
    }
    if ( (*(_DWORD *)(v48[0] + 32LL) & 0x400) != 0 )
    {
LABEL_16:
      SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v50);
      return v13;
    }
    if ( *(_QWORD *)&v51.left || v44 || v19 || v45 || v18 )
    {
      updated = bSpUpdateShape(a1, v14, *(HDC *)&v51.left, v19, v18, v11, v45, v44, v12);
      if ( !updated || v15 )
        goto LABEL_65;
      v33 = v46;
      if ( !v46 )
        v33 = (struct _POINTL *)((char *)a1 + 112);
      v31 = 0;
      v30 = v33;
    }
    else
    {
      if ( v14 - 2 <= 1 && v11 && !v46 )
      {
        v29 = bSpUpdateAlpha(a1, v11, 1);
LABEL_64:
        updated = v29;
        goto LABEL_65;
      }
      if ( (v14 & 0x7FFFFFFF) != 0 || v11 )
      {
        updated = 1;
LABEL_65:
        if ( v12 )
        {
          v34 = *((_DWORD *)a1 + 28);
          v35 = v34 + v12->left;
          v36 = v34 + v12->right;
          v37 = *((_DWORD *)a1 + 29);
          v38 = v37 + v12->top;
          bottom = v12->bottom;
          v51.left = v35;
          v51.right = v36;
          v51.top = v38;
          v51.bottom = v37 + bottom;
          ERECTL::operator*=(&v51, (char *)a1 + 80);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v51) )
          {
            v52 = v51;
            vSpAddAndCompactDirtyRect(a1, &v52);
            v40 = 0LL;
            v54 = (struct _RECTL)0LL;
            v55 = 0LL;
            if ( v15 == 1 )
            {
              PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v54, v47, &v51);
              v40 = *(_QWORD *)&v54.left;
            }
            if ( v40 || !v15 )
              vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v51, 0);
            if ( v15 == 1 )
              PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v54);
          }
        }
        else
        {
          v41 = 0LL;
          v52 = (struct _RECTL)0LL;
          v53 = 0LL;
          if ( v15 == 1 )
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v52, v47, (struct _RECTL *)a1 + 5);
            v41 = *(_QWORD *)&v52.left;
          }
          if ( v41 || !v15 )
            vSpRedrawSprite(a1);
          if ( v15 == 1 )
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
          if ( (*(_DWORD *)(v48[0] + 32LL) & 0x400) == 0 )
            PDEVOBJ::vSync(
              (PDEVOBJ *)v48,
              (struct _SURFOBJ *)((*(_QWORD *)(v48[0] + 2568LL) + 24LL) & -(__int64)(*(_QWORD *)(v48[0] + 2568LL) != 0LL)),
              0LL,
              0);
        }
        v13 = updated;
        goto LABEL_16;
      }
      v30 = v46;
      v31 = v14 & 0x80000000;
    }
    v29 = bSpUpdatePosition(a1, v30, v31, 0);
    goto LABEL_64;
  }
  return 0LL;
}

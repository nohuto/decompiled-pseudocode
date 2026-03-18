/*
 * XREFs of ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C025CF7C
 * Callers:
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0258500 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C025D4A4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0084350 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7830 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C025BD50 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C025C03C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025C9AC (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E95C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C025EB70 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0260B20 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0266194 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
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
  unsigned int v14; // esi
  unsigned int v15; // edi
  int v16; // r15d
  __int64 v17; // rcx
  _DWORD *v18; // r12
  __int64 v19; // rcx
  LONG v20; // eax
  LONG cx; // eax
  LONG cy; // edx
  LONG v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  struct _BLENDFUNCTION v26; // ecx
  unsigned int v27; // r12d
  HDC v28; // rdx
  int v29; // ecx
  int v30; // eax
  struct _POINTL *v31; // rdx
  unsigned int v32; // r8d
  int updated; // edi
  struct _POINTL *v34; // rcx
  LONG v35; // edx
  LONG v36; // r8d
  LONG v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rax
  struct _BLENDFUNCTION v40; // [rsp+50h] [rbp-B0h] BYREF
  HDC v41; // [rsp+58h] [rbp-A8h]
  struct tagSIZE *v42; // [rsp+60h] [rbp-A0h]
  struct _POINTL *v43; // [rsp+68h] [rbp-98h]
  struct _POINTL *v44; // [rsp+70h] [rbp-90h]
  struct _SPRITESTATE *v45; // [rsp+78h] [rbp-88h]
  _QWORD v46[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL v47; // [rsp+90h] [rbp-70h] BYREF
  struct _SPRITESTATE *v48[24]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v49; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v50; // [rsp+170h] [rbp+70h] BYREF
  __int64 v51; // [rsp+180h] [rbp+80h]
  struct _RECTL v52; // [rsp+190h] [rbp+90h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp+A0h]

  v11 = a8;
  v12 = a10;
  v41 = a5;
  v43 = a6;
  v42 = a4;
  v44 = a3;
  *(_QWORD *)&v49.left = a2;
  if ( !a1 )
    return 0LL;
  v45 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v46[0] = *(_QWORD *)v45;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v48, (struct PDEVOBJ *)v46);
  v40 = 0;
  v14 = 1;
  v15 = a9;
  if ( (a9 & 0x10000000) != 0 )
  {
    v15 = a9 & 0xEFFFFFFF;
    v40 = (struct _BLENDFUNCTION)1;
  }
  v16 = 0;
  if ( (v15 & 0x200000) != 0 )
  {
    v15 &= ~0x200000u;
    v16 = 1;
  }
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v45 + 128));
  v17 = *((_QWORD *)a1 + 16);
  if ( v17 )
  {
    v18 = (_DWORD *)SURFOBJ_TO_SURFACE_NOT_NULL(v17);
    if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v18) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 280));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v20 = v18[14];
        *(_QWORD *)&v47.left = 0LL;
        v47.right = v20;
        v47.bottom = v18[15];
        if ( a10 )
        {
          v52 = *a10;
          ERECTL::operator*=(&v52, &v47);
        }
        else
        {
          v52 = v47;
        }
        v12 = &v52;
      }
      DCOBJ::DCOBJ((DCOBJ *)&v50, v41);
      if ( *(_QWORD *)&v50.left && v42 )
      {
        cx = v18[14];
        if ( v42->cx < cx )
          cx = v42->cx;
        cy = v42->cy;
        v47.left = cx;
        v23 = v18[15];
        if ( cy < v23 )
          v23 = cy;
        v47.top = v23;
        v42 = (struct tagSIZE *)&v47;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 70));
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v50);
    }
  }
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v45 + 128));
  if ( (v15 & 0x20000000) != 0 )
  {
    v26 = v40;
    v15 &= ~0x20000000u;
    *((_DWORD *)a1 + 56) = v15 | (*(_DWORD *)&v40 << 28);
    if ( (v15 & 2) != 0 && a8 )
      *((struct _BLENDFUNCTION *)a1 + 57) = *a8;
    v27 = a7;
    *((_DWORD *)a1 + 58) = a7;
    if ( v26 )
    {
      vSpCreateExMirror(**((HDEV **)a1 + 2));
      *(_DWORD *)a1 |= 0x100u;
    }
    v28 = v41;
    if ( !v41 )
    {
      v29 = *((_DWORD *)a1 + 56);
      v28 = (HDC)*((unsigned int *)a1 + 51);
      v40 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 50);
      if ( v29 == 3 && !a8->AlphaFormat )
      {
        v29 = 2;
        v40 = *a8;
        v11 = &v40;
        v40.AlphaFormat = 1;
        v28 = (HDC)a7;
      }
      *((_DWORD *)a1 + 1) = v29;
      *((_DWORD *)a1 + 51) = (_DWORD)v28;
      *((struct _BLENDFUNCTION *)a1 + 50) = *v11;
      goto LABEL_83;
    }
  }
  else
  {
    if ( v15 == 0x40000000 )
    {
      v15 = *((_DWORD *)a1 + 56);
      if ( (v15 & 0x10000000) != 0 )
        v15 &= ~0x10000000u;
      if ( (*(_DWORD *)a1 & 0x40) != 0 && !v15 )
        v15 = *((_DWORD *)a1 + 1);
      v11 = &v40;
      v27 = *((_DWORD *)a1 + 58);
      v40 = (struct _BLENDFUNCTION)*((_DWORD *)a1 + 57);
    }
    else
    {
      v27 = a7;
    }
    v28 = v41;
  }
  if ( (*(_DWORD *)(v46[0] + 32LL) & 0x400) == 0 )
  {
    if ( *(_QWORD *)&v49.left || v42 || v28 || v43 || v27 )
    {
      updated = bSpUpdateShape(a1, v15, *(HDC *)&v49.left, v28, v27, v11, v43, v42, v12);
      if ( !updated || v16 )
        goto LABEL_63;
      v34 = v44;
      if ( !v44 )
        v34 = (struct _POINTL *)((char *)a1 + 112);
      v32 = 0;
      v31 = v34;
    }
    else
    {
      if ( v15 - 2 <= 1 && v11 && !v44 )
      {
        v30 = bSpUpdateAlpha(a1, v11, 1);
LABEL_62:
        updated = v30;
        goto LABEL_63;
      }
      if ( (v15 & 0x7FFFFFFF) != 0 || v11 )
      {
        updated = 1;
LABEL_63:
        if ( v12 )
        {
          v35 = *((_DWORD *)a1 + 28) + v12->right;
          v36 = *((_DWORD *)a1 + 29) + v12->top;
          v37 = *((_DWORD *)a1 + 29) + v12->bottom;
          v49.left = *((_DWORD *)a1 + 28) + v12->left;
          v49.right = v35;
          v49.top = v36;
          v49.bottom = v37;
          ERECTL::operator*=(&v49, (_DWORD *)a1 + 20);
          if ( !ERECTL::bEmpty((ERECTL *)&v49) )
          {
            v50 = v49;
            vSpAddAndCompactDirtyRect(a1, &v50);
            v38 = 0LL;
            v52 = (struct _RECTL)0LL;
            v53 = 0LL;
            if ( v16 == 1 )
            {
              PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v52, v45, &v49);
              v38 = *(_QWORD *)&v52.left;
            }
            if ( v38 || !v16 )
              vSpRedrawArea(*((struct _SPRITESTATE **)a1 + 2), &v49, 0);
            if ( v16 == 1 )
              PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v52);
          }
        }
        else
        {
          v39 = 0LL;
          v50 = (struct _RECTL)0LL;
          v51 = 0LL;
          if ( v16 == 1 )
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)&v50, v45, (struct _RECTL *)a1 + 5);
            v39 = *(_QWORD *)&v50.left;
          }
          if ( v39 || !v16 )
            vSpRedrawSprite(a1);
          if ( v16 == 1 )
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v50);
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)&v50);
          if ( (*(_DWORD *)(v46[0] + 32LL) & 0x400) == 0 )
            PDEVOBJ::vSync(
              (PDEVOBJ *)v46,
              (struct _SURFOBJ *)((*(_QWORD *)(v46[0] + 2568LL) + 24LL) & -(__int64)(*(_QWORD *)(v46[0] + 2568LL) != 0LL)),
              0LL,
              0);
        }
        v14 = updated;
        goto LABEL_83;
      }
      v31 = v44;
      v32 = v15 & 0x80000000;
    }
    v30 = bSpUpdatePosition(a1, v31, v32, 0);
    goto LABEL_62;
  }
LABEL_83:
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v48, (__int64)v28, v24, v25);
  return v14;
}

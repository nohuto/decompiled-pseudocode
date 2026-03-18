/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680
 * Callers:
 *     <none>
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C002532C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00816C4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     OffBitBlt @ 0x1C00A5454 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00A7354 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00A742C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00A74C0 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7830 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7860 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025A168 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E95C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0266194 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // edi
  struct _RECTL *v12; // r15
  struct _SURFOBJ *v13; // r8
  RECTL rclBounds; // xmm6
  int v15; // eax
  struct _SPRITESTATE *v16; // rsi
  int v17; // r13d
  int v18; // r14d
  int v19; // ebx
  struct _POINTL *v21; // rdx
  struct _CLIPOBJ *v22; // r9
  struct _RECTL *v23; // r8
  POINTL *v24; // r11
  struct _SURFOBJ *v25; // r13
  struct SPRITE *v26; // rbx
  struct _SURFOBJ *v27; // rsi
  POINTL *v28; // rax
  __int64 v29; // rbx
  LONG v30; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v32; // rsi
  XCLIPOBJ *v33; // r14
  __int64 v34; // r10
  struct REGION *v35; // rax
  HDEV v36; // rax
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  int v39; // eax
  struct _POINTL *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _CLIPOBJ *v44; // [rsp+78h] [rbp-90h] BYREF
  int v45; // [rsp+80h] [rbp-88h]
  int v46; // [rsp+84h] [rbp-84h]
  int v47; // [rsp+88h] [rbp-80h]
  struct _POINTL v48; // [rsp+8Ch] [rbp-7Ch]
  int v49; // [rsp+94h] [rbp-74h]
  struct _POINTL v50[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _RECTL v51; // [rsp+A8h] [rbp-60h] BYREF
  HDEV hdev; // [rsp+B8h] [rbp-50h] BYREF
  int v53; // [rsp+C0h] [rbp-48h]
  int v54; // [rsp+C4h] [rbp-44h]
  int v55; // [rsp+C8h] [rbp-40h]
  int v56[2]; // [rsp+D0h] [rbp-38h]
  int v57[2]; // [rsp+D8h] [rbp-30h]
  __int64 v58; // [rsp+E0h] [rbp-28h] BYREF
  struct SPRITE *v59; // [rsp+E8h] [rbp-20h] BYREF
  struct _SPRITESTATE *v60; // [rsp+F0h] [rbp-18h]
  struct SPRITE *v61; // [rsp+F8h] [rbp-10h] BYREF
  struct _SURFOBJ *v62; // [rsp+100h] [rbp-8h]
  struct _SURFOBJ *v63; // [rsp+108h] [rbp+0h]
  __int64 v64; // [rsp+110h] [rbp+8h] BYREF
  __int64 v65; // [rsp+118h] [rbp+10h]
  struct REGION *v66; // [rsp+120h] [rbp+18h] BYREF
  struct SPRITE *v67; // [rsp+128h] [rbp+20h] BYREF
  __int64 v68; // [rsp+130h] [rbp+28h]
  __int64 v69; // [rsp+138h] [rbp+30h]
  __int64 v70; // [rsp+140h] [rbp+38h]
  _BYTE v71[8]; // [rsp+148h] [rbp+40h] BYREF
  struct _POINTL *v72; // [rsp+150h] [rbp+48h]
  struct _RECTL v73; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v74[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v75[96]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v76[80]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v77; // [rsp+238h] [rbp+130h]
  struct _SPRITESTATE *v78[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v79; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v80; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int128 v81; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v82; // [rsp+338h] [rbp+230h] BYREF
  RECTL v83; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v84[3]; // [rsp+358h] [rbp+250h] BYREF
  struct _RECTL v85; // [rsp+370h] [rbp+268h] BYREF

  v11 = 0;
  v12 = a6;
  v65 = (__int64)a5;
  v72 = a8;
  v69 = (__int64)a9;
  v68 = (__int64)a10;
  v70 = (__int64)a3;
  v13 = a1;
  v62 = a1;
  v44 = a4;
  v81 = 0uLL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v81 = (unsigned __int128)rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v81) )
      return 1LL;
    v83 = rclBounds;
    ERECTL::operator*=(&v83, a6);
    v12 = &v83;
  }
  hdev = v13->hdev;
  memset(v74, 0, 24);
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v74);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v71, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v74) )
    goto LABEL_132;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v78, (struct PDEVOBJ *)&hdev);
  v16 = (struct _SPRITESTATE *)(hdev + 18);
  v17 = v12->left - a7->x;
  v18 = v12->top - a7->y;
  v60 = (struct _SPRITESTATE *)(hdev + 18);
  v49 = v17;
  v53 = v18;
  if ( v17 <= 0 )
  {
    v19 = 0;
    if ( v18 > 0 )
      v19 = 2;
  }
  else
  {
    v19 = 3;
    if ( v18 <= 0 )
      v19 = 1;
  }
  v45 = v19;
  if ( v44 )
  {
    if ( v44->iDComplexity )
      v81 = (unsigned __int128)v44->rclBounds;
    else
      v44 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 50));
  if ( !*((_QWORD *)v16 + 130) )
    goto LABEL_23;
  v79.left = v12->left - v17;
  v79.right = v12->right - v17;
  v79.top = v12->top - v18;
  v79.bottom = v12->bottom - v18;
  if ( *((_QWORD *)v16 + 131) )
  {
    v22 = 0LL;
    v23 = &v79;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v79, &v85) )
  {
    v22 = v44;
    v23 = &v85;
LABEL_22:
    vSpUpdateLockedScreenAreas(v16, v21, v23, v22, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 128));
  v51.left = v12->left - v17;
  v51.right = v12->right - v17;
  v51.top = v12->top - v18;
  v51.bottom = v12->bottom - v18;
  v73 = v51;
  ERECTL::operator+=((unsigned int *)&v73, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v84, v16, &v73);
  if ( !v84[0] )
    goto LABEL_129;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v76, v16, v12, v19, &v73);
  if ( !v77 )
    goto LABEL_128;
  do
  {
    v55 = ENUMAREAS::bEnum((ENUMAREAS *)v76, &v59, &v51);
    v79.left = v51.left - v17;
    v79.right = v51.right - v17;
    v79.top = v51.top - v18;
    v79.bottom = v51.bottom - v18;
    do
    {
      if ( v59 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v59 + 20);
        *(_QWORD *)v57 = (char *)v59 + 168;
      }
      else
      {
        v25 = v62;
        *(_QWORD *)v57 = v24;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v75, v16, &v79, v19, 0LL);
      do
      {
        v54 = ENUMAREAS::bEnum((ENUMAREAS *)v75, &v61, &v82);
        if ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v75, &v67) )
        {
          do
          {
            v26 = v67;
            v61 = v67;
          }
          while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v75, &v67) );
        }
        else
        {
          v26 = v61;
        }
        if ( v26 )
        {
          v27 = (struct _SURFOBJ *)*((_QWORD *)v26 + 20);
          v28 = (POINTL *)((char *)v26 + 168);
        }
        else
        {
          v27 = v62;
          v28 = &gptlZero;
        }
        v80.left = v49 + v82.left;
        v80.right = v49 + v82.right;
        *(_QWORD *)v56 = v28;
        v80.top = v18 + v82.top;
        v63 = v27;
        v80.bottom = v18 + v82.bottom;
        if ( v44 && !bIntersect(&v80, (const struct _RECTL *)&v81, &v44->rclBounds) )
          goto LABEL_121;
        v58 = 0LL;
        if ( v25
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x200) == 0 )
        {
          v58 = SURFOBJ_TO_SURFACE_NOT_NULL(v25);
          GreLockDisplayDevice(*(_QWORD *)(v58 + 48));
        }
        v29 = 0LL;
        if ( v27
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
        {
          v29 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
          GreLockDisplayDevice(*(_QWORD *)(v29 + 48));
        }
        v46 = 0;
        v47 = 0;
        v30 = *((_DWORD *)hdev + 650);
        v48.y = (int)hdev[651];
        v48.x = v30;
        if ( !v44 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          if ( ThreadWin32Thread )
          {
            if ( *(_BYTE *)(ThreadWin32Thread + 328) == 1 )
            {
              v32 = *(DC ***)(ThreadWin32Thread + 312);
              v33 = (DC *)((char *)*v32 + 2200);
              v66 = XDCOBJ::prgnEffRao(v32);
              if ( (*(_DWORD *)(v34 + 32) & 0x20000) != 0 )
              {
                v50[0].x = -v48.x;
                v50[0].y = -v48.y;
                RGNOBJ::bOffset((RGNOBJ *)&v66, v50);
                v47 = 1;
              }
              v35 = XDCOBJ::prgnEffRao(v32);
              XCLIPOBJ::vSetup(v33, v35, (struct ERECTL *)&v80, 1);
              v27 = v63;
              v44 = (struct _CLIPOBJ *)v33;
              v18 = v53;
              v46 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v58, &v44) )
        {
          if ( a11 == 52428 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x400) == 0 && v27->hdev )
            {
              if ( v27->iType != 1 )
                goto LABEL_72;
              if ( !bAllowShareAccess(v27)
                || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
                || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
              {
                if ( v27->iType != 1
                  || !bAllowShareAccess(v27)
                  || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                  || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                  || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                  && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
                {
LABEL_72:
                  if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x400) != 0 )
                  {
                    v36 = v27->hdev;
                    goto LABEL_90;
                  }
                }
LABEL_91:
                v37 = EngCopyBits;
LABEL_92:
                OffCopyBits(
                  (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v37,
                  *(int **)v57,
                  (__int64)v25,
                  *(int **)v56,
                  (__int64)v27,
                  v44,
                  v65,
                  &v80,
                  &v82);
                goto LABEL_113;
              }
LABEL_81:
              v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
              goto LABEL_92;
            }
            if ( v25->iType == 1 )
            {
              if ( bAllowShareAccess(v25)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
              {
                goto LABEL_81;
              }
              if ( v25->iType == 1
                && bAllowShareAccess(v25)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
              {
                goto LABEL_91;
              }
            }
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x400) == 0 )
              goto LABEL_91;
            v36 = v25->hdev;
LABEL_90:
            v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v36 + 166);
            goto LABEL_92;
          }
          if ( v72 )
          {
            LODWORD(v64) = v80.left + v72->x - v12->left;
            HIDWORD(v64) = v80.top + v72->y - v12->top;
          }
          if ( v25->iType != 1 )
            goto LABEL_109;
          if ( bAllowShareAccess(v25)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
          {
            v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_112:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v38,
              *(int **)v57,
              (__int64)v25,
              *(_DWORD **)v56,
              (__int64)v27,
              v70,
              v44,
              v65,
              &v80,
              &v82,
              (__int64)&v64,
              v69,
              (_DWORD *)v68,
              a11);
            goto LABEL_113;
          }
          if ( v25->iType != 1
            || !bAllowShareAccess(v25)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_109:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 1) != 0 )
            {
              v38 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v25->hdev + 165);
              goto LABEL_112;
            }
          }
          v38 = EngBitBlt;
          goto LABEL_112;
        }
LABEL_113:
        if ( v46 == 1 )
        {
          if ( v47 == 1 )
          {
            v50[0] = v48;
            RGNOBJ::bOffset((RGNOBJ *)&v66, v50);
          }
          v44 = 0LL;
        }
        if ( v29 )
          GreUnlockDisplayDevice(*(_QWORD *)(v29 + 48));
        if ( v58 )
          GreUnlockDisplayDevice(*(_QWORD *)(v58 + 48));
LABEL_121:
        if ( v44 )
          v44->rclBounds = (RECTL)v81;
      }
      while ( v54 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v75);
      v39 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v76, &v59);
      v16 = v60;
      v24 = &gptlZero;
      v19 = v45;
    }
    while ( v39 );
    if ( v59 )
      vSpRedrawArea(v60, &v51, 0);
    v17 = v49;
  }
  while ( v55 );
LABEL_128:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v76);
LABEL_129:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v84);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v16 + 128));
  if ( *((_QWORD *)v16 + 130) )
    vSpUpdateLockedScreenAreas(v16, v40, v12, v44, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 128));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v84);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v78, v41, v42, v43);
LABEL_132:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v71);
  return v11;
}

/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0024928 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0024960 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C002532C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     OffBitBlt @ 0x1C00A5454 (OffBitBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00A7384 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00A742C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00A74C0 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00A758C (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7830 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025E95C (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0266194 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltFromScreen(
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
  unsigned int v11; // esi
  struct _RECTL *v12; // r12
  HDEV v16; // rdi
  int v17; // eax
  SURFACE *v18; // rax
  LONG x; // ecx
  LONG left; // edx
  int v21; // r15d
  int v22; // edx
  LONG v23; // eax
  struct _POINTL *v24; // rdx
  unsigned int v25; // r9d
  BYTE iDComplexity; // r15
  int v27; // eax
  struct _SURFOBJ *v28; // r15
  POINTL *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  struct _CLIPOBJ *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  HDEV v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rbx
  HDEV v41; // rax
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // r14d
  RECTL rclBounds; // xmm6
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  LONG y; // r8d
  LONG v51; // ecx
  int v52; // ecx
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  BYTE v54; // [rsp+78h] [rbp-90h]
  POINTL *v56; // [rsp+88h] [rbp-80h]
  int v57; // [rsp+90h] [rbp-78h]
  struct _RECTL *v58; // [rsp+98h] [rbp-70h]
  int v59; // [rsp+A8h] [rbp-60h]
  int v60; // [rsp+ACh] [rbp-5Ch]
  HDEV hdev; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h] BYREF
  HDEV v63; // [rsp+C0h] [rbp-48h]
  __int64 v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  __int64 v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v68; // [rsp+E8h] [rbp-20h] BYREF
  char v69[8]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v70[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v71[96]; // [rsp+118h] [rbp+10h] BYREF
  struct _SPRITESTATE *v72[24]; // [rsp+178h] [rbp+70h] BYREF
  struct _SPRITESTATE *v73[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v74; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v75; // [rsp+308h] [rbp+200h] BYREF
  RECTL v76; // [rsp+318h] [rbp+210h] BYREF
  RECTL v77; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v78[3]; // [rsp+338h] [rbp+230h] BYREF

  v11 = 0;
  v12 = a6;
  v66 = (__int64)a8;
  v65 = (__int64)a9;
  v64 = (__int64)a10;
  v67 = (__int64)a3;
  v58 = a6;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v76 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v76) )
      return 1LL;
    v77 = rclBounds;
    ERECTL::operator*=(&v77, a6);
    v12 = &v77;
    v58 = &v77;
  }
  hdev = a2->hdev;
  memset(v70, 0, 24);
  v16 = hdev + 18;
  v63 = hdev + 18;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v70);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v69, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v70) )
    goto LABEL_44;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    v18 = (SURFACE *)SURFOBJ_TO_SURFACE(a1);
    if ( !SURFACE::bIncludeSprites(v18) )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v72, (struct PDEVOBJ *)&hdev);
      x = a7->x;
      left = v12->left;
      v21 = v12->top - a7->y;
      v74.top = a7->y;
      v22 = left - x;
      v23 = v12->right - v22;
      v74.left = x;
      v74.right = v23;
      v57 = v22;
      v74.bottom = v12->bottom - v21;
      v59 = v21;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 32));
      if ( *((_QWORD *)v16 + 130) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v24, v58, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 32));
      if ( v57 > 0 )
      {
        v25 = 3;
        if ( v21 <= 0 )
          v25 = 1;
      }
      else
      {
        v25 = 0;
        if ( v21 > 0 )
          v25 = 2;
      }
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        v54 = iDComplexity;
        if ( iDComplexity )
          v76 = a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v54 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v71, (struct _SPRITESTATE *)v16, &v74, v25, 0LL);
      while ( 1 )
      {
        v27 = ENUMAREAS::bEnum((ENUMAREAS *)v71, &v68, &v74);
        v75.left = v57 + v74.left;
        v75.right = v57 + v74.right;
        v75.top = v59 + v74.top;
        v60 = v27;
        v75.bottom = v59 + v74.bottom;
        if ( !iDComplexity )
          break;
        v33 = a4;
        if ( bIntersect(&v75, &v76, &a4->rclBounds) )
          break;
LABEL_40:
        if ( !v60 )
        {
          if ( iDComplexity )
            v33->rclBounds = v76;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v71);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v72, v34, v35, v36);
          goto LABEL_44;
        }
      }
      if ( v68 )
      {
        v28 = (struct _SURFOBJ *)*((_QWORD *)v68 + 20);
        v29 = (POINTL *)((char *)v68 + 168);
      }
      else
      {
        v28 = (struct _SURFOBJ *)*((_QWORD *)v16 + 5);
        v29 = &gptlZero;
      }
      v56 = v29;
      v30 = 0LL;
      if ( a1
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
      {
        v30 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        GreLockDisplayDevice(*(_QWORD *)(v30 + 48));
      }
      v31 = 0LL;
      if ( v28
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x200) == 0 )
      {
        v31 = SURFOBJ_TO_SURFACE_NOT_NULL(v28);
        GreLockDisplayDevice(*(_QWORD *)(v31 + 48));
      }
      if ( a11 == 52428 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 || !v28->hdev )
        {
          if ( a1->iType != 1 )
            goto LABEL_111;
          if ( (unsigned int)bAllowShareAccess(a1)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
          {
            goto LABEL_33;
          }
          if ( a1->iType != 1
            || !(unsigned int)bAllowShareAccess(a1)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_111:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
            {
              v38 = a1->hdev;
              goto LABEL_54;
            }
          }
        }
        else
        {
          if ( v28->iType != 1 )
            goto LABEL_52;
          if ( (unsigned int)bAllowShareAccess(v28)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
          {
LABEL_33:
            v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
LABEL_34:
            OffCopyBits(
              (int)v32,
              (int)&gptlZero,
              (int)a1,
              (int)v56,
              (__int64)v28,
              a4,
              (__int64)a5,
              (__int64)&v75,
              (__int64)&v74);
LABEL_35:
            if ( v31 )
              GreUnlockDisplayDevice(*(_QWORD *)(v31 + 48));
            if ( v30 )
              GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
            iDComplexity = v54;
            v33 = a4;
            v16 = v63;
            goto LABEL_40;
          }
          if ( v28->iType != 1
            || !(unsigned int)bAllowShareAccess(v28)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
          {
LABEL_52:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v28) + 112) & 0x400) != 0 )
            {
              v38 = v28->hdev;
LABEL_54:
              v32 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v38 + 166);
              goto LABEL_34;
            }
          }
        }
        v32 = EngCopyBits;
        goto LABEL_34;
      }
      if ( v66 )
      {
        LODWORD(v62) = v75.left + *(_DWORD *)v66 - v58->left;
        HIDWORD(v62) = v75.top + *(_DWORD *)(v66 + 4) - v58->top;
      }
      if ( a1->iType != 1 )
        goto LABEL_129;
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v49 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_132:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v49,
          (int *)&gptlZero,
          (__int64)a1,
          v56,
          (__int64)v28,
          v67,
          a4,
          (__int64)a5,
          &v75,
          &v74,
          (__int64)&v62,
          v65,
          (_DWORD *)v64,
          a11);
        goto LABEL_35;
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108) )
      {
LABEL_129:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 165);
          goto LABEL_132;
        }
      }
      v49 = EngBitBlt;
      goto LABEL_132;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v73, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v16 + 169) )
  {
    y = a7->y;
    v51 = a7->x + v12->right - v12->left;
    v74.left = a7->x;
    v74.right = v51;
    v52 = v12->bottom - v12->top;
    v74.top = y;
    v74.bottom = y + v52;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v78, (struct _SPRITESTATE *)v16, &v74);
    if ( v78[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v74);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 169);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v78);
  }
  v39 = 0LL;
  if ( a1
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
  {
    v39 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    GreLockDisplayDevice(*(_QWORD *)(v39 + 48));
  }
  v40 = 0LL;
  if ( a2
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
  {
    v40 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
    GreLockDisplayDevice(*(_QWORD *)(v40 + 48));
  }
  if ( a11 == 52428 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) == 0 && a2->hdev )
    {
      if ( a2->iType != 1 )
        goto LABEL_69;
      if ( !(unsigned int)bAllowShareAccess(a2)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( a2->iType == 1
          && (unsigned int)bAllowShareAccess(a2)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_146;
        }
LABEL_69:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x400) != 0 )
        {
          v41 = a2->hdev;
LABEL_71:
          v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v41 + 166);
LABEL_72:
          v43 = OffCopyBits(
                  (int)v42,
                  (int)&gptlZero,
                  (int)a1,
                  (int)&gptlZero,
                  (__int64)a2,
                  a4,
                  (__int64)a5,
                  (__int64)v58,
                  (__int64)a7);
          goto LABEL_73;
        }
        goto LABEL_146;
      }
LABEL_154:
      v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
      goto LABEL_72;
    }
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_154;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_146;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x400) != 0 )
    {
      v41 = a1->hdev;
      goto LABEL_71;
    }
LABEL_146:
    v42 = EngCopyBits;
    goto LABEL_72;
  }
  if ( a1->iType != 1 )
  {
LABEL_177:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v53 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 165);
      goto LABEL_180;
    }
LABEL_179:
    v53 = EngBitBlt;
    goto LABEL_180;
  }
  if ( !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_179;
    }
    goto LABEL_177;
  }
  v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_180:
  v43 = OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v53,
          (int *)&gptlZero,
          (__int64)a1,
          &gptlZero,
          (__int64)a2,
          v67,
          a4,
          (__int64)a5,
          v58,
          a7,
          v66,
          v65,
          (_DWORD *)v64,
          a11);
LABEL_73:
  v47 = v43;
  if ( v40 )
    GreUnlockDisplayDevice(*(_QWORD *)(v40 + 48));
  if ( v39 )
    GreUnlockDisplayDevice(*(_QWORD *)(v39 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v73, v44, v45, v46);
  v11 = v47;
LABEL_44:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v69);
  return v11;
}

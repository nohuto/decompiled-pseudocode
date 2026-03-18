/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0261E88
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F154 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0263F3C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0256E84 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C025A108 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C025EAB8 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rbx
  struct _SURFOBJ *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  POINTL *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  HDEV hdev; // rax
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  int v25[2]; // [rsp+88h] [rbp-78h]
  REGION *v26[11]; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+120h] [rbp+20h]
  int v30; // [rsp+128h] [rbp+28h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 130);
  v24 = (__int64)a4;
  *(_QWORD *)v25 = a2;
  v26[10] = 0LL;
  v27 = 0;
  v28 = 1;
  v29 = 0LL;
  v26[7] = 0LL;
  v30 = 0;
  v21 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v26, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v26 + 4)) )
      goto LABEL_61;
    v21 = (struct _CLIPOBJ *)v26;
  }
  v9 = *((_QWORD *)a1 + 5);
  v23 = 0LL;
  if ( v9
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
  {
    v23 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    GreLockDisplayDevice(*(_QWORD *)(v23 + 48));
  }
  v22 = 0LL;
  if ( a3
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
  {
    v22 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    GreLockDisplayDevice(*(_QWORD *)(v22 + 48));
  }
  v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + 5);
  v11 = 0LL;
  v12 = SURFOBJ_TO_SURFACE(v10);
  v20 = 0LL;
  v14 = &gptlZero;
  if ( !v12 )
    goto LABEL_57;
  v15 = *(_QWORD *)(v12 + 48);
  if ( (*(_DWORD *)(v12 + 112) & 0x80000) == 0 || (v16 = *(_QWORD *)(v15 + 16), v15 == v16) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v10->hdev )
    {
      if ( v10->iType != 1 )
      {
LABEL_36:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x400) != 0 )
        {
          hdev = v10->hdev;
LABEL_54:
          v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 166);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      if ( !bAllowShareAccess(v10)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v10->iType == 1
          && bAllowShareAccess(v10)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_55;
        }
        goto LABEL_36;
      }
LABEL_45:
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
      goto LABEL_56;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_45;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_55;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_54;
    }
LABEL_55:
    v18 = EngCopyBits;
    goto LABEL_56;
  }
  v14 = (POINTL *)(v15 + 2600);
  LOBYTE(v13) = 5;
  v17 = HmgShareLockCheck(*(_QWORD *)(v12 + 144), v13);
  if ( v17 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v20,
                         0LL,
                         0,
                         *(_QWORD *)(v16 + 1824),
                         *(_QWORD *)(v15 + 1824),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v11 = v20;
      v10 = (struct _SURFOBJ *)(v17 + 24);
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v16 + 2856);
      DEC_SHARE_REF_CNT(v17);
LABEL_56:
      OffCopyBits(
        (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *))v18,
        *(int **)v25,
        (__int64)a3,
        (int *)v14,
        (__int64)v10,
        v21,
        v11,
        (_DWORD *)v24,
        (_DWORD *)v24);
      goto LABEL_57;
    }
    DEC_SHARE_REF_CNT(v17);
  }
LABEL_57:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
  if ( v22 )
    GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
  if ( v23 )
    GreUnlockDisplayDevice(*(_QWORD *)(v23 + 48));
LABEL_61:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v26);
}

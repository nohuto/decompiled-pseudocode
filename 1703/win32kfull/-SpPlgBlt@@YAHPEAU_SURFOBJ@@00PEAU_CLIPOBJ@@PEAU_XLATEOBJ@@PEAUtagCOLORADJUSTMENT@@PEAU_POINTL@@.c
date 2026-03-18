/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C02594B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00A7354 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
 *     OffPlgBlt @ 0x1C02A451C (OffPlgBlt.c)
 */

__int64 __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // r13d
  FIX x; // ecx
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  BOOL v19; // r10d
  FIX y; // ecx
  int v21; // r10d
  HDEV hdev; // rax
  BOOL v23; // r11d
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  struct _SURFOBJ *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdi
  USHORT *p_iType; // r12
  __int64 ThreadWin32Thread; // rax
  int v32; // r9d
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v37; // [rsp+80h] [rbp-80h] BYREF
  POINTL *pptl; // [rsp+88h] [rbp-78h]
  struct _POINTL v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  struct _RECTL v45; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v46[114]; // [rsp+D0h] [rbp-30h] BYREF

  v11 = 1;
  pptl = a10;
  v35 = a1;
  x = pptfx[1].x;
  v18 = __OFSUB__(x, pptfx[3].x);
  v16 = x == pptfx[3].x;
  v17 = x - pptfx[3].x < 0;
  v37 = a4;
  v19 = !(v17 ^ v18 | v16);
  v44 = (__int64)a3;
  v18 = __OFSUB__(x, pptfx->x);
  v16 = x == pptfx->x;
  v17 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v43 = (__int64)pxlo;
  v42 = (__int64)pca;
  v21 = !(v17 ^ v18 | v16) ^ v19 ^ 1;
  v41 = (__int64)pptlBrushOrg;
  v40 = (__int64)prcl;
  hdev = a2->hdev;
  v23 = y > pptfx->y == y > pptfx[3].y;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v24 = v21 ^ 3;
    if ( pptfx[v21].x <= pptfx[v21 ^ 3LL].x )
      v24 = v21;
    v25 = v24;
    v45.left = (pptfx[v24].x >> 4) - 1;
    v26 = v23 ^ 3;
    if ( pptfx[v23].y <= pptfx[v23 ^ 3LL].y )
      v26 = v23;
    v45.top = (pptfx[v26].y >> 4) - 1;
    v45.right = ((pptfx[v25 ^ 3].x + 15) >> 4) + 1;
    v45.bottom = ((pptfx[v26 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v46, a1, a4, &v45);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v46, &v35, &v39, &v37) )
        return v11;
      v27 = v35;
      v28 = 0LL;
      v36 = 0LL;
      if ( v35
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v35) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        v36 = v28;
        GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
      }
      v29 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v29 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v29 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v36, &v37) )
        break;
LABEL_37:
      if ( v29 )
        GreUnlockDisplayDevice(*(_QWORD *)(v29 + 48));
      if ( v28 )
        GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
    }
    p_iType = &v27->iType;
    if ( v27->iType == 1 )
    {
      if ( bAllowShareAccess(v27) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v28 = v36;
          LODWORD(v27) = (_DWORD)v35;
          v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_36:
          v11 &= OffPlgBlt(
                   (int)v33,
                   (int)&v39,
                   (int)v27,
                   v32,
                   (__int64)a2,
                   v44,
                   v37,
                   v43,
                   v42,
                   v41,
                   (__int64)pptfx,
                   v40,
                   (__int64)pptl,
                   iMode);
          goto LABEL_37;
        }
        v28 = v36;
        v27 = v35;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v27) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v28 = v36;
          LODWORD(v27) = (_DWORD)v35;
LABEL_35:
          v33 = EngPlgBlt;
          goto LABEL_36;
        }
        v28 = v36;
        v27 = v35;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 4) != 0 )
    {
      v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v27->hdev + 172);
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}

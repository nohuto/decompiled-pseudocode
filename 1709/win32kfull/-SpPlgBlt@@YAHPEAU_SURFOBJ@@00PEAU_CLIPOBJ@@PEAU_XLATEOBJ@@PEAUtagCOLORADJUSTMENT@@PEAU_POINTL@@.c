/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C025A5E0
 * Callers:
 *     <none>
 * Callees:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E9158 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     OffPlgBlt @ 0x1C02A0BFC (OffPlgBlt.c)
 */

__int64 __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        struct _POINTL *a7,
        POINTFIX *pptfx,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v14; // r13d
  FIX x; // ecx
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  BOOL v19; // r10d
  FIX y; // ecx
  int v21; // r10d
  int v22; // r11d
  HDEV hdev; // rax
  BOOL v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rcx
  struct _SURFOBJ *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdi
  USHORT *p_iType; // r12
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v47; // r9
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  struct _SURFOBJ *v61; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v63; // [rsp+80h] [rbp-80h] BYREF
  POINTL *pptl; // [rsp+88h] [rbp-78h]
  RECTL *prcl; // [rsp+90h] [rbp-70h]
  POINTL *pptlBrushOrg; // [rsp+98h] [rbp-68h]
  struct _POINTL v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  struct _RECTL v71; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v72[114]; // [rsp+D0h] [rbp-30h] BYREF

  pptlBrushOrg = a7;
  prcl = a9;
  pptl = a10;
  v63 = a4;
  v61 = a1;
  v14 = 1;
  x = pptfx[1].x;
  v18 = __OFSUB__(x, pptfx[3].x);
  v16 = x == pptfx[3].x;
  v17 = x - pptfx[3].x < 0;
  v70 = (__int64)a3;
  v19 = !(v17 ^ v18 | v16);
  v69 = (__int64)pxlo;
  v68 = (__int64)pca;
  v18 = __OFSUB__(x, pptfx->x);
  v16 = x == pptfx->x;
  v17 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v21 = !(v17 ^ v18 | v16) ^ v19;
  v22 = (y > pptfx->y) ^ (y > pptfx[3].y);
  hdev = a2->hdev;
  v24 = y > pptfx->y == y > pptfx[3].y;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v25 = v21 ^ ((pptfx[v21 ^ 1].x > pptfx[v21 ^ 1 ^ 3LL].x) + 1LL);
    v71.left = (pptfx[v25].x >> 4) - 1;
    v26 = v22 ^ ((pptfx[v24].y > pptfx[v24 ^ 3LL].y) + 1LL);
    v71.top = (pptfx[v26].y >> 4) - 1;
    v71.right = ((pptfx[v25 ^ 3].x + 15) >> 4) + 1;
    v71.bottom = ((pptfx[v26 ^ 3].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v72, a1, a4, &v71);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v72, &v61, &v67, &v63) )
        return v14;
      v27 = v61;
      v28 = 0LL;
      v62 = 0LL;
      if ( v61
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v61) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
        v62 = v28;
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
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v62, &v63) )
        break;
LABEL_33:
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
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45);
          v28 = v62;
          LODWORD(v27) = (_DWORD)v61;
          v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_32:
          v14 &= OffPlgBlt(
                   (int)v48,
                   (int)&v67,
                   (int)v27,
                   v47,
                   (__int64)a2,
                   v70,
                   v63,
                   v69,
                   v68,
                   (__int64)pptlBrushOrg,
                   (__int64)pptfx,
                   (__int64)prcl,
                   (__int64)pptl,
                   iMode);
          goto LABEL_33;
        }
        v28 = v62;
        v27 = v61;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v27) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56, v57) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v47) + 108)) )
        {
          v28 = v62;
          LODWORD(v27) = (_DWORD)v61;
LABEL_31:
          v48 = EngPlgBlt;
          goto LABEL_32;
        }
        v28 = v62;
        v27 = v61;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 4) != 0 )
    {
      v48 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v27->hdev + 172);
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}

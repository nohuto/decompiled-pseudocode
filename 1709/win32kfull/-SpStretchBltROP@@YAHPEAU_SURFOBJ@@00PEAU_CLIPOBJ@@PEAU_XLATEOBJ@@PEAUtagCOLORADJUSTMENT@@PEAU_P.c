/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01387A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E9158 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x1C00FA890 (EngStretchBltROP.c)
 *     OffStretchBltROP @ 0x1C0138A84 (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBltROP(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        struct _BRUSHOBJ *pbo,
        DWORD rop4)
{
  unsigned int v14; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r10
  struct _CLIPOBJ *v17; // r11
  struct _SURFOBJ *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  USHORT *p_iType; // r14
  __int64 v22; // r9
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  struct _SURFOBJ *v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v54[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v55[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  __int64 v62; // [rsp+E0h] [rbp-20h]
  struct _RECTL v63; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v64[114]; // [rsp+100h] [rbp+0h] BYREF

  v14 = 1;
  hdev = a2->hdev;
  v52 = psoDest;
  v54[0] = a4;
  v62 = (__int64)a3;
  v61 = (__int64)pxlo;
  v60 = (__int64)pca;
  v59 = (__int64)pptlHTOrg;
  v58 = (__int64)prclSrc;
  v57 = (__int64)pptlMask;
  v56 = (__int64)pbo;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v55[0].x = prclDest->left;
    v55[0].y = prclDest->top;
    v55[1] = *(struct _POINTL *)&prclDest->right;
    v63 = *(struct _RECTL *)&v55[0].x;
    ERECTL::vOrder((ERECTL *)&v63);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v64, v16, v17, &v63);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v64, &v52, v55, v54) )
        return v14;
      v18 = v52;
      v19 = 0LL;
      v53 = 0LL;
      if ( v52
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v52) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
      {
        v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
        v53 = v19;
        GreLockDisplayDevice(*(_QWORD *)(v19 + 48));
      }
      v20 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v20 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v20 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v53, v54) )
        break;
LABEL_15:
      if ( v20 )
        GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
      if ( v19 )
        GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
    }
    p_iType = &v18->iType;
    if ( v18->iType == 1 )
    {
      if ( bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36) + 280) + 20LL) & 0x2000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39);
          v19 = v53;
          LODWORD(v18) = (_DWORD)v52;
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
          goto LABEL_14;
        }
        v19 = v53;
        v18 = v52;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v22) + 108)) )
        {
          v19 = v53;
          LODWORD(v18) = (_DWORD)v52;
          goto LABEL_40;
        }
        v19 = v53;
        v18 = v52;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x2000) != 0 )
    {
      v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 175);
LABEL_14:
      v14 &= OffStretchBltROP(
               (int)v23,
               (int)v55,
               (int)v18,
               v22,
               (__int64)a2,
               v62,
               v54[0],
               v61,
               v60,
               v59,
               (__int64)prclDest,
               v58,
               v57,
               iMode,
               v56,
               rop4);
      goto LABEL_15;
    }
LABEL_40:
    v23 = EngStretchBltROP;
    goto LABEL_14;
  }
  return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
}

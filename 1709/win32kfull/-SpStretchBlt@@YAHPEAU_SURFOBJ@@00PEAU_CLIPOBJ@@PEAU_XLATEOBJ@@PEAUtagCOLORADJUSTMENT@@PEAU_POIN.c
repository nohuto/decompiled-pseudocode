/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0139470
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E9158 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x1C0139734 (OffStretchBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBlt(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        struct _POINTL *pptlMask,
        ULONG iMode)
{
  unsigned int v12; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v14; // r10
  struct _CLIPOBJ *v15; // r11
  struct _SURFOBJ *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  USHORT *p_iType; // r14
  __int64 v20; // r9
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _SURFOBJ *v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v52[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v53[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  struct _RECTL v60; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v61[114]; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 1;
  hdev = a2->hdev;
  v50 = psoDest;
  v52[0] = a4;
  v59 = (__int64)a3;
  v58 = (__int64)pxlo;
  v57 = (__int64)pca;
  v56 = (__int64)pptlHTOrg;
  v55 = (__int64)prclSrc;
  v54 = (__int64)pptlMask;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v53[0].x = prclDest->left;
    v53[0].y = prclDest->top;
    v53[1] = *(struct _POINTL *)&prclDest->right;
    v60 = *(struct _RECTL *)&v53[0].x;
    ERECTL::vOrder((ERECTL *)&v60);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v61, v14, v15, &v60);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v61, &v50, v53, v52) )
        return v12;
      v16 = v50;
      v17 = 0LL;
      v51 = 0LL;
      if ( v50
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v50) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x200) == 0 )
      {
        v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
        v51 = v17;
        GreLockDisplayDevice(*(_QWORD *)(v17 + 48));
      }
      v18 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v18 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v18 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v51, v52) )
        break;
LABEL_14:
      if ( v18 )
        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
      if ( v17 )
        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
    }
    p_iType = &v16->iType;
    if ( v16->iType == 1 )
    {
      if ( bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 280) + 20LL) & 2) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37);
          v17 = v51;
          LODWORD(v16) = (_DWORD)v50;
          v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 88LL);
          goto LABEL_13;
        }
        v17 = v51;
        v16 = v50;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v16) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v20) + 108)) )
        {
          v17 = v51;
          LODWORD(v16) = (_DWORD)v50;
          goto LABEL_40;
        }
        v17 = v51;
        v16 = v50;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 2) != 0 )
    {
      v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v16->hdev + 167);
LABEL_13:
      v12 &= OffStretchBlt(
               (int)v21,
               (int)v53,
               (int)v16,
               v20,
               (__int64)a2,
               v59,
               v52[0],
               v58,
               v57,
               v56,
               (__int64)prclDest,
               v55,
               v54,
               iMode);
      goto LABEL_14;
    }
LABEL_40:
    v21 = EngStretchBlt;
    goto LABEL_13;
  }
  return EngStretchBlt(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}

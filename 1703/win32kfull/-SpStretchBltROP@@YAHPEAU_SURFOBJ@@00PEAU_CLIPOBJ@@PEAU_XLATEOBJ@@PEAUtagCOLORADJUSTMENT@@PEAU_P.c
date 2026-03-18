/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01338B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngStretchBltROP @ 0x1C009AF00 (EngStretchBltROP.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00A7354 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     OffStretchBltROP @ 0x1C0133B94 (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
  int v22; // r9d
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v28[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v29[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  struct _RECTL v37; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v38[114]; // [rsp+100h] [rbp+0h] BYREF

  v14 = 1;
  hdev = a2->hdev;
  v26 = psoDest;
  v28[0] = a4;
  v36 = (__int64)a3;
  v35 = (__int64)pxlo;
  v34 = (__int64)pca;
  v33 = (__int64)pptlHTOrg;
  v32 = (__int64)prclSrc;
  v31 = (__int64)pptlMask;
  v30 = (__int64)pbo;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    v29[0].x = prclDest->left;
    v29[0].y = prclDest->top;
    v29[1] = *(struct _POINTL *)&prclDest->right;
    v37 = *(struct _RECTL *)&v29[0].x;
    ERECTL::vOrder((ERECTL *)&v37);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v38, v16, v17, &v37);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v38, &v26, v29, v28) )
        return v14;
      v18 = v26;
      v19 = 0LL;
      v27 = 0LL;
      if ( v26
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x200) == 0 )
      {
        v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v18);
        v27 = v19;
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
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v27, v28) )
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
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x2000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v19 = v27;
          LODWORD(v18) = (_DWORD)v26;
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
          goto LABEL_14;
        }
        v19 = v27;
        v18 = v26;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v19 = v27;
          LODWORD(v18) = (_DWORD)v26;
          goto LABEL_40;
        }
        v19 = v27;
        v18 = v26;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x2000) != 0 )
    {
      v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 175);
LABEL_14:
      v14 &= OffStretchBltROP(
               (int)v23,
               (int)v29,
               (int)v18,
               v22,
               (__int64)a2,
               v36,
               v28[0],
               v35,
               v34,
               v33,
               (__int64)prclDest,
               v32,
               v31,
               iMode,
               v30,
               rop4);
      goto LABEL_15;
    }
LABEL_40:
    v23 = EngStretchBltROP;
    goto LABEL_14;
  }
  return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
}

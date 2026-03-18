/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0278B50
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngStretchBltROP @ 0x1C00FA890 (EngStretchBltROP.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  CLIPOBJ *v15; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct _DISPSURF *v19; // r14
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v24; // rdi
  struct _SURFOBJ *v25; // rax
  unsigned int v26; // r8d
  __int64 v28; // [rsp+70h] [rbp-69h] BYREF
  struct SURFACE *v29; // [rsp+78h] [rbp-61h] BYREF
  struct SURFACE *v30; // [rsp+80h] [rbp-59h] BYREF
  struct SURFACE *v31; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v32[128]; // [rsp+90h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+120h] [rbp+47h] BYREF
  CLIPOBJ *v34; // [rsp+138h] [rbp+5Fh]

  v34 = pco;
  v15 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v31, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v17);
      v18 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v32, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v18 + 32) & 0x20000) != 0 )
        {
          v19 = **(struct _DISPSURF ***)(v18 + 1816);
          if ( v19 )
          {
            do
            {
              v20 = *((_QWORD *)v19 + 6);
              HDEV = v20;
              if ( v20 )
              {
                if ( (*(_DWORD *)(v20 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2144) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v20 + 1808) + 616LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v28,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    v22 = *(_QWORD *)(v21 + 1808);
                    DevBitmap = GetDevBitmap(v19, a3);
                    v24 = GetDevBitmap(v19, a2);
                    v25 = GetDevBitmap(v19, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v22 + 616))(
                      v25,
                      v24,
                      DevBitmap,
                      v34,
                      pxlo,
                      pca,
                      pptlHTOrg,
                      prclDest,
                      prclSrc,
                      pptlMask,
                      iMode,
                      pbo,
                      rop4);
                    if ( v28 )
                      *(_WORD *)(v28 + 78) &= ~0x8000u;
                  }
                }
              }
              v19 = *(struct _DISPSURF **)v19;
            }
            while ( v19 );
            v15 = v34;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v32);
      }
    }
  }
  v26 = EngStretchBltROP(a1, a2, a3, v15, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  if ( v31 )
    bMakeOpaque(v31);
  return v26;
}

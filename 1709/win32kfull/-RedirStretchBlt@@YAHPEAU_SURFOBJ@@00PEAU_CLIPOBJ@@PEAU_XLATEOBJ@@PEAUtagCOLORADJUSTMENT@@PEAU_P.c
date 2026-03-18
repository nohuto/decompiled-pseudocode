/*
 * XREFs of ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02788E0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C00148E0 (EngStretchBlt.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStretchBlt(
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
        ULONG iMode)
{
  CLIPOBJ *v13; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct _DISPSURF *v17; // r14
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v22; // rdi
  struct _SURFOBJ *v23; // rax
  unsigned int v24; // r8d
  __int64 v26; // [rsp+60h] [rbp-69h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-61h] BYREF
  struct SURFACE *v28; // [rsp+70h] [rbp-59h] BYREF
  struct SURFACE *v29; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v30[128]; // [rsp+80h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+110h] [rbp+47h] BYREF
  CLIPOBJ *v32; // [rsp+128h] [rbp+5Fh]

  v32 = pco;
  v13 = pco;
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v15);
      v16 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v30, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v16 + 32) & 0x20000) != 0 )
        {
          v17 = **(struct _DISPSURF ***)(v16 + 1816);
          if ( v17 )
          {
            do
            {
              v18 = *((_QWORD *)v17 + 6);
              HDEV = v18;
              if ( v18 )
              {
                if ( (*(_DWORD *)(v18 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2144) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v18 + 1808) + 224LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v26,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    v20 = *(_QWORD *)(v19 + 1808);
                    DevBitmap = GetDevBitmap(v17, a3);
                    v22 = GetDevBitmap(v17, a2);
                    v23 = GetDevBitmap(v17, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v20 + 224))(
                      v23,
                      v22,
                      DevBitmap,
                      v32,
                      pxlo,
                      pca,
                      pptlHTOrg,
                      prclDest,
                      prclSrc,
                      pptlMask,
                      iMode);
                    if ( v26 )
                      *(_WORD *)(v26 + 78) &= ~0x8000u;
                  }
                }
              }
              v17 = *(struct _DISPSURF **)v17;
            }
            while ( v17 );
            v13 = v32;
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v30);
      }
    }
  }
  v24 = EngStretchBlt(a1, a2, a3, v13, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  return v24;
}

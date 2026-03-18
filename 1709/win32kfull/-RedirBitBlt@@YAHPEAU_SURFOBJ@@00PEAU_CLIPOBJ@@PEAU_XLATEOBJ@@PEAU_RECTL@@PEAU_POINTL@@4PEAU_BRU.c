/*
 * XREFs of ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0277840
 * Callers:
 *     ?RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0277AA0 (-RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rax
  unsigned int v23; // r8d
  __int64 v25; // [rsp+68h] [rbp-69h] BYREF
  struct SURFACE *v26; // [rsp+70h] [rbp-61h] BYREF
  struct SURFACE *v27; // [rsp+78h] [rbp-59h] BYREF
  struct SURFACE *v28; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v29[80]; // [rsp+88h] [rbp-49h] BYREF
  __int64 HDEV; // [rsp+108h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a3);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v15);
      v16 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v16 + 32) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v16 + 1816); i; i = *(struct _DISPSURF **)i )
          {
            v18 = *((_QWORD *)i + 6);
            HDEV = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1808) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v20 = *(_QWORD *)(v19 + 1808);
                  DevBitmap = GetDevBitmap(i, a2);
                  v22 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v20 + 208))(
                    v22,
                    DevBitmap,
                    a3,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
      }
    }
  }
  v23 = EngBitBlt(a1, a2, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  if ( v26 )
    bMakeOpaque(v26);
  if ( v27 )
    bMakeOpaque(v27);
  if ( v28 )
    bMakeOpaque(v28);
  return v23;
}

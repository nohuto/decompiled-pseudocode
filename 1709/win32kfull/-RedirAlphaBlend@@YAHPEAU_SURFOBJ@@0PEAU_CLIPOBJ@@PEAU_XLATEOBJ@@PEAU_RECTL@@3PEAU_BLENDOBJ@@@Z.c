/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0277650
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v18; // rax
  unsigned int v19; // r8d
  __int64 v21; // [rsp+48h] [rbp-51h] BYREF
  struct SURFACE *v22; // [rsp+50h] [rbp-49h] BYREF
  struct SURFACE *v23; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v24[80]; // [rsp+68h] [rbp-31h] BYREF
  __int64 HDEV; // [rsp+E8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v11);
      v12 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v12 + 32) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v12 + 1816); i; i = *(struct _DISPSURF **)i )
          {
            v14 = *((_QWORD *)i + 6);
            HDEV = v14;
            if ( v14 )
            {
              if ( (*(_DWORD *)(v14 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v14 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v14 + 1808) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v16 = *(_QWORD *)(v15 + 1808);
                  DevBitmap = GetDevBitmap(i, a2);
                  v18 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v16 + 632))(
                    v18,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
      }
    }
  }
  v19 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v22 )
    bMakeOpaque(v22);
  if ( v23 )
    bMakeOpaque(v23);
  return v19;
}

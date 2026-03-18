/*
 * XREFs of ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C027B660
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngGradientFill @ 0x1C00AB7F0 (EngGradientFill.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027ABFC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027CB84 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *a8,
        POINTL *a9,
        ULONG a10)
{
  ULONG ulMode; // r15d
  POINTL *pptlDitherOrg; // r12
  RECTL *prclExtents; // r13
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *i; // rbx
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned int v22; // r8d
  __int64 v24; // [rsp+60h] [rbp-88h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v26[80]; // [rsp+70h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+F0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  ulMode = a10;
  pptlDitherOrg = a9;
  prclExtents = a8;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v17);
      v18 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v18 + 32) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v18 + 1816); i; i = (_QWORD *)*i )
          {
            v20 = i[6];
            HDEV = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1808) + 608LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v21 + 1808) + 608LL))(
                    a1,
                    pco,
                    pxlo,
                    pVertex,
                    nVertex,
                    pMesh,
                    nMesh,
                    prclExtents,
                    pptlDitherOrg,
                    ulMode);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26);
      }
    }
  }
  v22 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
  if ( v25 )
    bMakeOpaque(v25);
  return v22;
}

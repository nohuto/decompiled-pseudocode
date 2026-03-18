/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C027C590
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngStrokePath @ 0x1C0126EF0 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027ABFC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027CB84 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *a6,
        LINEATTRS *a7,
        MIX a8)
{
  MIX mix; // r15d
  LINEATTRS *plineattrs; // r12
  POINTL *pptlBrushOrg; // r13
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *i; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v22; // [rsp+50h] [rbp-88h] BYREF
  struct SURFACE *v23; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v24[80]; // [rsp+60h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+E0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  mix = a8;
  plineattrs = a7;
  pptlBrushOrg = a6;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v15);
      v16 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v16 + 32) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v16 + 1816); i; i = (_QWORD *)*i )
          {
            v18 = i[6];
            HDEV = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1808) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v19 + 1808) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
      }
    }
  }
  v20 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  if ( v23 )
    bMakeOpaque(v23);
  return v20;
}

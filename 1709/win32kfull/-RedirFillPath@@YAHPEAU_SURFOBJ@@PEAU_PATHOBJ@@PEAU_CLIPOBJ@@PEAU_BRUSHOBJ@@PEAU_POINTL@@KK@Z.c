/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0277E90
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngFillPath @ 0x1C00EA250 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *a5,
        MIX a6,
        FLONG a7)
{
  FLONG flOptions; // r15d
  MIX mix; // r12d
  POINTL *pptlBrushOrg; // r13
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 v21; // [rsp+40h] [rbp-88h] BYREF
  struct SURFACE *v22; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v23[80]; // [rsp+50h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+D0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  flOptions = a7;
  mix = a6;
  pptlBrushOrg = a5;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v14);
      v15 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v15 + 32) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v15 + 1816); i; i = (_QWORD *)*i )
          {
            v17 = i[6];
            HDEV = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1808) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v18 + 1808) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
      }
    }
  }
  v19 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  if ( v22 )
    bMakeOpaque(v22);
  return v19;
}

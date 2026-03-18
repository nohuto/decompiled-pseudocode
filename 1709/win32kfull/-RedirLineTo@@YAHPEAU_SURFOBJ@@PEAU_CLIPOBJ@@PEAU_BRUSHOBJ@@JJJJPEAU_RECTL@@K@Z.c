/*
 * XREFs of ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0278260
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngLineTo @ 0x1C00E8340 (EngLineTo.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG a7,
        RECTL *a8,
        MIX a9)
{
  MIX mix; // r15d
  RECTL *prclBounds; // r12
  LONG y2; // r13d
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *i; // rbx
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v21; // r8d
  __int64 v23; // [rsp+50h] [rbp-88h] BYREF
  struct SURFACE *v24; // [rsp+58h] [rbp-80h] BYREF
  _BYTE v25[80]; // [rsp+60h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+E0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1);
  mix = a9;
  prclBounds = a8;
  y2 = a7;
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v16);
      v17 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v17 + 32) & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v17 + 1816); i; i = (_QWORD *)*i )
          {
            v19 = i[6];
            HDEV = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1808) + 312LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v20 + 1808) + 312LL))(
                    a1,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
      }
    }
  }
  v21 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v24 )
    bMakeOpaque(v24);
  return v21;
}

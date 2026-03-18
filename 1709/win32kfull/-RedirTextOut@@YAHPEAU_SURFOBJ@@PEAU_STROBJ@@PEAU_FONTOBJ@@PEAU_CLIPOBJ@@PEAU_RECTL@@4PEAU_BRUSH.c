/*
 * XREFs of ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0279160
 * Callers:
 *     <none>
 * Callees:
 *     EngTextOut @ 0x1C0011110 (EngTextOut.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279574 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTextOut(
        struct _SURFOBJ *a1,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *a8,
        POINTL *a9,
        MIX a10)
{
  MIX mix; // r15d
  POINTL *pptlOrg; // r12
  BRUSHOBJ *pboOpaque; // r13
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
  mix = a10;
  pptlOrg = a9;
  pboOpaque = a8;
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
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1808) + 248LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v21 + 1808) + 248LL))(
                    a1,
                    pstro,
                    pfo,
                    pco,
                    prclExtra,
                    prclOpaque,
                    pboFore,
                    pboOpaque,
                    pptlOrg,
                    mix);
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
  v22 = EngTextOut(a1, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
  if ( v25 )
    bMakeOpaque(v25);
  return v22;
}

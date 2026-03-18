/*
 * XREFs of ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0275780
 * Callers:
 *     <none>
 * Callees:
 *     EngFillPath @ 0x1C00EA250 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0274F80 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0276D08 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v21; // [rsp+50h] [rbp-38h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v21, a1);
  if ( a1 )
  {
    v11 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    HDEV = UserGetHDEV(v12);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 32) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1816); i; i = (_QWORD *)*i )
        {
          v15 = i[6];
          v19 = v15;
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 1840) & 0x8000000) != 0 )
            {
              v16 = *(_DWORD *)(v15 + 2144);
              if ( (v16 & 0x1000) != 0 && (v16 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1808) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v20,
                    (struct PDEVOBJ *)&v19,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v17 + 1808) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v20 )
                    *(_WORD *)(v20 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v21 )
    bBmpMakeOpaque(v21);
  return v11;
}

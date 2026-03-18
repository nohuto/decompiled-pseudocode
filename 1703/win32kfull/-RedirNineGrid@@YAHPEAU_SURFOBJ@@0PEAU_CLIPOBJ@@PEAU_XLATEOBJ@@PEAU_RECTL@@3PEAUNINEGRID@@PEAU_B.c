/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C027BA60
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     EngNineGrid @ 0x1C00819E0 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027A268 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027ABFC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027CB84 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  __int64 v13; // rcx
  __int64 v14; // rbx
  struct _DISPSURF *i; // rsi
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v20; // rax
  unsigned int v21; // r8d
  __int64 v23; // [rsp+58h] [rbp-61h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-59h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v26[80]; // [rsp+78h] [rbp-41h] BYREF
  __int64 HDEV; // [rsp+F8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a2);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v13);
      v14 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v14 + 32) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v14 + 1816); i; i = *(struct _DISPSURF **)i )
          {
            v16 = *((_QWORD *)i + 6);
            HDEV = v16;
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2144) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1808) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&HDEV,
                    a1);
                  v18 = *(_QWORD *)(v17 + 1808);
                  DevBitmap = GetDevBitmap(i, a2);
                  v20 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v18 + 792))(
                    v20,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26);
      }
    }
  }
  v21 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (int *)a8);
  if ( v24 )
    bMakeOpaque(v24);
  if ( v25 )
    bMakeOpaque(v25);
  return v21;
}

/*
 * XREFs of ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0279300
 * Callers:
 *     <none>
 * Callees:
 *     EngNineGrid @ 0x1C00819E0 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02785AC (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027A268 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A314 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevNineGrid(
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
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rsi
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v21; // rax
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a2);
  if ( a1 )
  {
    v13 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (int *)a8);
    HDEV = UserGetHDEV(v14);
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 32) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1816); i; i = *(struct _DISPSURF **)i )
        {
          v17 = *((_QWORD *)i + 6);
          v23 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2144) & 0x9000) == 0x9000 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v17 + 1808) + 792LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)&v24,
                  (struct PDEVOBJ *)&v23,
                  a1);
                v19 = *(_QWORD *)(v18 + 1808);
                DevBitmap = GetDevBitmap(i, a2);
                v21 = GetDevBitmap(i, a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v19 + 792))(
                  v21,
                  DevBitmap,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9);
                if ( v24 )
                  *(_WORD *)(v24 + 78) &= ~0x8000u;
              }
            }
          }
        }
      }
    }
  }
  if ( v25 )
    bBmpMakeOpaque(v25);
  if ( v26 )
    bBmpMakeOpaque(v26);
  return v13;
}

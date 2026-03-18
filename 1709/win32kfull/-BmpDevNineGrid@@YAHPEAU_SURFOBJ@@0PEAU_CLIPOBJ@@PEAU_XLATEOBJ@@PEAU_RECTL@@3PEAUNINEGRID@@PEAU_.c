/*
 * XREFs of ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0275CE0
 * Callers:
 *     <none>
 * Callees:
 *     EngNineGrid @ 0x1C000F7F0 (EngNineGrid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0274F80 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0276D08 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rax
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a2);
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
          v24 = v17;
          if ( v17 )
          {
            if ( (*(_DWORD *)(v17 + 1840) & 0x8000000) != 0 )
            {
              v18 = *(_DWORD *)(v17 + 2144);
              if ( (v18 & 0x1000) != 0 && (v18 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1808) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v24,
                    a1);
                  v20 = *(_QWORD *)(v19 + 1808);
                  DevBitmap = GetDevBitmap(i, a2);
                  v22 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(v20 + 792))(
                    v22,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v26 )
    bBmpMakeOpaque(v26);
  if ( v27 )
    bBmpMakeOpaque(v27);
  return v13;
}

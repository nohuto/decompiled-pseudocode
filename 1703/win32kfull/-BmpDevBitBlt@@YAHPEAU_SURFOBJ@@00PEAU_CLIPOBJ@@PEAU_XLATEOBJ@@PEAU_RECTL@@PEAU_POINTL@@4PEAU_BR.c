/*
 * XREFs of ?BmpDevBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0278840
 * Callers:
 *     ?BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0278AE0 (-BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02785AC (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027A268 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A314 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r14d
  HDEV hdev; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _DISPSURF *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v25; // rax
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v29; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v30; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v31; // [rsp+80h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v31, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a3);
  if ( a1 )
  {
    hdev = a1->hdev;
    v17 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))hdev
           + 356))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))EngBitBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    v15 = v17;
    v32 = v17;
    v19 = UserGetHDEV(v18);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 32) & 0x20000000) != 0 )
      {
        v20 = **(struct _DISPSURF ***)(v19 + 1816);
        if ( v20 )
        {
          do
          {
            v21 = *((_QWORD *)v20 + 6);
            v27 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2144) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1808) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v28,
                    (struct PDEVOBJ *)&v27,
                    a1);
                  v23 = *(_QWORD *)(v22 + 1808);
                  DevBitmap = GetDevBitmap(v20, a2);
                  v25 = GetDevBitmap(v20, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(v23 + 208))(
                    v25,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v28 )
                    *(_WORD *)(v28 + 78) &= ~0x8000u;
                }
              }
            }
            v20 = *(struct _DISPSURF **)v20;
          }
          while ( v20 );
          v15 = v32;
        }
      }
    }
  }
  if ( v29 )
    bBmpMakeOpaque(v29);
  if ( v30 )
    bBmpMakeOpaque(v30);
  if ( v31 )
    bBmpMakeOpaque(v31);
  return v15;
}

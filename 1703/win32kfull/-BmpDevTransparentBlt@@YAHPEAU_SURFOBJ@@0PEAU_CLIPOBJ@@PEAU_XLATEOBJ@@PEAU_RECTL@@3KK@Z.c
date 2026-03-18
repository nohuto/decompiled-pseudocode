/*
 * XREFs of ?BmpDevTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C027A040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02785AC (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027A268 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A314 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v12; // r14d
  HDEV hdev; // rbx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _DISPSURF *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rax
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+8h]

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v14 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x8000) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))hdev
           + 412))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))EngTransparentBlt)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
    v12 = v14;
    v28 = v14;
    v16 = UserGetHDEV(v15);
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 32) & 0x20000000) != 0 )
      {
        v17 = **(struct _DISPSURF ***)(v16 + 1816);
        if ( v17 )
        {
          do
          {
            v18 = *((_QWORD *)v17 + 6);
            v24 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2144) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1808) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v24,
                    a1);
                  v20 = *(_QWORD *)(v19 + 1808);
                  DevBitmap = GetDevBitmap(v17, a2);
                  v22 = GetDevBitmap(v17, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, unsigned int, unsigned int))(v20 + 656))(
                    v22,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
            v17 = *(struct _DISPSURF **)v17;
          }
          while ( v17 );
          v12 = v28;
        }
      }
    }
  }
  if ( v26 )
    bBmpMakeOpaque(v26);
  if ( v27 )
    bBmpMakeOpaque(v27);
  return v12;
}

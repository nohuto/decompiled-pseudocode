/*
 * XREFs of ?BmpDevAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0278630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02785AC (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C027A268 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027A314 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v11; // r14d
  HDEV hdev; // rbx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _DISPSURF *v16; // rsi
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v21; // rax
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v25; // [rsp+50h] [rbp-38h] BYREF
  struct SURFACE *v26; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+8h]

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v13 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x10000) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))hdev
           + 409))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7)
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))EngAlphaBlend)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    v11 = v13;
    v27 = v13;
    v15 = UserGetHDEV(v14);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 32) & 0x20000000) != 0 )
      {
        v16 = **(struct _DISPSURF ***)(v15 + 1816);
        if ( v16 )
        {
          do
          {
            v17 = *((_QWORD *)v16 + 6);
            v23 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2144) & 0x9000) == 0x9000 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1808) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v23,
                    a1);
                  v19 = *(_QWORD *)(v18 + 1808);
                  DevBitmap = GetDevBitmap(v16, a2);
                  v21 = GetDevBitmap(v16, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(v19 + 632))(
                    v21,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
            v16 = *(struct _DISPSURF **)v16;
          }
          while ( v16 );
          v11 = v27;
        }
      }
    }
  }
  if ( v25 )
    bBmpMakeOpaque(v25);
  if ( v26 )
    bBmpMakeOpaque(v26);
  return v11;
}

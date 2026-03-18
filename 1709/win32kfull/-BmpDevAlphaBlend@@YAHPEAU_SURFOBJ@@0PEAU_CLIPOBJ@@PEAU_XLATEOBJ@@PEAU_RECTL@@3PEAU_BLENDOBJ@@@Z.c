/*
 * XREFs of ?BmpDevAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0275000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0274F80 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0276D08 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
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
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v22; // rax
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v26; // [rsp+50h] [rbp-38h] BYREF
  struct SURFACE *v27; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+90h] [rbp+8h]

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a2);
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
    v28 = v13;
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
            v24 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1840) & 0x8000000) != 0 )
              {
                v18 = *(_DWORD *)(v17 + 2144);
                if ( (v18 & 0x1000) != 0 && (v18 & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v17 + 1808) + 632LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v25,
                      (struct PDEVOBJ *)&v24,
                      a1);
                    v20 = *(_QWORD *)(v19 + 1808);
                    DevBitmap = GetDevBitmap(v16, a2);
                    v22 = GetDevBitmap(v16, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(v20 + 632))(
                      v22,
                      DevBitmap,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7);
                    if ( v25 )
                      *(_WORD *)(v25 + 78) &= ~0x8000u;
                  }
                }
              }
            }
            v16 = *(struct _DISPSURF **)v16;
          }
          while ( v16 );
          v11 = v28;
        }
      }
    }
  }
  if ( v26 )
    bBmpMakeOpaque(v26);
  if ( v27 )
    bBmpMakeOpaque(v27);
  return v11;
}

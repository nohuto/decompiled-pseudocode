/*
 * XREFs of ?BmpDevPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0275F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0274F80 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0276D08 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // r15d
  HDEV hdev; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _DISPSURF *v20; // r14
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rbx
  struct _SURFOBJ *DevBitmap; // rsi
  struct _SURFOBJ *v26; // rdi
  struct _SURFOBJ *v27; // rax
  __int64 v29; // [rsp+60h] [rbp-68h] BYREF
  __int64 v30; // [rsp+68h] [rbp-60h] BYREF
  struct SURFACE *v31; // [rsp+70h] [rbp-58h] BYREF
  struct SURFACE *v32; // [rsp+78h] [rbp-50h] BYREF
  struct SURFACE *v33; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+8h]

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v33, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v32, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v31, a3);
  if ( a1 )
  {
    hdev = a1->hdev;
    v17 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 4) != 0
        ? (*((__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))hdev
           + 408))(
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
        : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))EngPlgBlt)(
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
    v34 = v17;
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
            v29 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1840) & 0x8000000) != 0 )
              {
                v22 = *(_DWORD *)(v21 + 2144);
                if ( (v22 & 0x1000) != 0 && (v22 & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v21 + 1808) + 624LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v30,
                      (struct PDEVOBJ *)&v29,
                      a1);
                    v24 = *(_QWORD *)(v23 + 1808);
                    DevBitmap = GetDevBitmap(v20, a3);
                    v26 = GetDevBitmap(v20, a2);
                    v27 = GetDevBitmap(v20, a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _POINTFIX *, struct _RECTL *, struct _POINTL *, unsigned int))(v24 + 624))(
                      v27,
                      v26,
                      DevBitmap,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11);
                    if ( v30 )
                      *(_WORD *)(v30 + 78) &= ~0x8000u;
                  }
                }
              }
            }
            v20 = *(struct _DISPSURF **)v20;
          }
          while ( v20 );
          v15 = v34;
        }
      }
    }
  }
  if ( v31 )
    bBmpMakeOpaque(v31);
  if ( v32 )
    bBmpMakeOpaque(v32);
  if ( v33 )
    bBmpMakeOpaque(v33);
  return v15;
}

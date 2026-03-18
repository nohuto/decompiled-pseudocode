/*
 * XREFs of ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C027D7C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C02589C0 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027C6F0 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027C864 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C027C8B0 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D130 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0281BB0 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C0281FD0 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

int __fastcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  int v10; // esi
  int i; // eax
  HDEV hdev; // rbx
  int v13; // eax
  DHSURF dhsurf; // rbx
  int v15; // eax
  int v16; // eax
  _QWORD v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-40h]
  struct _SURFOBJ *v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  _BYTE v25[96]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v26; // [rsp+150h] [rbp+50h]

  if ( (unsigned int)IsMetaRedirectionBitmap(a2) )
  {
    v10 = 1;
    for ( i = MSURF::bFindSurface((MSURF *)v21, a2, a3, a5); ; i = MSURF::bNextSurface((MSURF *)v21) )
    {
      if ( !i )
        return v10;
      v18[0] = 0LL;
      hdev = v23->hdev;
      v19 = hdev;
      if ( ((_DWORD)hdev[536] & 0x8000) == 0 )
      {
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 116) & 0x10) != 0 )
          SURFREFVIEW::bMap((SURFREFVIEW *)v18, v23);
        if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
        {
          MULTISURF::MULTISURF((MULTISURF *)v25, a1);
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x400) != 0 )
            v13 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v22 + 56) + 2856LL))(
                    v26,
                    v23,
                    v24,
                    a4,
                    a5,
                    a6);
          else
            v13 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                    v26,
                    v23,
                    v24,
                    a4,
                    a5,
                    a6);
          v10 &= v13;
          MULTISURF::~MULTISURF((MULTISURF *)v25);
        }
      }
      if ( (unsigned int)IsMetaDevBitmapForMirroring(a1) )
        break;
      if ( (unsigned int)IsMetaRedirectionBitmap(a1) )
      {
        dhsurf = a1->dhsurf;
LABEL_16:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x400) != 0 )
          v15 = (*(__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v22 + 56) + 2856LL))(
                  *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *(unsigned int *)(v22 + 16)),
                  v23,
                  v24,
                  a4,
                  a5,
                  a6);
        else
          v15 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  *(_QWORD *)(*((_QWORD *)dhsurf + 1) + 8LL * *(unsigned int *)(v22 + 16)),
                  v23,
                  v24,
                  a4,
                  a5,
                  a6);
        v10 &= v15;
        goto LABEL_27;
      }
      if ( ((_DWORD)hdev[536] & 0x8000) == 0 || *(_WORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 100) )
      {
        MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)&v20, (struct PDEVOBJ *)&v19, a1);
        v16 = (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x400) != 0
            ? (*(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v22 + 56) + 2856LL))(
                a1,
                v23,
                v24,
                a4,
                a5,
                a6)
            : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                a1,
                v23,
                v24,
                a4,
                a5,
                a6);
        v10 &= v16;
        if ( v20 )
          *(_WORD *)(v20 + 78) &= ~0x8000u;
      }
LABEL_27:
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v18);
      v18[0] = 0LL;
      SURFREFVIEW::bUnMap((SURFREFVIEW *)v18);
    }
    dhsurf = a1->dhsurf;
    if ( !*(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v22 + 16)) )
      goto LABEL_27;
    goto LABEL_16;
  }
  return MulBitBlt(a1, a2, 0LL, a3, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
}

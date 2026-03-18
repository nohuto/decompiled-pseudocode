/*
 * XREFs of ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01404AC
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000D300 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C026C788 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TextOutBitBlt(
        struct SURFACE *this,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  int *v11; // rbx
  unsigned int v13; // esi
  unsigned int v14; // r14d
  int v15; // r12d
  __int64 v17; // rax
  int (*v18)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-55h] BYREF
  int *v25; // [rsp+68h] [rbp-51h] BYREF
  struct _POINTL *v26; // [rsp+70h] [rbp-49h]
  struct _BRUSHOBJ *v27; // [rsp+78h] [rbp-41h]
  struct _RECTL *v28; // [rsp+80h] [rbp-39h]
  int v29[10]; // [rsp+88h] [rbp-31h] BYREF

  v11 = v29;
  v28 = a7;
  v13 = 0;
  v14 = 0;
  v27 = a10;
  v15 = 0;
  v26 = a11;
  v17 = *((_QWORD *)this + 6);
  v23 = 0;
  v24 = 0;
  v25 = v29;
  if ( (*(_DWORD *)(v17 + 32) & 0x8080) == 0x8080 && *(_QWORD *)a2 )
  {
    v20 = UMPDReleaseRFONTSem(a2, 0LL, &v23, &v24, (void **)&v25);
    v13 = v23;
    v15 = v20;
    v14 = v24;
    v11 = v25;
  }
  v18 = SURFACE::pfnBitBlt(this);
  ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))v18)(
    v19,
    0LL,
    0LL,
    a5,
    0LL,
    v28,
    0LL,
    0LL,
    v27,
    v26,
    61680);
  if ( v15 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v13, v14, v11);
    if ( v11 )
    {
      if ( v11 != v29 )
        Win32FreePool(v11, v21, v22);
    }
  }
}

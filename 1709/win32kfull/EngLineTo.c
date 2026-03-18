/*
 * XREFs of EngLineTo @ 0x1C00E8340
 * Callers:
 *     OffLineTo @ 0x1C00E8C40 (OffLineTo.c)
 *     W32kCddLineTo @ 0x1C013F760 (W32kCddLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0275B10 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0278260 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027F120 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x1C028E330 (NtGdiEngLineTo.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00E8454 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012D884 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C01368C4 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01369A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     EngCreatePath @ 0x1C0266410 (EngCreatePath.c)
 *     EngDeletePath @ 0x1C0266490 (EngDeletePath.c)
 */

BOOL __stdcall EngLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // r14
  PATHOBJ *v16; // rax
  PATHOBJ *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  PATHOBJ *Path; // rax
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX ptfx; // [rsp+58h] [rbp-A8h] BYREF
  POINTFIX pptfx; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v27[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v28; // [rsp+78h] [rbp-88h]
  struct _LINEATTRS v29; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  int v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+60h]

  v28 = pso;
  v12 = SURFOBJ_TO_SURFACE(pso);
  v13 = 0;
  v14 = v12;
  ptfx.y = 16 * y1;
  pptfx.x = 16 * x2;
  pptfx.y = 16 * y2;
  ptfx.x = 16 * x1;
  if ( !*(_WORD *)(v12 + 100) )
  {
    v24 = *(_QWORD *)(v12 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v24, v28, 0LL, 0);
    if ( (!pco || pco->iDComplexity != 3) && mix == 3341 )
    {
      vSolidLine((struct SURFACE *)v14, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
    memset(&v29, 0, sizeof(v29));
    Path = EngCreatePath();
    v17 = Path;
    if ( !Path )
      return v13;
    if ( PATHOBJ_bMoveTo(Path, ptfx) )
    {
      if ( PATHOBJ_bPolyLineTo(v17, &pptfx, 1u) )
        v13 = bStrokeCosmetic((struct SURFACE *)v14, v17, pco, pbo, &v29, mix);
    }
LABEL_30:
    EngDeletePath(v17);
    return v13;
  }
  memset(&v29, 0, sizeof(v29));
  v29.elWidth.l = 1;
  v16 = EngCreatePath();
  v17 = v16;
  if ( !v16 )
    return v13;
  if ( !PATHOBJ_bMoveTo(v16, ptfx) || !PATHOBJ_bPolyLineTo(v17, &pptfx, 1u) )
    goto LABEL_30;
  v24 = *(_QWORD *)(v14 + 48);
  v34 = 0LL;
  v35 = 0;
  v36 = 1;
  v37 = 0LL;
  v33 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v27);
  if ( pco )
    goto LABEL_19;
  if ( !v27[0] )
  {
LABEL_25:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
    goto LABEL_30;
  }
  if ( !bUMPDSecurityGateEx(v19, v18, v20, v21) || prclBounds )
  {
    RGNOBJ::vSet((RGNOBJ *)v27, prclBounds);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v27[0], (struct ERECTL *)prclBounds, 0);
    pco = (CLIPOBJ *)v32;
LABEL_19:
    PRECOMPUTE::vInit(v30, v14, &v24, v17, pco, 0LL, &v29, mix, 0, 0);
    if ( v31 )
    {
      if ( (*(_DWORD *)(v14 + 112) & 0x20) != 0 )
        v22 = (*(__int64 (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v24 + 2816))(
                v28,
                v17,
                pco,
                0LL,
                pbo,
                0LL,
                &v29,
                mix);
      else
        v22 = ((__int64 (__fastcall *)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                v28,
                v17,
                pco,
                0LL,
                pbo,
                0LL,
                &v29,
                mix);
      v13 = v22;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v30);
    goto LABEL_25;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:EngLineTo:prclBounds == NULL\n", 734);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
  return 0;
}

/*
 * XREFs of EngLineTo @ 0x1C00A67C0
 * Callers:
 *     OffLineTo @ 0x1C00A71F8 (OffLineTo.c)
 *     W32kCddLineTo @ 0x1C01392C0 (W32kCddLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0279130 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027B870 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02825A0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x1C0291C30 (NtGdiEngLineTo.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00A68D4 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C01257C4 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01258A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C0127388 (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     EngCreatePath @ 0x1C0267640 (EngCreatePath.c)
 *     EngDeletePath @ 0x1C02676C0 (EngDeletePath.c)
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
  int v18; // eax
  PATHOBJ *Path; // rax
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX ptfx; // [rsp+58h] [rbp-A8h] BYREF
  POINTFIX pptfx; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v23[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v24; // [rsp+78h] [rbp-88h]
  struct _LINEATTRS v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[32]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h]
  _BYTE v28[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+160h] [rbp+60h]

  v24 = pso;
  v12 = SURFOBJ_TO_SURFACE(pso);
  v13 = 0;
  v14 = v12;
  ptfx.y = 16 * y1;
  pptfx.x = 16 * x2;
  pptfx.y = 16 * y2;
  ptfx.x = 16 * x1;
  if ( !*(_WORD *)(v12 + 100) )
  {
    v20 = *(_QWORD *)(v12 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v20, v24, 0LL, 0);
    if ( (!pco || pco->iDComplexity != 3) && mix == 3341 )
    {
      vSolidLine((struct SURFACE *)v14, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
    memset(&v25, 0, sizeof(v25));
    Path = EngCreatePath();
    v17 = Path;
    if ( !Path )
      return v13;
    if ( PATHOBJ_bMoveTo(Path, ptfx) )
    {
      if ( PATHOBJ_bPolyLineTo(v17, &pptfx, 1u) )
        v13 = bStrokeCosmetic((struct SURFACE *)v14, v17, pco, pbo, &v25, mix);
    }
LABEL_30:
    EngDeletePath(v17);
    return v13;
  }
  memset(&v25, 0, sizeof(v25));
  v25.elWidth.l = 1;
  v16 = EngCreatePath();
  v17 = v16;
  if ( !v16 )
    return v13;
  if ( !PATHOBJ_bMoveTo(v16, ptfx) || !PATHOBJ_bPolyLineTo(v17, &pptfx, 1u) )
    goto LABEL_30;
  v20 = *(_QWORD *)(v14 + 48);
  v30 = 0LL;
  v31 = 0;
  v32 = 1;
  v33 = 0LL;
  v29 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v23);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v23);
  if ( pco )
    goto LABEL_19;
  if ( !v23[0] )
  {
LABEL_25:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
    goto LABEL_30;
  }
  if ( !(unsigned int)bUMPDSecurityGateEx() || prclBounds )
  {
    RGNOBJ::vSet((RGNOBJ *)v23, prclBounds);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v28, v23[0], (struct ERECTL *)prclBounds, 0);
    pco = (CLIPOBJ *)v28;
LABEL_19:
    PRECOMPUTE::vInit(v26, v14, &v20, v17, pco, 0LL, &v25, mix, 0, 0);
    if ( v27 )
    {
      if ( (*(_DWORD *)(v14 + 112) & 0x20) != 0 )
        v18 = (*(__int64 (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v20 + 2816))(
                v24,
                v17,
                pco,
                0LL,
                pbo,
                0LL,
                &v25,
                mix);
      else
        v18 = ((__int64 (__fastcall *)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                v24,
                v17,
                pco,
                0LL,
                pbo,
                0LL,
                &v25,
                mix);
      v13 = v18;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v26);
    goto LABEL_25;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:EngLineTo:prclBounds == NULL\n", 733);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v23);
  return 0;
}

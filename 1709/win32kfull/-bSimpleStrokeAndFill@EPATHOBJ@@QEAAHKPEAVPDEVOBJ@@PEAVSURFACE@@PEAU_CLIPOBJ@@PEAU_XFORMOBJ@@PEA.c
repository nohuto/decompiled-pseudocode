/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000BAD4
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00E9D88 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00EA084 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00EA1F4 (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C01368C4 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01369A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     EngStrokeAndFillPath @ 0x1C02681D0 (EngStrokeAndFillPath.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleStrokeAndFill(
        PATHOBJ *ppo,
        unsigned int a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  __m128i *v15; // r10
  int v16; // ebx
  __m128i *v17; // r10
  int v18; // eax
  int v19; // edi
  MIX v20; // ebp
  unsigned int v21; // ecx
  CLIPOBJ *v23; // r15
  int v24; // r13d
  __int64 (__fastcall *v25)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v26; // r15d
  __int64 (__fastcall *v27)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  _BYTE v28[32]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-48h]

  memset(v28, 0, sizeof(v28));
  v16 = 0;
  if ( (unsigned int)bSubOverflow(
                       _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)&ppo[1] + 48LL), 8)),
                       *(_DWORD *)(*(_QWORD *)&ppo[1] + 48LL))
    || (unsigned int)bSubOverflow(_mm_srli_si128(v15[48LL], 8).m128i_i32[1], HIDWORD(v15[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v17[3], 8)) - v17[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v17[48LL], 8).m128i_i32[1] - HIDWORD(v17[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v18 = *((_DWORD *)a4 + 28);
  v19 = 1;
  ++*((_DWORD *)a4 + 23);
  v20 = mixFill;
  if ( (v18 & 0x80u) == 0 )
    goto LABEL_7;
  v23 = pco;
  PRECOMPUTE::vInit(v29, a4, a3, ppo, pco, pxo, plineattrs, mixFill, flOptions, 2);
  if ( !v30 )
  {
    EngSetLastError(8u);
LABEL_46:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v29);
    return v16;
  }
  if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
  {
    v24 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PushThreadGuardedObject(v28, ppo, vCleanupPathStackObj);
        v25 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2832LL);
        if ( v25 )
          v26 = v25((char *)a4 + 24, ppo, pco, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
        else
          v26 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
          PopThreadGuardedObject(v28);
        if ( v26 == 1 )
          goto LABEL_45;
        if ( v26 == -1 )
          goto LABEL_46;
        v23 = pco;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_46;
    }
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PushThreadGuardedObject(v28, ppo, vCleanupPathStackObj);
    v27 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2832LL);
    if ( v27 )
      v24 = v27((char *)a4 + 24, ppo, v23, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
      PopThreadGuardedObject(v28);
    if ( v24 != 1 )
    {
      if ( v24 == -1 )
        goto LABEL_46;
      goto LABEL_44;
    }
LABEL_45:
    v16 = 1;
    goto LABEL_46;
  }
LABEL_44:
  PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v29);
LABEL_7:
  if ( (plineattrs->fl & 1) != 0
    && ((_BYTE)mixFill != 13 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2156LL) - 1) > 1) )
  {
    return EngStrokeAndFillPath(
             (SURFOBJ *)((char *)a4 + 24),
             ppo,
             pco,
             pxo,
             pboStroke,
             plineattrs,
             pbo,
             pptlBrushOrg,
             mixFill,
             flOptions);
  }
  v21 = mixFill;
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v21 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)pboStroke[5].pvRbrush & 0x8000) == 0 )
    v20 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !(unsigned int)EPATHOBJ::bSimpleFill(ppo, a2, a3, a4, pco, pbo, pptlBrushOrg, v21, flOptions)
    || !(unsigned int)EPATHOBJ::bSimpleStroke(ppo, a2, a3, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v20) )
  {
    return 0;
  }
  return v19;
}

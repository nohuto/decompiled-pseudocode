/*
 * XREFs of ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0266E38
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C012438C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0124688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C012493C (-bSubOverflow@@YAHJJ@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C01257C4 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01258A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     EngStrokeAndFillPath @ 0x1C0269470 (EngStrokeAndFillPath.c)
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
  int v19; // eax
  int v20; // edi
  MIX v21; // ebp
  CLIPOBJ *v22; // r15
  int v23; // r13d
  __int64 (__fastcall *v24)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v25; // r15d
  __int64 (__fastcall *v26)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  MIX v27; // ecx
  _BYTE v28[32]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v29[32]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-48h]

  memset(v28, 0, sizeof(v28));
  v16 = 0;
  if ( bSubOverflow(
         _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)&ppo[1] + 48LL), 8)),
         *(_DWORD *)(*(_QWORD *)&ppo[1] + 48LL))
    || bSubOverflow(_mm_srli_si128(v15[48LL], 8).m128i_i32[1], HIDWORD(v15[3].m128i_i64[0]))
    || _mm_cvtsi128_si32(_mm_srli_si128(v17[3], 8)) - v17[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v17[48LL], 8).m128i_i32[1] - HIDWORD(v17[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  v19 = *((_DWORD *)a4 + 28);
  v20 = 1;
  ++*((_DWORD *)a4 + 23);
  v21 = mixFill;
  if ( (v19 & 0x80u) != 0 )
  {
    v22 = pco;
    PRECOMPUTE::vInit((__int64)v29, a4, a3, (__int64)ppo, (__int64)pco, pxo, plineattrs, mixFill, flOptions, 2);
    if ( !v30 )
    {
      EngSetLastError(8u);
LABEL_33:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v29);
      return v16;
    }
    if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
    {
      v23 = -1;
      if ( (ppo->fl & 1) != 0 )
      {
        if ( (a2 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v28, ppo, vCleanupPathStackObj);
          v24 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2832LL);
          if ( v24 )
            v25 = v24((char *)a4 + 24, ppo, pco, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
          else
            v25 = -1;
          if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v28);
          if ( v25 == 1 )
            goto LABEL_31;
          if ( v25 == -1 )
            goto LABEL_33;
          v22 = pco;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
          goto LABEL_33;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v28, ppo, vCleanupPathStackObj);
      v26 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2832LL);
      if ( v26 )
        v23 = v26((char *)a4 + 24, ppo, v22, pxo, pboStroke, plineattrs, pbo, pptlBrushOrg, mixFill, flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v28);
      if ( v23 == 1 )
      {
LABEL_31:
        v16 = 1;
        goto LABEL_33;
      }
      if ( v23 == -1 )
        goto LABEL_33;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v29);
  }
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
  v27 = mixFill;
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v27 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)pboStroke[5].pvRbrush & 0x8000) == 0 )
    v21 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( !EPATHOBJ::bSimpleFill(ppo, a2, a3, a4, pco, pbo, pptlBrushOrg, v27, flOptions)
    || !EPATHOBJ::bSimpleStroke(ppo, a2, a3, a4, pco, pxo, pboStroke, pptlBrushOrg, plineattrs, v21) )
  {
    return 0;
  }
  return v20;
}

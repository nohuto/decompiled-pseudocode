/*
 * XREFs of EngStrokeAndFillPath @ 0x1C02681D0
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000BAD4 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0272060 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0276470 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0278DF0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027FF70 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C028EAF0 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C02A0DB0 (OffStrokeAndFillPath.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E93EC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E9480 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1C00EA250 (EngFillPath.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngPaint @ 0x1C012CA90 (EngPaint.c)
 *     EngStrokePath @ 0x1C012D570 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C012D6E0 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0136FC8 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0136FFC (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  BOOL v10; // ebx
  BOOL v13; // esi
  MIX v14; // r15d
  MIX v15; // r13d
  BOOL v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PATHOBJ *v21; // rdx
  SURFOBJ *v22; // r12
  struct _CLIPOBJ *v23; // r14
  struct RGNOBJ *p_top; // r8
  __int128 v25; // xmm0
  POINTL *v26; // r15
  BRUSHOBJ *v27; // r8
  struct RGNOBJ *v28; // r8
  __int128 v29; // xmm0
  BRUSHOBJ *v30; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  SURFOBJ *psoa; // [rsp+40h] [rbp-C0h] BYREF
  FLONG v34; // [rsp+48h] [rbp-B8h]
  POINTL *v35; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *v36[2]; // [rsp+58h] [rbp-A8h] BYREF
  LINEATTRS *v37; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pbo; // [rsp+70h] [rbp-90h]
  _QWORD v39[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *v42; // [rsp+98h] [rbp-68h]
  _QWORD v43[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v45[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int128 v47; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  __int64 v49; // [rsp+1B0h] [rbp+B0h]
  int v50; // [rsp+1B8h] [rbp+B8h]
  int v51; // [rsp+1E0h] [rbp+E0h]
  __int64 v52; // [rsp+1F0h] [rbp+F0h]
  _BYTE v53[152]; // [rsp+200h] [rbp+100h] BYREF
  SURFOBJ *v54; // [rsp+298h] [rbp+198h]
  int v55; // [rsp+2A0h] [rbp+1A0h]

  psoa = pso;
  v10 = 0;
  pbo = pboStroke;
  v13 = 0;
  v42 = pboFill;
  v35 = pptlBrushOrg;
  v34 = flOptions;
  v36[0] = pco;
  v40 = pco;
  v37 = plineattrs;
  v14 = mixFill;
  v41 = SURFOBJ_TO_SURFACE(pso);
  v15 = mixFill;
  if ( ((__int64)pboFill[5].pvRbrush & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (_BYTE)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v45);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx(v18, v17, v19, v20) && !pxo )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_45;
      }
      if ( !v46
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v45, (struct EPATHOBJ *)ppo, pxo, v37)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v45, (__m128i **)ppo, pxo, v37) )
      {
        EngSetLastError(8u);
LABEL_45:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_45;
    v21 = (PATHOBJ *)v45;
    if ( ppo[5] )
      v21 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v43, (struct EPATHOBJ *)v21, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v44, (struct EPATHOBJ *)ppo, 1, v34, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v39);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v39);
    if ( !v44[0]
      || !v43[0]
      || !v39[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v39, (struct RGNOBJ *)v44, (struct RGNOBJ *)v43, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_43;
    }
    v22 = psoa;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v53, psoa, &v40);
    if ( !v55 )
    {
      psoa = v54;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&psoa);
LABEL_44:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v39);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v44);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v43);
      goto LABEL_45;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v36);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v36);
    if ( v36[0] && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v43) != 1 )
    {
      v23 = v40;
      p_top = (struct RGNOBJ *)&v40[2].rclBounds.top;
      if ( !v40 )
        p_top = 0LL;
      if ( RGNOBJ::bMerge((RGNOBJ *)v36, (struct RGNOBJ *)v43, p_top, BYTE1(gafjRgnOp)) )
      {
        v25 = *(_OWORD *)&v36[0][3].rclBounds.bottom;
        v49 = 0LL;
        v50 = 0;
        v47 = v25;
        v51 = 1;
        v52 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v36[0], (struct ERECTL *)&v47, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v26 = v35;
          v13 = 1;
          goto LABEL_34;
        }
        v27 = pbo;
        mix = v14;
        v26 = v35;
        ++*(_DWORD *)(v41 + 92);
        v13 = EngPaint(v22, &pcoa, v27, v26, mix);
        if ( v13 )
        {
LABEL_34:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) != 1 )
          {
            v28 = (struct RGNOBJ *)&v23[2].rclBounds.top;
            if ( !v23 )
              v28 = 0LL;
            if ( RGNOBJ::bMerge((RGNOBJ *)v36, (struct RGNOBJ *)v39, v28, BYTE1(gafjRgnOp)) )
            {
              v29 = *(_OWORD *)&v36[0][3].rclBounds.bottom;
              v49 = 0LL;
              v50 = 0;
              v47 = v29;
              v51 = 1;
              v52 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v36[0], (struct ERECTL *)&v47, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v30 = v42;
                ++*(_DWORD *)(v41 + 92);
                v13 = EngPaint(v22, &pcoa, v30, v26, v15);
              }
            }
            else
            {
              v13 = 0;
            }
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v36);
    psoa = v54;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&psoa);
LABEL_43:
    v10 = v13;
    goto LABEL_44;
  }
  if ( !EngFillPath(psoa, ppo, v36[0], v42, v35, v15, v34) || !EngStrokePath(psoa, ppo, v36[0], pxo, pbo, v35, v37, v14) )
    return 0;
  return v16;
}

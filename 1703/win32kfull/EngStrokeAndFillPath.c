/*
 * XREFs of EngStrokeAndFillPath @ 0x1C0269470
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0266E38 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0275690 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0279A80 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027C400 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02833F0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02923F0 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C02A46D0 (OffStrokeAndFillPath.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngPaint @ 0x1C0122BC0 (EngPaint.c)
 *     EngFillPath @ 0x1C0122D80 (EngFillPath.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01238A8 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012393C (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0124AF8 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0124B2C (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     EngStrokePath @ 0x1C0126EF0 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C01270FC (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
  PATHOBJ *v17; // rdx
  SURFOBJ *v18; // r12
  struct _CLIPOBJ *v19; // r14
  struct RGNOBJ *p_top; // r8
  __int128 v21; // xmm0
  POINTL *v22; // r15
  BRUSHOBJ *v23; // r8
  struct RGNOBJ *v24; // r8
  __int128 v25; // xmm0
  BRUSHOBJ *v26; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  SURFOBJ *psoa; // [rsp+40h] [rbp-C0h] BYREF
  FLONG v30; // [rsp+48h] [rbp-B8h]
  POINTL *v31; // [rsp+50h] [rbp-B0h]
  CLIPOBJ *v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  LINEATTRS *v33; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *pbo; // [rsp+70h] [rbp-90h]
  _QWORD v35[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *v38; // [rsp+98h] [rbp-68h]
  _QWORD v39[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v40[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp+B0h]
  int v46; // [rsp+1B8h] [rbp+B8h]
  int v47; // [rsp+1E0h] [rbp+E0h]
  __int64 v48; // [rsp+1F0h] [rbp+F0h]
  _BYTE v49[152]; // [rsp+200h] [rbp+100h] BYREF
  SURFOBJ *v50; // [rsp+298h] [rbp+198h]
  int v51; // [rsp+2A0h] [rbp+1A0h]

  psoa = pso;
  v10 = 0;
  pbo = pboStroke;
  v13 = 0;
  v38 = pboFill;
  v31 = pptlBrushOrg;
  v30 = flOptions;
  v32[0] = pco;
  v36 = pco;
  v33 = plineattrs;
  v14 = mixFill;
  v37 = SURFOBJ_TO_SURFACE(pso);
  v15 = mixFill;
  if ( ((__int64)pboFill[5].pvRbrush & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (_BYTE)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx() && !pxo )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_45;
      }
      if ( !v42
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxo, v33)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v41, (__m128i **)ppo, pxo, v33) )
      {
        EngSetLastError(8u);
LABEL_45:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_45;
    v17 = (PATHOBJ *)v41;
    if ( ppo[5] )
      v17 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v39, (struct EPATHOBJ *)v17, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v40, (struct EPATHOBJ *)ppo, 1, v30, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v35);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v35);
    if ( !v40[0]
      || !v39[0]
      || !v35[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v35, (struct RGNOBJ *)v40, (struct RGNOBJ *)v39, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_43;
    }
    v18 = psoa;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v49, psoa, &v36);
    if ( !v51 )
    {
      psoa = v50;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&psoa);
LABEL_44:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v40);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v39);
      goto LABEL_45;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v32);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v32);
    if ( v32[0] && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) != 1 )
    {
      v19 = v36;
      p_top = (struct RGNOBJ *)&v36[2].rclBounds.top;
      if ( !v36 )
        p_top = 0LL;
      if ( RGNOBJ::bMerge((RGNOBJ *)v32, (struct RGNOBJ *)v39, p_top, BYTE1(gafjRgnOp)) )
      {
        v21 = *(_OWORD *)&v32[0][3].rclBounds.bottom;
        v45 = 0LL;
        v46 = 0;
        v43 = v21;
        v47 = 1;
        v48 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v32[0], (struct ERECTL *)&v43, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v22 = v31;
          v13 = 1;
          goto LABEL_34;
        }
        v23 = pbo;
        mix = v14;
        v22 = v31;
        ++*(_DWORD *)(v37 + 92);
        v13 = EngPaint(v18, &pcoa, v23, v22, mix);
        if ( v13 )
        {
LABEL_34:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v35) != 1 )
          {
            v24 = (struct RGNOBJ *)&v19[2].rclBounds.top;
            if ( !v19 )
              v24 = 0LL;
            if ( RGNOBJ::bMerge((RGNOBJ *)v32, (struct RGNOBJ *)v35, v24, BYTE1(gafjRgnOp)) )
            {
              v25 = *(_OWORD *)&v32[0][3].rclBounds.bottom;
              v45 = 0LL;
              v46 = 0;
              v43 = v25;
              v47 = 1;
              v48 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, (struct REGION *)v32[0], (struct ERECTL *)&v43, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v26 = v38;
                ++*(_DWORD *)(v37 + 92);
                v13 = EngPaint(v18, &pcoa, v26, v22, v15);
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
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v32);
    psoa = v50;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&psoa);
LABEL_43:
    v10 = v13;
    goto LABEL_44;
  }
  if ( !EngFillPath(psoa, ppo, v32[0], v38, v31, v15, v30) || !EngStrokePath(psoa, ppo, v32[0], pxo, pbo, v31, v33, v14) )
    return 0;
  return v16;
}

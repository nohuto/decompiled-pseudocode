/*
 * XREFs of EngFillPath @ 0x1C0122D80
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0124688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokePath @ 0x1C0126EF0 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C0269470 (EngStrokeAndFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0278DA0 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027B4A0 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0282070 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C0291620 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02A43F4 (OffFillPath.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngPaint @ 0x1C0122BC0 (EngPaint.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C01247F8 (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0124994 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0124AF8 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0124B2C (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

BOOL __stdcall EngFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  BOOL v10; // ebx
  __int64 v11; // r13
  BOOL v12; // edi
  RECTL *p_rclBounds; // r15
  RECTL *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  char *v18; // rax
  BYTE v19; // al
  struct REGION *v21; // r10
  BYTE iDComplexity; // al
  _QWORD v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v26[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+88h] [rbp-78h]
  _DWORD v28[4]; // [rsp+98h] [rbp-68h] BYREF
  char v29; // [rsp+A8h] [rbp-58h] BYREF
  int v30; // [rsp+ACh] [rbp-54h]
  int v31; // [rsp+B4h] [rbp-4Ch]
  __int128 v32; // [rsp+B8h] [rbp-48h] BYREF
  CLIPOBJ pcoa; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  int v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+60h]
  CLIPOBJ v38; // [rsp+170h] [rbp+70h] BYREF
  __int64 v39; // [rsp+1C0h] [rbp+C0h]
  int v40; // [rsp+1C8h] [rbp+C8h]
  int v41; // [rsp+1F0h] [rbp+F0h]
  __int64 v42; // [rsp+200h] [rbp+100h]

  v10 = 0;
  v11 = SURFOBJ_TO_SURFACE(pso);
  v25 = *(_QWORD *)(v11 + 48);
  v12 = 1;
  if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
  {
    p_rclBounds = &pco->rclBounds;
    PDEVOBJ::vSync((PDEVOBJ *)&v25, pso, &pco->rclBounds, 0);
    if ( ((ppo->fl & 0x4000) == 0 || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo))
      && pco->iDComplexity != 3 )
    {
      v14 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      v16 = (int)*(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL) >> 4;
      v27 = *(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      if ( p_rclBounds->left > v16
        || pco->rclBounds.right < (DWORD2(v27) + 15) >> 4
        || pco->rclBounds.top > SHIDWORD(v15) >> 4
        || pco->rclBounds.bottom < (HIDWORD(v27) + 15) >> 4 )
      {
        v14 = &pco->rclBounds;
      }
      v17 = EngFastFill(pso, ppo, v14, pbo, pptlBrushOrg, mix, flOptions);
      if ( v17 >= 0 )
        return v17;
    }
    if ( pco->iDComplexity )
    {
      v30 = 16 * pco->rclBounds.top;
      v31 = 16 * pco->rclBounds.bottom;
      v18 = &v29;
    }
    else
    {
      v18 = 0LL;
    }
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v26, ppo, 1LL, flOptions, v18);
    if ( v26[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v26) != 1 )
      {
        v28[0] = p_rclBounds->left;
        v28[1] = pco->rclBounds.top;
        v28[2] = pco->rclBounds.right;
        v28[3] = pco->rclBounds.bottom;
        if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v24);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v24);
          if ( v24[0] )
          {
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v24,
                   (struct RGNOBJ *)v26,
                   (struct RGNOBJ *)((unsigned __int64)&pco[2].rclBounds.top & -(__int64)(pco != 0LL)),
                   BYTE1(gafjRgnOp)) )
            {
              v32 = *(_OWORD *)(v24[0] + 88LL);
              ERECTL::operator*=(&v32, p_rclBounds);
              v39 = 0LL;
              v40 = 0;
              v41 = 1;
              v42 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v38, v21, (struct ERECTL *)&v32, 0);
              if ( ERECTL::bEmpty((ERECTL *)&v38.rclBounds) )
              {
                v10 = 1;
              }
              else
              {
                iDComplexity = v38.iDComplexity;
                if ( !v38.iDComplexity )
                  iDComplexity = 1;
                v38.iDComplexity = iDComplexity;
                ++*(_DWORD *)(v11 + 92);
                v10 = EngPaint(pso, &v38, pbo, pptlBrushOrg, mix);
              }
            }
          }
          else
          {
            EngSetLastError(8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
          goto LABEL_21;
        }
        v34 = 0LL;
        v35 = 0;
        v36 = 1;
        v37 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v26[0], (struct ERECTL *)v28, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v19 = pcoa.iDComplexity;
          if ( !pcoa.iDComplexity )
            v19 = 1;
          ++*(_DWORD *)(v11 + 92);
          pcoa.iDComplexity = v19;
          v12 = EngPaint(pso, &pcoa, pbo, pptlBrushOrg, mix);
        }
      }
    }
    else if ( ppo->cCurves >= 2 )
    {
      EngSetLastError(8u);
      v12 = 0;
    }
    v10 = v12;
LABEL_21:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v26);
  }
  return v10;
}

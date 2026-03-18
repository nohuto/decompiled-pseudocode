/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreRectangle @ 0x1C01057D0 (GreRectangle.c)
 *     NtGdiFillPath @ 0x1C012BA20 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C012BB00 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C012BD60 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0132894 (GrePolyPolygonInternal.c)
 *     GrePolyPolylineInternal @ 0x1C01392B4 (GrePolyPolylineInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C027AB84 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C027AD98 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C027B4C8 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C027B930 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027BB70 (NtGdiRoundRect.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02893F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C0289550 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C028C580 (NtGdiArcInternal.c)
 * Callees:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000BAD4 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001C7A8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E9480 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00E9D88 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00EA084 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00EA21C (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C012C3F8 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *this,
        POINTL **a2,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  LINEATTRS *v7; // r12
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  unsigned int v12; // r13d
  _DWORD *v13; // rdx
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  POINTL *v17; // rax
  POINTL *v18; // r8
  __int64 v19; // rdx
  struct REGION *v20; // rax
  POINTL *v21; // rdx
  struct SURFACE *v23; // r10
  POINTL v24; // rax
  BRUSHOBJ *v25; // r11
  CLIPOBJ *v26; // rbx
  POINTL v27; // rdi
  POINTL v28; // rdx
  int v29; // eax
  EBRUSHOBJ *v30; // rbx
  MIX v31; // edi
  BRUSHOBJ *pbo; // r8
  PATHOBJ *v33; // rbx
  unsigned int v34; // r13d
  unsigned int v35; // r13d
  struct SURFACE *v36; // r13
  unsigned int v37; // eax
  struct ECLIPOBJ *v38; // rdx
  int v39; // r9d
  int v40; // r10d
  int v41; // r8d
  POINTL v42; // rdx
  int v43; // ecx
  unsigned int v44; // eax
  bool v45; // zf
  POINTL v46; // rcx
  int v47; // eax
  POINTL v48; // r8
  int v49; // ecx
  CLIPOBJ *pco; // [rsp+20h] [rbp-E0h]
  MIX v51; // [rsp+60h] [rbp-A0h]
  BRUSHOBJ *v52; // [rsp+68h] [rbp-98h]
  struct SURFACE *v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+7Ch] [rbp-84h]
  FLOAT_LONG v55; // [rsp+80h] [rbp-80h]
  BRUSHOBJ *v56; // [rsp+88h] [rbp-78h]
  _QWORD v57[2]; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v58[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v59; // [rsp+B0h] [rbp-50h]
  XFORMOBJ *pxo; // [rsp+B8h] [rbp-48h]
  PATHOBJ *ppo; // [rsp+C0h] [rbp-40h]
  __m128i rclBounds; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v63[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  __int128 v66; // [rsp+130h] [rbp+30h] BYREF
  CLIPOBJ v67; // [rsp+140h] [rbp+40h] BYREF
  __int64 v68; // [rsp+190h] [rbp+90h]
  int v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+D0h]

  v5 = 0;
  pxo = a4;
  v7 = a3;
  ppo = this;
  v54 = 0;
  v55.l = 0;
  v51 = 0;
  if ( !this->cCurves )
    return 1LL;
  v10 = 1;
  v11 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*a2)[19] != gpPenNull )
    v11 = a5;
  v12 = v11 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*a2)[18] != gpbrNull )
    v12 = v11;
  if ( (v12 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v13 = (_DWORD *)this[1];
    v14 = v13[12];
    v15 = v13[14] + 15;
    HIDWORD(v58[0]) = (int)v13[13] >> 4;
    v16 = v14 >> 4;
    HIDWORD(v58[1]) = ((v13[15] + 15) >> 4) + 1;
    v17 = *a2;
    LODWORD(v58[1]) = (v15 >> 4) + 1;
    LODWORD(v58[0]) = v16;
    if ( (v17[4].y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)a2, (struct ERECTL *)v58);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)a2) )
      return v10;
    v64 = 0LL;
    v65 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v63, (struct XDCOBJ *)a2, 0);
    if ( (v63[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*a2)[64]) )
      {
        v18 = *a2;
        v66 = *(_OWORD *)v58;
        v19 = v18[5].x & 1;
        LODWORD(v66) = v16 + v18[v19 + 179].x;
        DWORD2(v66) = v18[v19 + 179].x + LODWORD(v58[1]);
        DWORD1(v66) = v18[v19 + 179].y + HIDWORD(v58[0]);
        HIDWORD(v66) = v18[v19 + 179].y + HIDWORD(v58[1]);
        EPATHOBJ::vOffset((EPATHOBJ *)this, (struct EPOINTL *)&v18[(v18[5].x & 1) + 179]);
        v20 = XDCOBJ::prgnEffRao((DC **)a2);
        v68 = 0LL;
        v69 = 0;
        v70 = 1;
        v71 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v67, v20, (struct ERECTL *)&v66, 0);
        v21 = *a2;
        if ( (*a2)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&v67.rclBounds) )
        {
          if ( (v12 & 1) != 0 && (v7->pstyle && (v7->fl & 1) == 0 || (v7->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)this, *(struct SURFACE **)&v21[64], v7);
          goto LABEL_15;
        }
        v23 = (struct SURFACE *)v21[64];
        v24 = v21[6];
        v25 = (BRUSHOBJ *)&v21[218];
        v52 = (BRUSHOBJ *)&v21[200];
        v57[0] = v24;
        v26 = (CLIPOBJ *)*((_QWORD *)v23 + 16);
        v27 = v21[12];
        v53 = v23;
        v58[0] = (BRUSHOBJ *)&v21[218];
        v56 = (BRUSHOBJ *)&v21[218];
        if ( (v12 & 1) == 0 )
        {
LABEL_18:
          v59 = v12 & 2;
          if ( (v12 & 2) != 0 )
          {
            v28 = (*a2)[10];
            v29 = *(_DWORD *)(*(_QWORD *)&v28 + 8LL);
            if ( (((unsigned __int8)v29 | LOBYTE((*a2)[41].y)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v28 + 8LL) = v29 & 0xFFFFFFFE;
              pco = v26;
              v30 = (EBRUSHOBJ *)v52;
              (*a2)[41].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v52,
                *a2,
                *(_QWORD *)&(*a2)[18],
                v27,
                pco,
                v23,
                1);
            }
            else
            {
              v30 = (EBRUSHOBJ *)v52;
            }
            if ( (v12 & 1) == 0 || (v31 = v51, v51 >> 8 == (unsigned __int8)v51) )
              v31 = EBRUSHOBJ::mixBest(
                      v30,
                      *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 72LL),
                      *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 73LL));
          }
          else
          {
            v31 = v51;
          }
          if ( ((*a2)[4].y & 0xE0) != 0 && !ERECTL::bEmpty((ERECTL *)&v67.rclBounds) )
          {
            if ( !v40 || ((__int64)v56[5].pvRbrush & 0x100) != 0 )
            {
              pbo = v52;
              if ( !v39 || ((__int64)v52[5].pvRbrush & 0x100) != 0 )
                goto LABEL_25;
            }
            rclBounds = (__m128i)v67.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v38, &rclBounds);
          }
          pbo = v52;
LABEL_25:
          v33 = ppo;
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
          if ( !v12 )
          {
            if ( *(_DWORD *)(v57[0] + 2156LL) != 1 )
            {
              v12 = a5;
              v7 = (LINEATTRS *)&glaSimpleStroke;
              v31 = 2827;
            }
            if ( !v12 )
            {
              v36 = v53;
LABEL_30:
              if ( v54 )
              {
                v7->fl ^= 4u;
                v7->elStyleState = v55;
                *(_QWORD *)(*(_QWORD *)&v33[1] + 80LL) = 0LL;
                v10 &= EPATHOBJ::bSimpleStroke(
                         v33,
                         (*a2)[9].x,
                         (struct PDEVOBJ *)v57,
                         v36,
                         &v67,
                         pxo,
                         v58[0],
                         *a2 + 199,
                         v7,
                         v31);
              }
              goto LABEL_15;
            }
          }
          v34 = v12 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              v45 = v35 == 1;
              v36 = v53;
              if ( !v45 )
              {
                v10 = 0;
                goto LABEL_30;
              }
              v37 = EPATHOBJ::bSimpleStrokeAndFill(
                      v33,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)v57,
                      v53,
                      &v67,
                      pxo,
                      v56,
                      v7,
                      pbo,
                      *a2 + 199,
                      v31,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[10] + 74LL));
            }
            else
            {
              v36 = v53;
              v37 = EPATHOBJ::bSimpleFill(
                      v33,
                      (*a2)[9].x,
                      (struct PDEVOBJ *)v57,
                      v53,
                      &v67,
                      pbo,
                      *a2 + 199,
                      v31,
                      *(unsigned __int8 *)(*(_QWORD *)&(*a2)[10] + 74LL));
            }
          }
          else
          {
            v36 = v53;
            v37 = EPATHOBJ::bSimpleStroke(
                    v33,
                    (*a2)[9].x,
                    (struct PDEVOBJ *)v57,
                    v53,
                    &v67,
                    pxo,
                    v56,
                    *a2 + 199,
                    v7,
                    v31);
          }
          v10 = v37;
          goto LABEL_30;
        }
        if ( (v7->fl & 1) != 0 )
        {
          v41 = 1;
          if ( v25->iSolidColor == -1
            || (v21[234].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v24 + 1840LL) & 0x800000) == 0 )
          {
            goto LABEL_44;
          }
        }
        else
        {
          v41 = 0;
          if ( v25->iSolidColor != -1 )
          {
LABEL_44:
            v42 = (*a2)[10];
            v43 = *(_DWORD *)(*(_QWORD *)&v42 + 8LL);
            if ( (((unsigned __int8)v43 | LOBYTE((*a2)[41].y)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v42 + 8LL) = v43 & 0xFFFFFFFD;
              (*a2)[41].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v25,
                *a2,
                *(_QWORD *)&(*a2)[19],
                v27,
                v26,
                v23,
                v41);
              v23 = v53;
              v25 = v58[0];
            }
            if ( v7->pstyle
              && ((__int64)v25[5].pvRbrush & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 73LL) == 2
              && (v7->fl & 1) == 0 )
            {
              v54 = 1;
              v7->fl ^= 4u;
              LODWORD(v55.e) = v7->elStyleState;
              v46 = (*a2)[10];
              v56 = (BRUSHOBJ *)&(*a2)[254];
              v47 = *(_DWORD *)(*(_QWORD *)&v46 + 8LL);
              if ( (v47 & 8) == 0 && (*a2)[254].x == -1 )
                *(_DWORD *)(*(_QWORD *)&v46 + 8LL) = v47 | 8;
              v48 = (*a2)[10];
              v49 = *(_DWORD *)(*(_QWORD *)&v48 + 8LL);
              if ( (((unsigned __int8)v49 | LOBYTE((*a2)[41].y)) & 8) != 0 )
              {
                if ( ((*a2)[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v48 + 8LL) = v49 & 0xFFFFFFF7;
                  (*a2)[41].y &= ~8u;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v56,
                  *a2,
                  gpbrBackground,
                  v27,
                  v26,
                  v23,
                  0);
                v25 = v58[0];
              }
            }
            v44 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v25,
                    *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 72LL),
                    *(_BYTE *)(*(_QWORD *)&(*a2)[10] + 73LL));
            v23 = v53;
            v51 = v44;
            goto LABEL_18;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v21[10] + 8LL) |= 2u;
        goto LABEL_44;
      }
      EngSetLastError(5u);
    }
    else
    {
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)a2);
    }
    v10 = v5;
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v63);
    return v10;
  }
  if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)this, (struct EPATHOBJ *)this, a4, a3) )
  {
    if ( v7->pstyle )
      v7->elStyleState.l = 0;
    goto LABEL_7;
  }
  EngSetLastError(0x216u);
  return 0LL;
}

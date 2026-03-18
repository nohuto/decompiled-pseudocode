/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC
 * Callers:
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreRectangle @ 0x1C00F9578 (GreRectangle.c)
 *     GrePolyPolylineInternal @ 0x1C012120C (GrePolyPolylineInternal.c)
 *     NtGdiFillPath @ 0x1C01220F0 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C01221D0 (GrePolylineTo.c)
 *     GrePolyBezierTo @ 0x1C0122420 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C01232FC (GrePolyPolygonInternal.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C027E078 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C027E284 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C027E9B0 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C027EE20 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C027F050 (NtGdiRoundRect.c)
 *     NtGdiStrokeAndFillPath @ 0x1C028C8E0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C028CA20 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C028FEB0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0093064 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012393C (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0123BEC (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C012438C (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0124688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0124964 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0266E38 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **this,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  LINEATTRS *v6; // r15
  unsigned int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  int *v12; // rax
  int v13; // ebx
  int v14; // edi
  int v15; // ecx
  POINTL *v16; // rax
  int v17; // ebx
  int v18; // edi
  LONG y; // ecx
  __int64 v20; // r11
  POINTL *v21; // r8
  __int64 v22; // rdx
  struct REGION *v23; // rax
  POINTL *v24; // rdx
  struct SURFACE *v26; // r9
  BRUSHOBJ *v27; // r10
  POINTL v28; // rax
  POINTL v29; // rdi
  int v30; // r11d
  __int64 v31; // rbx
  POINTL v32; // rax
  MIX v33; // ebx
  BRUSHOBJ *v34; // rdi
  unsigned int v35; // r12d
  unsigned int v36; // r12d
  struct SURFACE *v37; // rdi
  XFORMOBJ *v38; // r12
  BOOL v39; // eax
  struct ECLIPOBJ *v40; // rdx
  __int64 v41; // r9
  int v42; // r11d
  int v43; // r11d
  POINTL v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  POINTL v47; // rcx
  BRUSHOBJ *v48; // r11
  int v49; // eax
  POINTL v50; // rax
  bool v51; // zf
  BRUSHOBJ *v52; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+70h] [rbp-90h]
  MIX v56; // [rsp+80h] [rbp-80h]
  struct SURFACE *v57; // [rsp+88h] [rbp-78h]
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  int v59; // [rsp+98h] [rbp-68h]
  FLOAT_LONG v60; // [rsp+9Ch] [rbp-64h]
  POINTL v62; // [rsp+A8h] [rbp-58h] BYREF
  BRUSHOBJ *v63[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+C0h] [rbp-40h]
  BRUSHOBJ *v65[2]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v66[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  __int128 v69; // [rsp+130h] [rbp+30h] BYREF
  CLIPOBJ pco; // [rsp+140h] [rbp+40h] BYREF
  __int64 v71; // [rsp+190h] [rbp+90h]
  int v72; // [rsp+198h] [rbp+98h]
  int v73; // [rsp+1C0h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+D0h]

  v6 = a3;
  v64 = 0;
  v59 = 0;
  v60.l = 0;
  v56 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v9 = 1;
  v10 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*this)[19] != gpPenNull )
    v10 = a5;
  v11 = v10 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*this)[18] != gpbrNull )
    v11 = v10;
  if ( (v11 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v12 = (int *)ppo[1];
    v13 = v12[14] + 15;
    v14 = v12[15] + 15;
    v55 = v12[12] >> 4;
    LODWORD(v63[0]) = v55;
    v15 = v12[13];
    v16 = *this;
    v17 = (v13 >> 4) + 1;
    v18 = (v14 >> 4) + 1;
    v54 = v15 >> 4;
    HIDWORD(v63[0]) = v15 >> 4;
    y = v16[4].y;
    v63[1] = (BRUSHOBJ *)__PAIR64__(v18, v17);
    if ( (y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)v63);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
      return v9;
    v68 = 0LL;
    v67 = v20;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v66, (struct XDCOBJ *)this, 0);
    if ( (v66[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[64]) )
      {
        v21 = *this;
        v69 = *(_OWORD *)v63;
        v22 = (v21[5].x & 1) != 0 ? 1440LL : 1432LL;
        LODWORD(v69) = *(LONG *)((char *)&v21->x + v22) + v55;
        DWORD2(v69) = v17 + *(LONG *)((char *)&v21->x + v22);
        DWORD1(v69) = *(LONG *)((char *)&v21->y + v22) + v54;
        HIDWORD(v69) = v18 + *(LONG *)((char *)&v21->y + v22);
        EPATHOBJ::vOffset((EPATHOBJ *)ppo, (struct EPOINTL *)((char *)v21 + ((v21[5].x & 1) != 0 ? 1440LL : 1432LL)));
        v23 = XDCOBJ::prgnEffRao((DC **)this);
        v73 = 1;
        v71 = 0LL;
        v72 = 0;
        v74 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v23, (struct ERECTL *)&v69, 0);
        v24 = *this;
        if ( (*this)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (v11 & 1) != 0 && (v6->pstyle && (v6->fl & 1) == 0 || (v6->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v24[64], v6);
          goto LABEL_15;
        }
        v26 = (struct SURFACE *)v24[64];
        v27 = (BRUSHOBJ *)&v24[218];
        v28 = v24[6];
        v62 = v28;
        v29 = v24[12];
        v30 = v11 & 1;
        v31 = *((_QWORD *)v26 + 16);
        v57 = v26;
        v63[0] = (BRUSHOBJ *)&v24[218];
        pbo = (BRUSHOBJ *)&v24[200];
        v65[0] = (BRUSHOBJ *)&v24[218];
        if ( (v11 & 1) == 0 )
        {
LABEL_18:
          if ( (v11 & 2) != 0 )
          {
            v32 = (*this)[10];
            if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v32 + 8LL)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v32 + 8LL) &= ~1u;
              (*this)[41].y &= ~1u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                pbo,
                *this,
                *(_QWORD *)&(*this)[18],
                v29,
                v31,
                v26,
                1);
              v30 = v11 & 1;
            }
            if ( !v30 || (v33 = v56, v56 >> 8 == (unsigned __int8)v56) )
              v33 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)pbo,
                      *(_BYTE *)(*(_QWORD *)&(*this)[10] + 72LL),
                      *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL));
          }
          else
          {
            v33 = v56;
          }
          if ( ((*this)[4].y & 0xE0) != 0 )
          {
            v39 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
            v34 = v65[0];
            if ( !v39
              && (v42 && ((__int64)v65[0][5].pvRbrush & 0x100) == 0
               || (_DWORD)v40 && (*(_DWORD *)(v41 + 128) & 0x100) == 0) )
            {
              *(RECTL *)v65 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)this, v40, (__m128i *)v65);
            }
          }
          else
          {
            v34 = v65[0];
          }
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
          if ( !v11 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v62 + 2156LL) != 1 )
            {
              v11 = a5;
              v6 = (LINEATTRS *)&glaSimpleStroke;
              v33 = 2827;
            }
            if ( !v11 )
            {
              v38 = a4;
LABEL_85:
              v37 = v57;
LABEL_29:
              if ( v59 )
              {
                v6->fl ^= 4u;
                v6->elStyleState = v60;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 80LL) = 0LL;
                v9 &= EPATHOBJ::bSimpleStroke(
                        ppo,
                        (*this)[9].x,
                        (struct PDEVOBJ *)&v62,
                        v37,
                        &pco,
                        v38,
                        v63[0],
                        *this + 199,
                        v6,
                        v33);
              }
              goto LABEL_15;
            }
          }
          v35 = v11 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( !v36 )
            {
              v37 = v57;
              v38 = a4;
              v9 = EPATHOBJ::bSimpleFill(
                     ppo,
                     (*this)[9].x,
                     (struct PDEVOBJ *)&v62,
                     v57,
                     &pco,
                     pbo,
                     *this + 199,
                     v33,
                     *(unsigned __int8 *)(*(_QWORD *)&(*this)[10] + 74LL));
              goto LABEL_29;
            }
            v51 = v36 == 1;
            v38 = a4;
            if ( !v51 )
            {
              v9 = v64;
              goto LABEL_85;
            }
            v53 = v34;
            v37 = v57;
            v46 = EPATHOBJ::bSimpleStrokeAndFill(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v62,
                    v57,
                    &pco,
                    a4,
                    v53,
                    v6,
                    pbo,
                    *this + 199,
                    v33,
                    *(unsigned __int8 *)(*(_QWORD *)&(*this)[10] + 74LL));
          }
          else
          {
            v38 = a4;
            v52 = v34;
            v37 = v57;
            v46 = EPATHOBJ::bSimpleStroke(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v62,
                    v57,
                    &pco,
                    a4,
                    v52,
                    *this + 199,
                    v6,
                    v33);
          }
          v9 = v46;
          goto LABEL_29;
        }
        if ( (v6->fl & 1) != 0 )
        {
          v43 = 1;
          if ( v27->iSolidColor == -1
            || (v24[234].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v28 + 1840LL) & 0x800000) == 0 )
          {
            goto LABEL_42;
          }
        }
        else
        {
          v43 = 0;
          if ( v27->iSolidColor != -1 )
          {
LABEL_42:
            v44 = (*this)[10];
            if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v44 + 8LL)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v44 + 8LL) &= ~2u;
              (*this)[41].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v27,
                *this,
                *(_QWORD *)&(*this)[19],
                v29,
                v31,
                v26,
                v43);
              v26 = v57;
              v27 = v63[0];
            }
            if ( v6->pstyle
              && ((__int64)v27[5].pvRbrush & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL) == 2
              && (v6->fl & 1) == 0 )
            {
              v59 = 1;
              v6->fl ^= 4u;
              LODWORD(v60.e) = v6->elStyleState;
              v47 = (*this)[10];
              v48 = (BRUSHOBJ *)&(*this)[254];
              v65[0] = v48;
              v49 = *(_DWORD *)(*(_QWORD *)&v47 + 8LL);
              if ( (v49 & 8) == 0 && v48->iSolidColor == -1 )
                *(_DWORD *)(*(_QWORD *)&v47 + 8LL) = v49 | 8;
              v50 = (*this)[10];
              if ( ((LOBYTE((*this)[41].y) | *(_BYTE *)(*(_QWORD *)&v50 + 8LL)) & 8) != 0 )
              {
                if ( ((*this)[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v50 + 8LL) &= ~8u;
                  (*this)[41].y &= ~8u;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v48,
                  *this,
                  gpbrBackground,
                  v29,
                  v31,
                  v26,
                  0);
                v27 = v63[0];
              }
            }
            v45 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v27,
                    *(_BYTE *)(*(_QWORD *)&(*this)[10] + 72LL),
                    *(_BYTE *)(*(_QWORD *)&(*this)[10] + 73LL));
            v26 = v57;
            v30 = v11 & 1;
            v56 = v45;
            goto LABEL_18;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v24[10] + 8LL) |= 2u;
        goto LABEL_42;
      }
      EngSetLastError(5u);
      v9 = 0;
    }
    else
    {
      v9 = XDCOBJ::bFullScreen((XDCOBJ *)this);
    }
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
    return v9;
  }
  if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, a4, a3) )
  {
    if ( v6->pstyle )
      v6->elStyleState.l = 0;
    goto LABEL_7;
  }
  EngSetLastError(0x216u);
  return 0LL;
}

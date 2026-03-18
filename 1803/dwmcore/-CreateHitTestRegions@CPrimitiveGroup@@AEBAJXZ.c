/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000335C
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180003AB8 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180002D94 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180002F4C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x180003184 (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180004114 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180006560 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18000664C (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180063DA0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063E50 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  CPrimitiveGroup *v3; // r13
  int v4; // ebx
  CRegionShape *v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  _DWORD *v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // rdx
  char v16; // r10
  int v17; // ecx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  unsigned int v22; // ecx
  unsigned __int64 v23; // r13
  unsigned int v24; // r15d
  __int64 v25; // rdx
  float *v26; // rcx
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // eax
  bool v32; // zf
  char v33; // cl
  int v34; // eax
  int v35; // eax
  int D2DGeometry; // eax
  unsigned int v38; // esi
  unsigned int v39; // r14d
  _BYTE *v40; // rax
  const struct MilRectF *v41; // r10
  float *v42; // rcx
  float *v43; // r9
  __int64 v44; // r10
  unsigned int v45; // r11d
  float v46; // xmm0_4
  int v47; // r8d
  float v48; // xmm0_4
  int v49; // edx
  float v50; // xmm0_4
  int v51; // ecx
  float v52; // xmm0_4
  int v53; // eax
  unsigned int v54; // eax
  float v55; // xmm0_4
  float v56; // xmm1_4
  int v57; // eax
  int D2DFactoryNoRef; // eax
  __int64 v59; // rax
  MILMatrix3x2 *v60; // rcx
  __int64 v61; // r9
  unsigned int v62; // r11d
  int v63; // r8d
  __m128 v64; // xmm1
  int v65; // edx
  __m128 v66; // xmm1
  int v67; // ecx
  __m128 v68; // xmm1
  int v69; // eax
  __m128 v70; // xmm1
  unsigned int v71; // eax
  int v72; // eax
  struct D2D_POINT_2F *v73; // rax
  FLOAT v74; // xmm2_4
  __int64 v75; // rdx
  float v76; // xmm0_4
  __m128 v77; // xmm1
  __m128 v78; // xmm1
  __m128 v79; // xmm1
  __m128 v80; // xmm1
  int v81; // eax
  int v82; // r9d
  __m128 v83; // xmm1
  __m128 v84; // xmm1
  __m128 v85; // xmm1
  __m128 v86; // xmm1
  int v87; // eax
  struct D2D_POINT_2F *v88; // rax
  FLOAT v89; // xmm2_4
  float v90; // xmm0_4
  float v91; // xmm1_4
  __int64 v92; // rdx
  int v93; // r9d
  unsigned int v94; // [rsp+28h] [rbp-E0h]
  unsigned int v95; // [rsp+28h] [rbp-E0h]
  float v96; // [rsp+38h] [rbp-D0h]
  float v97; // [rsp+38h] [rbp-D0h]
  float v98; // [rsp+38h] [rbp-D0h]
  float v99; // [rsp+38h] [rbp-D0h]
  float v100; // [rsp+38h] [rbp-D0h]
  float v101; // [rsp+38h] [rbp-D0h]
  float v102; // [rsp+38h] [rbp-D0h]
  float v103; // [rsp+38h] [rbp-D0h]
  float v104; // [rsp+38h] [rbp-D0h]
  float v105; // [rsp+38h] [rbp-D0h]
  float v106; // [rsp+38h] [rbp-D0h]
  float v107; // [rsp+38h] [rbp-D0h]
  char v108; // [rsp+40h] [rbp-C8h]
  CRegionShape *v109; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v110; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1GeometrySink *v111; // [rsp+58h] [rbp-B0h] BYREF
  struct CD2DFactory *v112; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+68h] [rbp-A0h]
  CPrimitiveGroup *v114; // [rsp+70h] [rbp-98h]
  __int128 v115; // [rsp+78h] [rbp-90h] BYREF
  __int64 i; // [rsp+88h] [rbp-80h] BYREF
  float v117; // [rsp+90h] [rbp-78h]
  float v118; // [rsp+94h] [rbp-74h]
  struct CD2DFactory *v119[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v120; // [rsp+A8h] [rbp-60h] BYREF
  int *v121; // [rsp+B8h] [rbp-50h] BYREF
  int v122; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v123[2]; // [rsp+108h] [rbp+0h] BYREF
  int v124; // [rsp+118h] [rbp+10h]
  __int64 v125; // [rsp+11Ch] [rbp+14h]
  _BYTE v126[256]; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_POINT_2F v127; // [rsp+228h] [rbp+120h] BYREF
  float v128; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v130; // [rsp+238h] [rbp+130h]
  FLOAT v131; // [rsp+240h] [rbp+138h]
  float v132; // [rsp+244h] [rbp+13Ch]

  v3 = this;
  v114 = this;
  v123[0] = (__int64)v126;
  v4 = 0;
  v109 = 0LL;
  v123[1] = (__int64)v126;
  v5 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v124 = 16;
  v125 = 16LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 72);
  ReleaseInterface<ID2D1Geometry>((char *)v3 + 80);
  v6 = *((_QWORD *)v3 + 67);
  v7 = v6 + *((_QWORD *)v3 + 68);
  if ( v6 >= v7 )
  {
LABEL_2:
    v8 = *((_QWORD *)v3 + 63);
    v9 = 0;
    v10 = *((_DWORD *)v3 + 128);
    LODWORD(v112) = v10;
    v11 = v10;
    for ( i = v8; ; v8 = i )
    {
      v12 = v9 + 144;
      LODWORD(v113) = v9 + 144;
      if ( v9 + 144 > v10 )
        break;
      v13 = (_DWORD *)(v8 + v9);
      v14 = v13[1];
      v15 = (unsigned int)v13[4];
      if ( (v14 & 0x20) != 0 && (_DWORD)v15 != *((_DWORD *)v3 + 117) )
      {
        v108 = 1;
LABEL_7:
        v18 = *((_QWORD *)v3 + 66);
        if ( v15 < v18 )
        {
          v19 = (unsigned int)v13[5];
          if ( (unsigned __int64)(148 * v19) <= 0xFFFFFFFF )
          {
            v20 = 148 * v19;
            v21 = 148 * v19;
            if ( v20 + (unsigned int)v15 >= v20 && v20 + (unsigned int)v15 <= v18 )
            {
              v22 = 0;
              v23 = v15 + *((_QWORD *)v3 + 65);
              while ( 1 )
              {
                v24 = v22 + 148;
                if ( v22 + 148 > v21 )
                {
                  v17 = v13[1];
                  v16 = v108;
                  v12 = v113;
                  v3 = v114;
                  goto LABEL_31;
                }
                if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v23 + v22 + 16)) )
                {
                  MILMatrix3x2::Transform2DBounds(
                    (MILMatrix3x2 *)v26,
                    (const struct MilRectF *)v25,
                    (struct MilRectF *)&v115);
                  if ( IsPixelAligned((const struct MilRectF *)&v115) )
                  {
                    if ( (HIDWORD(v115) & 0x7FFFFFFFu) > 0x497FFFF0 )
                    {
                      *(float *)&a3 = (float)(int)*((float *)&v115 + 3) - *((float *)&v115 + 3);
                      v83.m128_f32[0] = -0.5;
                      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v83);
                      v27 = (int)*((float *)&v115 + 3) - LODWORD(a3);
                    }
                    else
                    {
                      v96 = *((float *)&v115 + 3) + 6291456.25;
                      v27 = (int)(LODWORD(v96) << 10) >> 11;
                    }
                    if ( (DWORD2(v115) & 0x7FFFFFFFu) > 0x497FFFF0 )
                    {
                      *(float *)&a3 = (float)(int)*((float *)&v115 + 2) - *((float *)&v115 + 2);
                      v84.m128_f32[0] = -0.5;
                      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v84);
                      v28 = (int)*((float *)&v115 + 2) - LODWORD(a3);
                    }
                    else
                    {
                      v97 = *((float *)&v115 + 2) + 6291456.25;
                      v28 = (int)(LODWORD(v97) << 10) >> 11;
                    }
                    if ( (DWORD1(v115) & 0x7FFFFFFFu) > 0x497FFFF0 )
                    {
                      *(float *)&a3 = (float)(int)*((float *)&v115 + 1) - *((float *)&v115 + 1);
                      v85.m128_f32[0] = -0.5;
                      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v85);
                      v29 = (int)*((float *)&v115 + 1) - LODWORD(a3);
                    }
                    else
                    {
                      v98 = *((float *)&v115 + 1) + 6291456.25;
                      v29 = (int)(LODWORD(v98) << 10) >> 11;
                    }
                    if ( ((unsigned int)v115 & 0x7FFFFFFF) > 0x497FFFF0 )
                    {
                      *(float *)&a3 = (float)(int)*(float *)&v115 - *(float *)&v115;
                      v86.m128_f32[0] = -0.5;
                      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v86);
                      v30 = (int)*(float *)&v115 - LODWORD(a3);
                    }
                    else
                    {
                      v99 = *(float *)&v115 + 6291456.25;
                      v30 = (int)(LODWORD(v99) << 10) >> 11;
                    }
                    *(_QWORD *)&v120 = __PAIR64__(v29, v30);
                    *((_QWORD *)&v120 + 1) = __PAIR64__(v27, v28);
                    v31 = HIDWORD(v125) + 1;
                    if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
                      v11 = HIDWORD(v125) + 1;
                    v4 = v31 < HIDWORD(v125) ? 0x80070216 : 0;
                    if ( v31 < HIDWORD(v125) )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
                    }
                    else if ( v11 > (unsigned int)v125 )
                    {
                      v87 = DynArrayImpl<0>::AddMultipleAndSet(v123, 16LL, 1LL, &v120);
                      v4 = v87;
                      if ( v87 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v87, 0xC0u);
                    }
                    else
                    {
                      *(_OWORD *)(v123[0] + 16LL * HIDWORD(v125)) = v120;
                      HIDWORD(v125) = v11;
                    }
                    if ( v4 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x588u);
                      goto LABEL_155;
                    }
                    goto LABEL_29;
                  }
                  *(_OWORD *)&a3 = (unsigned int)v115;
                  y = *((float *)&v115 + 1);
                  v132 = *((float *)&v115 + 3);
                  v127 = (struct D2D_POINT_2F)v115;
                  v128 = *((float *)&v115 + 2);
                  v130 = *((_QWORD *)&v115 + 1);
                  v131 = *(float *)&v115;
                }
                else
                {
                  v88 = &v127;
                  v89 = *(float *)v25;
                  v90 = *(float *)(v25 + 8);
                  v127.y = *(FLOAT *)(v25 + 4);
                  y = v127.y;
                  v91 = *(float *)(v25 + 12);
                  v92 = 4LL;
                  v132 = v91;
                  v127.x = v89;
                  v128 = v90;
                  v130 = __PAIR64__(LODWORD(v91), LODWORD(v90));
                  v131 = v89;
                  do
                  {
                    *(_OWORD *)&a3 = LODWORD(v88->x);
                    *(float *)&a3 = (float)(*(float *)&a3 * v26[1]) + (float)(v26[3] * v88->y);
                    v88->x = (float)((float)(v88->x * *v26) + (float)(v26[2] * v88->y)) + v26[4];
                    v88->y = *(float *)&a3 + v26[5];
                    ++v88;
                    --v92;
                  }
                  while ( v92 );
                }
                if ( !v110 )
                {
                  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v26, v119);
                  v4 = D2DFactoryNoRef;
                  if ( D2DFactoryNoRef < 0 )
                  {
                    v95 = 1465;
                    goto LABEL_150;
                  }
                  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v119[0] + 3) + 80LL))(
                                      *((_QWORD *)v119[0] + 3),
                                      &v110);
                  v4 = D2DFactoryNoRef;
                  if ( D2DFactoryNoRef < 0 )
                  {
                    v95 = 1467;
                    goto LABEL_150;
                  }
                  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v110 + 136LL))(
                                      v110,
                                      &v111);
                  v4 = D2DFactoryNoRef;
                  if ( D2DFactoryNoRef < 0 )
                  {
                    v95 = 1469;
                    goto LABEL_150;
                  }
                  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v111 + 24LL))(v111, 1LL);
                }
                CPrimitiveGroup::AddFilledPolygonToD2DSink(v111, &v127);
LABEL_29:
                v22 = v24;
              }
            }
          }
        }
        v93 = -2147467259;
        v95 = 1386;
        v4 = -2147467259;
LABEL_152:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, v95);
LABEL_155:
        v5 = v109;
        goto LABEL_44;
      }
      v16 = 0;
      LOBYTE(v17) = v13[1];
      v108 = 0;
      if ( !(_BYTE)v5 && (v14 & 2) == 0 )
        goto LABEL_7;
LABEL_31:
      v32 = (v17 & 0x20) == 0;
      v33 = v16;
      v9 = v12;
      if ( v32 )
        v33 = (char)v5;
      v10 = (unsigned int)v112;
      LOBYTE(v5) = v33;
    }
    if ( v111 )
    {
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v111 + 72LL))(v111);
      v4 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        v95 = 1491;
LABEL_150:
        v93 = D2DFactoryNoRef;
        goto LABEL_152;
      }
      v59 = v110;
      v110 = 0LL;
      *((_QWORD *)v3 + 10) = v59;
    }
    if ( HIDWORD(v125) )
    {
      v122 = 0;
      v121 = &v122;
      v34 = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>(
              (FastRegion::CRegion *)&v121,
              v123[0],
              HIDWORD(v125));
      v4 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x5DFu);
      }
      else
      {
        v35 = CRegionShape::Create((const struct CRegion *)&v121, &v109);
        v4 = v35;
        if ( v35 >= 0 )
        {
          v5 = v109;
          D2DGeometry = CRegionShape::GetD2DGeometry(v109, 0LL, (struct ID2D1Geometry **)v3 + 9);
          v4 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x5E5u);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v121);
            goto LABEL_44;
          }
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v121);
LABEL_43:
          *((_BYTE *)v3 + 88) = 1;
          goto LABEL_44;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x5E1u);
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v121);
      goto LABEL_155;
    }
    v5 = v109;
    goto LABEL_43;
  }
  v38 = (unsigned int)v112;
  v39 = (unsigned int)v112;
  while ( 1 )
  {
    v40 = (_BYTE *)(v6 + 16);
    v41 = (const struct MilRectF *)v6;
    v6 += 17LL;
    if ( (unsigned __int64)v40 > v7 || v6 > v7 )
    {
      v94 = 1229;
      goto LABEL_127;
    }
    if ( !*v40 )
    {
      if ( !IsPixelAligned(v41) )
      {
        *(_OWORD *)&a3 = *(unsigned int *)v43;
        v55 = v43[2];
        v127.y = v43[1];
        y = v127.y;
        v56 = *(float *)(v44 + 12);
        goto LABEL_73;
      }
      v46 = *(float *)(v44 + 12);
      if ( (v45 & LODWORD(v46)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v46 - v46;
        v77.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v77);
        v47 = (int)v46 - LODWORD(a3);
      }
      else
      {
        v100 = v46 + 6291456.25;
        v47 = (int)(LODWORD(v100) << 10) >> 11;
      }
      v48 = v43[2];
      if ( (v45 & LODWORD(v48)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v48 - v48;
        v78.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v78);
        v49 = (int)v48 - LODWORD(a3);
      }
      else
      {
        v101 = v48 + 6291456.25;
        v49 = (int)(LODWORD(v101) << 10) >> 11;
      }
      v50 = v43[1];
      if ( (v45 & LODWORD(v50)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v50 - v50;
        v79.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v79);
        v51 = (int)v50 - LODWORD(a3);
      }
      else
      {
        v102 = v50 + 6291456.25;
        v51 = (int)(LODWORD(v102) << 10) >> 11;
      }
      v52 = *v43;
      if ( (v45 & *(_DWORD *)v43) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v52 - v52;
        v80.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v80);
        v53 = (int)v52 - LODWORD(a3);
      }
      else
      {
        v103 = v52 + 6291456.25;
        v53 = (int)(LODWORD(v103) << 10) >> 11;
      }
      v119[0] = (struct CD2DFactory *)__PAIR64__(v51, v53);
      v119[1] = (struct CD2DFactory *)__PAIR64__(v47, v49);
      v54 = HIDWORD(v125) + 1;
      if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
        v39 = HIDWORD(v125) + 1;
      v4 = v54 < HIDWORD(v125) ? 0x80070216 : 0;
      if ( v54 < HIDWORD(v125) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
      }
      else if ( v39 > (unsigned int)v125 )
      {
        v81 = DynArrayImpl<0>::AddMultipleAndSet(v123, 16LL, 1LL, v119);
        v4 = v81;
        if ( v81 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0xC0u);
      }
      else
      {
        *(_OWORD *)(v123[0] + 16LL * HIDWORD(v125)) = *(_OWORD *)v119;
        HIDWORD(v125) = v39;
      }
      if ( v4 < 0 )
      {
        v94 = 1310;
        goto LABEL_120;
      }
      goto LABEL_70;
    }
    v60 = (MILMatrix3x2 *)v6;
    v6 += 24LL;
    if ( v6 > v7 )
      break;
    if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v60) )
    {
      v73 = &v127;
      v74 = *(float *)v61;
      v75 = 4LL;
      v76 = *(float *)(v61 + 8);
      v127.y = *(FLOAT *)(v61 + 4);
      y = v127.y;
      HIDWORD(v130) = *(_DWORD *)(v61 + 12);
      v132 = *((float *)&v130 + 1);
      v127.x = v74;
      v128 = v76;
      *(float *)&v130 = v76;
      v131 = v74;
      do
      {
        *(_OWORD *)&a3 = LODWORD(v73->x);
        *(float *)&a3 = (float)(*(float *)&a3 * v42[1]) + (float)(v42[3] * v73->y);
        v73->x = (float)((float)(v73->x * *v42) + (float)(v42[2] * v73->y)) + v42[4];
        v73->y = *(float *)&a3 + v42[5];
        ++v73;
        --v75;
      }
      while ( v75 );
      goto LABEL_74;
    }
    MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v42, (const struct MilRectF *)v61, (struct MilRectF *)&i);
    if ( !IsPixelAligned((const struct MilRectF *)&i) )
    {
      *(_OWORD *)&a3 = (unsigned int)i;
      v55 = v117;
      v127.y = *((FLOAT *)&i + 1);
      y = *((float *)&i + 1);
      v56 = v118;
LABEL_73:
      v132 = v56;
      v131 = *(float *)&a3;
      v130 = __PAIR64__(LODWORD(v56), LODWORD(v55));
      v128 = v55;
      v127.x = *(FLOAT *)&a3;
LABEL_74:
      if ( !v110 )
      {
        v57 = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v42, &v112);
        v4 = v57;
        if ( v57 < 0 )
        {
          v94 = 1337;
        }
        else
        {
          v57 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v112 + 3) + 80LL))(
                  *((_QWORD *)v112 + 3),
                  &v110);
          v4 = v57;
          if ( v57 < 0 )
          {
            v94 = 1339;
          }
          else
          {
            v57 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v110 + 136LL))(
                    v110,
                    &v111);
            v4 = v57;
            if ( v57 >= 0 )
            {
              (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v111 + 24LL))(v111, 1LL);
              goto LABEL_79;
            }
            v94 = 1341;
          }
        }
        v82 = v57;
        goto LABEL_128;
      }
LABEL_79:
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v111, &v127);
      goto LABEL_70;
    }
    if ( (v62 & LODWORD(v118)) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v118 - v118;
      v64.m128_f32[0] = -0.5;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v64);
      v63 = (int)v118 - LODWORD(a3);
    }
    else
    {
      v104 = v118 + 6291456.25;
      v63 = (int)(LODWORD(v104) << 10) >> 11;
    }
    if ( (v62 & LODWORD(v117)) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v117 - v117;
      v66.m128_f32[0] = -0.5;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v66);
      v65 = (int)v117 - LODWORD(a3);
    }
    else
    {
      v105 = v117 + 6291456.25;
      v65 = (int)(LODWORD(v105) << 10) >> 11;
    }
    if ( (v62 & HIDWORD(i)) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*((float *)&i + 1) - *((float *)&i + 1);
      v68.m128_f32[0] = -0.5;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v68);
      v67 = (int)*((float *)&i + 1) - LODWORD(a3);
    }
    else
    {
      v106 = *((float *)&i + 1) + 6291456.25;
      v67 = (int)(LODWORD(v106) << 10) >> 11;
    }
    if ( (v62 & (unsigned int)i) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)&i - *(float *)&i;
      v70.m128_f32[0] = -0.5;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v70);
      v69 = (int)*(float *)&i - LODWORD(a3);
    }
    else
    {
      v107 = *(float *)&i + 6291456.25;
      v69 = (int)(LODWORD(v107) << 10) >> 11;
    }
    *(_QWORD *)&v115 = __PAIR64__(v67, v69);
    *((_QWORD *)&v115 + 1) = __PAIR64__(v63, v65);
    v71 = HIDWORD(v125) + 1;
    if ( (unsigned int)(HIDWORD(v125) + 1) >= HIDWORD(v125) )
      v38 = HIDWORD(v125) + 1;
    v4 = v71 < HIDWORD(v125) ? 0x80070216 : 0;
    if ( v71 < HIDWORD(v125) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v38 > (unsigned int)v125 )
    {
      v72 = DynArrayImpl<0>::AddMultipleAndSet(v123, 16LL, 1LL, &v115);
      v4 = v72;
      if ( v72 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0xC0u);
    }
    else
    {
      *(_OWORD *)(v123[0] + 16LL * HIDWORD(v125)) = v115;
      HIDWORD(v125) = v38;
    }
    if ( v4 < 0 )
    {
      v94 = 1259;
LABEL_120:
      v82 = v4;
      goto LABEL_128;
    }
LABEL_70:
    if ( v6 >= v7 )
      goto LABEL_2;
  }
  v94 = 1240;
LABEL_127:
  v82 = -2147467259;
  v4 = -2147467259;
LABEL_128:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, v94);
LABEL_44:
  if ( v111 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v111 + 16LL))(v111);
  if ( v110 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
  if ( v5 )
    CRegionShape::`vector deleting destructor'(v5, 1u);
  DynArrayImpl<0>::~DynArrayImpl<0>(v123);
  return (unsigned int)v4;
}

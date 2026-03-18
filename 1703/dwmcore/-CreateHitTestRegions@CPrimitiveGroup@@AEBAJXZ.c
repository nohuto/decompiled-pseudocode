/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000BB34 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x1800237F4 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180024DCC (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800254CC (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180026CC8 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x1800452DC (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18004FB1C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006F1C0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x1800CBAC8 (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // r14
  unsigned int x_low; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // r10d
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  char v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // rdx
  float *v22; // rcx
  unsigned int v23; // r11d
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  CRegionShape *v31; // rdi
  int D2DGeometry; // eax
  unsigned int v34; // r14d
  unsigned int v35; // r15d
  _BYTE *v36; // rax
  const struct MilRectF *v37; // r10
  float *v38; // rcx
  float *v39; // r10
  unsigned int v40; // r11d
  float v41; // xmm0_4
  int v42; // r8d
  float v43; // xmm0_4
  int v44; // edx
  float v45; // xmm0_4
  int v46; // ecx
  float v47; // xmm0_4
  int v48; // eax
  unsigned int v49; // eax
  MILMatrix3x2 *v50; // rcx
  __int64 v51; // r10
  unsigned int v52; // r11d
  int v53; // r8d
  __m128 v54; // xmm1
  int v55; // edx
  __m128 v56; // xmm1
  int v57; // ecx
  __m128 v58; // xmm1
  int v59; // eax
  __m128 v60; // xmm1
  unsigned int v61; // eax
  int v62; // eax
  float v63; // xmm0_4
  float v64; // xmm1_4
  struct D2D_POINT_2F *v65; // rax
  FLOAT v66; // xmm2_4
  __int64 v67; // rdx
  float v68; // xmm0_4
  __m128 v69; // xmm3
  __m128 v70; // xmm1
  __m128 v71; // xmm1
  __m128 v72; // xmm1
  __m128 v73; // xmm1
  int v74; // eax
  int v75; // eax
  int v76; // r9d
  __m128 v77; // xmm1
  __m128 v78; // xmm1
  __m128 v79; // xmm1
  __m128 v80; // xmm1
  int v81; // eax
  struct D2D_POINT_2F *v82; // rax
  FLOAT v83; // xmm2_4
  float v84; // xmm0_4
  float v85; // xmm1_4
  __int64 v86; // rdx
  __m128 v87; // xmm3
  int D2DFactoryNoRef; // eax
  __int64 v89; // rax
  unsigned int v90; // [rsp+28h] [rbp-E0h]
  float v91; // [rsp+38h] [rbp-D0h]
  float v92; // [rsp+38h] [rbp-D0h]
  float v93; // [rsp+38h] [rbp-D0h]
  float v94; // [rsp+38h] [rbp-D0h]
  float v95; // [rsp+38h] [rbp-D0h]
  float v96; // [rsp+38h] [rbp-D0h]
  float v97; // [rsp+38h] [rbp-D0h]
  float v98; // [rsp+38h] [rbp-D0h]
  float v99; // [rsp+38h] [rbp-D0h]
  float v100; // [rsp+38h] [rbp-D0h]
  float v101; // [rsp+38h] [rbp-D0h]
  float v102; // [rsp+38h] [rbp-D0h]
  char v103; // [rsp+40h] [rbp-C8h]
  CRegionShape *v104; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v105; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1GeometrySink *v106; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_POINT_2F v107; // [rsp+60h] [rbp-A8h]
  struct CD2DFactory *v108; // [rsp+68h] [rbp-A0h] BYREF
  struct CD2DFactory *v109; // [rsp+70h] [rbp-98h] BYREF
  struct CD2DFactory *v110[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v111; // [rsp+88h] [rbp-80h] BYREF
  float v112; // [rsp+90h] [rbp-78h]
  float v113; // [rsp+94h] [rbp-74h]
  __int128 v114; // [rsp+98h] [rbp-70h] BYREF
  __int128 v115; // [rsp+A8h] [rbp-60h] BYREF
  int *v116; // [rsp+B8h] [rbp-50h] BYREF
  int v117; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v118[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v119; // [rsp+11Ch] [rbp+14h]
  unsigned int v120; // [rsp+120h] [rbp+18h]
  struct D2D_POINT_2F v121; // [rsp+228h] [rbp+120h] BYREF
  float v122; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v124; // [rsp+238h] [rbp+130h]
  FLOAT v125; // [rsp+240h] [rbp+138h]
  float v126; // [rsp+244h] [rbp+13Ch]

  v4 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v118);
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 72);
  ReleaseInterface<ID2D1Geometry>((char *)this + 80);
  v5 = *((_QWORD *)this + 51);
  v6 = v5 + *((_QWORD *)this + 52);
  if ( v5 >= v6 )
  {
LABEL_2:
    v7 = *((_QWORD *)this + 47);
    v8 = 0;
    x_low = *((_DWORD *)this + 96);
    v10 = 0;
    LODWORD(v107.x) = x_low;
    v11 = x_low;
    v111 = v7;
    while ( 1 )
    {
      v12 = v10 + 144;
      LODWORD(v108) = v10 + 144;
      if ( v10 + 144 > x_low )
        break;
      v13 = v7 + v10;
      v14 = *(unsigned int *)(v13 + 16);
      if ( (*(_BYTE *)(v13 + 4) & 0x20) != 0 && (_DWORD)v14 != *((_DWORD *)this + 85) )
      {
        v103 = 1;
LABEL_7:
        v16 = *((_QWORD *)this + 50);
        if ( v14 >= v16
          || (v17 = 148LL * *(unsigned int *)(v13 + 20), v17 > 0xFFFFFFFF)
          || (int)v17 + (int)v14 < (unsigned int)v17
          || (unsigned int)(v17 + v14) > v16 )
        {
          v76 = -2147467259;
          v90 = 1449;
          v4 = -2147467259;
          goto LABEL_123;
        }
        v18 = 0;
        v19 = *(unsigned int *)(v13 + 16) + *((_QWORD *)this + 49);
        *(_QWORD *)&v114 = v19;
        while ( 2 )
        {
          v20 = v18 + 148;
          if ( v18 + 148 > (unsigned int)v17 )
          {
            v15 = v103;
            v12 = (unsigned int)v108;
            v7 = v111;
            goto LABEL_31;
          }
          if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v19 + v18 + 16)) )
          {
            MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v22, (const struct MilRectF *)v21, (struct MilRectF *)v110);
            if ( IsPixelAligned((const struct MilRectF *)v110) )
            {
              if ( (v23 & HIDWORD(v110[1])) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)*((float *)&v110[1] + 1) - *((float *)&v110[1] + 1);
                v77.m128_f32[0] = -0.5;
                *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v77);
                v24 = (int)*((float *)&v110[1] + 1) - LODWORD(a3);
              }
              else
              {
                v91 = *((float *)&v110[1] + 1) + 6291456.25;
                v24 = (int)(LODWORD(v91) << 10) >> 11;
              }
              if ( (unsigned __int64)(v23 & (__int64)v110[1]) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)*(float *)&v110[1] - *(float *)&v110[1];
                v78.m128_f32[0] = -0.5;
                *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v78);
                v25 = (int)*(float *)&v110[1] - LODWORD(a3);
              }
              else
              {
                v92 = *(float *)&v110[1] + 6291456.25;
                v25 = (int)(LODWORD(v92) << 10) >> 11;
              }
              if ( (v23 & HIDWORD(v110[0])) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)*((float *)v110 + 1) - *((float *)v110 + 1);
                v79.m128_f32[0] = -0.5;
                *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v79);
                v26 = (int)*((float *)v110 + 1) - LODWORD(a3);
              }
              else
              {
                v93 = *((float *)v110 + 1) + 6291456.25;
                v26 = (int)(LODWORD(v93) << 10) >> 11;
              }
              if ( (unsigned __int64)(v23 & (__int64)v110[0]) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)*(float *)v110 - *(float *)v110;
                v80.m128_f32[0] = -0.5;
                *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v80);
                v27 = (int)*(float *)v110 - LODWORD(a3);
              }
              else
              {
                v94 = *(float *)v110 + 6291456.25;
                v27 = (int)(LODWORD(v94) << 10) >> 11;
              }
              *(_QWORD *)&v115 = __PAIR64__(v26, v27);
              *((_QWORD *)&v115 + 1) = __PAIR64__(v24, v25);
              v28 = v120 + 1;
              if ( v120 + 1 >= v120 )
                v11 = v120 + 1;
              v4 = v28 < v120 ? 0x80070216 : 0;
              if ( v28 < v120 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
              }
              else if ( v11 > v119 )
              {
                v81 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, &v115);
                v4 = v81;
                if ( v81 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0xC0u);
              }
              else
              {
                *(_OWORD *)(v118[0] + 16LL * v120) = v115;
                v120 = v11;
              }
              if ( v4 < 0 )
              {
                v90 = 1479;
                v76 = v4;
                goto LABEL_123;
              }
LABEL_29:
              v19 = v114;
              v18 = v20;
              continue;
            }
            *(_OWORD *)&a3 = LODWORD(v110[0]);
            y = *((float *)v110 + 1);
            v126 = *((float *)&v110[1] + 1);
            v121 = (struct D2D_POINT_2F)v110[0];
            v122 = *(float *)&v110[1];
            v124 = (unsigned __int64)v110[1];
            v125 = *(float *)v110;
          }
          else
          {
            v82 = &v121;
            v83 = *(float *)v21;
            v84 = *(float *)(v21 + 8);
            v121.y = *(FLOAT *)(v21 + 4);
            y = v121.y;
            v85 = *(float *)(v21 + 12);
            v86 = 4LL;
            v126 = v85;
            v121.x = v83;
            v122 = v84;
            v124 = __PAIR64__(LODWORD(v85), LODWORD(v84));
            v125 = v83;
            do
            {
              v87 = (__m128)HIDWORD(*(unsigned __int64 *)v82);
              *(__m128 *)&a3 = v87;
              *(float *)&a3 = (float)((float)(COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)v82)) * v22[2])
                                    + (float)(COERCE_FLOAT(*v82) * *v22))
                            + v22[4];
              v87.m128_f32[0] = (float)((float)(COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)v82)) * v22[3])
                                      + (float)(COERCE_FLOAT(*v82) * v22[1]))
                              + v22[5];
              *v82++ = (struct D2D_POINT_2F)_mm_unpacklo_ps(*(__m128 *)&a3, v87).m128_u64[0];
              --v86;
            }
            while ( v86 );
          }
          break;
        }
        if ( !v105 )
        {
          D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v22, &v109);
          v4 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v90 = 1528;
            goto LABEL_150;
          }
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v109 + 3) + 80LL))(
                              *((_QWORD *)v109 + 3),
                              &v105);
          v4 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v90 = 1530;
            goto LABEL_150;
          }
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v105 + 136LL))(
                              v105,
                              &v106);
          v4 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v90 = 1532;
            goto LABEL_150;
          }
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v106 + 24LL))(v106, 1LL);
        }
        CPrimitiveGroup::AddFilledPolygonToD2DSink(v106, &v121);
        goto LABEL_29;
      }
      v15 = 0;
      v103 = 0;
      if ( !v8 && (*(_BYTE *)(v13 + 4) & 2) == 0 )
        goto LABEL_7;
LABEL_31:
      x_low = LODWORD(v107.x);
      if ( (*(_BYTE *)(v13 + 4) & 0x20) != 0 )
        v8 = v15;
      v10 = v12;
    }
    if ( v106 )
    {
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v106 + 72LL))(v106);
      v4 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        v90 = 1554;
LABEL_150:
        v76 = D2DFactoryNoRef;
        goto LABEL_123;
      }
      v89 = v105;
      v105 = 0LL;
      *((_QWORD *)this + 10) = v89;
    }
    if ( v120 )
    {
      v117 = 0;
      v116 = &v117;
      v29 = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)&v116);
      v4 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x61Eu);
      }
      else
      {
        v30 = CRegionShape::Create((const struct CRegion *)&v116, &v104);
        v4 = v30;
        if ( v30 >= 0 )
        {
          v31 = v104;
          D2DGeometry = CRegionShape::GetD2DGeometry(v104, 0LL, (struct ID2D1Geometry **)this + 9);
          v4 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x624u);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v116);
            goto LABEL_41;
          }
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v116);
LABEL_40:
          *((_BYTE *)this + 88) = 1;
          goto LABEL_41;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x620u);
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v116);
      goto LABEL_126;
    }
    v31 = v104;
    goto LABEL_40;
  }
  v34 = LODWORD(v107.x);
  v35 = LODWORD(v107.x);
  while ( 1 )
  {
    v36 = (_BYTE *)(v5 + 16);
    v37 = (const struct MilRectF *)v5;
    v5 += 17LL;
    if ( (unsigned __int64)v36 > v6 || v5 > v6 )
      break;
    if ( *v36 )
    {
      v50 = (MILMatrix3x2 *)v5;
      v5 += 24LL;
      if ( v5 > v6 )
      {
        v90 = 1303;
        goto LABEL_121;
      }
      if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v50) )
      {
        v65 = &v121;
        v66 = *(float *)v51;
        v67 = 4LL;
        v68 = *(float *)(v51 + 8);
        v121.y = *(FLOAT *)(v51 + 4);
        y = v121.y;
        HIDWORD(v124) = *(_DWORD *)(v51 + 12);
        v126 = *((float *)&v124 + 1);
        v121.x = v66;
        v122 = v68;
        *(float *)&v124 = v68;
        v125 = v66;
        do
        {
          v107 = *v65;
          v69 = (__m128)LODWORD(v107.x);
          *(_OWORD *)&a3 = LODWORD(v107.x);
          *(float *)&a3 = (float)((float)(v107.x * *v38) + (float)(v107.y * v38[2])) + v38[4];
          v69.m128_f32[0] = (float)((float)(v107.x * v38[1]) + (float)(v107.y * v38[3])) + v38[5];
          *v65++ = (struct D2D_POINT_2F)_mm_unpacklo_ps(*(__m128 *)&a3, v69).m128_u64[0];
          --v67;
        }
        while ( v67 );
        goto LABEL_107;
      }
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v38, (const struct MilRectF *)v51, (struct MilRectF *)&v111);
      if ( IsPixelAligned((const struct MilRectF *)&v111) )
      {
        if ( (v52 & LODWORD(v113)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v113 - v113;
          v54.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v54);
          v53 = (int)v113 - LODWORD(a3);
        }
        else
        {
          v99 = v113 + 6291456.25;
          v53 = (int)(LODWORD(v99) << 10) >> 11;
        }
        if ( (v52 & LODWORD(v112)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v112 - v112;
          v56.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v56);
          v55 = (int)v112 - LODWORD(a3);
        }
        else
        {
          v100 = v112 + 6291456.25;
          v55 = (int)(LODWORD(v100) << 10) >> 11;
        }
        if ( (v52 & HIDWORD(v111)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)&v111 + 1) - *((float *)&v111 + 1);
          v58.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v58);
          v57 = (int)*((float *)&v111 + 1) - LODWORD(a3);
        }
        else
        {
          v101 = *((float *)&v111 + 1) + 6291456.25;
          v57 = (int)(LODWORD(v101) << 10) >> 11;
        }
        if ( (v52 & (unsigned int)v111) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)&v111 - *(float *)&v111;
          v60.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v60);
          v59 = (int)*(float *)&v111 - LODWORD(a3);
        }
        else
        {
          v102 = *(float *)&v111 + 6291456.25;
          v59 = (int)(LODWORD(v102) << 10) >> 11;
        }
        v110[0] = (struct CD2DFactory *)__PAIR64__(v57, v59);
        v110[1] = (struct CD2DFactory *)__PAIR64__(v53, v55);
        v61 = v120 + 1;
        if ( v120 + 1 >= v120 )
          v34 = v120 + 1;
        v4 = v61 < v120 ? 0x80070216 : 0;
        if ( v61 < v120 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
        }
        else if ( v34 > v119 )
        {
          v62 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, v110);
          v4 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v118[0] + 16LL * v120) = *(_OWORD *)v110;
          v120 = v34;
        }
        if ( v4 < 0 )
        {
          v90 = 1322;
LABEL_114:
          v76 = v4;
          goto LABEL_123;
        }
        goto LABEL_67;
      }
      *(_OWORD *)&a3 = (unsigned int)v111;
      v63 = v112;
      v121.y = *((FLOAT *)&v111 + 1);
      y = *((float *)&v111 + 1);
      v64 = v113;
    }
    else
    {
      if ( IsPixelAligned(v37) )
      {
        v41 = v39[3];
        if ( (v40 & LODWORD(v41)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v41 - v41;
          v70.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v70);
          v42 = (int)v41 - LODWORD(a3);
        }
        else
        {
          v95 = v41 + 6291456.25;
          v42 = (int)(LODWORD(v95) << 10) >> 11;
        }
        v43 = v39[2];
        if ( (v40 & LODWORD(v43)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v43 - v43;
          v71.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v71);
          v44 = (int)v43 - LODWORD(a3);
        }
        else
        {
          v96 = v43 + 6291456.25;
          v44 = (int)(LODWORD(v96) << 10) >> 11;
        }
        v45 = v39[1];
        if ( (v40 & LODWORD(v45)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v45 - v45;
          v72.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v72);
          v46 = (int)v45 - LODWORD(a3);
        }
        else
        {
          v97 = v45 + 6291456.25;
          v46 = (int)(LODWORD(v97) << 10) >> 11;
        }
        v47 = *v39;
        if ( (v40 & *(_DWORD *)v39) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v47 - v47;
          v73.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v73);
          v48 = (int)v47 - LODWORD(a3);
        }
        else
        {
          v98 = v47 + 6291456.25;
          v48 = (int)(LODWORD(v98) << 10) >> 11;
        }
        *(_QWORD *)&v114 = __PAIR64__(v46, v48);
        *((_QWORD *)&v114 + 1) = __PAIR64__(v42, v44);
        v49 = v120 + 1;
        if ( v120 + 1 >= v120 )
          v35 = v120 + 1;
        v4 = v49 < v120 ? 0x80070216 : 0;
        if ( v49 < v120 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
        }
        else if ( v35 > v119 )
        {
          v74 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, &v114);
          v4 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v118[0] + 16LL * v120) = v114;
          v120 = v35;
        }
        if ( v4 < 0 )
        {
          v90 = 1373;
          goto LABEL_114;
        }
        goto LABEL_67;
      }
      *(_OWORD *)&a3 = *(unsigned int *)v39;
      v63 = v39[2];
      v121.y = v39[1];
      y = v121.y;
      v64 = v39[3];
    }
    v126 = v64;
    v125 = *(float *)&a3;
    v124 = __PAIR64__(LODWORD(v64), LODWORD(v63));
    v122 = v63;
    v121.x = *(FLOAT *)&a3;
LABEL_107:
    if ( !v105 )
    {
      v75 = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v38, &v108);
      v4 = v75;
      if ( v75 < 0 )
      {
        v90 = 1400;
        goto LABEL_119;
      }
      v75 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v108 + 3) + 80LL))(
              *((_QWORD *)v108 + 3),
              &v105);
      v4 = v75;
      if ( v75 < 0 )
      {
        v90 = 1402;
        goto LABEL_119;
      }
      v75 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v105 + 136LL))(v105, &v106);
      v4 = v75;
      if ( v75 < 0 )
      {
        v90 = 1404;
LABEL_119:
        v76 = v75;
        goto LABEL_123;
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v106 + 24LL))(v106, 1LL);
    }
    CPrimitiveGroup::AddFilledPolygonToD2DSink(v106, &v121);
LABEL_67:
    if ( v5 >= v6 )
      goto LABEL_2;
  }
  v90 = 1292;
LABEL_121:
  v76 = -2147467259;
  v4 = -2147467259;
LABEL_123:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, v90);
LABEL_126:
  v31 = v104;
LABEL_41:
  if ( v106 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v106 + 16LL))(v106);
  if ( v105 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
  if ( v31 )
    CRegionShape::`vector deleting destructor'(v31, 1u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v118);
  return (unsigned int)v4;
}

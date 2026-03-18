/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026844 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18006AE68 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18006B184 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180089060 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800BC2C8 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x1800BE94C (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  CPrimitiveGroup *v3; // r15
  int v4; // ebx
  CRegionShape *v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx
  char v9; // r14
  struct CD2DFactory *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // r11d
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  char v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // ecx
  unsigned __int64 v22; // r13
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  int D2DGeometry; // eax
  struct CD2DFactory *v35; // r13
  unsigned int v36; // r14d
  unsigned int v37; // r15d
  _BYTE *v38; // rax
  const struct MilRectF *v39; // r10
  float *v40; // r10
  unsigned int v41; // r11d
  float v42; // xmm0_4
  int v43; // r8d
  float v44; // xmm0_4
  int v45; // edx
  float v46; // xmm0_4
  int v47; // ecx
  float v48; // xmm0_4
  int v49; // eax
  unsigned int v50; // eax
  int v51; // eax
  __int64 v52; // rax
  enum D2D1_FACTORY_TYPE v53; // ecx
  struct CD2DFactory *v54; // rax
  float v55; // xmm0_4
  float v56; // xmm1_4
  enum D2D1_FACTORY_TYPE v57; // ecx
  struct CD2DFactory *v58; // rax
  int v59; // eax
  MILMatrix3x2 *v60; // rcx
  float *v61; // rcx
  __int64 v62; // r10
  unsigned int v63; // r11d
  int v64; // r8d
  __m128 v65; // xmm1
  int v66; // edx
  __m128 v67; // xmm1
  int v68; // ecx
  __m128 v69; // xmm1
  int v70; // eax
  __m128 v71; // xmm1
  unsigned int v72; // eax
  int v73; // eax
  struct D2D_POINT_2F *v74; // rax
  FLOAT v75; // xmm2_4
  __int64 v76; // rdx
  float v77; // xmm0_4
  float v78; // xmm0_4
  __m128 v79; // xmm1
  __m128 v80; // xmm1
  __m128 v81; // xmm1
  __m128 v82; // xmm1
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // r9d
  __m128 v87; // xmm1
  __m128 v88; // xmm1
  __m128 v89; // xmm1
  __m128 v90; // xmm1
  int v91; // eax
  struct D2D_POINT_2F *v92; // rax
  FLOAT v93; // xmm2_4
  float v94; // xmm0_4
  float v95; // xmm1_4
  __int64 v96; // rdx
  float v97; // xmm1_4
  int v98; // eax
  int v99; // eax
  int v100; // r9d
  unsigned int v101; // [rsp+28h] [rbp-E0h]
  unsigned int v102; // [rsp+28h] [rbp-E0h]
  float v103; // [rsp+38h] [rbp-D0h]
  float v104; // [rsp+38h] [rbp-D0h]
  float v105; // [rsp+38h] [rbp-D0h]
  float v106; // [rsp+38h] [rbp-D0h]
  float v107; // [rsp+38h] [rbp-D0h]
  float v108; // [rsp+38h] [rbp-D0h]
  float v109; // [rsp+38h] [rbp-D0h]
  float v110; // [rsp+38h] [rbp-D0h]
  float v111; // [rsp+38h] [rbp-D0h]
  float v112; // [rsp+38h] [rbp-D0h]
  float v113; // [rsp+38h] [rbp-D0h]
  float v114; // [rsp+38h] [rbp-D0h]
  char v115; // [rsp+40h] [rbp-C8h]
  CRegionShape *v116; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v117; // [rsp+50h] [rbp-B8h]
  __int64 v118; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1GeometrySink *v119; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v120; // [rsp+68h] [rbp-A0h]
  CPrimitiveGroup *v121; // [rsp+70h] [rbp-98h]
  __int128 v122; // [rsp+78h] [rbp-90h] BYREF
  struct CD2DFactory *v123; // [rsp+88h] [rbp-80h] BYREF
  float v124; // [rsp+90h] [rbp-78h]
  float v125; // [rsp+94h] [rbp-74h]
  __int128 v126; // [rsp+98h] [rbp-70h] BYREF
  __int128 v127; // [rsp+A8h] [rbp-60h] BYREF
  int *v128; // [rsp+B8h] [rbp-50h] BYREF
  int v129; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v130[2]; // [rsp+108h] [rbp+0h] BYREF
  int v131; // [rsp+118h] [rbp+10h]
  __int64 v132; // [rsp+11Ch] [rbp+14h]
  _BYTE v133[256]; // [rsp+128h] [rbp+20h] BYREF
  struct D2D_POINT_2F v134; // [rsp+228h] [rbp+120h] BYREF
  float v135; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v137; // [rsp+238h] [rbp+130h]
  FLOAT v138; // [rsp+240h] [rbp+138h]
  float v139; // [rsp+244h] [rbp+13Ch]

  v3 = this;
  v121 = this;
  v130[0] = v133;
  v4 = 0;
  v116 = 0LL;
  v130[1] = v133;
  v5 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v131 = 16;
  v132 = 16LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 72);
  ReleaseInterface<ID2D1Geometry>((char *)v3 + 80);
  v6 = *((_QWORD *)v3 + 67);
  v7 = v6 + *((_QWORD *)v3 + 68);
  if ( v6 >= v7 )
    goto LABEL_2;
  v35 = v123;
  v36 = v117;
  v37 = v117;
  while ( 1 )
  {
    v38 = (_BYTE *)(v6 + 16);
    v39 = (const struct MilRectF *)v6;
    v6 += 17LL;
    if ( (unsigned __int64)v38 > v7 || v6 > v7 )
    {
      v101 = 1215;
      goto LABEL_143;
    }
    if ( !*v38 )
    {
      if ( IsPixelAligned(v39) )
      {
        v42 = v40[3];
        if ( (v41 & LODWORD(v42)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v42 - v42;
          v79.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v79);
          v43 = (int)v42 - LODWORD(a3);
        }
        else
        {
          v107 = v42 + 6291456.25;
          v43 = (int)(LODWORD(v107) << 10) >> 11;
        }
        v44 = v40[2];
        if ( (v41 & LODWORD(v44)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v44 - v44;
          v80.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v80);
          v45 = (int)v44 - LODWORD(a3);
        }
        else
        {
          v108 = v44 + 6291456.25;
          v45 = (int)(LODWORD(v108) << 10) >> 11;
        }
        v46 = v40[1];
        if ( (v41 & LODWORD(v46)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v46 - v46;
          v81.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v81);
          v47 = (int)v46 - LODWORD(a3);
        }
        else
        {
          v109 = v46 + 6291456.25;
          v47 = (int)(LODWORD(v109) << 10) >> 11;
        }
        v48 = *v40;
        if ( (v41 & *(_DWORD *)v40) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v48 - v48;
          v82.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v82);
          v49 = (int)v48 - LODWORD(a3);
        }
        else
        {
          v110 = v48 + 6291456.25;
          v49 = (int)(LODWORD(v110) << 10) >> 11;
        }
        *(_QWORD *)&v126 = __PAIR64__(v47, v49);
        *((_QWORD *)&v126 + 1) = __PAIR64__(v43, v45);
        v50 = HIDWORD(v132) + 1;
        if ( (unsigned int)(HIDWORD(v132) + 1) >= HIDWORD(v132) )
          v37 = HIDWORD(v132) + 1;
        v4 = v50 < HIDWORD(v132) ? 0x80070216 : 0;
        if ( v50 < HIDWORD(v132) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
        }
        else if ( v37 > (unsigned int)v132 )
        {
          v83 = DynArrayImpl<0>::AddMultipleAndSet(v130, 16LL, 1LL, &v126);
          v4 = v83;
          if ( v83 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v130[0] + 16LL * HIDWORD(v132)) = v126;
          HIDWORD(v132) = v37;
        }
        if ( v4 < 0 )
        {
          v101 = 1296;
LABEL_136:
          v86 = v4;
          goto LABEL_144;
        }
        goto LABEL_70;
      }
      *(_OWORD *)&a3 = *(unsigned int *)v40;
      v55 = v40[2];
      v134.y = v40[1];
      y = v134.y;
      v56 = v40[3];
LABEL_82:
      v139 = v56;
      v138 = *(float *)&a3;
      v137 = __PAIR64__(LODWORD(v56), LODWORD(v55));
      v135 = v55;
      v134.x = *(FLOAT *)&a3;
      goto LABEL_83;
    }
    v60 = (MILMatrix3x2 *)v6;
    v6 += 24LL;
    if ( v6 > v7 )
    {
      v101 = 1226;
LABEL_143:
      v86 = -2147467259;
      v4 = -2147467259;
      goto LABEL_144;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v60) )
    {
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v61, (const struct MilRectF *)v62, (struct MilRectF *)&v123);
      if ( IsPixelAligned((const struct MilRectF *)&v123) )
      {
        if ( (v63 & LODWORD(v125)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v125 - v125;
          v65.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v65);
          v64 = (int)v125 - LODWORD(a3);
        }
        else
        {
          v111 = v125 + 6291456.25;
          v64 = (int)(LODWORD(v111) << 10) >> 11;
        }
        if ( (v63 & LODWORD(v124)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v124 - v124;
          v67.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v67);
          v66 = (int)v124 - LODWORD(a3);
        }
        else
        {
          v112 = v124 + 6291456.25;
          v66 = (int)(LODWORD(v112) << 10) >> 11;
        }
        if ( (v63 & HIDWORD(v123)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)&v123 + 1) - *((float *)&v123 + 1);
          v69.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v69);
          v68 = (int)*((float *)&v123 + 1) - LODWORD(a3);
        }
        else
        {
          v113 = *((float *)&v123 + 1) + 6291456.25;
          v68 = (int)(LODWORD(v113) << 10) >> 11;
        }
        if ( (v63 & (unsigned int)v123) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)&v123 - *(float *)&v123;
          v71.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v71);
          v70 = (int)*(float *)&v123 - LODWORD(a3);
        }
        else
        {
          v114 = *(float *)&v123 + 6291456.25;
          v70 = (int)(LODWORD(v114) << 10) >> 11;
        }
        *(_QWORD *)&v122 = __PAIR64__(v68, v70);
        *((_QWORD *)&v122 + 1) = __PAIR64__(v64, v66);
        v72 = HIDWORD(v132) + 1;
        if ( (unsigned int)(HIDWORD(v132) + 1) >= HIDWORD(v132) )
          v36 = HIDWORD(v132) + 1;
        v4 = v72 < HIDWORD(v132) ? 0x80070216 : 0;
        if ( v72 < HIDWORD(v132) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
        }
        else if ( v36 > (unsigned int)v132 )
        {
          v73 = DynArrayImpl<0>::AddMultipleAndSet(v130, 16LL, 1LL, &v122);
          v4 = v73;
          if ( v73 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v130[0] + 16LL * HIDWORD(v132)) = v122;
          HIDWORD(v132) = v36;
        }
        if ( v4 < 0 )
        {
          v101 = 1245;
          goto LABEL_136;
        }
        goto LABEL_70;
      }
      *(_OWORD *)&a3 = (unsigned int)v123;
      v55 = v124;
      v134.y = *((FLOAT *)&v123 + 1);
      y = *((float *)&v123 + 1);
      v56 = v125;
      goto LABEL_82;
    }
    v74 = &v134;
    v75 = *(float *)v62;
    v76 = 4LL;
    v77 = *(float *)(v62 + 8);
    v134.y = *(FLOAT *)(v62 + 4);
    y = v134.y;
    HIDWORD(v137) = *(_DWORD *)(v62 + 12);
    v139 = *((float *)&v137 + 1);
    v134.x = v75;
    v135 = v77;
    *(float *)&v137 = v77;
    v138 = v75;
    do
    {
      *(_OWORD *)&a3 = *(unsigned int *)v61;
      v78 = (float)(v61[1] * v74->x) + (float)(v74->y * v61[3]);
      v74->x = (float)((float)(*(float *)&a3 * v74->x) + (float)(v74->y * v61[2])) + v61[4];
      v74->y = v78 + v61[5];
      ++v74;
      --v76;
    }
    while ( v76 );
LABEL_83:
    if ( !v118 )
      break;
LABEL_90:
    CPrimitiveGroup::AddFilledPolygonToD2DSink(v119, &v134);
LABEL_70:
    if ( v6 >= v7 )
    {
      v3 = v121;
LABEL_2:
      v8 = *((_DWORD *)v3 + 128);
      v9 = 0;
      v10 = (struct CD2DFactory *)*((_QWORD *)v3 + 63);
      v11 = 0;
      LODWORD(v117) = v8;
      v12 = v8;
      v123 = v10;
      while ( 1 )
      {
        v13 = v11 + 144;
        LODWORD(v120) = v11 + 144;
        if ( v11 + 144 > v8 )
          break;
        v14 = (__int64)v10 + v11;
        v15 = *(unsigned int *)(v14 + 16);
        if ( (*(_BYTE *)(v14 + 4) & 0x20) != 0 && (_DWORD)v15 != *((_DWORD *)v3 + 117) )
        {
          v115 = 1;
LABEL_7:
          v17 = *((_QWORD *)v3 + 66);
          if ( v15 < v17 )
          {
            v18 = *(unsigned int *)(v14 + 20);
            if ( (unsigned __int64)(148 * v18) <= 0xFFFFFFFF )
            {
              v19 = 148 * v18;
              v20 = 148 * v18;
              if ( v19 + (unsigned int)v15 >= v19 && v19 + (unsigned int)v15 <= v17 )
              {
                v21 = 0;
                v22 = v15 + *((_QWORD *)v3 + 65);
                while ( 1 )
                {
                  v23 = v21 + 148;
                  if ( v21 + 148 > v20 )
                  {
                    v16 = v115;
                    v13 = v120;
                    v8 = v117;
                    v3 = v121;
                    goto LABEL_31;
                  }
                  if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v22 + v21 + 16)) )
                    break;
                  MILMatrix3x2::Transform2DBounds(
                    (MILMatrix3x2 *)v25,
                    (const struct MilRectF *)v24,
                    (struct MilRectF *)&v122);
                  if ( !IsPixelAligned((const struct MilRectF *)&v122) )
                  {
                    *(_OWORD *)&a3 = (unsigned int)v122;
                    y = *((float *)&v122 + 1);
                    v139 = *((float *)&v122 + 3);
                    v134 = (struct D2D_POINT_2F)v122;
                    v135 = *((float *)&v122 + 2);
                    v137 = *((_QWORD *)&v122 + 1);
                    v138 = *(float *)&v122;
                    goto LABEL_35;
                  }
                  if ( (HIDWORD(v122) & 0x7FFFFFFFu) > 0x497FFFF0 )
                  {
                    *(float *)&a3 = (float)(int)*((float *)&v122 + 3) - *((float *)&v122 + 3);
                    v87.m128_f32[0] = -0.5;
                    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v87);
                    v26 = (int)*((float *)&v122 + 3) - LODWORD(a3);
                  }
                  else
                  {
                    v103 = *((float *)&v122 + 3) + 6291456.25;
                    v26 = (int)(LODWORD(v103) << 10) >> 11;
                  }
                  if ( (DWORD2(v122) & 0x7FFFFFFFu) > 0x497FFFF0 )
                  {
                    *(float *)&a3 = (float)(int)*((float *)&v122 + 2) - *((float *)&v122 + 2);
                    v88.m128_f32[0] = -0.5;
                    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v88);
                    v27 = (int)*((float *)&v122 + 2) - LODWORD(a3);
                  }
                  else
                  {
                    v104 = *((float *)&v122 + 2) + 6291456.25;
                    v27 = (int)(LODWORD(v104) << 10) >> 11;
                  }
                  if ( (DWORD1(v122) & 0x7FFFFFFFu) > 0x497FFFF0 )
                  {
                    *(float *)&a3 = (float)(int)*((float *)&v122 + 1) - *((float *)&v122 + 1);
                    v89.m128_f32[0] = -0.5;
                    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v89);
                    v28 = (int)*((float *)&v122 + 1) - LODWORD(a3);
                  }
                  else
                  {
                    v105 = *((float *)&v122 + 1) + 6291456.25;
                    v28 = (int)(LODWORD(v105) << 10) >> 11;
                  }
                  if ( ((unsigned int)v122 & 0x7FFFFFFF) > 0x497FFFF0 )
                  {
                    *(float *)&a3 = (float)(int)*(float *)&v122 - *(float *)&v122;
                    v90.m128_f32[0] = -0.5;
                    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v90);
                    v29 = (int)*(float *)&v122 - LODWORD(a3);
                  }
                  else
                  {
                    v106 = *(float *)&v122 + 6291456.25;
                    v29 = (int)(LODWORD(v106) << 10) >> 11;
                  }
                  *(_QWORD *)&v127 = __PAIR64__(v28, v29);
                  *((_QWORD *)&v127 + 1) = __PAIR64__(v26, v27);
                  v30 = HIDWORD(v132) + 1;
                  if ( (unsigned int)(HIDWORD(v132) + 1) >= HIDWORD(v132) )
                    v12 = HIDWORD(v132) + 1;
                  v4 = v30 < HIDWORD(v132) ? 0x80070216 : 0;
                  if ( v30 < HIDWORD(v132) )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
                  }
                  else if ( v12 > (unsigned int)v132 )
                  {
                    v91 = DynArrayImpl<0>::AddMultipleAndSet(v130, 16LL, 1LL, &v127);
                    v4 = v91;
                    if ( v91 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0xC0u);
                  }
                  else
                  {
                    *(_OWORD *)(v130[0] + 16LL * HIDWORD(v132)) = v127;
                    HIDWORD(v132) = v12;
                  }
                  if ( v4 < 0 )
                  {
                    v102 = 1402;
LABEL_167:
                    v100 = v4;
                    goto LABEL_173;
                  }
LABEL_29:
                  v21 = v23;
                }
                v92 = &v134;
                v93 = *(float *)v24;
                v94 = *(float *)(v24 + 8);
                v134.y = *(FLOAT *)(v24 + 4);
                y = v134.y;
                v95 = *(float *)(v24 + 12);
                v96 = 4LL;
                v139 = v95;
                v134.x = v93;
                v135 = v94;
                v137 = __PAIR64__(LODWORD(v95), LODWORD(v94));
                v138 = v93;
                do
                {
                  *(_OWORD *)&a3 = *(unsigned int *)(v25 + 8);
                  v97 = (float)(*(float *)(v25 + 12) * v92->y) + (float)(*(float *)(v25 + 4) * v92->x);
                  v92->x = (float)((float)(*(float *)&a3 * v92->y) + (float)(*(float *)v25 * v92->x))
                         + *(float *)(v25 + 16);
                  v92->y = v97 + *(float *)(v25 + 20);
                  ++v92;
                  --v96;
                }
                while ( v96 );
LABEL_35:
                if ( v118 )
                {
LABEL_36:
                  CPrimitiveGroup::AddFilledPolygonToD2DSink(v119, &v134);
                  goto LABEL_29;
                }
                EnterCriticalSection(&CriticalSection);
                v54 = qword_18026EF28;
                v4 = 0;
                if ( qword_18026EF28 )
                {
LABEL_76:
                  *(_QWORD *)&v126 = v54;
                }
                else
                {
                  v98 = CD2DFactory::Create(v53, 0, &qword_18026EF28);
                  v4 = v98;
                  if ( v98 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x10Fu);
                  }
                  else
                  {
                    v99 = CMesh2DEffect::Register(qword_18026EF28);
                    v4 = v99;
                    if ( v99 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x13Fu);
                    if ( v4 >= 0 )
                    {
                      v54 = qword_18026EF28;
                      goto LABEL_76;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x111u);
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3FFu);
                }
                LeaveCriticalSection(&CriticalSection);
                if ( v4 < 0 )
                {
                  v102 = 1451;
                  goto LABEL_167;
                }
                v51 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v126 + 24) + 80LL))(
                        *(_QWORD *)(v126 + 24),
                        &v118);
                v4 = v51;
                if ( v51 < 0 )
                {
                  v102 = 1453;
                  goto LABEL_171;
                }
                v51 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v118 + 136LL))(
                        v118,
                        &v119);
                v4 = v51;
                if ( v51 < 0 )
                {
                  v102 = 1455;
                  goto LABEL_171;
                }
                (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v119 + 24LL))(v119, 1LL);
                goto LABEL_36;
              }
            }
          }
          v100 = -2147467259;
          v102 = 1372;
          v4 = -2147467259;
LABEL_173:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v100, v102);
LABEL_176:
          v5 = v116;
          goto LABEL_44;
        }
        v16 = 0;
        v115 = 0;
        if ( !v9 && (*(_BYTE *)(v14 + 4) & 2) == 0 )
          goto LABEL_7;
LABEL_31:
        v10 = v123;
        if ( (*(_BYTE *)(v14 + 4) & 0x20) != 0 )
          v9 = v16;
        v11 = v13;
      }
      if ( v119 )
      {
        v51 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v119 + 72LL))(v119);
        v4 = v51;
        if ( v51 < 0 )
        {
          v102 = 1477;
LABEL_171:
          v100 = v51;
          goto LABEL_173;
        }
        v52 = v118;
        v118 = 0LL;
        *((_QWORD *)v3 + 10) = v52;
      }
      if ( HIDWORD(v132) )
      {
        v129 = 0;
        v128 = &v129;
        v31 = CRegion::AppendRects<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>((FastRegion::CRegion *)&v128);
        v4 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x5D1u);
        }
        else
        {
          v32 = CRegionShape::Create((const struct CRegion *)&v128, &v116);
          v4 = v32;
          if ( v32 >= 0 )
          {
            v5 = v116;
            D2DGeometry = CRegionShape::GetD2DGeometry(v116, 0LL, (struct ID2D1Geometry **)v3 + 9);
            v4 = D2DGeometry;
            if ( D2DGeometry < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x5D7u);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v128);
              goto LABEL_44;
            }
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v128);
LABEL_43:
            *((_BYTE *)v3 + 88) = 1;
            goto LABEL_44;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x5D3u);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v128);
        goto LABEL_176;
      }
      v5 = v116;
      goto LABEL_43;
    }
  }
  EnterCriticalSection(&CriticalSection);
  v58 = qword_18026EF28;
  v4 = 0;
  if ( qword_18026EF28 )
    goto LABEL_85;
  v84 = CD2DFactory::Create(v57, 0, &qword_18026EF28);
  v4 = v84;
  if ( v84 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x10Fu);
LABEL_134:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3FFu);
  }
  else
  {
    v85 = CMesh2DEffect::Register(qword_18026EF28);
    v4 = v85;
    if ( v85 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0x13Fu);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x111u);
      goto LABEL_134;
    }
    v58 = qword_18026EF28;
LABEL_85:
    v35 = v58;
  }
  LeaveCriticalSection(&CriticalSection);
  if ( v4 < 0 )
  {
    v101 = 1323;
    goto LABEL_136;
  }
  v59 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v35 + 3) + 80LL))(*((_QWORD *)v35 + 3), &v118);
  v4 = v59;
  if ( v59 >= 0 )
  {
    v59 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v118 + 136LL))(v118, &v119);
    v4 = v59;
    if ( v59 < 0 )
    {
      v101 = 1327;
      goto LABEL_141;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v119 + 24LL))(v119, 1LL);
    goto LABEL_90;
  }
  v101 = 1325;
LABEL_141:
  v86 = v59;
LABEL_144:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, v101);
LABEL_44:
  if ( v119 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v119 + 16LL))(v119);
  if ( v118 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
  if ( v5 )
    CRegionShape::`vector deleting destructor'(v5, 1u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v130);
  return (unsigned int)v4;
}

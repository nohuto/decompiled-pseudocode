/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801AFA94
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801D93B0 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801AF9F8 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x1801AFDC4 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801AFFF0 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __m128 v16; // xmm8
  __m128 v17; // xmm3
  __m128 v18; // xmm6
  __m128 v19; // xmm1
  __m128 v20; // xmm6
  bool IsPointInPolygon; // al
  __int64 v22; // rdx
  CGeometry *v23; // rcx
  int ShapeData; // eax
  const struct CMILMatrix *v25; // rdx
  int D2DGeometry; // eax
  int v27; // eax
  union __m128 v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h]
  struct ID2D1Geometry *v31; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1Geometry *v32[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v33[2]; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+98h] [rbp-70h]

  v6 = 0;
  v31 = 0LL;
  *a6 = 0;
  if ( !*((_BYTE *)this + 241) && (*((_BYTE *)this + 240) || !*(_DWORD *)a5) )
  {
    v9 = *((_OWORD *)a4 + 1);
    v10 = *((_DWORD *)a4 + 16);
    *(_OWORD *)v32 = *(_OWORD *)a4;
    v11 = *((_OWORD *)a4 + 2);
    v33[0] = v9;
    v12 = *((_OWORD *)a4 + 3);
    v33[1] = v11;
    v34 = v12;
    v35 = v10;
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)v32, (struct CMILMatrix *)v32);
    v15.m128_u64[1] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)*(unsigned int *)v32, (__m128)*(unsigned int *)(v32 + 8)),
                        _mm_unpacklo_ps((__m128)*(unsigned int *)(v32 + 4), (__m128)*(unsigned int *)(v32 + 12))).m128_u64[1];
    v13 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)LODWORD(v33[0]), (__m128)DWORD2(v33[0])),
            _mm_unpacklo_ps((__m128)DWORD1(v33[0]), (__m128)HIDWORD(v33[0])));
    v14 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)(unsigned int)v34, (__m128)DWORD2(v34)),
            _mm_unpacklo_ps((__m128)DWORD1(v34), (__m128)HIDWORD(v34)));
    *(double *)v15.m128_u64 = DirectX::XMMatrixInverse(0LL);
    v16 = v14;
    if ( !_mm_movemask_ps(
            _mm_or_ps(
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v13, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
    {
      v17 = _mm_unpacklo_ps(
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)0LL),
              _mm_unpacklo_ps((__m128)LODWORD(a2->y), (__m128)LODWORD(FLOAT_1_0)));
      v18 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v16),
                _mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), (__m128)_xmm)),
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v13), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v15)));
      v19 = _mm_shuffle_ps(v18, v18, 255);
      v20 = _mm_div_ps(v18, _mm_shuffle_ps(v19, v19, 0));
      v29 = v20;
      IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v29);
      *a6 = IsPointInPolygon;
      if ( IsPointInPolygon )
      {
        v22 = *((_QWORD *)this + 27);
        v23 = *(CGeometry **)(v22 + 240);
        if ( v23 )
        {
          v29.m128_u64[0] = 0LL;
          v29.m128_i8[8] = 0;
          ShapeData = CGeometry::GetShapeData(v23, (const struct D2D_SIZE_F *)(v22 + 132), (CRectanglesShape **)&v29);
          v6 = ShapeData;
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x1D7u);
          }
          else
          {
            D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v29, v25, &v31);
            v6 = D2DGeometry;
            if ( D2DGeometry >= 0 )
            {
              CShapePtr::Release((CRectanglesShape **)&v29);
              goto LABEL_10;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x1D8u);
          }
          CShapePtr::Release((CRectanglesShape **)&v29);
          goto LABEL_17;
        }
      }
LABEL_10:
      if ( v31 )
      {
        v27 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, unsigned __int64, _QWORD))(*(_QWORD *)v31 + 56LL))(
                v31,
                _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0],
                0LL);
        v6 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1E4u);
        else
          *a6 = (_DWORD)v30 != 0;
      }
    }
  }
LABEL_17:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v31);
  return v6;
}

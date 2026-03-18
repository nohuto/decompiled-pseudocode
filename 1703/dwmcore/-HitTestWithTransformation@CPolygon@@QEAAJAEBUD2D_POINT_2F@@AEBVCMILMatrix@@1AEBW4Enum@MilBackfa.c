/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18017798C
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x180191C60 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x180177CD8 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x180177F04 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v8; // edi
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
  int v25; // eax
  int v26; // eax
  union __m128 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v31; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v32[2]; // [rsp+68h] [rbp-A0h]
  __int128 v33; // [rsp+88h] [rbp-80h]
  int v34; // [rsp+98h] [rbp-70h]

  v30 = 0LL;
  v8 = 0;
  *a6 = 0;
  if ( !*((_BYTE *)this + 241) && (*((_BYTE *)this + 240) || !*(_DWORD *)a5) )
  {
    v9 = *((_OWORD *)a4 + 1);
    v10 = *((_DWORD *)a4 + 16);
    v31 = *(_OWORD *)a4;
    v11 = *((_OWORD *)a4 + 2);
    v32[0] = v9;
    v12 = *((_OWORD *)a4 + 3);
    v32[1] = v11;
    v33 = v12;
    v34 = v10;
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v31, (struct CMILMatrix *)&v31);
    v15.m128_u64[1] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)(unsigned int)v31, (__m128)*(unsigned int *)(&v31 + 8)),
                        _mm_unpacklo_ps((__m128)*(unsigned int *)(&v31 + 4), (__m128)*(unsigned int *)(&v31 + 12))).m128_u64[1];
    v13 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)LODWORD(v32[0]), (__m128)DWORD2(v32[0])),
            _mm_unpacklo_ps((__m128)DWORD1(v32[0]), (__m128)HIDWORD(v32[0])));
    v14 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)(unsigned int)v33, (__m128)DWORD2(v33)),
            _mm_unpacklo_ps((__m128)DWORD1(v33), (__m128)HIDWORD(v33)));
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
      v28 = v20;
      IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v28);
      *a6 = IsPointInPolygon;
      if ( IsPointInPolygon )
      {
        v22 = *((_QWORD *)this + 27);
        v23 = *(CGeometry **)(v22 + 232);
        if ( v23 )
        {
          v28.m128_u64[0] = 0LL;
          v28.m128_i8[8] = 0;
          ShapeData = CGeometry::GetShapeData(v23, (const struct D2D_SIZE_F *)(v22 + 128), (struct CShapePtr *)&v28);
          v8 = ShapeData;
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0x1EAu);
          }
          else
          {
            v25 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)v28.m128_u64[0] + 24LL))(
                    v28.m128_u64[0],
                    0LL,
                    &v30);
            v8 = v25;
            if ( v25 >= 0 )
            {
              CShapePtr::Release((CRectanglesShape **)&v28);
              goto LABEL_10;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1EBu);
          }
          CShapePtr::Release((CRectanglesShape **)&v28);
          goto LABEL_17;
        }
      }
LABEL_10:
      if ( v30 )
      {
        v26 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v30 + 56LL))(
                v30,
                _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0],
                0LL);
        v8 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1F7u);
        else
          *a6 = (_DWORD)v29 != 0;
      }
    }
  }
LABEL_17:
  ReleaseInterfaceNoNULL<CD2DPencil>(v30);
  return v8;
}

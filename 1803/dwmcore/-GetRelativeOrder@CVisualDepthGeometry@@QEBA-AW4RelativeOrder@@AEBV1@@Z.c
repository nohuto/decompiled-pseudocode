/*
 * XREFs of ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28
 * Callers:
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18021FF24 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1801C258C (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat3@Numerics@Foundation@Windows@@H@.c)
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1801C27A4 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C29A4 (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 *     ?IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z @ 0x1801C34BC (-IsCoplanar@CVisualDepthGeometry@@AEBA_NAEBV1@@Z.c)
 *     ?PlaneLineIntersection@@YA_NUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x1801C35B4 (-PlaneLineIntersection@@YA_NUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 */

__int64 __fastcall CVisualDepthGeometry::GetRelativeOrder(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  const struct CVisualDepthGeometry *v6; // rdx
  CVisualDepthGeometry *v7; // rcx
  bool v8; // cf
  __m128 v9; // xmm7
  int v10; // eax
  unsigned __int64 v11; // xmm0_8
  int v12; // eax
  unsigned __int64 v13; // xmm0_8
  int v14; // eax
  unsigned __int64 v15; // xmm0_8
  int v16; // eax
  unsigned __int64 v17; // xmm0_8
  int v18[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+50h] [rbp-B8h]
  unsigned int v21; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h]
  unsigned __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  int v26; // [rsp+80h] [rbp-88h]
  unsigned __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  int v28; // [rsp+90h] [rbp-78h]
  _BYTE v29[8]; // [rsp+98h] [rbp-70h] BYREF
  float v30; // [rsp+A0h] [rbp-68h]
  _BYTE v31[8]; // [rsp+A8h] [rbp-60h] BYREF
  float v32; // [rsp+B0h] [rbp-58h]
  _BYTE v33[96]; // [rsp+B8h] [rbp-50h] BYREF

  if ( *(float *)(a2 + 12) > *(float *)(a1 + 8)
    && *(float *)(a1 + 12) > *(float *)(a2 + 8)
    && *(float *)(a2 + 20) > *(float *)(a1 + 16)
    && *(float *)(a1 + 20) > *(float *)(a2 + 16) )
  {
    v21 = 0;
    v22 = 0;
    v4 = 0;
    if ( CVisualDepthGeometry::FindOverlappingPoint(
           (CVisualDepthGeometry *)a1,
           (const struct CVisualDepthGeometry *)a2,
           (struct Windows::Foundation::Numerics::float2 *)&v21) )
    {
      if ( *(float *)(a2 + 24) > *(float *)(a1 + 28) )
        return 1LL;
      if ( *(float *)(a1 + 24) > *(float *)(a2 + 28) )
        return 0LL;
      if ( CVisualDepthGeometry::IsCoplanar((CVisualDepthGeometry *)a1, (const struct CVisualDepthGeometry *)a2)
        || (v18[0] = 0,
            CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
              v7,
              v6,
              (struct Windows::Foundation::Numerics::float3 *)v33,
              v18),
            CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
              (CVisualDepthGeometry *)a2,
              (const struct CVisualDepthGeometry *)a1,
              (struct Windows::Foundation::Numerics::float3 *)v33,
              v18),
            v18[0] > 0)
        && !CVisualDepthGeometry::AreVisualsAbutting(
              (CVisualDepthGeometry *)a1,
              (const struct CVisualDepthGeometry *)a2,
              (struct Windows::Foundation::Numerics::float3 *)v33,
              v18[0]) )
      {
        v8 = *(_DWORD *)(a1 + 32) < *(_DWORD *)(a2 + 32);
LABEL_12:
        LOBYTE(v4) = v8;
        return v4;
      }
      v9 = (__m128)v22;
      v30 = 0.0;
      v32 = 0.0;
      v20 = 0;
      v27 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v28 = 1065353216;
      LODWORD(v24) = 0;
      v10 = *(_DWORD *)(a1 + 168);
      v23 = _mm_unpacklo_ps((__m128)v21, (__m128)v22).m128_u64[0];
      v11 = *(_QWORD *)(a1 + 160);
      v26 = v10;
      v12 = *(_DWORD *)(a1 + 156);
      v25 = v11;
      v13 = *(_QWORD *)(a1 + 148);
      v20 = v12;
      v19 = v13;
      if ( (unsigned __int8)PlaneLineIntersection(&v19, &v25, &v23, &v27, v29) )
      {
        LODWORD(v24) = 0;
        v19 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v20 = 1065353216;
        v26 = 0;
        v14 = *(_DWORD *)(a2 + 168);
        v25 = _mm_unpacklo_ps((__m128)v21, v9).m128_u64[0];
        v15 = *(_QWORD *)(a2 + 160);
        LODWORD(v24) = v14;
        v16 = *(_DWORD *)(a2 + 156);
        v23 = v15;
        v17 = *(_QWORD *)(a2 + 148);
        v28 = v16;
        v27 = v17;
        if ( (unsigned __int8)PlaneLineIntersection(&v27, &v23, &v25, &v19, v31) )
        {
          if ( v30 > v32 )
            return 0LL;
          if ( v32 > v30 )
            return 1LL;
          v8 = *(_DWORD *)(a1 + 32) < *(_DWORD *)(a2 + 32);
          goto LABEL_12;
        }
      }
    }
  }
  return 2LL;
}

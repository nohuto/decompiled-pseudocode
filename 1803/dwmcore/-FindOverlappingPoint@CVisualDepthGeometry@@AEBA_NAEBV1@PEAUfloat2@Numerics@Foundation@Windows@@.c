/*
 * XREFs of ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C29A4
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x1801C25E8 (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C338C (-Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801C3550 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 */

bool __fastcall CVisualDepthGeometry::FindOverlappingPoint(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  unsigned int v3; // xmm4_4
  unsigned int v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  char v9; // r8
  float v10; // xmm4_4
  float v11; // xmm5_4
  int v12; // xmm5_4
  int v13; // ebx
  __int64 v14; // rdi
  const struct CLineSegment *v15; // rax
  int *v16; // r15
  __int64 v17; // r12
  CLineSegment *v18; // r13
  const struct CLineSegment *v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // r9
  __int64 v22; // r10
  int v23; // xmm1_4
  char v24; // r8
  int v25; // xmm1_4
  bool v26; // zf
  __int64 i; // rax
  bool result; // al
  unsigned __int64 v29; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  struct Windows::Foundation::Numerics::float2 *v33; // [rsp+48h] [rbp-C0h]
  float v34[48]; // [rsp+58h] [rbp-B0h]

  v3 = *((_DWORD *)a2 + 37);
  v5 = *((_DWORD *)a2 + 38);
  v6 = 0.0;
  v33 = a3;
  v7 = 0.0;
  v30 = 0LL;
  v29 = __PAIR64__(v5, v3);
  if ( !CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v29, 0)
    && (v12 = *((_DWORD *)this + 38),
        LODWORD(v29) = *((_DWORD *)this + 37),
        HIDWORD(v29) = v12,
        !CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v29, v9))
    || (v30 = __PAIR64__(LODWORD(v11), LODWORD(v10)),
        v7 = v11,
        v6 = v10,
        CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v30))
    || CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v30) )
  {
    v13 = 0;
    v31 = 4LL;
    v14 = 0LL;
    v15 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
    v16 = (int *)((char *)this + 40);
    v17 = a2 - this;
    v18 = (CVisualDepthGeometry *)((char *)this + 84);
    do
    {
      v19 = v15;
      do
      {
        if ( CLineSegment::Intersects(v18, v19, (struct Windows::Foundation::Numerics::float2 *)&v32) )
        {
          ++v13;
          ++v14;
          *v21 = v32;
        }
        v19 = (const struct CLineSegment *)(v20 + 16);
      }
      while ( v22 != 1 );
      v23 = *v16;
      LODWORD(v29) = *(v16 - 1);
      HIDWORD(v29) = v23;
      if ( CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v29, 1) )
      {
        ++v13;
        *(_QWORD *)&v34[2 * v14++] = v29;
      }
      v25 = *(int *)((char *)v16 + v17);
      LODWORD(v29) = *(int *)((char *)v16 + v17 - 4);
      HIDWORD(v29) = v25;
      if ( CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v29, v24) )
      {
        ++v13;
        *(_QWORD *)&v34[2 * v14++] = v29;
      }
      v18 = (CLineSegment *)((char *)v18 + 16);
      v15 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
      v16 += 3;
      --v31;
    }
    while ( v31 );
    v26 = v13 == 0;
    if ( v13 > 0 )
    {
      for ( i = 0LL; i < v13; v7 = v7 + v34[2 * i++ + 1] )
        v6 = v6 + v34[2 * i];
      v26 = v13 == 0;
      *(float *)&v30 = v6 * (float)(1.0 / (float)v13);
      *((float *)&v30 + 1) = v7 * (float)(1.0 / (float)v13);
    }
    if ( v26
      || CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v30)
      || CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v30) )
    {
      return 0;
    }
  }
  result = 1;
  *(_QWORD *)v33 = v30;
  return result;
}

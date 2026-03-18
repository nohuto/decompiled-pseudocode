/*
 * XREFs of ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x1801C27A4
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x1801C25E8 (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?PlaneLineIntersection@@YA_NUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x1801C35B4 (-PlaneLineIntersection@@YA_NUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z.c)
 */

void __fastcall CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float3 *a3,
        int *a4)
{
  float *v4; // rbx
  int v5; // edi
  __int64 v10; // rsi
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  __m128 v13; // xmm6
  __m128 v14; // xmm7
  float v15; // xmm8_4
  __int64 v16; // xmm0_8
  float v17; // xmm2_4
  __int64 v18; // rdx
  float v19; // eax
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-89h] BYREF
  __int64 v22; // [rsp+40h] [rbp-81h] BYREF
  float v23; // [rsp+48h] [rbp-79h]
  __int64 v24; // [rsp+50h] [rbp-71h]
  float v25; // [rsp+58h] [rbp-69h]
  unsigned __int64 v26; // [rsp+68h] [rbp-59h] BYREF
  float v27; // [rsp+70h] [rbp-51h]
  __int64 v28; // [rsp+78h] [rbp-49h] BYREF
  int v29; // [rsp+80h] [rbp-41h]
  __int64 v30; // [rsp+88h] [rbp-39h] BYREF
  int v31; // [rsp+90h] [rbp-31h]
  __int64 v32; // [rsp+98h] [rbp-29h] BYREF
  int v33; // [rsp+A0h] [rbp-21h]
  float v34; // [rsp+B0h] [rbp-11h]

  v4 = (float *)((char *)this + 36);
  v5 = 1;
  v10 = 4LL;
  do
  {
    v11 = *(_QWORD *)v4;
    v25 = v4[2];
    v24 = v11;
    v12 = v5 % 4;
    v13 = (__m128)*((unsigned int *)this + 3 * v12 + 9);
    v14 = (__m128)*((unsigned int *)this + 3 * v12 + 10);
    v13.m128_f32[0] = v13.m128_f32[0] - *v4;
    v14.m128_f32[0] = v14.m128_f32[0] - v4[1];
    v15 = *((float *)this + 3 * v12 + 11) - v4[2];
    v26 = _mm_unpacklo_ps(v13, v14).m128_u64[0];
    v28 = *(_QWORD *)v4;
    v30 = *((_QWORD *)a2 + 20);
    v16 = *(_QWORD *)((char *)a2 + 36);
    v34 = v15;
    v27 = v15;
    v29 = *((_DWORD *)v4 + 2);
    v31 = *((_DWORD *)a2 + 42);
    v33 = *((_DWORD *)a2 + 11);
    v32 = v16;
    if ( (unsigned __int8)PlaneLineIntersection(&v32, &v30, &v28, &v26, &v22) )
    {
      v17 = (float)((float)((float)((float)(*((float *)&v22 + 1) - *((float *)&v24 + 1)) * v14.m128_f32[0])
                          + (float)((float)(*(float *)&v22 - *(float *)&v24) * v13.m128_f32[0]))
                  + (float)((float)(v23 - v25) * v15))
          / (float)((float)((float)(v13.m128_f32[0] * v13.m128_f32[0]) + (float)(v14.m128_f32[0] * v14.m128_f32[0]))
                  + (float)(v15 * v15));
      if ( v17 >= 0.0 && v17 <= 1.0 )
      {
        v21 = v22;
        if ( CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v21, 1) )
        {
          v18 = *a4;
          v19 = v23;
          v20 = 3 * v18;
          *(_QWORD *)((char *)a3 + 4 * v20) = v22;
          *((float *)a3 + v20 + 2) = v19;
          *a4 = v18 + 1;
        }
      }
    }
    ++v5;
    v4 += 3;
    --v10;
  }
  while ( v10 );
}

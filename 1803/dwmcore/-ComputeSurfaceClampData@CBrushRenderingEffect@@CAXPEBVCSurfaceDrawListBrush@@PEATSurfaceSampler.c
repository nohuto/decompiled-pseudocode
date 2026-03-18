/*
 * XREFs of ?ComputeSurfaceClampData@CBrushRenderingEffect@@CAXPEBVCSurfaceDrawListBrush@@PEATSurfaceSamplerData@CRenderingTechnique@@@Z @ 0x18008B29C
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073C98 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 * Callees:
 *     ?GetTextureSize@CD3DSurface@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180042AF0 (-GetTextureSize@CD3DSurface@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTextureSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180077460 (-GetTextureSize@CD2DBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18008DAE8 (-IsPrimitiveClampedToContentRect@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::ComputeSurfaceClampData(
        const struct CSurfaceDrawListBrush *a1,
        union CRenderingTechnique::SurfaceSamplerData *a2)
{
  CD2DBitmap *v4; // rcx
  struct D2D_SIZE_U (__fastcall *v5)(CD3DSurface *, int *); // rax
  __m128 v6; // xmm1
  float v7; // xmm4_4
  float v8; // xmm3_4
  __m128 v9; // xmm0
  float v10; // xmm5_4
  int v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+44h] [rbp+1Ch]

  if ( CSurfaceDrawListBrush::IsPrimitiveClampedToContentRect(a1) )
  {
    v10 = 0.0;
  }
  else
  {
    v4 = (CD2DBitmap *)*((_QWORD *)a1 + 8);
    v5 = *(struct D2D_SIZE_U (__fastcall **)(CD3DSurface *, int *))(*(_QWORD *)v4 + 40LL);
    if ( v5 == CD2DBitmap::GetTextureSize )
    {
      CD2DBitmap::GetTextureSize(v4, &v11);
    }
    else if ( v5 == CD3DSurface::GetTextureSize )
    {
      CD3DSurface::GetTextureSize(v4, &v11);
    }
    else
    {
      v5(v4, &v11);
    }
    v6 = (__m128)*((unsigned int *)a1 + 21);
    v7 = 1.0 / (float)v11;
    v8 = 1.0 / (float)v12;
    v9 = (__m128)*((unsigned int *)a1 + 20);
    v6.m128_f32[0] = (float)((float)(v6.m128_f32[0] + *((float *)a1 + 23)) * 0.5) * v8;
    v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] + *((float *)a1 + 22)) * 0.5) * v7;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v9, v6).m128_u64[0];
    v10 = (float)((float)(*((float *)a1 + 22) - *((float *)a1 + 20)) * 0.5) * v7;
    *((float *)a2 + 3) = (float)((float)(*((float *)a1 + 23) - *((float *)a1 + 21)) * 0.5) * v8;
  }
  *((float *)a2 + 2) = v10;
}

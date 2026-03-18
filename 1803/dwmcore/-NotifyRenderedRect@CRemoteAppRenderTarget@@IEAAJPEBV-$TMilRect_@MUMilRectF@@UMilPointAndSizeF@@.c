/*
 * XREFs of ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015C864
 * Callers:
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::NotifyRenderedRect(__int64 a1, float *a2)
{
  __m128i v2; // xmm1
  bool v4; // zf
  float *v6; // rdx
  __m128i v7; // xmm0
  float v8; // xmm1_4
  int v9; // eax
  unsigned int v10; // ebx
  float v12[4]; // [rsp+30h] [rbp-38h] BYREF
  float v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 292));
  v4 = a2 == 0LL;
  v6 = v12;
  if ( !v4 )
    v6 = a2;
  v12[0] = (float)*(int *)(a1 + 288);
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 296));
  LODWORD(v12[1]) = _mm_cvtepi32_ps(v2).m128_u32[0];
  v8 = (float)*(int *)(a1 + 300);
  LODWORD(v12[2]) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v12[3] = v8;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 208), (__int64)v6, v13);
  v9 = (*(__int64 (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 176) + 184LL))(*(_QWORD *)(a1 + 176), v13);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x126u);
  return v10;
}

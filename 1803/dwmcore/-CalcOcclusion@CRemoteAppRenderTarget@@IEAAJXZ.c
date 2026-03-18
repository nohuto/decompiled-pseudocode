/*
 * XREFs of ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C450
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015CE70 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800422F4 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CalcOcclusion(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  CDrawingContext *DrawingContext; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  CDrawingContext *v11; // rax
  int v12; // eax
  float v14[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 24);
  v2 = (_QWORD *)((char *)this + 200);
  if ( *(_BYTE *)(v1 + 2883) )
  {
    v4 = (float)*((int *)this + 73);
    v14[0] = (float)*((int *)this + 72);
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
    v14[1] = v4;
    v6 = (float)*((int *)this + 75);
    LODWORD(v14[2]) = _mm_cvtepi32_ps(v5).m128_u32[0];
    v14[3] = v6;
    DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v8 = CDrawingContext::CalculateOcclusion(
           DrawingContext,
           *((struct CVisualTree **)this + 15),
           1LL,
           (__int64)v14,
           0,
           0,
           v2);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x13Du);
  }
  else
  {
    v10 = *(_DWORD *)(v1 + 1276);
    v11 = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v12 = CDrawingContext::CalculateOcclusion(v11, *((struct CVisualTree **)this + 15), v10, v1 + 1116, 0, 0, v2);
    v9 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x146u);
  }
  return v9;
}

/*
 * XREFs of ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18005FC6C
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x18005FB64 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A36D8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800A36D8.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::CalculateMonitorTransform(
        CHwndRenderTarget *this,
        enum DXGI_MODE_ROTATION a2,
        unsigned int *a3,
        const struct tagRECT *a4)
{
  unsigned __int8 (__fastcall *v8)(CHwndRenderTarget *); // rax
  unsigned int v9; // eax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  int v13; // eax
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  unsigned __int32 v16; // xmm2_4
  _OWORD v17[4]; // [rsp+20h] [rbp-51h] BYREF
  __int16 v18; // [rsp+60h] [rbp-11h]
  int v19; // [rsp+70h] [rbp-1h] BYREF
  int v20; // [rsp+74h] [rbp+3h]
  float v21; // [rsp+78h] [rbp+7h]
  float v22; // [rsp+7Ch] [rbp+Bh]
  _DWORD v23[4]; // [rsp+80h] [rbp+Fh] BYREF

  v8 = *(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL);
  v17[0] = _xmm;
  v18 = 32085;
  v17[1] = _xmm;
  v17[2] = _xmm;
  v17[3] = _xmm;
  if ( !v8(this) )
  {
    v9 = a4->right - a4->left;
    v10 = _mm_cvtsi32_si128(*a3);
    v11 = _mm_cvtsi32_si128(a3[2]);
    v19 = 0;
    v20 = 0;
    v12 = _mm_cvtsi32_si128(v9);
    v13 = a4->bottom - a4->top;
    v23[0] = _mm_cvtepi32_ps(v10).m128_u32[0];
    v14 = _mm_cvtsi32_si128(a3[1]);
    v23[2] = _mm_cvtepi32_ps(v11).m128_u32[0];
    v15 = _mm_cvtsi32_si128(a3[3]);
    v16 = _mm_cvtepi32_ps(v12).m128_u32[0];
    v22 = (float)v13;
    v21 = *(float *)&v16;
    v23[1] = _mm_cvtepi32_ps(v14).m128_u32[0];
    v23[3] = _mm_cvtepi32_ps(v15).m128_u32[0];
    if ( ((a2 - 2) & 0xFFFFFFFD) == 0 )
    {
      v19 = 0;
      v20 = 0;
      v21 = (float)v13;
      v22 = *(float *)&v16;
    }
    CMILMatrix::InferAffineMatrix(v17, &v19, v23);
  }
  CHwndRenderTarget::CalculateTransform(this, a2, a4, (const struct CMILMatrix *)v17);
}

/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800816F0
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081630 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180042D8C (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180043A30 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 v3; // rcx
  signed int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  signed int v8; // eax
  float v9; // xmm1_4
  signed int v10; // eax
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  unsigned int v14; // [rsp+20h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+3Ch] [rbp-24h]
  float v18; // [rsp+40h] [rbp-20h]
  float v19; // [rsp+44h] [rbp-1Ch]
  struct _D3DCOLORVALUE v20; // [rsp+48h] [rbp-18h] BYREF

  v15 = 0LL;
  v3 = *((_QWORD *)this + 1);
  *(_QWORD *)&v20.r = 0LL;
  *(_QWORD *)&v20.b = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 168LL))(v3);
  v5 = CDrawingContext::PushRenderTarget(a2, *((struct IRenderTarget **)this + 1));
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 137;
    goto LABEL_13;
  }
  v7 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 33) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 200LL))(v7, &v15);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x97u);
    goto LABEL_7;
  }
  v16 = 0;
  v17 = 0;
  v9 = (float)*(int *)(v15 + 132);
  v18 = (float)*(int *)(v15 + 128);
  v19 = v9;
  v5 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v16, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 158;
    goto LABEL_13;
  }
  v10 = CDrawingContext::Clear((CD2DContext **)a2, &v20);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xA1u);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    goto LABEL_7;
  }
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v16 = 0;
  v17 = 0;
  LODWORD(v19) = _mm_cvtepi32_ps(v11).m128_u32[0];
  LODWORD(v18) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v5 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v16, 1, 1, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 176;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v14);
    goto LABEL_7;
  }
  *((_BYTE *)this + 34) = 1;
LABEL_7:
  ReleaseInterfaceNoNULL<CPolygon>(v15);
  return v6;
}

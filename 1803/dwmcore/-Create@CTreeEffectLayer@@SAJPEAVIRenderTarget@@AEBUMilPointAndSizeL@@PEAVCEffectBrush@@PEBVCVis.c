/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180008F98
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180007E98 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x180009C94 (--0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18000A2C0 (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x18000A2FC (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x18000A740 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BE290 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 *a1,
        __int64 a2,
        CEffectBrush *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v7; // xmm2
  float v8; // xmm6_4
  float v13; // xmm7_4
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  int DisplaySize; // eax
  unsigned int v18; // ebx
  float v19; // xmm0_4
  int v20; // ecx
  float v21; // xmm0_4
  int v22; // eax
  bool HasBlurEffectNode; // bl
  __int64 v24; // rdx
  void *v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64); // rax
  char v27; // al
  int v29; // r9d
  unsigned int v30; // [rsp+28h] [rbp-E0h]
  char v31; // [rsp+30h] [rbp-D8h]
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v37[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v38[64]; // [rsp+88h] [rbp-80h] BYREF
  int v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+D8h] [rbp-30h] BYREF
  const char *v41; // [rsp+E8h] [rbp-20h] BYREF
  int v42; // [rsp+F0h] [rbp-18h]

  v8 = FLOAT_1_0;
  v35 = 0LL;
  *(_QWORD *)a7 = 0LL;
  v33 = 0;
  v39 = 0;
  v13 = FLOAT_1_0;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*a1 + 24))(a1, &v40);
  v15 = *(_QWORD *)v14;
  v37[2] = *(_DWORD *)(v14 + 8);
  v16 = *a1;
  v37[0] = v15;
  v37[1] = 1;
  DisplaySize = (*(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned int *))(v16 + 136))(a1, &v36, &v33);
  v18 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v30 = 43;
    goto LABEL_38;
  }
  v40 = *(_OWORD *)CTreeEffectLayer::GetLayerPointAndSize(&v41, a3, a2, a5);
  DisplaySize = CTreeEffectLayer::GetDisplaySize(v33, v36, &v34, &v32);
  v18 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v30 = 54;
    goto LABEL_38;
  }
  if ( DWORD2(v40) > v34 )
    v8 = (float)v34 / (float)SDWORD2(v40);
  if ( HIDWORD(v40) > v32 )
    v13 = (float)v32 / (float)SHIDWORD(v40);
  if ( v13 > v8 )
    v13 = v8;
  else
    v8 = v13;
  v19 = (float)SDWORD2(v40) * v8;
  *(float *)&v32 = v19;
  if ( COERCE_UNSIGNED_INT(fabs(v19)) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v19 - v19;
    v7 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5));
    v32 = v7.m128_i32[0];
    v20 = (int)v19 - v7.m128_i32[0];
  }
  else
  {
    *(float *)&v32 = v19 + 6291456.25;
    v20 = v32 << 10 >> 11;
  }
  DWORD2(v40) = v20;
  v21 = (float)SHIDWORD(v40) * v13;
  *(float *)&v32 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v7.m128_f32[0] = (float)(int)v21 - v21;
    v32 = _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v22 = (int)v21 - v32;
  }
  else
  {
    *(float *)&v32 = v21 + 6291456.25;
    v22 = v32 << 10 >> 11;
  }
  HIDWORD(v40) = v22;
  if ( !v20 || !v22 )
  {
    v18 = -2147024809;
    v30 = 82;
    goto LABEL_34;
  }
  if ( a3 )
    HasBlurEffectNode = CEffectBrush::HasBlurEffectNode(a3);
  else
    HasBlurEffectNode = 0;
  v24 = *a1;
  v41 = "DWM Scratch Rendertarget (tree effect layer)";
  v42 = 44;
  v31 = (*(__int64 (__fastcall **)(__int64 *))(v24 + 160))(a1);
  DisplaySize = CExternalLayer::CreateRenderTargetBitmap(&v41, &v40, v37, v36, v33, v31, 1, HasBlurEffectNode, &v35);
  v18 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v30 = 96;
LABEL_38:
    v29 = DisplaySize;
    goto LABEL_39;
  }
  v25 = operator new(0x118uLL);
  if ( v25 )
    v25 = (void *)CTreeEffectLayer::CTreeEffectLayer(
                    v25,
                    &v40,
                    a5,
                    v35,
                    a3,
                    a6,
                    v38,
                    &v41,
                    LODWORD(v8),
                    LODWORD(v13),
                    v32);
  *(_QWORD *)a7 = v25;
  if ( !v25 )
  {
    v18 = -2147024882;
    v30 = 108;
LABEL_34:
    v29 = v18;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, v30);
    goto LABEL_26;
  }
  if ( a4 )
  {
    v26 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 48LL);
    if ( v26 == CLayerVisual::IsOfType )
      v27 = CLayerVisual::IsOfType(a4, 85LL);
    else
      v27 = v26(a4, 85LL);
    if ( v27 )
      *(_QWORD *)(*(_QWORD *)a7 + 248LL) = a4;
  }
LABEL_26:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35);
  return v18;
}

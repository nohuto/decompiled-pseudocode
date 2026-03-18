/*
 * XREFs of ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18001AA50
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000D620 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18001027C (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x180010660 (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     ??0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@4MM@Z @ 0x1800150E4 (--0CTreeEffectLayer@@IEAA@AEBUMilPointAndSizeL@@AEBUMilPointAndSizeF@@PEAVIRenderTargetBitmap@@P.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ?GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z @ 0x18001B1F4 (-GetDisplaySize@CTreeEffectLayer@@SAJVDisplayId@@U_LUID@@PEAI2@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1AC0 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::Create(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3,
        CEffectBrush *a4,
        __int64 a5,
        __m128 *a6,
        _OWORD *a7,
        __int64 a8)
{
  __m128 v8; // xmm2
  float v9; // xmm6_4
  float v13; // xmm7_4
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, __int64 *); // rax
  int DisplaySize; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  float v19; // xmm0_4
  int v20; // ecx
  float v21; // xmm0_4
  int v22; // eax
  void *v23; // rax
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  char v25; // al
  int v27; // r9d
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  char v29; // [rsp+38h] [rbp-D0h]
  char HasBlurEffectNode; // [rsp+48h] [rbp-C0h]
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+64h] [rbp-A4h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h] BYREF
  struct IRenderTargetBitmap *v35; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  _BYTE v38[64]; // [rsp+98h] [rbp-70h] BYREF
  int v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E8h] [rbp-20h] BYREF
  int v41; // [rsp+F0h] [rbp-18h]
  __int128 v42; // [rsp+F8h] [rbp-10h] BYREF

  v9 = FLOAT_1_0;
  *(_QWORD *)a8 = 0LL;
  v40 = 0LL;
  v13 = FLOAT_1_0;
  v41 = 0;
  v14 = *a1;
  v37 = a2;
  v35 = 0LL;
  v32 = 0;
  v15 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 24);
  v39 = 0;
  DisplaySize = v15(a1, &v40);
  v17 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 41;
    goto LABEL_37;
  }
  v18 = *a1;
  HIDWORD(v40) = 1;
  v41 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 40))(a1);
  DisplaySize = (*(__int64 (__fastcall **)(__int64 *, __int64 *, unsigned int *, _QWORD))(*a1 + 104))(
                  a1,
                  &v36,
                  &v32,
                  0LL);
  v17 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 46;
    goto LABEL_37;
  }
  v34 = *CTreeEffectLayer::GetLayerPointAndSize(&v42, a4, a3, a6);
  DisplaySize = CTreeEffectLayer::GetDisplaySize(v32, v36, &v33, &v31);
  v17 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 57;
    goto LABEL_37;
  }
  if ( DWORD2(v34) > v33 )
    v9 = (float)v33 / (float)SDWORD2(v34);
  if ( HIDWORD(v34) > v31 )
    v13 = (float)v31 / (float)SHIDWORD(v34);
  if ( v13 > v9 )
    v13 = v9;
  else
    v9 = v13;
  v19 = (float)SDWORD2(v34) * v9;
  *(float *)&v31 = v19;
  if ( COERCE_UNSIGNED_INT(fabs(v19)) > 0x497FFFF0 )
  {
    v8.m128_f32[0] = (float)(int)v19 - v19;
    v8 = _mm_cmple_ss(v8, (__m128)LODWORD(FLOAT_N0_5));
    v31 = v8.m128_i32[0];
    v20 = (int)v19 - v8.m128_i32[0];
  }
  else
  {
    *(float *)&v31 = v19 + 6291456.25;
    v20 = v31 << 10 >> 11;
  }
  DWORD2(v34) = v20;
  v21 = (float)SHIDWORD(v34) * v13;
  *(float *)&v31 = v21;
  if ( COERCE_UNSIGNED_INT(fabs(v21)) > 0x497FFFF0 )
  {
    v8.m128_f32[0] = (float)(int)v21 - v21;
    v31 = _mm_cmple_ss(v8, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    v22 = (int)v21 - v31;
  }
  else
  {
    *(float *)&v31 = v21 + 6291456.25;
    v22 = v31 << 10 >> 11;
  }
  HIDWORD(v34) = v22;
  if ( !v20 || !v22 )
  {
    v17 = -2147024809;
    v28 = 85;
    goto LABEL_32;
  }
  DWORD2(v42) = 44;
  *(_QWORD *)&v42 = "DWM Scratch Rendertarget (tree effect layer)";
  HasBlurEffectNode = CEffectBrush::HasBlurEffectNode(a4);
  v29 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  DisplaySize = CExternalLayer::CreateRenderTargetBitmap(
                  &v42,
                  v37,
                  &v34,
                  &v40,
                  v36,
                  v32,
                  v29,
                  1,
                  HasBlurEffectNode,
                  &v35);
  v17 = DisplaySize;
  if ( DisplaySize < 0 )
  {
    v28 = 100;
LABEL_37:
    v27 = DisplaySize;
    goto LABEL_38;
  }
  v23 = operator new(0x110uLL);
  if ( v23 )
    v23 = (void *)CTreeEffectLayer::CTreeEffectLayer(
                    (__int64)v23,
                    (const struct MilPointAndSizeL *)&v34,
                    (__int128 *)a6,
                    v35,
                    (__int64)a4,
                    a7,
                    (__int64)v38,
                    &v42,
                    SLODWORD(v9),
                    SLODWORD(v13));
  *(_QWORD *)a8 = v23;
  if ( !v23 )
  {
    v17 = -2147024882;
    v28 = 112;
LABEL_32:
    v27 = v17;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v28);
    goto LABEL_25;
  }
  if ( a5 )
  {
    v24 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 48LL);
    if ( v24 == CLayerVisual::IsOfType )
      v25 = CLayerVisual::IsOfType(a5, 33LL);
    else
      v25 = v24(a5, 33LL);
    if ( v25 )
      *(_QWORD *)(*(_QWORD *)a8 + 240LL) = a5;
  }
LABEL_25:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v35);
  return v17;
}

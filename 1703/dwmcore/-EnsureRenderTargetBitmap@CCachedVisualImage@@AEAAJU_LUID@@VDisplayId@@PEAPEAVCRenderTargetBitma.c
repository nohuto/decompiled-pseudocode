/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180048820 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 *     ?GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180165590 (-GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11Sh.c)
 *     ?GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z @ 0x180165654 (-GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18004765C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047A70 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180047D18 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180047ED0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x180047F90 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x180048210 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D99C (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??$SetInterface@VCRenderTargetBitmap@@V1@@@YAXAEAPEAVCRenderTargetBitmap@@PEAV0@@Z @ 0x1800C5A9C (--$SetInterface@VCRenderTargetBitmap@@V1@@@YAXAEAPEAVCRenderTargetBitmap@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v4; // r15
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  __m128i v10; // xmm6
  __int64 v11; // r15
  int v12; // eax
  __int64 ExistingRenderTarget; // rax
  unsigned int v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // r9d
  unsigned int v18; // [rsp+28h] [rbp-49h]
  int v19; // [rsp+38h] [rbp-39h]
  unsigned int v20; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-25h] BYREF
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-19h]
  __m128i v24; // [rsp+68h] [rbp-9h] BYREF

  v23 = a4;
  *a4 = 0LL;
  v4 = a4;
  v8 = 0;
  v22 = 0LL;
  if ( *(_DWORD *)(a1 + 144) )
  {
    v8 = -2147467263;
    v18 = 1352;
    goto LABEL_21;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( !*(_BYTE *)(a1 + 323) )
  {
    CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v20, &v21);
    if ( !CCachedVisualImage::HasContent((CCachedVisualImage *)(a1 + 8)) || !v20 || (v9 = v21, *(float *)&v21 == 0.0) )
    {
      CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
      return v8;
    }
    if ( *(_BYTE *)(a1 + 324) )
    {
      v24.m128i_i64[0] = 0LL;
      *(float *)&v24.m128i_i32[3] = (float)(int)v21;
      *(float *)&v24.m128i_i32[2] = (float)(int)v20;
      v10 = v24;
      goto LABEL_9;
    }
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 88));
    v11 = *(_QWORD *)(a1 + 104);
    v24 = v10;
    if ( !v11 )
    {
LABEL_8:
      v4 = v23;
LABEL_9:
      if ( (unsigned __int8)IsRectEmptyOrInvalid(&v24) )
        return v8;
      v19 = *(_DWORD *)(a1 + 168);
      v24 = v10;
      v12 = CCachedVisualImage::EnsureRenderTargetBitmapInfo(a1, a2, a3, v20, v9, &v24, v19, &v22);
      v8 = v12;
      if ( v12 >= 0 )
      {
        ExistingRenderTarget = v22;
        goto LABEL_12;
      }
      v18 = 1411;
      v17 = v12;
LABEL_23:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v18);
      return v8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, 54LL) )
    {
      v10 = _mm_loadu_si128((const __m128i *)(v11 + 56));
      v24 = v10;
      goto LABEL_8;
    }
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v18 = 1388;
LABEL_21:
    v17 = v8;
    goto LABEL_23;
  }
  *(float *)&v15 = (float)(*(float *)(a1 + 356) - *(float *)(a1 + 348)) + 6291456.25;
  v16 = *(float *)(a1 + 352) - *(float *)(a1 + 344);
  v20 = v15;
  *(float *)&v21 = v16 + 6291456.25;
  CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, (int)(v21 << 10) >> 11, (int)(v15 << 10) >> 11);
  ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
  if ( ExistingRenderTarget )
    goto LABEL_13;
  if ( !*(_DWORD *)(a1 + 208) )
    return v8;
  ExistingRenderTarget = *(_QWORD *)(a1 + 184);
LABEL_12:
  if ( ExistingRenderTarget )
LABEL_13:
    SetInterface<CRenderTargetBitmap,CRenderTargetBitmap>(v4, *(_QWORD *)(ExistingRenderTarget + 8));
  return v8;
}

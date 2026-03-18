/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x1800B3E5C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800A8E44 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B4370 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800B4480 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180182380 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800B414C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800B4578 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x1800B470C (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800B48C4 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x1800B4984 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800B4D00 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x1800B61C0 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C4890 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800CD240 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmapInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  __int64 v8; // rsi
  unsigned int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 ExistingRenderTarget; // r15
  int v15; // eax
  __int64 v17; // r9
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  unsigned int v20; // xmm0_4
  float v21; // xmm1_4
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-59h]
  unsigned int v24; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-35h] BYREF
  _OWORD *v26; // [rsp+48h] [rbp-31h] BYREF
  __int128 v27; // [rsp+50h] [rbp-29h] BYREF
  __int128 v28; // [rsp+60h] [rbp-19h] BYREF
  __int128 v29; // [rsp+70h] [rbp-9h]
  __int128 v30; // [rsp+80h] [rbp+7h]

  *a4 = 0LL;
  v28 = 0uLL;
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v30 + 1) = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v9 = -2147467263;
    v23 = 1268;
    goto LABEL_23;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_BYTE *)(a1 + 378) )
  {
    *(float *)&v20 = (float)(*(float *)(a1 + 412) - *(float *)(a1 + 404)) + 6291456.25;
    v21 = *(float *)(a1 + 408) - *(float *)(a1 + 400);
    v25 = v20;
    *(float *)&v24 = v21 + 6291456.25;
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, (int)(v24 << 10) >> 11, (int)(v20 << 10) >> 11);
    ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    if ( !ExistingRenderTarget && *(_DWORD *)(a1 + 264) )
      ExistingRenderTarget = *(_QWORD *)(a1 + 240);
    v9 = 0;
    goto LABEL_11;
  }
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v25, &v24);
  if ( !CCachedVisualImage::HasContent((CCachedVisualImage *)(a1 + 8)) || !v25 || *(float *)&v24 == 0.0 )
  {
    CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
    v9 = 0;
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(a1 + 379) )
  {
    v8 = *(_QWORD *)(a1 + 160);
    v27 = *(_OWORD *)(a1 + 144);
    if ( !v8 )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 117LL) )
    {
      v27 = *(_OWORD *)(v8 + 56);
      goto LABEL_8;
    }
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
    v23 = 1305;
LABEL_23:
    v22 = v9;
    goto LABEL_26;
  }
  *(_QWORD *)&v27 = 0LL;
  *((float *)&v27 + 2) = (float)(int)v25;
  *((float *)&v27 + 3) = (float)(int)v24;
LABEL_8:
  v9 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v27) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, v10, v11);
    v12 = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    v26 = (_OWORD *)v12;
    ExistingRenderTarget = v12;
    if ( v12 )
    {
      LOBYTE(v13) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1344LL);
      v15 = CCachedVisualImage::RenderTargetBitmapInfo::Update(v12, &v27, a3, v13, *(_DWORD *)(a1 + 224));
      v9 = v15;
      if ( v15 >= 0 )
      {
LABEL_11:
        *a4 = ExistingRenderTarget;
        goto LABEL_12;
      }
      v23 = 1328;
    }
    else
    {
      v15 = CCachedVisualImage::CreateRenderTargetInfo(a1, a2, a3, v25, v24, &v27, *(_DWORD *)(a1 + 224), &v28);
      if ( v15 < 0 )
      {
        if ( v15 == -2003292287 )
          goto LABEL_11;
        v9 = v15;
        v23 = 1362;
      }
      else
      {
        LOBYTE(v17) = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1344LL);
        v15 = CCachedVisualImage::RenderTargetBitmapInfo::Update(&v28, &v27, a3, v17, *(_DWORD *)(a1 + 224));
        v9 = v15;
        if ( v15 < 0 )
        {
          v23 = 1347;
        }
        else
        {
          v15 = DynArrayImpl<1>::AddMultiple(a1 + 240, 48LL, 1LL, &v26);
          v9 = v15;
          if ( v15 >= 0 )
          {
            ExistingRenderTarget = (__int64)v26;
            v18 = v29;
            *v26 = v28;
            v19 = v30;
            *(_OWORD *)(ExistingRenderTarget + 16) = v18;
            *(_OWORD *)(ExistingRenderTarget + 32) = v19;
            memset_0(&v28, 0, 0x30uLL);
            goto LABEL_11;
          }
          v23 = 1349;
        }
      }
    }
    v22 = v15;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v23);
  }
LABEL_12:
  CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)&v28);
  return v9;
}

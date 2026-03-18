/*
 * XREFs of ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005CD64 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008DE60 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18008DF00 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18008E1B0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007E80C (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008A910 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008DC1C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x18008E2A4 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18008E438 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008E5F0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18008E6B0 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008EA10 (-HasContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097B78 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmapInfo(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v4; // r14d
  __int64 v9; // r14
  unsigned int v10; // edx
  unsigned int v11; // r8d
  const struct _D3DCOLORVALUE **v12; // rax
  __int64 ExistingRenderTarget; // r15
  int v14; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int v18; // xmm0_4
  float v19; // xmm1_4
  DWORD v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-59h]
  unsigned int v22; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-35h] BYREF
  const struct _D3DCOLORVALUE **v24; // [rsp+48h] [rbp-31h] BYREF
  __int128 v25; // [rsp+50h] [rbp-29h] BYREF
  __int128 v26; // [rsp+60h] [rbp-19h] BYREF
  __int128 v27; // [rsp+70h] [rbp-9h]
  __int128 v28; // [rsp+80h] [rbp+7h]

  v4 = 0;
  *a4 = 0LL;
  v26 = 0uLL;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v28 + 1) = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v4 = -2147467263;
    v21 = 1273;
    goto LABEL_23;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( *(_BYTE *)(a1 + 378) )
  {
    *(float *)&v18 = (float)(*(float *)(a1 + 412) - *(float *)(a1 + 404)) + 6291456.25;
    v19 = *(float *)(a1 + 408) - *(float *)(a1 + 400);
    v23 = v18;
    *(float *)&v22 = v19 + 6291456.25;
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, (int)(v22 << 10) >> 11, (int)(v18 << 10) >> 11);
    ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    if ( !ExistingRenderTarget && *(_DWORD *)(a1 + 264) )
      ExistingRenderTarget = *(_QWORD *)(a1 + 240);
    goto LABEL_11;
  }
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)a1, &v23, &v22);
  if ( !CCachedVisualImage::HasContent((CCachedVisualImage *)(a1 + 8)) || !v23 || *(float *)&v22 == 0.0 )
  {
    CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)a1);
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(a1 + 379) )
  {
    v9 = *(_QWORD *)(a1 + 160);
    v25 = *(_OWORD *)(a1 + 144);
    if ( !v9 )
      goto LABEL_8;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 105LL) )
    {
      v25 = *(_OWORD *)(v9 + 56);
      goto LABEL_8;
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x32u);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x68u);
    v21 = 1310;
LABEL_23:
    v20 = v4;
    goto LABEL_26;
  }
  *(_QWORD *)&v25 = 0LL;
  *((float *)&v25 + 2) = (float)(int)v23;
  *((float *)&v25 + 3) = (float)(int)v22;
LABEL_8:
  v4 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(&v25) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)a1, v10, v11);
    v12 = (const struct _D3DCOLORVALUE **)CCachedVisualImage::FindExistingRenderTarget(a1, a2, a3);
    v24 = v12;
    ExistingRenderTarget = (__int64)v12;
    if ( v12 )
    {
      v14 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
              v12,
              (__int64)&v25,
              a3,
              *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1296LL),
              *(_DWORD *)(a1 + 224));
      v4 = v14;
      if ( v14 >= 0 )
      {
LABEL_11:
        *a4 = ExistingRenderTarget;
        goto LABEL_12;
      }
      v21 = 1333;
    }
    else
    {
      v14 = CCachedVisualImage::CreateRenderTargetInfo(a1, a2, a3, v23, v22, &v25, *(_DWORD *)(a1 + 224), &v26);
      if ( v14 < 0 )
      {
        if ( v14 == -2003292287 )
          goto LABEL_11;
        v4 = v14;
        v21 = 1367;
      }
      else
      {
        v14 = CCachedVisualImage::RenderTargetBitmapInfo::Update(
                (const struct _D3DCOLORVALUE **)&v26,
                (__int64)&v25,
                a3,
                *(_BYTE *)(*(_QWORD *)(a1 + 32) + 1296LL),
                *(_DWORD *)(a1 + 224));
        v4 = v14;
        if ( v14 < 0 )
        {
          v21 = 1352;
        }
        else
        {
          v14 = DynArrayImpl<1>::AddMultiple(a1 + 240, 0x30u, 1, &v24);
          v4 = v14;
          if ( v14 >= 0 )
          {
            ExistingRenderTarget = (__int64)v24;
            v16 = v27;
            *(_OWORD *)v24 = v26;
            v17 = v28;
            *(_OWORD *)(ExistingRenderTarget + 16) = v16;
            *(_OWORD *)(ExistingRenderTarget + 32) = v17;
            memset_0(&v26, 0, 0x30uLL);
            goto LABEL_11;
          }
          v21 = 1354;
        }
      }
    }
    v20 = v14;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, v21);
  }
LABEL_12:
  CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)&v26);
  return v4;
}

/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x1800B3E5C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18000F1E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800412BC (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089E08 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A950 (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4B70 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x1800B6738 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B694C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B6984 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDisplayColorSpace@CDisplaySet@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1800B6B60 (-GetDisplayColorSpace@CDisplaySet@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800B6BB0 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x1800C5448 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     McTemplateU0ppffffdd @ 0x180182AD0 (McTemplateU0ppffffdd.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        const struct _D3DCOLORVALUE **a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  const struct _D3DCOLORVALUE *v9; // rax
  CCachedVisualImage *v11; // rcx
  char v12; // r13
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CDrawingContext *v16; // r15
  const struct _D3DCOLORVALUE *v17; // r10
  __int128 *v18; // rax
  CDisplayManager *v19; // rcx
  int CurrentDisplaySet; // eax
  __int64 v21; // rcx
  __int64 *v22; // rsi
  __int64 v23; // rdi
  int v24; // eax
  int Bounds; // eax
  unsigned int v26; // eax
  const struct _D3DCOLORVALUE *v27; // rdx
  char v28; // si
  int v29; // eax
  char v30; // r12
  CDisplayManager *v31; // rcx
  int v32; // eax
  enum DXGI_COLOR_SPACE_TYPE DisplayColorSpace; // eax
  float v34; // xmm2_4
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // eax
  int v39; // eax
  int v40; // eax
  float v41; // [rsp+30h] [rbp-D0h]
  CDrawingContext *v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  float v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int128 v46; // [rsp+88h] [rbp-78h] BYREF
  __int128 v47; // [rsp+98h] [rbp-68h]
  __int128 v48; // [rsp+A8h] [rbp-58h]
  __int128 v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+C8h] [rbp-38h]
  __int64 v51[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+F0h] [rbp-10h]
  __int128 v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+110h] [rbp+10h]
  __m128 v56; // [rsp+120h] [rbp+20h] BYREF
  float v57[6]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v58; // [rsp+1A0h] [rbp+A0h] BYREF

  v58 = a3;
  v6 = 0;
  v42 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(a1, a2, a5);
  if ( !*((_BYTE *)a1 + 44) )
  {
    v9 = *a1;
    if ( a4 )
    {
      if ( BYTE1(v9[23].a) != 1 )
        return v6;
    }
    else if ( BYTE1(v9[23].a) != 2 )
    {
      return v6;
    }
  }
  v11 = (CCachedVisualImage *)*a1;
  v12 = 0;
  v55 = 0;
  v13 = CCachedVisualImage::EnsureVisualTree(v11);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x307u);
    return v6;
  }
  CRenderTargetBitmap::GetBounds((__int64)a1[1], &v56);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v34 = *((float *)a1 + 9) - *((float *)a1 + 7);
    v41 = *((float *)a1 + 8) - *((float *)a1 + 6);
    McTemplateU0ppffffdd(
      *(_DWORD *)a1 + 16,
      (int)(float)(v56.m128_f32[2] - v56.m128_f32[0]),
      *a1 != 0LL ? *(_DWORD *)a1 + 16 : 0,
      *(_QWORD *)&(*a1)[12].r,
      *((_DWORD *)a1 + 6),
      *((_DWORD *)a1 + 7),
      SLOBYTE(v41),
      SLOBYTE(v34),
      (int)(float)(v56.m128_f32[2] - v56.m128_f32[0]),
      (int)(float)(v56.m128_f32[3] - v56.m128_f32[1]));
  }
  v14 = CVisualTree::PreCompute(*(struct CVisualTree **)&(*a1)[14].b, 0LL);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x319u);
    return v6;
  }
  v15 = CDrawingContext::Create(*(struct CComposition **)&(*a1)[2].r, &v42);
  v16 = v42;
  v6 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x31Fu);
  }
  else
  {
    CTileBrushUtils::CalculateViewboxToViewportMapping(
      (unsigned int)&v56,
      (_DWORD)a1 + 24,
      *((_DWORD *)a1 + 10),
      0,
      0,
      (__int64)v51);
    v17 = *a1;
    if ( BYTE1((*a1)[23].b)
      && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)&v17[14].b + 24LL), (float *)&v43, &v44, (float *)&v42) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v51, COERCE_FLOAT(v43 ^ _xmm), COERCE_FLOAT(LODWORD(v44) ^ _xmm));
    }
    v18 = *(__int128 **)&v17[13].b;
    if ( v18 )
    {
      v35 = v18[1];
      v46 = *v18;
      v36 = v18[2];
      v47 = v35;
      v37 = v18[3];
      v38 = *((_DWORD *)v18 + 16);
      v48 = v36;
      v50 = v38;
      v49 = v37;
      CMILMatrix::Multiply((CMILMatrix *)&v46, (const struct CMILMatrix *)v51);
      v55 = v50;
      *(_OWORD *)v51 = v46;
      v52 = v47;
      v53 = v48;
      v54 = v49;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 248LL))(*(_QWORD *)&a1[1][10].r, a3);
    if ( DisplayId::IsSpecific((DisplayId *)&v58) )
    {
      v42 = 0LL;
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v42);
      CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v19, &v42);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0x34Fu);
        Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v42);
        goto LABEL_40;
      }
      v43 = 0LL;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v43);
      if ( (int)CDisplaySet::GetDisplay(v42, a3, &v43) >= 0 )
      {
        v21 = *(_QWORD *)(v43 + 72);
        if ( v21 )
        {
          v22 = *(__int64 **)&a1[1][9].b;
          v23 = *v22;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 168LL))(v21);
          (*(void (__fastcall **)(__int64 *))(v23 + 176))(v22);
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v43);
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v42);
    }
    v24 = CDrawingContext::BeginFrame(
            v16,
            *(struct IRenderTarget **)&a1[1][9].b,
            &(*a1)[24].r,
            0,
            (__int64)v51,
            0LL,
            0,
            0LL);
    v6 = v24;
    if ( v24 >= 0 )
    {
      Bounds = CVisualTree::GetBounds(*(struct CVisualTree **)&(*a1)[14].b, (__int64)v57);
      v6 = Bounds;
      if ( Bounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x365u);
        goto LABEL_39;
      }
      v26 = v57[5] <= v57[4];
      if ( v57[2] <= v57[0] )
        ++v26;
      if ( v57[3] <= v57[1] )
        ++v26;
      if ( v26 > 1 )
      {
        v39 = CDrawingContext::Clear(v16, *a1 + 24);
        v6 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x368u);
          goto LABEL_39;
        }
      }
      else
      {
        ++dword_1802D6248;
        ++dword_1802D630C;
        v27 = *a1;
        v28 = (*(_DWORD *)(*(_QWORD *)&(*a1)[12].r + 88LL) & 0x100) != 0
           && (*(float *)v51 < 0.40000001 || *((float *)&v52 + 1) < 0.40000001);
        v45 = 0LL;
        CDrawingContext::CalculateOcclusion(v16, *(struct CVisualTree **)&v27[14].b, 1LL, (__int64)&v56, 0, 1, &v45);
        if ( (float)(*((float *)a1 + 8) - *((float *)a1 + 6)) > (float)(v56.m128_f32[2] - v56.m128_f32[0])
          || (float)(*((float *)a1 + 9) - *((float *)a1 + 7)) > (float)(v56.m128_f32[3] - v56.m128_f32[1]) )
        {
          *(_QWORD *)&v46 = 0x600000003LL;
          LODWORD(v47) = 1;
          v40 = CDrawingContext::PushRenderOptionsInternal(v16, 0LL, (const struct MilRenderOptions *)&v46, 1);
          v6 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x393u);
            goto LABEL_39;
          }
          v12 = 1;
        }
        v29 = CDrawingContext::DrawVisualTree(
                v16,
                *(_QWORD *)&(*a1)[14].b,
                &v56,
                0LL,
                0x7FFFFFFF,
                1,
                v12,
                1,
                v28,
                1,
                1,
                0);
        v6 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x3A1u);
          goto LABEL_39;
        }
        if ( *((_BYTE *)v16 + 6834) )
          v30 = a4 + 1;
        else
          v30 = 0;
        BYTE1((*a1)[23].a) = v30;
        if ( !*((_BYTE *)v16 + 6836) )
        {
          v42 = 0LL;
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v42);
          v32 = CDisplayManager::GetCurrentDisplaySet(v31, &v42);
          v6 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x3C0u);
            Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v42);
            goto LABEL_39;
          }
          DisplayColorSpace = (unsigned int)CDisplaySet::GetDisplayColorSpace(v42, a3);
          if ( !IsDXGIColorSpaceHDR(DisplayColorSpace) )
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 248LL))(
              *(_QWORD *)&a1[1][10].r,
              (unsigned int)DisplayId::None);
          Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v42);
        }
      }
      *((_BYTE *)a1 + 44) = 0;
LABEL_39:
      CDrawingContext::EndFrame(v16);
      goto LABEL_40;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x35Fu);
  }
LABEL_40:
  if ( v16 )
    CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v16 + 16));
  return v6;
}

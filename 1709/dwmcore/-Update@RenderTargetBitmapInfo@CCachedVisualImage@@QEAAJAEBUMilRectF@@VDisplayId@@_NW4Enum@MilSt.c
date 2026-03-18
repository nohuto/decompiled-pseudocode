/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031A4C (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180040F90 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800591E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x18007B644 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180087AC0 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089F6C (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@@@Z @ 0x18008AE00 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@W4Enum@MilStretch@.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B0D8 (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18008E878 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800983E4 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BE7F4 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18011A4C4 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     McTemplateU0ppffffdd @ 0x180159B88 (McTemplateU0ppffffdd.c)
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
  char v13; // r12
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  CDrawingContext *v17; // r14
  const struct _D3DCOLORVALUE *v18; // r10
  __int128 *v19; // rax
  CDisplayManager *v20; // rcx
  signed int CurrentDisplaySet; // eax
  __int64 v22; // rcx
  __int64 *v23; // rdi
  __int64 v24; // rbx
  signed int v25; // eax
  signed int Bounds; // eax
  const struct _D3DCOLORVALUE *v27; // rdx
  signed int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  const struct _D3DCOLORVALUE *v31; // rax
  char v32; // al
  bool v33; // al
  float v34; // xmm2_4
  float v35; // xmm0_4
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // eax
  signed int v40; // eax
  signed int v41; // eax
  CDrawingContext *v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  float v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  __int128 v47; // [rsp+88h] [rbp-78h] BYREF
  __int128 v48; // [rsp+98h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  __int128 v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+C8h] [rbp-38h]
  __int64 v52[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-20h]
  __int128 v54; // [rsp+F0h] [rbp-10h]
  __int128 v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+110h] [rbp+10h]
  __m128 v57; // [rsp+120h] [rbp+20h] BYREF
  float v58[6]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v59; // [rsp+1A0h] [rbp+A0h] BYREF

  v59 = a3;
  v6 = 0;
  v43 = 0LL;
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
  v56 = 0;
  v13 = 0;
  v14 = CCachedVisualImage::EnsureVisualTree(v11);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x309u);
    return v6;
  }
  CRenderTargetBitmap::GetBounds(a1[1], &v57);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v34 = *((float *)a1 + 9) - *((float *)a1 + 7);
    v35 = *((float *)a1 + 8) - *((float *)a1 + 6);
    McTemplateU0ppffffdd(
      *(_DWORD *)a1 + 16,
      (int)(float)(v57.m128_f32[2] - v57.m128_f32[0]),
      *a1 != 0LL ? *(_DWORD *)a1 + 16 : 0,
      *(_QWORD *)&(*a1)[12].r,
      *((_DWORD *)a1 + 6),
      *((_DWORD *)a1 + 7),
      SLOBYTE(v35),
      SLOBYTE(v34),
      (int)(float)(v57.m128_f32[2] - v57.m128_f32[0]),
      (int)(float)(v57.m128_f32[3] - v57.m128_f32[1]));
  }
  v15 = CVisualTree::PreCompute(*(CVisualTree **)&(*a1)[14].b);
  v6 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x31Bu);
    return v6;
  }
  v16 = CDrawingContext::Create(*(struct CComposition **)&(*a1)[2].r, &v43);
  v17 = v43;
  v6 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x321u);
  }
  else
  {
    CTileBrushUtils::CalculateViewboxToViewportMapping(
      v57.m128_f32,
      (float *)a1 + 6,
      *((_DWORD *)a1 + 10),
      0,
      0,
      (__int64)v52);
    v18 = *a1;
    if ( BYTE1((*a1)[23].b)
      && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)&v18[14].b + 24LL), (float *)&v44, &v45, (float *)&v43) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v52, COERCE_FLOAT(v44 ^ _xmm), COERCE_FLOAT(LODWORD(v45) ^ _xmm));
    }
    v19 = *(__int128 **)&v18[13].b;
    if ( v19 )
    {
      v36 = v19[1];
      v47 = *v19;
      v37 = v19[2];
      v48 = v36;
      v38 = v19[3];
      v39 = *((_DWORD *)v19 + 16);
      v49 = v37;
      v51 = v39;
      v50 = v38;
      CMILMatrix::Multiply((CMILMatrix *)&v47, (const struct CMILMatrix *)v52);
      v56 = v51;
      *(_OWORD *)v52 = v47;
      v53 = v48;
      v54 = v49;
      v55 = v50;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 208LL))(*(_QWORD *)&a1[1][10].r, a3);
    if ( DisplayId::IsSpecific((DisplayId *)&v59) )
    {
      v43 = 0LL;
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v43);
      CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v20, &v43);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0x351u);
        Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v43);
        goto LABEL_36;
      }
      v44 = 0LL;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v44);
      if ( (int)CDisplaySet::GetDisplay(v43, a3, &v44) >= 0 )
      {
        v22 = *(_QWORD *)(v44 + 48);
        if ( v22 )
        {
          v23 = *(__int64 **)&a1[1][9].b;
          v24 = *v23;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 160LL))(v22);
          (*(void (__fastcall **)(__int64 *))(v24 + 168))(v23);
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v44);
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v43);
    }
    v25 = CDrawingContext::BeginFrame(
            v17,
            *(CSwRenderTargetGetBounds **)&a1[1][9].b,
            &(*a1)[24].r,
            0,
            (__int64)v52,
            0LL,
            0,
            0LL);
    v6 = v25;
    if ( v25 >= 0 )
    {
      Bounds = CVisualTree::GetBounds(*(CVisualTree **)&(*a1)[14].b, (__int64)v58);
      v6 = Bounds;
      if ( Bounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bounds, 0x367u);
      }
      else if ( TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v58) )
      {
        v40 = CDrawingContext::Clear((CD2DContext **)v17, *a1 + 24);
        v6 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0x36Au);
        else
          *((_BYTE *)a1 + 44) = 0;
      }
      else
      {
        ++dword_18026EDCC;
        v27 = *a1;
        if ( (*(_DWORD *)(*(_QWORD *)&(*a1)[12].r + 88LL) & 0x100) != 0
          && (*(float *)v52 < 0.40000001 || *((float *)&v53 + 1) < 0.40000001) )
        {
          v12 = 1;
        }
        v46 = 0LL;
        CDrawingContext::CalculateOcclusion(
          (struct CComposition **)v17,
          *(struct CVisualTree **)&v27[14].b,
          1LL,
          (__int64)&v57,
          0,
          1,
          &v46);
        if ( (float)(*((float *)a1 + 8) - *((float *)a1 + 6)) <= (float)(v57.m128_f32[2] - v57.m128_f32[0])
          && (float)(*((float *)a1 + 9) - *((float *)a1 + 7)) <= (float)(v57.m128_f32[3] - v57.m128_f32[1]) )
        {
          goto LABEL_25;
        }
        *(_QWORD *)&v47 = 0x600000003LL;
        LODWORD(v48) = 1;
        v41 = CDrawingContext::PushRenderOptionsInternal(v17, 0LL, (const struct MilRenderOptions *)&v47, 1);
        v6 = v41;
        if ( v41 >= 0 )
        {
          v13 = 1;
LABEL_25:
          v28 = CDrawingContext::DrawVisualTree(
                  v17,
                  *(_QWORD *)&(*a1)[14].b,
                  &v57,
                  0LL,
                  0x7FFFFFFF,
                  1,
                  v13,
                  1,
                  v12,
                  1,
                  1,
                  0);
          v6 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x3A2u);
          }
          else
          {
            v31 = *a1;
            if ( *((_BYTE *)v17 + 6832) )
            {
              if ( a4 )
                BYTE1(v31[23].a) = 2;
              else
                BYTE1(v31[23].a) = 1;
            }
            else
            {
              BYTE1(v31[23].a) = 0;
            }
            if ( !*((_BYTE *)v17 + 6834) )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&a1[1][10].r + 208LL))(
                *(_QWORD *)&a1[1][10].r,
                (unsigned int)DisplayId::None);
            *((_BYTE *)a1 + 44) = 0;
          }
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v41, 0x394u);
      }
LABEL_31:
      v32 = g_LockAndReadD2DTarget;
      if ( g_LockTilingTarget )
        v32 = 1;
      g_LockAndReadD2DTarget = v32;
      CDrawingContext::EndFrame(v17, v29, v30);
      v33 = g_LockAndReadD2DTarget;
      if ( g_LockTilingTarget )
        v33 = 0;
      g_LockAndReadD2DTarget = v33;
      goto LABEL_36;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0x361u);
  }
LABEL_36:
  if ( v17 )
    CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v17 + 16));
  return v6;
}

/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180007CE0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B5AA0 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     CComposition::ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___ @ 0x18015545C (CComposition--ForEachCursorVisual__lambda_3e91fc0059ef0e11538ef3fb06109632___.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180050E2C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18006C840 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800BE2F8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x1800BE348 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE36C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180162368 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, char a3)
{
  unsigned int v3; // ebx
  CDrawingContext *v4; // rsi
  char v5; // r13
  int VisualTree; // eax
  int v10; // eax
  int v11; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v13; // eax
  bool IsBounding; // al
  int v15; // eax
  const struct CVisual *v17; // rdx
  int v18; // eax
  unsigned int v19; // [rsp+28h] [rbp-59h]
  float v20; // [rsp+68h] [rbp-19h] BYREF
  struct CVisualTree *v21; // [rsp+70h] [rbp-11h] BYREF
  float v22; // [rsp+78h] [rbp-9h] BYREF
  CDrawingContext *v23; // [rsp+80h] [rbp-1h] BYREF
  float v24; // [rsp+88h] [rbp+7h] BYREF
  struct D2D_RECT_F v25; // [rsp+90h] [rbp+Fh] BYREF

  v3 = 0;
  v4 = 0LL;
  v21 = 0LL;
  v5 = 0;
  v23 = 0LL;
  if ( !a2 )
    return v3;
  v20 = 0.0;
  v22 = 0.0;
  VisualTree = CVisual::GetVisualTree(a2, &v21);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0x11A9u);
  }
  else
  {
    if ( !a3 || !CVisual::GetEffectiveOffset(a2, &v20, &v22, &v24) )
    {
LABEL_4:
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v3 = v10;
      if ( v10 < 0 )
      {
        v19 = 4538;
      }
      else
      {
        v10 = CVisualTree::PreCompute(v21, 0LL);
        v3 = v10;
        if ( v10 >= 0 )
        {
          CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, &v25);
          if ( !IsEmpty(&v25) )
          {
            v11 = CDrawingContext::Create(this[4], &v23);
            v3 = v11;
            if ( v11 >= 0 )
            {
              TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
              v4 = v23;
              v10 = CDrawingContext::BeginFrame(v23, this[45], (__int64)TopByReference, 0LL, 0, 0LL);
              v3 = v10;
              if ( v10 >= 0 )
              {
                *((_BYTE *)v4 + 272) = *((_BYTE *)this + 272);
                *((_DWORD *)v4 + 63) = *((_DWORD *)this + 63);
                *((_DWORD *)v4 + 64) = *((_DWORD *)this + 64);
                *((_DWORD *)v4 + 70) = *((_DWORD *)this + 70);
                *((_DWORD *)v4 + 65) = *((_DWORD *)this + 65);
                *((_DWORD *)v4 + 66) = *((_DWORD *)this + 66);
                *((_DWORD *)v4 + 67) = *((_DWORD *)this + 67);
                v20 = FLOAT_1_0;
                CWatermarkStack<float,64,2,10>::Top(this + 388, &v20);
                v13 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v4 + 3104, &v20);
                v3 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x11E5u);
                }
                else
                {
                  if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
                    CDrawingContext::CalculateOcclusion(v4, v21, 1LL, (__int64)&v25, 0, 1, &v23);
                  IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
                  v15 = CDrawingContext::DrawVisualTree(
                          v4,
                          (__int64)v21,
                          (__m128 *)&v25,
                          0LL,
                          0x7FFFFFFF,
                          0,
                          1,
                          !IsBounding,
                          0,
                          0,
                          1,
                          0);
                  v3 = v15;
                  if ( v15 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x11FEu);
                  }
                  else
                  {
                    *((_BYTE *)this + 6834) |= *((_BYTE *)v4 + 6834);
                    *((_BYTE *)this + 6835) |= *((_BYTE *)v4 + 6835);
                    *((_BYTE *)this + 6836) |= *((_BYTE *)v4 + 6836);
                    *((_BYTE *)this + 6837) |= *((_BYTE *)v4 + 6837);
                  }
                  CWatermarkStack<bool,64,2,10>::Pop((char *)v4 + 3104);
                }
                CDrawingContext::EndFrame(v4);
                goto LABEL_16;
              }
              v19 = 4558;
              goto LABEL_33;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x11C5u);
            v4 = v23;
          }
LABEL_16:
          if ( v5 )
            CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
          if ( v4 )
            CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v4 + 16));
          goto LABEL_20;
        }
        v19 = 4540;
      }
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v19);
      goto LABEL_16;
    }
    v18 = CDrawingContext::PushOffsetInternal(
            (CDrawingContext *)this,
            v17,
            COERCE_FLOAT(LODWORD(v20) ^ _xmm),
            COERCE_FLOAT(LODWORD(v22) ^ _xmm),
            0.0);
    v3 = v18;
    if ( v18 >= 0 )
    {
      v5 = 1;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x11B5u);
  }
LABEL_20:
  if ( v21 )
    CMILRefCountBase::Release(v21);
  return v3;
}

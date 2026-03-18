/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180036CD0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800743F0 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003D3F0 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180051E5C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800B53C8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18011A4C4 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18013E134 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v3; // ebx
  struct CDrawingContext *v4; // rsi
  char v5; // r13
  int VisualTree; // eax
  int v10; // eax
  int v11; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v13; // eax
  int v14; // eax
  char IsBounding; // al
  int v16; // eax
  const struct CVisual *v18; // rdx
  int v19; // eax
  unsigned int v20; // [rsp+28h] [rbp-59h]
  float v21; // [rsp+68h] [rbp-19h] BYREF
  struct CVisualTree *v22; // [rsp+70h] [rbp-11h] BYREF
  float v23; // [rsp+78h] [rbp-9h] BYREF
  struct CDrawingContext *v24; // [rsp+80h] [rbp-1h] BYREF
  float v25; // [rsp+88h] [rbp+7h] BYREF
  float v26[4]; // [rsp+90h] [rbp+Fh] BYREF

  v3 = 0;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0;
  v24 = 0LL;
  if ( !a2 )
    return v3;
  v21 = 0.0;
  v23 = 0.0;
  VisualTree = CVisual::GetVisualTree(a2, &v22, a3);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, VisualTree, 0x1129u);
  }
  else
  {
    if ( !a3 || !CVisual::GetEffectiveOffset(a2, &v21, &v23, &v25) )
    {
LABEL_4:
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v3 = v10;
      if ( v10 < 0 )
      {
        v20 = 4410;
      }
      else
      {
        v10 = CVisualTree::PreCompute(v22);
        v3 = v10;
        if ( v10 >= 0 )
        {
          CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, v26);
          if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v26) )
          {
            v11 = CDrawingContext::Create(this[4], &v24);
            v3 = v11;
            if ( v11 >= 0 )
            {
              TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
              v4 = v24;
              v10 = CDrawingContext::BeginFrame(v24, this[45], (__int64)TopByReference, 0LL, 0, 0LL);
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
                v13 = *((_DWORD *)this + 776);
                v21 = FLOAT_1_0;
                if ( v13 )
                  v21 = *((float *)this[390] + (unsigned int)(v13 - 1));
                v14 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)v4 + 3104, &v21);
                v3 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1165u);
                }
                else
                {
                  if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
                  {
                    v24 = 0LL;
                    CDrawingContext::CalculateOcclusion(v4, v22, 0, 1, (__int64)&v24);
                  }
                  IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
                  v16 = CDrawingContext::DrawVisualTree(v4, 0x7FFFFFFF, 0, 1, IsBounding ^ 1u, 0, 0, 1, 0);
                  v3 = v16;
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x117Eu);
                  }
                  else
                  {
                    *((_BYTE *)this + 6832) |= *((_BYTE *)v4 + 6832);
                    *((_BYTE *)this + 6833) |= *((_BYTE *)v4 + 6833);
                    *((_BYTE *)this + 6834) |= *((_BYTE *)v4 + 6834);
                    *((_BYTE *)this + 6835) |= *((_BYTE *)v4 + 6835);
                  }
                  CWatermarkStack<bool,64,2,10>::Pop((char *)v4 + 3104);
                }
                CDrawingContext::EndFrame(v4);
                goto LABEL_18;
              }
              v20 = 4430;
              goto LABEL_35;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1145u);
            v4 = v24;
          }
LABEL_18:
          if ( v5 )
            CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
          if ( v4 )
            CMILCOMBase::InternalRelease((struct CDrawingContext *)((char *)v4 + 16));
          goto LABEL_22;
        }
        v20 = 4412;
      }
LABEL_35:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v20);
      goto LABEL_18;
    }
    v19 = CDrawingContext::PushOffsetInternal(
            (CDrawingContext *)this,
            v18,
            COERCE_FLOAT(LODWORD(v21) ^ _xmm),
            COERCE_FLOAT(LODWORD(v23) ^ _xmm),
            0.0);
    v3 = v19;
    if ( v19 >= 0 )
    {
      v5 = 1;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1135u);
  }
LABEL_22:
  if ( v22 )
    CMILRefCountBase::Release(v22);
  return v3;
}

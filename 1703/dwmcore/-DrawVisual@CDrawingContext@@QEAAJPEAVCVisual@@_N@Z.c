/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x18000CD50 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18000DEDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008631C (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18012B740 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18014D6A4 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v3; // ebx
  CDrawingContext *v4; // rsi
  char v5; // r13
  int VisualTree; // eax
  int v10; // eax
  int v11; // eax
  const struct CMILMatrix *TopByReference; // rax
  bool IsBounding; // al
  int v14; // eax
  const struct CVisual *v16; // rdx
  int v17; // eax
  unsigned int v18; // [rsp+28h] [rbp-59h]
  struct CVisualTree *v19; // [rsp+68h] [rbp-19h] BYREF
  float v20; // [rsp+70h] [rbp-11h] BYREF
  float v21; // [rsp+74h] [rbp-Dh] BYREF
  CDrawingContext *v22; // [rsp+78h] [rbp-9h] BYREF
  float v23; // [rsp+80h] [rbp-1h] BYREF
  int v24[4]; // [rsp+88h] [rbp+7h] BYREF

  v3 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v22 = 0LL;
  if ( !a2 )
    return v3;
  v21 = 0.0;
  v20 = 0.0;
  VisualTree = CVisual::GetVisualTree(a2, &v19, a3);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x137Au);
  }
  else
  {
    if ( !a3 || !CVisual::GetEffectiveOffset(a2, &v21, &v20, &v23) )
    {
LABEL_4:
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
      v3 = v10;
      if ( v10 < 0 )
      {
        v18 = 5003;
      }
      else
      {
        v10 = CVisualTree::PreCompute(v19);
        v3 = v10;
        if ( v10 >= 0 )
        {
          CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, v24);
          if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v24) )
          {
            v11 = CDrawingContext::Create(this[4], &v22);
            v3 = v11;
            if ( v11 >= 0 )
            {
              TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 59));
              v4 = v22;
              v10 = CDrawingContext::BeginFrame(v22, this[46], (__int64)TopByReference, 0LL, 0, 0LL);
              v3 = v10;
              if ( v10 >= 0 )
              {
                *((_BYTE *)v4 + 280) = *((_BYTE *)this + 280);
                *((_DWORD *)v4 + 65) = *((_DWORD *)this + 65);
                *((_DWORD *)v4 + 66) = *((_DWORD *)this + 66);
                *((_DWORD *)v4 + 72) = *((_DWORD *)this + 72);
                *((_DWORD *)v4 + 67) = *((_DWORD *)this + 67);
                *((_DWORD *)v4 + 68) = *((_DWORD *)this + 68);
                *((_DWORD *)v4 + 69) = *((_DWORD *)this + 69);
                if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
                {
                  v22 = 0LL;
                  CDrawingContext::CalculateOcclusion(v4, v19, 1, (int)v24, 1, (__int64)&v22);
                }
                IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
                v14 = CDrawingContext::DrawVisualTree(v4, 0x7FFFFFFF, 0, 1, !IsBounding, 0, 0, 1);
                v3 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x13CBu);
                }
                else
                {
                  *((_BYTE *)this + 6776) |= *((_BYTE *)v4 + 6776);
                  *((_BYTE *)this + 6777) |= *((_BYTE *)v4 + 6777);
                  *((_BYTE *)this + 6778) |= *((_BYTE *)v4 + 6778);
                }
                CDrawingContext::EndFrame(v4);
                goto LABEL_14;
              }
              v18 = 5023;
              goto LABEL_30;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1396u);
            v4 = v22;
          }
LABEL_14:
          if ( v5 )
            CDrawingContext::PopTransformInternal((CDrawingContext *)this, 1);
          if ( v4 )
            CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v4 + 16));
          goto LABEL_18;
        }
        v18 = 5005;
      }
LABEL_30:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v18);
      goto LABEL_14;
    }
    v17 = CDrawingContext::PushOffsetInternal(
            (CDrawingContext *)this,
            v16,
            COERCE_FLOAT(LODWORD(v21) ^ _xmm),
            COERCE_FLOAT(LODWORD(v20) ^ _xmm),
            0.0);
    v3 = v17;
    if ( v17 >= 0 )
    {
      v5 = 1;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1386u);
  }
LABEL_18:
  if ( v19 )
    CMILRefCountBase::Release(v19);
  return v3;
}

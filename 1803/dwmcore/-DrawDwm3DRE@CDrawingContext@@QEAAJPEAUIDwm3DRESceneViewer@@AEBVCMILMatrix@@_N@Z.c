/*
 * XREFs of ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0
 * Callers:
 *     ?Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C1F40 (-Draw@CSpatialVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18006C62C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006C978 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180095BF0 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800A3E2C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x1800BABA8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18013D230 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180156CA8 (-reset@-$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CDwm3DRECallbackRenderer@@SAJPEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_MATRIX_4X4_F@@_NPEAPEAV1@@Z @ 0x18017B9AC (-Create@CDwm3DRECallbackRenderer@@SAJPEAUIDwm3DRESceneViewer@@PEAUIDwm3DRERenderTarget@@AEBUD2D_.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801DE2C4 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawDwm3DRE(
        CDrawingContext *this,
        struct IDwm3DRESceneViewer *a2,
        const struct CMILMatrix *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  struct ID2D1PrivateCompositorRenderer *v11; // rdi
  int v12; // eax
  float v13; // xmm3_4
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  struct _D3DMATRIX *D3DMatrix; // rax
  bool v20; // r9
  int v21; // eax
  int v22; // eax
  CD2DContext *v23; // rsi
  struct ID2D1PrivateCompositorRenderer *v24; // rbx
  int v25; // eax
  CMILRefCountBase *v26; // rcx
  float v27; // xmm9_4
  float v28; // xmm7_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  __m128 v31; // xmm2
  __m128 v32; // xmm8
  float v33; // xmm6_4
  __m128 v34; // xmm0
  int v35; // r9d
  __m128 v36; // xmm1
  int v37; // r8d
  int RenderTargetBitmap; // eax
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  struct _D3DMATRIX *v42; // rax
  __int64 v43; // r9
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v48; // [rsp+28h] [rbp-E0h]
  char v49; // [rsp+58h] [rbp-B0h]
  struct IRenderTarget *v50; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int32 v52; // [rsp+70h] [rbp-98h]
  struct _D3DMATRIX v53; // [rsp+78h] [rbp-90h] BYREF
  int v54; // [rsp+B8h] [rbp-50h]
  struct ID2D1PrivateCompositorRenderer *v55; // [rsp+C8h] [rbp-40h] BYREF
  int v56; // [rsp+D0h] [rbp-38h]
  __int128 v57; // [rsp+D8h] [rbp-30h] BYREF
  float v58; // [rsp+E8h] [rbp-20h] BYREF
  float v59; // [rsp+ECh] [rbp-1Ch]
  float v60; // [rsp+F0h] [rbp-18h]
  float v61; // [rsp+F4h] [rbp-14h]
  __int128 v62; // [rsp+F8h] [rbp-10h] BYREF
  int v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+10Ch] [rbp+4h]
  __m128 v65; // [rsp+110h] [rbp+8h] BYREF
  struct _D3DMATRIX v66; // [rsp+128h] [rbp+20h] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  v7 = *v6;
  v8 = v6[1];
  v54 = *((_DWORD *)v6 + 16);
  *(_OWORD *)&v53._11 = v7;
  v9 = v6[2];
  *(_OWORD *)&v53._21 = v8;
  v10 = v6[3];
  *(_OWORD *)&v53._31 = v9;
  *(_OWORD *)&v53._41 = v10;
  CMILMatrix::Multiply((CMILMatrix *)&v53, TopByReference);
  v55 = 0LL;
  wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::reset((__int64 *)&v55);
  CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v55);
  v11 = v55;
  if ( !CCommonRegistryData::m_fDwm3DREDisableDrawToBackbuffer && *((_QWORD *)this + 49) == *((_QWORD *)v55 + 91) )
  {
    v12 = *((_DWORD *)this + 776);
    if ( v12 )
      v13 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v12 - 1));
    else
      v13 = FLOAT_1_0;
    v49 = 0;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm) >= 0.0000011920929 )
    {
      CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v62);
      v14 = CDrawingContext::PushD2DLayer(this, 0LL, &v62, 0LL, 0LL, v13, 0, 0);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x939u);
        goto LABEL_17;
      }
      v49 = 1;
    }
    v16 = *((_QWORD *)this + 4);
    v17 = *((_QWORD *)this + 45);
    v50 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IRenderTarget **))(*(_QWORD *)v17 + 120LL))(
            v17,
            *(_QWORD *)(v16 + 144),
            &v50);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x93Eu);
LABEL_17:
      if ( v49 )
        CDrawingContext::PopLayer(this);
      goto LABEL_51;
    }
    v55 = 0LL;
    D3DMatrix = CMILMatrix::GetD3DMatrix(&v53, &v66);
    v21 = CDwm3DRECallbackRenderer::Create(a2, v50, (const struct D2D_MATRIX_4X4_F *)D3DMatrix, v20, &v55);
    v15 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x946u);
    }
    else
    {
      v22 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v15 = v22;
      if ( v22 >= 0 )
      {
        v23 = (CD2DContext *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
        CD2DContext::FlushDrawList(v23);
        v24 = v55;
        v25 = CD2DContext::DrawCustomCallbackRendererInternal(v23, v55);
        v15 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x949u);
        if ( !v24 )
          goto LABEL_17;
        v26 = (struct ID2D1PrivateCompositorRenderer *)((char *)v24 + 8);
LABEL_23:
        CMILRefCountBase::Release(v26);
        goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x948u);
    }
    if ( !v55 )
      goto LABEL_17;
    v26 = (struct ID2D1PrivateCompositorRenderer *)((char *)v55 + 8);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(struct IDwm3DRESceneViewer *, __int128 *, struct ID2D1PrivateCompositorRenderer **))(*(_QWORD *)a2 + 48LL))(
    a2,
    &v57,
    &v55);
  *(_QWORD *)&v62 = v57;
  v63 = DWORD2(v57);
  *((_QWORD *)&v62 + 1) = v55;
  v64 = v56;
  CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)&v53, (__int64)&v62, &v65);
  CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v58);
  v27 = v58;
  if ( v65.m128_f32[0] > v58 )
  {
    v58 = v65.m128_f32[0];
    v27 = v65.m128_f32[0];
  }
  v28 = v59;
  v29 = v59;
  if ( v65.m128_f32[1] > v59 )
  {
    v59 = v65.m128_f32[1];
    v28 = v65.m128_f32[1];
    v29 = v65.m128_f32[1];
  }
  v30 = v60;
  v31 = (__m128)LODWORD(v60);
  if ( v60 > v65.m128_f32[2] )
  {
    v60 = v65.m128_f32[2];
    v30 = v65.m128_f32[2];
    v31 = (__m128)v65.m128_u32[2];
  }
  v32 = (__m128)LODWORD(v61);
  if ( v61 > v65.m128_f32[3] )
  {
    v61 = v65.m128_f32[3];
    v32 = (__m128)v65.m128_u32[3];
  }
  if ( v31.m128_f32[0] <= v27 || v32.m128_f32[0] <= v29 )
  {
    v61 = 0.0;
    v30 = 0.0;
    v28 = 0.0;
    v60 = 0.0;
    v27 = 0.0;
    v59 = 0.0;
    v58 = 0.0;
    v32 = 0LL;
  }
  v65.m128_u64[0] = 0LL;
  v55 = 0LL;
  *(_QWORD *)&v57 = 0LL;
  v33 = (float)(v30 - v27) + 0.0;
  DWORD2(v57) = 0;
  v32.m128_f32[0] = (float)(v32.m128_f32[0] - v28) + 0.0;
  v65.m128_u64[1] = __PAIR64__(v32.m128_u32[0], LODWORD(v33));
  LODWORD(v57) = CDisplay::GetDefaultSRGBFormat();
  *(_QWORD *)((char *)&v57 + 4) = 1LL;
  v50 = 0LL;
  v34 = v32;
  DWORD2(v62) = 25;
  *(_QWORD *)&v62 = "DWM CSpatialVisualContent";
  v35 = (int)(float)(v32.m128_f32[0] - 0.0);
  v36.m128_f32[0] = v32.m128_f32[0] - 0.0;
  v34.m128_f32[0] = (float)v35;
  v52 = _mm_cmplt_ss(v34, v36).m128_u32[0];
  v36.m128_f32[0] = v33 - 0.0;
  v37 = (int)(float)(v33 - 0.0);
  v31.m128_f32[0] = (float)v37;
  LODWORD(v51) = _mm_cmplt_ss(v31, v36).m128_u32[0];
  RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                         (struct ID2D1PrivateCompositorRenderer *)((char *)v11 + 536),
                         (__int64)&v62,
                         v37 - (int)v51,
                         v35 - v52,
                         DisplayId::None,
                         (struct PixelFormatInfo *)&v57,
                         0,
                         0,
                         1,
                         (void **)&v50);
  v15 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x974u);
  }
  else
  {
    v55 = 0LL;
    v39 = CRenderTargetImageSource::Create(v50, 0, &v55);
    v15 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x976u);
    }
    else
    {
      CMILMatrix::Translate((CMILMatrix *)&v53, COERCE_FLOAT(LODWORD(v27) ^ _xmm), COERCE_FLOAT(LODWORD(v28) ^ _xmm));
      v40 = *((_QWORD *)this + 4);
      v51 = 0LL;
      v41 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _QWORD, __int64 *))(*(_QWORD *)v50 + 120LL))(
              v50,
              *(_QWORD *)(v40 + 144),
              &v51);
      v15 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x97Fu);
      }
      else
      {
        *(_QWORD *)&v57 = 0LL;
        *((_QWORD *)&v57 + 1) = __PAIR64__(v32.m128_u32[0], LODWORD(v33));
        v62 = v57;
        v42 = CMILMatrix::GetD3DMatrix(&v53, &v66);
        LOBYTE(v48) = 1;
        (*(void (__fastcall **)(struct IDwm3DRESceneViewer *, __int64, struct _D3DMATRIX *, __int128 *, int))(v43 + 56))(
          a2,
          v51,
          v42,
          &v62,
          v48);
        v44 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
        v15 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x98Au);
        }
        else
        {
          v45 = CDrawingContext::PushClippingScope(this, 0LL, 0, 0LL, 0);
          v15 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x993u);
          }
          else
          {
            v46 = CDrawingContext::DrawBitmap(this, v55, (__int64)&v65, (const struct MilRectF *)&v58, 0, 0);
            v15 = v46;
            if ( v46 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x99Bu);
            CDrawingContext::PopClippingScope(this, 0);
          }
          CDrawingContext::PopTransformInternal(this, 1);
        }
      }
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v55);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v50);
LABEL_51:
  if ( v11 )
    CMILPoolResource::Release((struct ID2D1PrivateCompositorRenderer *)((char *)v11 + 472));
  return v15;
}

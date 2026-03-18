/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x18001FF60 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180043794 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800483C8 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800700F4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18013F1EC (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        CDrawingContext *this,
        const struct D2D_RECT_F *a2,
        char a3,
        struct EffectInput *a4)
{
  struct CRenderTargetImageSource *v5; // r15
  const struct CMILMatrix *TopByReference; // rax
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float left; // xmm1_4
  float top; // xmm2_4
  const struct CMILMatrix *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  struct IRenderTarget *v19; // rsi
  CD3DDeviceLevel1 *v20; // rax
  char CanUseSwapChainBuffersAsShaderInput; // bl
  __int64 v22; // rax
  __int128 v23; // xmm0
  bool v24; // zf
  signed int v26; // r12d
  unsigned int v27; // ebx
  struct _LUID v28; // rdi
  __int64 v29; // rax
  char v30; // al
  int v31; // edi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  FLOAT v35; // xmm1_4
  int v36; // eax
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  struct _LUID v38; // [rsp+48h] [rbp-C0h]
  struct IImageSource *v39; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_SIZE_F v40; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h] BYREF
  struct IRenderTarget *v42; // [rsp+90h] [rbp-78h] BYREF
  __int64 v43; // [rsp+98h] [rbp-70h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-68h] BYREF
  int v45; // [rsp+A8h] [rbp-60h]
  __int64 v46; // [rsp+ACh] [rbp-5Ch]
  int v47; // [rsp+B4h] [rbp-54h]
  __int64 v48; // [rsp+B8h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-48h]
  __int128 v50; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-30h]
  __int128 v52; // [rsp+E8h] [rbp-20h]
  __int128 v53; // [rsp+F8h] [rbp-10h]
  __int16 v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+118h] [rbp+10h] BYREF
  int v56; // [rsp+120h] [rbp+18h] BYREF
  int v57; // [rsp+124h] [rbp+1Ch]
  int v58; // [rsp+128h] [rbp+20h]
  int v59; // [rsp+12Ch] [rbp+24h]
  __int128 v60; // [rsp+130h] [rbp+28h] BYREF
  const char *v61; // [rsp+140h] [rbp+38h] BYREF
  int v62; // [rsp+148h] [rbp+40h]
  float v63; // [rsp+14Ch] [rbp+44h]
  float v64; // [rsp+150h] [rbp+48h]
  float v65; // [rsp+154h] [rbp+4Ch]
  struct CRenderTargetImageSource *v66[2]; // [rsp+158h] [rbp+50h] BYREF
  int v67; // [rsp+168h] [rbp+60h]
  int v68; // [rsp+16Ch] [rbp+64h]

  v43 = 0LL;
  v42 = 0LL;
  v5 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  EffectInput::Reset(a4);
  *((_BYTE *)a4 + 44) = 1;
  v60 = (__int128)*a2;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v60, &v56);
  CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
  v10 = *(float *)&v60;
  v11 = *((float *)&v60 + 1);
  v12 = *((float *)&v60 + 2);
  v13 = *((float *)&v60 + 3);
  if ( *(float *)&v56 > *(float *)&v60 )
    v10 = *(float *)&v56;
  if ( *(float *)&v57 > *((float *)&v60 + 1) )
    v11 = *(float *)&v57;
  if ( *((float *)&v60 + 2) > *(float *)&v58 )
    v12 = *(float *)&v58;
  if ( *((float *)&v60 + 3) > *(float *)&v59 )
    v13 = *(float *)&v59;
  if ( v12 > v10 && v13 > v11 )
  {
    left = a2->left;
    v51 = _xmm;
    v54 = 32085;
    top = a2->top;
    v50 = _xmm;
    v52 = _xmm;
    v53 = _xmm;
    CMILMatrix::Translate((CMILMatrix *)&v50, left, top);
    v16 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Multiply((CMILMatrix *)&v50, v16);
    v46 = v51;
    v44 = v50;
    v47 = HIDWORD(v51);
    v48 = v53;
    v45 = HIDWORD(v50);
    v49 = HIDWORD(v53);
    *(_WORD *)((char *)a4 + 101) = 257;
    v56 = (int)floorf_0(v10);
    v57 = (int)floorf_0(v11);
    v58 = (int)ceilf_0(v12);
    v59 = (int)ceilf_0(v13);
    v17 = CDrawingContext::FlushD2D(this);
    v18 = v17;
    if ( v17 < 0 )
    {
      v37 = 2811;
      goto LABEL_34;
    }
    v19 = (struct IRenderTarget *)*((_QWORD *)this + 45);
    if ( a3
      || (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))v19)(
           *((_QWORD *)this + 45),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v55) >= 0
      && (v20 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 152LL))(*((_QWORD *)this + 48)),
          CanUseSwapChainBuffersAsShaderInput = CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(v20),
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55),
          !CanUseSwapChainBuffersAsShaderInput) )
    {
      (*(void (__fastcall **)(struct IRenderTarget *, __int128 *))(*(_QWORD *)v19 + 24LL))(v19, &v60);
      v26 = v58 - v56;
      v27 = *((_DWORD *)this + 100);
      v28 = (struct _LUID)*((_QWORD *)this + 49);
      LODWORD(v39) = v59 - v57;
      v61 = "Backdrop effect input";
      v29 = *(_QWORD *)v19;
      v66[0] = (struct CRenderTargetImageSource *)1;
      v62 = 21;
      v30 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v29 + 152))(v19);
      v38 = v28;
      v31 = (int)v39;
      v17 = CD3DDeviceManager::CreateRenderTargetBitmap(
              (__int64)&qword_18026EEE8,
              (__int64)&v61,
              v26,
              (unsigned int)v39,
              (__int64)v66[0],
              0,
              (__int64)&v60,
              1,
              v38,
              v27,
              v30,
              0,
              0,
              &v42);
      v18 = v17;
      if ( v17 < 0 )
      {
        v37 = 2850;
        goto LABEL_34;
      }
      v17 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v19 + 96LL))(v19, &v43);
      v18 = v17;
      if ( v17 < 0 )
      {
        v37 = 2853;
        goto LABEL_34;
      }
      v32 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v42 + 96LL))(v42, &v41);
      v18 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xB26u);
        goto LABEL_21;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v41 + 64LL))(v41, 0LL, v43, &v56);
      v18 = v17;
      if ( v17 < 0 )
      {
        v37 = 2858;
        goto LABEL_34;
      }
      v19 = v42;
      (*(void (__fastcall **)(__int64, struct D2D_SIZE_F *))(*(_QWORD *)v41 + 32LL))(v41, &v40);
      HIDWORD(v61) = 0;
      v62 = 0;
      *(float *)&v61 = 1.0 / v40.width;
      v63 = 1.0 / v40.height;
      v64 = 0.0 - (float)((float)(1.0 / v40.width) * 0.0);
      v65 = 0.0 - (float)((float)(1.0 / v40.height) * 0.0);
      v67 = COERCE_UNSIGNED_INT((float)v56) ^ _xmm;
      v68 = COERCE_UNSIGNED_INT((float)v57) ^ _xmm;
      *(_OWORD *)v66 = _xmm;
      v33 = Matrix3x3::operator*(&v44, &v50, v66);
      v34 = Matrix3x3::operator*(v33, &v44, &v61);
      v66[0] = 0LL;
      *((_OWORD *)a4 + 3) = *(_OWORD *)v34;
      *((_OWORD *)a4 + 4) = *(_OWORD *)(v34 + 16);
      *((_DWORD *)a4 + 20) = *(_DWORD *)(v34 + 32);
      *((float *)&v66[1] + 1) = (float)v31;
      *(float *)&v66[1] = (float)v26;
      v23 = *(_OWORD *)v66;
    }
    else
    {
      (*(void (__fastcall **)(struct IRenderTarget *, __int128 *))(*(_QWORD *)v19 + 56LL))(v19, &v60);
      HIDWORD(v61) = 0;
      v62 = 0;
      *(float *)&v61 = 1.0 / (float)SDWORD2(v60);
      v63 = 1.0 / (float)SHIDWORD(v60);
      v64 = 0.0 - (float)(*(float *)&v61 * 0.0);
      v65 = 0.0 - (float)(v63 * 0.0);
      v22 = Matrix3x3::operator*(&v44, v66, &v61);
      *((_OWORD *)a4 + 3) = *(_OWORD *)v22;
      *((_OWORD *)a4 + 4) = *(_OWORD *)(v22 + 16);
      *((_DWORD *)a4 + 20) = *(_DWORD *)(v22 + 32);
      *(float *)&v60 = (float)v56;
      *((float *)&v60 + 1) = (float)v57;
      *((float *)&v60 + 2) = (float)v58;
      *((float *)&v60 + 3) = (float)v59;
      v23 = v60;
    }
    v24 = !g_LockAndReadBackdropTexture;
    *(_OWORD *)((char *)a4 + 84) = v23;
    if ( !v24 )
      (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v19 + 184LL))(
        v19,
        *((_QWORD *)this + 48),
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v17 = CRenderTargetImageSource::Create(v19, 1, v66);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v5 = v66[0];
      goto LABEL_20;
    }
    v37 = 2916;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v37);
    goto LABEL_21;
  }
  v35 = a2->bottom - a2->top;
  v40.width = a2->right - a2->left;
  v40.height = v35;
  v36 = CDrawingContext::SetEffectInputToTransparentBlack(this, &v40, a4, &v39);
  v18 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xB6Fu);
    v5 = v39;
    goto LABEL_21;
  }
  v5 = v39;
LABEL_20:
  v17 = CDrawListBitmap::FromImageSource(a4, v5, this, 0, 0);
  v18 = v17;
  if ( v17 < 0 )
  {
    v37 = 2931;
    goto LABEL_34;
  }
LABEL_21:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v43);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v41);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v42);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  return v18;
}

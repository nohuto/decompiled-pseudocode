/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180178460 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18000F938 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BF48 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x180079884 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x18014E1C8 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        CDrawingContext *this,
        const struct D2D_RECT_F *a2,
        char a3,
        struct EffectInput *a4)
{
  struct IImageSource *v4; // r14
  const struct CMILMatrix *TopByReference; // rax
  __int64 v10; // rdx
  float v11; // xmm9_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float left; // xmm1_4
  float top; // xmm2_4
  const struct CMILMatrix *v17; // rax
  int RenderTargetBitmap; // eax
  unsigned int v19; // ebx
  struct IRenderTarget *v20; // r15
  CD3DDeviceLevel1 *v21; // rax
  bool CanUseSwapChainBuffersAsShaderInput; // bl
  __int64 v23; // rax
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rsi
  struct _LUID v28; // rdi
  __int64 v29; // rax
  char v30; // al
  int v31; // edi
  int v32; // esi
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  bool v36; // zf
  struct IImageSource *v37; // rax
  FLOAT v38; // xmm1_4
  int v39; // eax
  unsigned int v41; // [rsp+28h] [rbp-E0h]
  struct _GUID *v42; // [rsp+48h] [rbp-C0h]
  struct _LUID v43; // [rsp+50h] [rbp-B8h]
  struct IImageSource *v44; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-78h] BYREF
  __int64 v46; // [rsp+98h] [rbp-70h] BYREF
  int v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-58h] BYREF
  int v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+BCh] [rbp-4Ch]
  int v52; // [rsp+C4h] [rbp-44h]
  __int64 v53; // [rsp+C8h] [rbp-40h]
  int v54; // [rsp+D0h] [rbp-38h]
  __int128 v55; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v56; // [rsp+E8h] [rbp-20h]
  __int128 v57; // [rsp+F8h] [rbp-10h]
  __int128 v58; // [rsp+108h] [rbp+0h]
  __int16 v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+128h] [rbp+20h] BYREF
  int v61; // [rsp+130h] [rbp+28h] BYREF
  int v62; // [rsp+134h] [rbp+2Ch]
  int v63; // [rsp+138h] [rbp+30h]
  int v64; // [rsp+13Ch] [rbp+34h]
  __int128 v65; // [rsp+140h] [rbp+38h] BYREF
  int v66[2]; // [rsp+150h] [rbp+48h] BYREF
  int v67; // [rsp+158h] [rbp+50h]
  float v68; // [rsp+15Ch] [rbp+54h]
  float v69; // [rsp+160h] [rbp+58h]
  float v70; // [rsp+164h] [rbp+5Ch]
  struct D2D_SIZE_F v71[2]; // [rsp+168h] [rbp+60h] BYREF
  int v72; // [rsp+178h] [rbp+70h]
  int v73; // [rsp+17Ch] [rbp+74h]
  __int64 v74; // [rsp+190h] [rbp+88h] BYREF
  int v75; // [rsp+198h] [rbp+90h]

  v4 = 0LL;
  v48 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  memset_0(a4, 0, 0x58uLL);
  *((_BYTE *)a4 + 28) = 1;
  v65 = (__int128)*a2;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v65, &v61);
  LOBYTE(v10) = 1;
  CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v10, &v65);
  v11 = *(float *)&v65;
  v12 = *((float *)&v65 + 1);
  v13 = *((float *)&v65 + 2);
  v14 = *((float *)&v65 + 3);
  if ( *(float *)&v61 > *(float *)&v65 )
    v11 = *(float *)&v61;
  if ( *(float *)&v62 > *((float *)&v65 + 1) )
    v12 = *(float *)&v62;
  if ( *((float *)&v65 + 2) > *(float *)&v63 )
    v13 = *(float *)&v63;
  if ( *((float *)&v65 + 3) > *(float *)&v64 )
    v14 = *(float *)&v64;
  if ( v13 <= v11 || v14 <= v12 )
  {
    v38 = a2->bottom - a2->top;
    v71[0].width = a2->right - a2->left;
    v71[0].height = v38;
    v39 = CDrawingContext::SetEffectInputToTransparentBlack(this, v71, a4, &v44);
    v19 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xCC5u);
      v4 = v44;
      goto LABEL_39;
    }
    v37 = v44;
    goto LABEL_37;
  }
  left = a2->left;
  v56 = _xmm;
  v59 = 32085;
  top = a2->top;
  v55 = _xmm;
  v57 = _xmm;
  v58 = _xmm;
  CMILMatrix::Translate((CMILMatrix *)&v55, left, top);
  v17 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
  CMILMatrix::Multiply((CMILMatrix *)&v55, v17);
  v51 = v56;
  v49 = v55;
  v52 = HIDWORD(v56);
  v53 = v58;
  v50 = HIDWORD(v55);
  v54 = HIDWORD(v58);
  *(_WORD *)((char *)a4 + 85) = 257;
  v61 = (int)floorf_0(v11);
  v62 = (int)floorf_0(v12);
  v63 = (int)ceilf_0(v13);
  v64 = (int)ceilf_0(v14);
  RenderTargetBitmap = CDrawingContext::FlushD2D(this);
  v19 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v41 = 3149;
    goto LABEL_33;
  }
  v20 = (struct IRenderTarget *)*((_QWORD *)this + 46);
  if ( !a3 )
  {
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))v20)(
           *((_QWORD *)this + 46),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v60) < 0
      || (v21 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 176LL))(*((_QWORD *)this + 49)),
          CanUseSwapChainBuffersAsShaderInput = CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(v21),
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60),
          CanUseSwapChainBuffersAsShaderInput) )
    {
      (*(void (__fastcall **)(struct IRenderTarget *, __int128 *))(*(_QWORD *)v20 + 72LL))(v20, &v65);
      v66[1] = 0;
      v67 = 0;
      *(float *)v66 = 1.0 / (float)SDWORD2(v65);
      v68 = 1.0 / (float)SHIDWORD(v65);
      v69 = 0.0 - (float)(*(float *)v66 * 0.0);
      v70 = 0.0 - (float)(v68 * 0.0);
      v23 = Matrix3x3::operator*(&v49, v71, v66);
      *((_OWORD *)a4 + 2) = *(_OWORD *)v23;
      *((_OWORD *)a4 + 3) = *(_OWORD *)(v23 + 16);
      *((_DWORD *)a4 + 16) = *(_DWORD *)(v23 + 32);
      *(float *)&v65 = (float)v61;
      *((float *)&v65 + 1) = (float)v62;
      *((float *)&v65 + 2) = (float)v63;
      *((float *)&v65 + 3) = (float)v64;
      v24 = v65;
      goto LABEL_22;
    }
  }
  v74 = 0LL;
  v75 = 0;
  RenderTargetBitmap = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v74);
  v19 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v41 = 3166;
    goto LABEL_33;
  }
  HIDWORD(v74) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v20 + 32LL))(v20);
  v25 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v20 + 40LL))(v20);
  v26 = *((_DWORD *)this + 102);
  v27 = *((_QWORD *)this + 4) + 324LL;
  v28 = (struct _LUID)*((_QWORD *)this + 50);
  v75 = v25;
  LODWORD(v44) = v63 - v61;
  v47 = v64 - v62;
  *(_QWORD *)v66 = "Backdrop effect input";
  v29 = *(_QWORD *)v20;
  v71[0] = (struct D2D_SIZE_F)1LL;
  v67 = 21;
  v30 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v29 + 168))(v20);
  v43 = v28;
  v31 = (int)v44;
  v42 = (struct _GUID *)v27;
  v32 = v47;
  RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                         (int)&qword_18023E818,
                         (int)v66,
                         (int)v44,
                         v47,
                         *(_QWORD *)v71,
                         0,
                         (__int64)&v74,
                         1,
                         v42,
                         v43,
                         v26,
                         v30,
                         0,
                         0,
                         (__int64)&v46);
  v19 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v41 = 3192;
    goto LABEL_33;
  }
  RenderTargetBitmap = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v20 + 112LL))(
                         v20,
                         &v48);
  v19 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v41 = 3195;
    goto LABEL_33;
  }
  v33 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 112LL))(v46, &v45);
  v19 = v33;
  if ( v33 >= 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v45 + 64LL))(
                           v45,
                           0LL,
                           v48,
                           &v61);
    v19 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v41 = 3200;
      goto LABEL_33;
    }
    v20 = (struct IRenderTarget *)v46;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v45 + 32LL))(v45, &v65);
    v66[1] = 0;
    v67 = 0;
    *(float *)v66 = 1.0 / *(float *)&v65;
    v68 = 1.0 / *((float *)&v65 + 1);
    v69 = 0.0 - (float)((float)(1.0 / *(float *)&v65) * 0.0);
    v70 = 0.0 - (float)((float)(1.0 / *((float *)&v65 + 1)) * 0.0);
    v72 = COERCE_UNSIGNED_INT((float)v61) ^ _xmm;
    v73 = COERCE_UNSIGNED_INT((float)v62) ^ _xmm;
    *(_OWORD *)&v71[0].width = _xmm;
    v34 = Matrix3x3::operator*(&v49, &v55, v71);
    v35 = Matrix3x3::operator*(v34, &v49, v66);
    v71[0].width = 0.0;
    v71[0].height = 0.0;
    *((_OWORD *)a4 + 2) = *(_OWORD *)v35;
    *((_OWORD *)a4 + 3) = *(_OWORD *)(v35 + 16);
    *((_DWORD *)a4 + 16) = *(_DWORD *)(v35 + 32);
    v71[1].width = (float)v31;
    v71[1].height = (float)v32;
    v24 = *(_OWORD *)&v71[0].width;
LABEL_22:
    v36 = !g_LockAndReadBackdropTexture;
    *(_OWORD *)((char *)a4 + 68) = v24;
    if ( !v36 )
      (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v20 + 176LL))(
        v20,
        *((_QWORD *)this + 49),
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    RenderTargetBitmap = CRenderTargetImageSource::Create(v20, 1, (struct CRenderTargetImageSource **)v71);
    v19 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
    {
      v37 = (struct IImageSource *)v71[0];
LABEL_37:
      *(_QWORD *)a4 = v37;
      goto LABEL_39;
    }
    v41 = 3258;
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, v41);
    goto LABEL_39;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC7Cu);
LABEL_39:
  ReleaseInterfaceNoNULL<CD2DPencil>(v48);
  ReleaseInterfaceNoNULL<CD2DPencil>(v45);
  ReleaseInterfaceNoNULL<CD2DPencil>(v46);
  ReleaseInterfaceNoNULL<IImageSource>(v4);
  return v19;
}

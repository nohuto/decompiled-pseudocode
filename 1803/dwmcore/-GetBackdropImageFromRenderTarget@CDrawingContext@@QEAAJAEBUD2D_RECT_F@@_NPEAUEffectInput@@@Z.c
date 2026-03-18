/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAVIImageSource@@@Z @ 0x180008570 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@PEAPEAV.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18006605C (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008C908 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800C48C4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C5718 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        CDrawingContext *this,
        const struct D2D_RECT_F *a2,
        bool a3,
        struct EffectInput *a4)
{
  struct CRenderTargetImageSource *v5; // r15
  CMILMatrix *TopByReference; // rax
  float v10; // xmm9_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float left; // xmm1_4
  float top; // xmm2_4
  const struct CMILMatrix *v19; // rax
  int RenderTargetBitmap; // eax
  unsigned int v21; // ebx
  struct IRenderTarget *v22; // rsi
  int (__fastcall **v23)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  int v24; // eax
  int (__fastcall **v25)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  __int64 v26; // rax
  __int128 v27; // xmm0
  bool v28; // zf
  int (__fastcall **v30)(struct IRenderTarget *, GUID *, struct CRenderTargetImageSource **); // rax
  int v31; // r12d
  int v32; // ebx
  struct _LUID v33; // rdi
  int (__fastcall **v34)(struct IRenderTarget *, GUID *, struct IImageSource **); // rax
  char v35; // al
  int v36; // edi
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  FLOAT v40; // xmm1_4
  int v41; // eax
  unsigned int v42; // [rsp+28h] [rbp-E0h]
  struct _LUID v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  struct IImageSource *v45; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_SIZE_F v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  int v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+B4h] [rbp-54h]
  int v53; // [rsp+BCh] [rbp-4Ch]
  __int64 v54; // [rsp+C0h] [rbp-48h]
  int v55; // [rsp+C8h] [rbp-40h]
  __int128 v56; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v57; // [rsp+E8h] [rbp-20h]
  __int128 v58; // [rsp+F8h] [rbp-10h]
  __int128 v59; // [rsp+108h] [rbp+0h]
  __int16 v60; // [rsp+118h] [rbp+10h]
  int v61; // [rsp+128h] [rbp+20h] BYREF
  int v62; // [rsp+12Ch] [rbp+24h]
  int v63; // [rsp+130h] [rbp+28h]
  int v64; // [rsp+134h] [rbp+2Ch]
  __int64 v65[2]; // [rsp+138h] [rbp+30h] BYREF
  float v66; // [rsp+148h] [rbp+40h]
  float v67; // [rsp+14Ch] [rbp+44h]
  struct CRenderTargetImageSource *v68[2]; // [rsp+150h] [rbp+48h] BYREF
  int v69; // [rsp+160h] [rbp+58h]
  int v70; // [rsp+164h] [rbp+5Ch]
  int v71[2]; // [rsp+168h] [rbp+60h] BYREF
  int v72; // [rsp+170h] [rbp+68h]
  float v73; // [rsp+174h] [rbp+6Ch]
  float v74; // [rsp+178h] [rbp+70h]
  float v75; // [rsp+17Ch] [rbp+74h]

  v49 = 0LL;
  v48 = 0LL;
  v5 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  EffectInput::Reset(a4);
  *((_BYTE *)a4 + 44) = 1;
  *(struct D2D_RECT_F *)v65 = *a2;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)v65);
  v10 = *(float *)v65;
  v11 = *((float *)v65 + 1);
  v12 = *(float *)&v65[1];
  v13 = *((float *)&v65[1] + 1);
  if ( *(float *)&v61 > *(float *)v65 )
    v10 = *(float *)&v61;
  v14 = *((float *)v65 + 1);
  if ( *(float *)&v62 > *((float *)v65 + 1) )
  {
    v11 = *(float *)&v62;
    v14 = *(float *)&v62;
  }
  v15 = *(float *)&v65[1];
  if ( *(float *)&v65[1] > *(float *)&v63 )
  {
    v12 = *(float *)&v63;
    v15 = *(float *)&v63;
  }
  v16 = *((float *)&v65[1] + 1);
  if ( *((float *)&v65[1] + 1) > *(float *)&v64 )
  {
    v13 = *(float *)&v64;
    v16 = *(float *)&v64;
  }
  if ( v15 > v10 && v16 > v14 )
  {
    left = a2->left;
    v57 = _xmm;
    v60 = 32085;
    top = a2->top;
    v56 = _xmm;
    v58 = _xmm;
    v59 = _xmm;
    CMILMatrix::Translate((CMILMatrix *)&v56, left, top);
    v19 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Multiply((CMILMatrix *)&v56, v19);
    v52 = v57;
    v50 = v56;
    v53 = HIDWORD(v57);
    v54 = v59;
    v51 = HIDWORD(v56);
    v55 = HIDWORD(v59);
    *(_WORD *)((char *)a4 + 101) = 257;
    v61 = (int)floorf_0(v10);
    v62 = (int)floorf_0(v11);
    v63 = (int)ceilf_0(v12);
    v64 = (int)ceilf_0(v13);
    RenderTargetBitmap = CDrawingContext::FlushD2D(this);
    v21 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v42 = 2848;
      goto LABEL_39;
    }
    v22 = (struct IRenderTarget *)*((_QWORD *)this + 45);
    if ( !a3 )
    {
      v23 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v22;
      v45 = 0LL;
      if ( (*v23)(v22, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v45) < 0 )
      {
        v30 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct CRenderTargetImageSource **))v22;
        v68[0] = 0LL;
        a3 = (*v30)(v22, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v68) < 0;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v68);
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)v45 + 528LL))(v45, &v44);
        v21 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xB2Cu);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v45);
          goto LABEL_24;
        }
        a3 = (_BYTE)v44 == 0;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v45);
    }
    v25 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v22;
    if ( a3 )
    {
      ((void (__fastcall *)(struct IRenderTarget *, __int64 *))v25[3])(v22, v65);
      v31 = v63 - v61;
      v32 = *((_DWORD *)this + 100);
      v33 = (struct _LUID)*((_QWORD *)this + 49);
      LODWORD(v45) = v64 - v62;
      *(_QWORD *)v71 = "Backdrop effect input";
      v34 = *(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IImageSource **))v22;
      v68[0] = (struct CRenderTargetImageSource *)1;
      v72 = 21;
      v35 = ((__int64 (__fastcall *)(struct IRenderTarget *))v34[20])(v22);
      v43 = v33;
      v36 = (int)v45;
      RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                             (int)&qword_1802D6728,
                             (int)v71,
                             v31,
                             (int)v45,
                             (__int64)v68[0],
                             0,
                             (__int64)v65,
                             1,
                             v43,
                             v32,
                             v35,
                             0,
                             0,
                             (__int64)&v48);
      v21 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v42 = 2897;
        goto LABEL_39;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v22 + 88LL))(
                             v22,
                             &v49);
      v21 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v42 = 2900;
        goto LABEL_39;
      }
      v37 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 88LL))(v48, &v47);
      v21 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xB55u);
        goto LABEL_24;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v47 + 64LL))(
                             v47,
                             0LL,
                             v49,
                             &v61);
      v21 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v42 = 2905;
        goto LABEL_39;
      }
      v22 = (struct IRenderTarget *)v48;
      (*(void (__fastcall **)(__int64, struct D2D_SIZE_F *))(*(_QWORD *)v47 + 32LL))(v47, &v46);
      v71[1] = 0;
      v72 = 0;
      *(float *)v71 = 1.0 / v46.width;
      v73 = 1.0 / v46.height;
      v74 = 0.0 - (float)((float)(1.0 / v46.width) * 0.0);
      v75 = 0.0 - (float)((float)(1.0 / v46.height) * 0.0);
      v69 = COERCE_UNSIGNED_INT((float)v61) ^ _xmm;
      *(_OWORD *)v68 = _xmm;
      v70 = COERCE_UNSIGNED_INT((float)v62) ^ _xmm;
      v38 = Matrix3x3::operator*(&v50, &v56, v68);
      v39 = Matrix3x3::operator*(v38, &v50, v71);
      v68[0] = 0LL;
      *((_OWORD *)a4 + 3) = *(_OWORD *)v39;
      *((_OWORD *)a4 + 4) = *(_OWORD *)(v39 + 16);
      *((_DWORD *)a4 + 20) = *(_DWORD *)(v39 + 32);
      *((float *)&v68[1] + 1) = (float)v36;
      *(float *)&v68[1] = (float)v31;
      v27 = *(_OWORD *)v68;
    }
    else
    {
      ((void (__fastcall *)(struct IRenderTarget *, int *))v25[7])(v22, v71);
      HIDWORD(v65[0]) = 0;
      LODWORD(v65[1]) = 0;
      *(float *)v65 = 1.0 / (float)v72;
      *((float *)&v65[1] + 1) = 1.0 / (float)SLODWORD(v73);
      v66 = 0.0 - (float)(*(float *)v65 * 0.0);
      v67 = 0.0 - (float)(*((float *)&v65[1] + 1) * 0.0);
      v26 = Matrix3x3::operator*(&v50, &v56, v65);
      *((_OWORD *)a4 + 3) = *(_OWORD *)v26;
      *((_OWORD *)a4 + 4) = *(_OWORD *)(v26 + 16);
      *((_DWORD *)a4 + 20) = *(_DWORD *)(v26 + 32);
      *(float *)v65 = (float)v61;
      *((float *)v65 + 1) = (float)v62;
      *(float *)&v65[1] = (float)v63;
      *((float *)&v65[1] + 1) = (float)v64;
      v27 = *(_OWORD *)v65;
    }
    v28 = !g_LockAndReadBackdropTexture;
    *(_OWORD *)((char *)a4 + 84) = v27;
    if ( !v28 )
      (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, unsigned __int64))(*(_QWORD *)v22 + 224LL))(
        v22,
        *((_QWORD *)this + 48),
        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    RenderTargetBitmap = CRenderTargetImageSource::Create(v22, 1, v68);
    v21 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
    {
      v5 = v68[0];
      goto LABEL_23;
    }
    v42 = 2963;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, v42);
    goto LABEL_24;
  }
  v40 = a2->bottom - a2->top;
  v46.width = a2->right - a2->left;
  v46.height = v40;
  v41 = CDrawingContext::SetEffectInputToTransparentBlack(this, &v46, a4, &v45);
  v21 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xB9Eu);
    v5 = v45;
    goto LABEL_24;
  }
  v5 = v45;
LABEL_23:
  RenderTargetBitmap = CDrawListBitmap::FromImageSource(a4, v5, this, 0);
  v21 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v42 = 2978;
    goto LABEL_39;
  }
LABEL_24:
  ReleaseInterfaceNoNULL<IWICBitmap>(v49);
  ReleaseInterfaceNoNULL<IWICBitmap>(v47);
  ReleaseInterfaceNoNULL<IWICBitmap>(v48);
  ReleaseInterfaceNoNULL<IImageSource>(v5);
  return v21;
}

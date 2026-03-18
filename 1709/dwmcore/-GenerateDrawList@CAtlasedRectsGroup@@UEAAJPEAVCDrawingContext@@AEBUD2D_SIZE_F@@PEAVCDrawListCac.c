/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18001FD04 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180036D08 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180040540 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005915C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180062EB0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180063054 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800630C8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18006AF54 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x18006B01C (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B9EA4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char v5; // r15
  unsigned int v6; // edi
  CDrawListCache *v7; // r12
  char v9; // bl
  struct CMILMatrix *v10; // rdx
  int CpuClip; // eax
  unsigned __int64 v12; // rax
  int v13; // eax
  struct D2D_SIZE_U v14; // rbx
  struct CCommonRenderingEffect *v15; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v17; // r10
  int v18; // edx
  struct CRenderingEffect *v19; // rdi
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // r13
  unsigned __int8 *v25; // rax
  unsigned int *v26; // r13
  __int128 v27; // xmm8
  int v28; // eax
  unsigned int v29; // xmm1_4
  unsigned int v30; // xmm0_4
  __m128 v31; // xmm6
  __int128 v32; // xmm10
  __m128 v33; // xmm6
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v40; // rdi
  __int64 v41; // rbx
  bool v42; // zf
  char v43; // [rsp+38h] [rbp-D0h]
  _QWORD v44[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v45; // [rsp+58h] [rbp-B0h] BYREF
  char v46; // [rsp+5Ah] [rbp-AEh]
  __int128 v47; // [rsp+68h] [rbp-A0h] BYREF
  char v48; // [rsp+78h] [rbp-90h]
  __m128 v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+90h] [rbp-78h]
  unsigned __int8 *v51; // [rsp+98h] [rbp-70h]
  _DWORD v52[6]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h]
  float v54[6]; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v55[10]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v56; // [rsp+108h] [rbp+0h]
  __int128 v57; // [rsp+118h] [rbp+10h] BYREF
  __int128 *v58; // [rsp+128h] [rbp+20h]
  struct CDrawListCache *v59; // [rsp+138h] [rbp+30h]
  __int128 v60; // [rsp+140h] [rbp+38h] BYREF
  __int64 v61; // [rsp+150h] [rbp+48h] BYREF
  char v62; // [rsp+158h] [rbp+50h]
  char v63; // [rsp+160h] [rbp+58h]
  struct D2D_SIZE_U v64; // [rsp+168h] [rbp+60h] BYREF
  __int64 v65; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v66[4]; // [rsp+188h] [rbp+80h] BYREF
  int v67; // [rsp+1C8h] [rbp+C0h]
  _BYTE v68[2480]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v69; // [rsp+B88h] [rbp+A80h] BYREF
  int v70; // [rsp+B8Ch] [rbp+A84h]
  int v71; // [rsp+B90h] [rbp+A88h]
  int v72; // [rsp+B94h] [rbp+A8Ch]
  int v73; // [rsp+B98h] [rbp+A90h]
  int v74; // [rsp+B9Ch] [rbp+A94h]
  int v75; // [rsp+BA0h] [rbp+A98h]
  int v76; // [rsp+BA4h] [rbp+A9Ch]
  int v77; // [rsp+BA8h] [rbp+AA0h]
  __int128 v78; // [rsp+BACh] [rbp+AA4h]

  v59 = a4;
  LODWORD(v44[0]) = 0;
  v5 = 0;
  v6 = 0;
  v7 = a4;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v68);
  v61 = 0LL;
  v60 = 0LL;
  v62 = 0;
  v63 = 0;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_26;
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2)
    || *((_DWORD *)a2 + 65) == 4
    || (v40 = *((_QWORD *)a2 + 45),
        v41 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_SIZE_U *))(**((_QWORD **)this + 7) + 24LL))(
                *((_QWORD *)this + 7),
                &v64),
        v42 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 24LL))(v40, &v65) + 8) == *(_DWORD *)(v41 + 8),
        v9 = 1,
        !v42) )
  {
    v9 = 0;
  }
  v43 = v9;
  memset_0(&v57, 0, 0x20uLL);
  LODWORD(v57) = 2;
  v67 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v66);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v66, (float *)&v57 + 1, (float *)&v57 + 2);
  if ( !v9 )
  {
    CpuClip = CDrawingContext::GetCpuClip((const struct CVisualTree **)a2, v10, (struct CCpuClip *)&v60);
    v6 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CpuClip, 0x80u);
      goto LABEL_26;
    }
  }
  v48 = 0;
  v58 = &v60;
  v12 = *((_QWORD *)this + 7);
  v47 = 0LL;
  v13 = CDrawListBitmap::FromImageSource(
          (CDrawListBitmap *)&v47,
          (struct IImageSource *)((v12 + 8) & ((unsigned __int128)-(__int128)v12 >> 64)),
          a2,
          0,
          1);
  v6 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x86u);
    goto LABEL_40;
  }
  if ( !(_QWORD)v47 )
  {
LABEL_40:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v47 + 1);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v47);
    goto LABEL_26;
  }
  v14 = **(struct D2D_SIZE_U **)&CDrawListBitmap::GetSize((CDrawListBitmap *)&v47, &v64);
  v64 = v14;
  ObjectCache = CThreadContext::GetObjectCache(v15);
  v17 = 0LL;
  v18 = *((_DWORD *)ObjectCache + 1);
  if ( v18 )
  {
    v17 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v17;
    *((_DWORD *)ObjectCache + 1) = v18 - 1;
  }
  if ( v17 || (v17 = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    v45 = SamplerMode::k_ClampClampLinear;
    v46 = byte_18026E172;
    BYTE2(v44[0]) = byte_18026E172;
    LOWORD(v44[0]) = SamplerMode::k_ClampClampLinear;
    v49 = 0LL;
    v50 = 0LL;
    v19 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(
                                       (__int64)v17,
                                       (__int64)&v47,
                                       (__int64)v44,
                                       (__int64)&v49,
                                       (__int64)&v45);
    v5 = 1;
  }
  else
  {
    v19 = 0LL;
  }
  v44[0] = v19;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v44);
  if ( (v5 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v49.m128_i64[1]);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v49);
  }
  if ( !v19 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x90u);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v44);
    goto LABEL_40;
  }
  CDrawListEntryBuilder::Begin((CDrawListEntryBuilder *)v68, (const struct DrawListEntryBuilderSetupParams *)&v57, v19);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v44);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v47 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v47);
  v20 = 0;
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v21 = 0;
      v22 = *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v20);
      v23 = *(_DWORD *)(v22 + 60);
      v24 = *(_QWORD *)(v22 + 88);
      v65 = *(_QWORD *)(v22 + 72);
      v25 = *(unsigned __int8 **)(v22 + 104);
      v51 = v25;
      LODWORD(v44[0]) = v23;
      if ( v23 )
        break;
LABEL_22:
      if ( ++v20 >= *((_DWORD *)this + 16) )
      {
        v7 = v59;
        goto LABEL_24;
      }
    }
    *(_QWORD *)&v47 = &v69;
    v26 = (unsigned int *)(v24 + 8);
    *((_QWORD *)&v47 + 1) = 2LL;
    v27 = v47;
    while ( 1 )
    {
      v28 = *v25;
      v29 = *(v26 - 1);
      LODWORD(v53) = *(v26 - 2);
      v30 = *v26;
      v31 = (__m128)COERCE_UNSIGNED_INT((float)v28);
      v56 = 0x100000000LL;
      *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v30, v29);
      v31.m128_f32[0] = v31.m128_f32[0] / 255.0;
      HIDWORD(v53) = v26[1];
      v32 = v53;
      v33 = _mm_shuffle_ps(v31, v31, 0);
      memset_0(&v69, 0, 0x68uLL);
      v78 = _xmm;
      MILMatrix3x2::InferAffineMatrix(v52, v26 - 2, v65 + 16LL * v21);
      if ( v43 )
      {
        v69 = v52[0];
        v70 = v52[1];
        v72 = v52[2];
        v34 = v52[4];
        v73 = v52[3];
        v35 = v52[5];
      }
      else
      {
        v54[1] = 0.0;
        v54[2] = 0.0;
        v54[4] = 0.0;
        v54[5] = 0.0;
        v54[0] = 1.0 / (float)(int)v14.width;
        v54[3] = 1.0 / (float)(int)v64.height;
        MILMatrix3x2::SetProduct(
          (MILMatrix3x2 *)v55,
          (const struct MILMatrix3x2 *)v52,
          (const struct MILMatrix3x2 *)v54);
        v72 = v55[2];
        v34 = v55[4];
        v73 = v55[3];
        v35 = v55[5];
        v69 = v55[0];
        v70 = v55[1];
      }
      v71 = 0;
      v74 = 0;
      v76 = v35;
      v75 = v34;
      v77 = 1065353216;
      memset_0(v66, 0, 0x20uLL);
      v58 = (__int128 *)v56;
      v49 = v33;
      v66[0] = v33;
      v66[2] = v27;
      v57 = v32;
      v36 = CDrawListEntryBuilder::Insert(
              (CDrawListEntryBuilder *)v68,
              v43,
              (const struct PrimitiveGeometryDesc *)&v57,
              (const struct PrimitiveVertexAttributesDesc *)v66,
              0LL);
      v6 = v36;
      if ( v36 < 0 )
        break;
      ++v21;
      v25 = v51 + 1;
      v26 += 4;
      ++v51;
      if ( v21 >= LODWORD(v44[0]) )
        goto LABEL_22;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xCAu);
  }
  else
  {
LABEL_24:
    v37 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v68);
    v6 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xCEu);
    }
    else
    {
      v38 = CDrawListCache::Update(v7, a2, (struct CDrawListEntryBuilder *)v68);
      v6 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xD0u);
    }
  }
LABEL_26:
  CShapePtr::Release((CShapePtr *)&v61);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v68);
  return v6;
}

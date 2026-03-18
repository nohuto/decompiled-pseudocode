/*
 * XREFs of ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800673E8 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006E250 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073FB4 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x18008B9AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800AF094 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF270 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800AF2E8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B3C78 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1E10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GenerateDrawList(
        CAtlasedRectsGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 (__fastcall ***v4)(_QWORD); // rdi
  char v6; // r12
  unsigned int v7; // esi
  CDrawListCache *v8; // r13
  char v10; // bl
  struct CMILMatrix *v11; // rdx
  int CpuClip; // eax
  unsigned __int64 v13; // rax
  struct D2D_SIZE_U v14; // rbx
  struct CCommonRenderingEffect *v15; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v17; // r10
  int v18; // edx
  __int64 v19; // r12
  unsigned int v20; // r13d
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rsi
  unsigned __int8 *v24; // rax
  __int64 v25; // r8
  unsigned int *v26; // rcx
  __int128 v27; // xmm8
  int v28; // eax
  unsigned int *v29; // rdi
  unsigned int v30; // xmm1_4
  unsigned int v31; // xmm0_4
  __m128 v32; // xmm6
  struct D2D_RECT_F v33; // xmm10
  __m128 v34; // xmm6
  int v35; // xmm0_4
  int v36; // xmm1_4
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rax
  bool v45; // zf
  char v46; // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall ***v47[2])(_QWORD); // [rsp+48h] [rbp-C0h] BYREF
  __int16 v48; // [rsp+58h] [rbp-B0h] BYREF
  char v49; // [rsp+5Ah] [rbp-AEh]
  __int128 v50; // [rsp+68h] [rbp-A0h] BYREF
  char v51; // [rsp+78h] [rbp-90h]
  __m128 v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h]
  unsigned __int8 *v55; // [rsp+A0h] [rbp-68h]
  _DWORD v56[6]; // [rsp+A8h] [rbp-60h] BYREF
  struct D2D_RECT_F v57; // [rsp+C0h] [rbp-48h]
  float v58[6]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v59[10]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v60; // [rsp+110h] [rbp+8h]
  struct D2D_RECT_F v61; // [rsp+118h] [rbp+10h] BYREF
  __int128 *v62; // [rsp+128h] [rbp+20h]
  struct CDrawListCache *v63; // [rsp+138h] [rbp+30h]
  __int128 v64; // [rsp+140h] [rbp+38h] BYREF
  CRectanglesShape *v65; // [rsp+150h] [rbp+48h] BYREF
  char v66; // [rsp+158h] [rbp+50h]
  char v67; // [rsp+160h] [rbp+58h]
  _QWORD v68[2]; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_SIZE_U v69; // [rsp+178h] [rbp+70h] BYREF
  _OWORD v70[4]; // [rsp+188h] [rbp+80h] BYREF
  int v71; // [rsp+1C8h] [rbp+C0h]
  CMILRefCountBase *v72[310]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v73; // [rsp+B88h] [rbp+A80h] BYREF
  int v74; // [rsp+B8Ch] [rbp+A84h]
  int v75; // [rsp+B90h] [rbp+A88h]
  int v76; // [rsp+B94h] [rbp+A8Ch]
  int v77; // [rsp+B98h] [rbp+A90h]
  int v78; // [rsp+B9Ch] [rbp+A94h]
  int v79; // [rsp+BA0h] [rbp+A98h]
  int v80; // [rsp+BA4h] [rbp+A9Ch]
  int v81; // [rsp+BA8h] [rbp+AA0h]
  __int128 v82; // [rsp+BACh] [rbp+AA4h]

  v4 = 0LL;
  v63 = a4;
  LODWORD(v47[0]) = 0;
  v6 = 0;
  v7 = 0;
  v8 = a4;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v72);
  v65 = 0LL;
  v64 = 0LL;
  v66 = 0;
  v67 = 0;
  if ( !*((_QWORD *)this + 7) )
    goto LABEL_26;
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2)
    || *((_DWORD *)a2 + 65) == 4
    || (v42 = *((_QWORD *)a2 + 45),
        v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), v68),
        v44 = (*(__int64 (__fastcall **)(__int64, struct D2D_SIZE_U *))(*(_QWORD *)v42 + 24LL))(v42, &v69),
        v4 = 0LL,
        v45 = *(_DWORD *)(v44 + 8) == *(_DWORD *)(v43 + 8),
        v10 = 1,
        !v45) )
  {
    v10 = 0;
  }
  v46 = v10;
  memset_0(&v61, 0, 0x20uLL);
  LODWORD(v61.left) = 2;
  v71 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v70);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v70, &v61.top, &v61.right);
  if ( !v10 )
  {
    CpuClip = CDrawingContext::GetCpuClip((const struct CVisualTree **)a2, v11, (CRectanglesShape **)&v64);
    v7 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CpuClip, 0x77u);
      goto LABEL_26;
    }
  }
  v51 = 0;
  v62 = &v64;
  v13 = *((_QWORD *)this + 7);
  v50 = 0LL;
  if ( (int)CDrawListBitmap::FromImageSource(
              (struct IImageSource **)&v50,
              (struct IImageSource *)((v13 + 8) & ((unsigned __int128)-(__int128)v13 >> 64)),
              a2,
              0) < 0 )
  {
LABEL_34:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50 + 1);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v50);
    goto LABEL_26;
  }
  v14 = **(struct D2D_SIZE_U **)&CDrawListBitmap::GetSize((CDrawListBitmap *)&v50, v68);
  v69 = v14;
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
    v48 = SamplerMode::k_ClampClampLinear;
    v49 = 1;
    BYTE2(v47[0]) = 1;
    LOWORD(v47[0]) = SamplerMode::k_ClampClampLinear;
    v52 = 0LL;
    v53 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD))CCommonRenderingEffect::CCommonRenderingEffect(
                                             (__int64)v17,
                                             (__int64 *)&v50,
                                             (__int64)v47,
                                             (__int64 *)&v52,
                                             (__int64)&v48);
    v6 = 1;
  }
  v47[0] = v4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v47);
  if ( (v6 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v52.m128_i64[1]);
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v52);
  }
  if ( !v4 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x86u);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v47);
    goto LABEL_34;
  }
  CDrawListEntryBuilder::Begin(
    (CDrawListEntryBuilder *)v72,
    (const struct DrawListEntryBuilderSetupParams *)&v61,
    (struct CRenderingEffect *)v4);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v47);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v50 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)&v50);
  v19 = 0LL;
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v20 = 0;
      v21 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v19);
      v22 = *(_DWORD *)(v21 + 60);
      v23 = *(_QWORD *)(v21 + 72);
      v24 = *(unsigned __int8 **)(v21 + 104);
      v25 = *(_QWORD *)(v21 + 88);
      v68[0] = v23;
      v55 = v24;
      LODWORD(v47[0]) = v22;
      if ( v22 )
        break;
LABEL_21:
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= *((_DWORD *)this + 16) )
      {
        v8 = v63;
        goto LABEL_23;
      }
    }
    *((_QWORD *)&v50 + 1) = &v73;
    v26 = (unsigned int *)(v25 + 8);
    *(_QWORD *)&v50 = 2LL;
    v27 = v50;
    v54 = v25 + 8;
    while ( 1 )
    {
      v28 = *v24;
      v29 = v26 - 2;
      v30 = *(v26 - 1);
      LODWORD(v57.left) = *(v26 - 2);
      v31 = *v26;
      v32 = (__m128)COERCE_UNSIGNED_INT((float)v28);
      v60 = 0x100000000LL;
      *(_QWORD *)&v57.top = __PAIR64__(v31, v30);
      v32.m128_f32[0] = v32.m128_f32[0] / 255.0;
      LODWORD(v57.bottom) = v26[1];
      v33 = v57;
      v34 = _mm_shuffle_ps(v32, v32, 0);
      memset_0(&v73, 0, 0x68uLL);
      v82 = _xmm;
      MILMatrix3x2::InferAffineMatrix(v56, v29, v23 + 16LL * v20);
      if ( v46 )
      {
        v73 = v56[0];
        v74 = v56[1];
        v76 = v56[2];
        v35 = v56[4];
        v77 = v56[3];
        v36 = v56[5];
      }
      else
      {
        v58[1] = 0.0;
        v58[2] = 0.0;
        v58[4] = 0.0;
        v58[5] = 0.0;
        v58[0] = 1.0 / (float)(int)v14.width;
        v58[3] = 1.0 / (float)(int)v69.height;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v59,
          (const struct D2D1::Matrix3x2F *)v56,
          (const struct D2D1::Matrix3x2F *)v58);
        v76 = v59[2];
        v35 = v59[4];
        v77 = v59[3];
        v36 = v59[5];
        v73 = v59[0];
        v74 = v59[1];
      }
      v75 = 0;
      v78 = 0;
      v80 = v36;
      v79 = v35;
      v81 = 1065353216;
      memset_0(v70, 0, 0x20uLL);
      LOBYTE(v37) = v46;
      v62 = (__int128 *)v60;
      v52 = v34;
      v70[0] = v34;
      v70[2] = v27;
      v61 = v33;
      v38 = CDrawListEntryBuilder::Insert((CDrawListEntryBuilder *)v72, v37, &v61, (__int64)v70, 0LL);
      v7 = v38;
      if ( v38 < 0 )
        break;
      ++v20;
      v26 = (unsigned int *)(v54 + 16);
      v23 = v68[0];
      v24 = v55 + 1;
      v54 += 16LL;
      ++v55;
      if ( v20 >= LODWORD(v47[0]) )
        goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u);
  }
  else
  {
LABEL_23:
    v39 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)v72);
    v7 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xC4u);
    }
    else
    {
      v40 = CDrawListCache::Update(v8, a2, (struct CDrawListEntryBuilder *)v72);
      v7 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xC6u);
    }
  }
LABEL_26:
  CShapePtr::Release(&v65);
  CDrawListEntryBuilder::~CDrawListEntryBuilder(v72);
  return v7;
}

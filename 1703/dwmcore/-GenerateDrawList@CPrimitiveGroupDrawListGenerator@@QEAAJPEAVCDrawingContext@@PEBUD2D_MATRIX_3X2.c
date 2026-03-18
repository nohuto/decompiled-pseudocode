/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000C3B0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAVIImageSource@@_K12PEAPEAVCResource@@2M@Z @ 0x18000F1BC (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180164870 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800094D0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x180009718 (-FromD2D1ExtendMode@ExtendMode@@YA-AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180009724 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ??0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@USamplerMode@@01@Z @ 0x180009740 (--0CCommonRenderingEffect@@QEAA@PEAVIImageSource@@USamplerMode@@01@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180009930 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180024080 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003F8F0 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x1800410F8 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800412E8 (-Insert@CDrawListPrimitiveBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18004135C (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18004ECE0 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800934D8 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180093F4C (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009AD10 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800A1E9C (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800AB4C8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800C1278 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C2E84 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800C2F24 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C2F3C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x1801333F0 (-RemovePrimitiveClips@CCpuClip@@QEAAXXZ.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18015C44C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAJPEAVIImageSource@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18015C518 (-CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAJPEAVIImageSource@@AEBUD2D_MATRI.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18015C6E4 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        struct D2D_MATRIX_3X2_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v7; // esi
  char v8; // r13
  int v9; // eax
  float v10; // xmm7_4
  float v11; // xmm12_4
  char v12; // r12
  __m128 m11_low; // xmm4
  __m128 m12_low; // xmm3
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  CVisual *CurrentVisual; // rax
  __int64 v20; // rdi
  int TopCpuClipInScope; // eax
  int v22; // ebx
  bool v23; // zf
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rsi
  int v27; // ebx
  bool v28; // cf
  struct IImageSource *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rax
  int (__fastcall **v32)(struct IImageSource *, GUID *, __int64 *); // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // r12
  char v36; // dl
  __int64 v37; // rcx
  char v38; // bl
  struct CCommonRenderingEffect *v39; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v41; // r10
  int v42; // edx
  struct CRenderingEffect *v43; // r12
  const __m128i *v44; // rdi
  __m128i v45; // xmm6
  __int64 v46; // rdx
  __int128 *v47; // r9
  unsigned int v48; // ecx
  unsigned int v49; // xmm1_4
  __int32 v50; // xmm1_4
  __int32 v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm0_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  __m128 v58; // xmm1
  float v59; // xmm2_4
  float v60; // xmm0_4
  __m128 v61; // xmm2
  float v62; // xmm0_4
  const __m128i *v63; // rdi
  int v64; // eax
  unsigned int (__fastcall *v65)(CMILRefCountBase *__hidden); // rax
  int v66; // eax
  const struct D2D_MATRIX_3X2_F *v68; // rdx
  int v69; // r12d
  __int64 v70; // rbx
  float v71; // xmm0_4
  float v72; // xmm6_4
  float v73; // xmm5_4
  float v74; // xmm6_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  unsigned int v77; // xmm5_4
  float v78; // xmm3_4
  float v79; // xmm2_4
  float v80; // xmm4_4
  float v81; // xmm0_4
  float v82; // xmm2_4
  float v83; // xmm1_4
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int32 v86; // xmm0_4
  unsigned __int32 v87; // xmm1_4
  __int32 v88; // xmm1_4
  __int32 v89; // xmm0_4
  unsigned __int32 v90; // xmm1_4
  int v91; // eax
  __int32 v92; // xmm1_4
  __int32 v93; // xmm1_4
  int v94; // r9d
  enum D2D1_ANTIALIAS_MODE v95; // [rsp+28h] [rbp-E0h]
  char v96; // [rsp+38h] [rbp-D0h]
  bool v97; // [rsp+39h] [rbp-CFh]
  __int16 v98; // [rsp+3Ch] [rbp-CCh]
  __int16 v99; // [rsp+40h] [rbp-C8h]
  __int16 v100; // [rsp+48h] [rbp-C0h] BYREF
  char v101; // [rsp+4Ah] [rbp-BEh]
  __int16 v102; // [rsp+58h] [rbp-B0h] BYREF
  char v103; // [rsp+5Ah] [rbp-AEh]
  __int64 v104; // [rsp+68h] [rbp-A0h] BYREF
  struct CRenderingEffect *v105; // [rsp+70h] [rbp-98h] BYREF
  struct IImageSource *v106; // [rsp+78h] [rbp-90h] BYREF
  __int64 v107; // [rsp+80h] [rbp-88h] BYREF
  struct IImageSource *v108; // [rsp+88h] [rbp-80h]
  int v109; // [rsp+90h] [rbp-78h] BYREF
  float v110; // [rsp+94h] [rbp-74h] BYREF
  float v111; // [rsp+98h] [rbp-70h] BYREF
  BOOL v112; // [rsp+9Ch] [rbp-6Ch]
  __int128 *v113; // [rsp+A0h] [rbp-68h]
  int v114; // [rsp+A8h] [rbp-60h]
  char v115; // [rsp+ACh] [rbp-5Ch]
  __int128 v116; // [rsp+B0h] [rbp-58h] BYREF
  void (__fastcall ***v117)(_QWORD, __int64); // [rsp+C0h] [rbp-48h] BYREF
  char v118; // [rsp+C8h] [rbp-40h]
  char v119; // [rsp+D0h] [rbp-38h]
  __int128 v120; // [rsp+D8h] [rbp-30h]
  __int64 v121; // [rsp+100h] [rbp-8h]
  CDrawListCache *v122; // [rsp+108h] [rbp+0h]
  __int128 v123; // [rsp+110h] [rbp+8h]
  __int128 v124; // [rsp+128h] [rbp+20h]
  __m256i v125; // [rsp+138h] [rbp+30h]
  __int128 v126; // [rsp+158h] [rbp+50h]
  __int128 v127; // [rsp+16Ch] [rbp+64h]
  __m256i v128; // [rsp+17Ch] [rbp+74h]
  __int128 v129; // [rsp+19Ch] [rbp+94h]
  __int128 v130; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v131; // [rsp+1C8h] [rbp+C0h]
  __int128 v132; // [rsp+1D8h] [rbp+D0h]
  __int128 v133; // [rsp+1E8h] [rbp+E0h]
  int v134; // [rsp+1F8h] [rbp+F0h]
  char v135[8]; // [rsp+208h] [rbp+100h] BYREF
  const __m128i *v136; // [rsp+210h] [rbp+108h]
  __m128i v137; // [rsp+228h] [rbp+120h] BYREF
  __int64 v138; // [rsp+238h] [rbp+130h]
  _BYTE v139[64]; // [rsp+248h] [rbp+140h] BYREF
  int v140; // [rsp+288h] [rbp+180h]
  __int128 v141; // [rsp+298h] [rbp+190h] BYREF
  __int64 v142; // [rsp+2B0h] [rbp+1A8h]
  _DWORD *v143; // [rsp+2B8h] [rbp+1B0h]
  int v144; // [rsp+2C0h] [rbp+1B8h]
  __int128 v145; // [rsp+2C8h] [rbp+1C0h]
  unsigned __int64 v146; // [rsp+2D8h] [rbp+1D0h]
  __m128i v147; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int128 v148; // [rsp+2F0h] [rbp+1E8h] BYREF
  unsigned __int64 v149; // [rsp+300h] [rbp+1F8h]
  _BYTE v150[64]; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v151[40]; // [rsp+348h] [rbp+240h] BYREF
  struct CDrawListEntry **v152; // [rsp+370h] [rbp+268h]
  unsigned int v153; // [rsp+388h] [rbp+280h]
  int v154; // [rsp+3B0h] [rbp+2A8h]
  _DWORD v155[9]; // [rsp+CF8h] [rbp+BF0h] BYREF
  __int128 v156; // [rsp+D1Ch] [rbp+C14h]
  _DWORD v157[9]; // [rsp+D2Ch] [rbp+C24h] BYREF
  __m128i v158; // [rsp+D50h] [rbp+C48h]

  v122 = a4;
  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 11, 1u);
  CDrawListCache::Invalidate(a4);
  v7 = 0;
  if ( CDrawingContext::IsWarpFastPathEnabled(a2)
    && CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(this)
    && ((v8 = 1, !a3) || D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a3, v68))
    && *((_DWORD *)a2 + 67) != 4 )
  {
    v69 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 46) + 120LL))(*((_QWORD *)a2 + 46)) + 196);
    v104 = 0LL;
    if ( *((_DWORD *)this + 16) )
    {
      while ( 1 )
      {
        v70 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v7);
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v104);
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v70 + 72LL))(v70, &v104) >= 0
          && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v104 + 56LL))(v104) != v69 )
        {
          break;
        }
        if ( ++v7 >= *((_DWORD *)this + 16) )
          goto LABEL_77;
      }
      v8 = 0;
    }
LABEL_77:
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v104);
  }
  else
  {
    v8 = 0;
  }
  memset_0(&v109, 0, 0x20uLL);
  CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v151);
  v9 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)a2 + 65));
  v117 = 0LL;
  v118 = 0;
  v97 = v9 == 0;
  v119 = 0;
  v140 = 0;
  v116 = 0LL;
  if ( *((_DWORD *)a2 + 118) )
    CWatermarkStack<CMILMatrix,8,2,8>::Top((char *)a2 + 472, v139);
  else
    CMILMatrix::operator=(v139);
  v10 = 0.0;
  v96 = 0;
  v11 = 0.0;
  v12 = 0;
  v145 = _xmm;
  if ( a3 )
  {
    m11_low = (__m128)LODWORD(a3->m11);
    v12 = 1;
    m12_low = (__m128)LODWORD(a3->m12);
    v15 = a3->m22 * 0.0;
    v96 = 1;
    v16 = a3->m21 * 0.0;
    v17 = v16 + m11_low.m128_f32[0];
    m11_low.m128_f32[0] = m11_low.m128_f32[0] * 0.0;
    *(float *)&v120 = v17;
    v18 = v15 + m12_low.m128_f32[0];
    m12_low.m128_f32[0] = m12_low.m128_f32[0] * 0.0;
    *((float *)&v120 + 1) = v18;
    *((float *)&v120 + 2) = m11_low.m128_f32[0] + a3->m21;
    m11_low.m128_f32[0] = (float)(m11_low.m128_f32[0] + v16) + a3->dx;
    *((float *)&v120 + 3) = m12_low.m128_f32[0] + a3->m22;
    m12_low.m128_f32[0] = (float)(m12_low.m128_f32[0] + v15) + a3->dy;
    v145 = v120;
    v146 = _mm_unpacklo_ps(m11_low, m12_low).m128_u64[0];
    v11 = *((float *)&v146 + 1);
    v10 = *(float *)&v146;
  }
  if ( v8 )
    goto LABEL_14;
  if ( !*(_BYTE *)(*((_QWORD *)a2 + 114) + 80LL * (unsigned int)(*((_DWORD *)a2 + 234) - 1)) )
    goto LABEL_12;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v20 = *((_QWORD *)CVisual::FindTreeData(CurrentVisual, *((const struct CVisualTree **)a2 + 808)) + 19);
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope((struct CDrawingContext *)((char *)a2 + 912), &v106);
  v22 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    if ( v118 && v117 )
      (**v117)(v117, 1LL);
    *(_QWORD *)&v116 = v106;
    v117 = 0LL;
    v118 = 0;
    v119 = 0;
    *((_QWORD *)&v116 + 1) = v20;
LABEL_12:
    v22 = 0;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, TopCpuClipInScope, 0x356u);
LABEL_13:
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x141u);
    goto LABEL_63;
  }
LABEL_14:
  v23 = *((_DWORD *)a2 + 66) == 0;
  v109 = 2;
  v115 = 1;
  v112 = !v23;
  v113 = &v116;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v139, &v110, &v111);
  v24 = *((_QWORD *)this + 2);
  v25 = 0;
  LODWORD(v104) = 0;
  if ( !*(_DWORD *)(v24 + 8) )
    goto LABEL_61;
  while ( 1 )
  {
    v26 = *(_QWORD *)v24 + 144LL * v25;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v135, v25);
    v27 = 32;
    v114 = 32;
    if ( (*(_BYTE *)(v26 + 4) & 0x20) != 0 )
      break;
    if ( ((_QWORD)v116 || v117) && !v112 )
    {
      if ( !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v116)
        || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v139) )
      {
        v115 = 1;
        goto LABEL_19;
      }
      v27 = 96;
      v114 = 96;
    }
    v115 = 0;
LABEL_19:
    v28 = *(_DWORD *)v26 == 0;
    v29 = 0LL;
    v106 = 0LL;
    v108 = 0LL;
    if ( !v28 )
    {
      v30 = *(_DWORD *)(v26 + 40);
      if ( v30 < *((_DWORD *)this + 16) )
      {
        v29 = *(struct IImageSource **)(*((_QWORD *)this + 5) + 8LL * v30);
        v106 = v29;
      }
      v31 = *(unsigned int *)(v26 + 56);
      if ( (unsigned int)v31 < *((_DWORD *)this + 24) )
        v108 = *(struct IImageSource **)(*((_QWORD *)this + 9) + 8 * v31);
    }
    if ( (*(_BYTE *)(v26 + 4) & 0x10) != 0 )
    {
      v27 |= 1u;
      v114 = v27;
    }
    if ( v29 )
    {
      v32 = *(int (__fastcall ***)(struct IImageSource *, GUID *, __int64 *))v29;
      v107 = 0LL;
      if ( (*v32)(v29, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v107) >= 0 )
        v114 = v27 | 0x10;
      v33 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    v34 = 0LL;
    if ( !v97 )
      v34 = *(unsigned int *)(v26 + 44);
    LOBYTE(v99) = InterpolationMode::FromD2D1InterpolationMode(v34);
    HIBYTE(v99) = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v26 + 48));
    v35 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v26 + 52));
    if ( v36 )
      v37 = 0LL;
    else
      v37 = *(unsigned int *)(v26 + 60);
    LOBYTE(v98) = InterpolationMode::FromD2D1InterpolationMode(v37);
    HIBYTE(v98) = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v26 + 64));
    v38 = ExtendMode::FromD2D1ExtendMode(*(unsigned int *)(v26 + 68));
    ObjectCache = CThreadContext::GetObjectCache(v39);
    v41 = 0LL;
    v42 = *((_DWORD *)ObjectCache + 1);
    if ( v42 )
    {
      v41 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *v41;
      *((_DWORD *)ObjectCache + 1) = v42 - 1;
    }
    if ( v41 || (v41 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL)) != 0LL )
    {
      v100 = v98;
      v102 = v99;
      v101 = v38;
      v103 = v35;
      v43 = (struct CRenderingEffect *)CCommonRenderingEffect::CCommonRenderingEffect(v41, v29, &v102, v108, &v100);
    }
    else
    {
      v43 = 0LL;
    }
    v105 = v43;
    if ( !v43 )
    {
      v22 = -2147024882;
      v95 = 445;
      v94 = -2147024882;
LABEL_106:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, v95);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v105);
      goto LABEL_63;
    }
    (**(void (__fastcall ***)(struct CRenderingEffect *))v43)(v43);
    CDrawListPrimitiveBuilder::Begin(
      (CDrawListPrimitiveBuilder *)v151,
      (const struct PrimitiveBuilderSetupParams *)&v109,
      v43);
    do
    {
      v44 = v136;
      v121 = 0LL;
      v45 = _mm_loadu_si128(v136);
      LODWORD(v121) = v136[2].m128i_i32[3];
      BYTE4(v121) = ~(2 * *(_DWORD *)(v26 + 4)) & 2 | ((*(_DWORD *)(v26 + 4) & 2) == 0);
      memset_0(&v141, 0, 0x20uLL);
      v144 = 0;
      v143 = 0LL;
      memset_0(v155, 0, 0x68uLL);
      v47 = 0LL;
      if ( *(_DWORD *)v26 )
      {
        v48 = 7;
        HIDWORD(v123) = v44[3].m128i_i32[3];
        *(float *)&v49 = *((float *)&v123 + 3) * *(float *)&v44[3].m128i_i32[1];
        *(float *)&v123 = *((float *)&v123 + 3) * *(float *)v44[3].m128i_i32;
        *(_QWORD *)((char *)&v123 + 4) = __PAIR64__(*((float *)&v123 + 3) * *(float *)&v44[3].m128i_i32[2], v49);
        v141 = v123;
        if ( v44[9].m128i_i32[0] < 7u )
          v48 = v44[9].m128i_u32[0];
        if ( v48 < *(_DWORD *)(v26 + 12) )
          v142 = *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * (*(_DWORD *)(v26 + 8) + v48));
        if ( v106 )
        {
          if ( v8 )
          {
            v64 = CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
                    v106,
                    (const struct D2D_MATRIX_3X2_F *)&v44[4],
                    (struct Matrix3x3 *)v155);
            v22 = v64;
            if ( v64 < 0 )
            {
              v95 = 490;
LABEL_103:
              v94 = v64;
              goto LABEL_106;
            }
          }
          else
          {
            v155[0] = v44[4].m128i_i32[0];
            v50 = v44[4].m128i_i32[1];
            v155[2] = 0;
            v155[1] = v50;
            v155[3] = v44[4].m128i_i32[2];
            v51 = v44[4].m128i_i32[3];
            v155[5] = 0;
            v155[4] = v51;
            v155[6] = v44[5].m128i_i32[0];
            v155[7] = v44[5].m128i_i32[1];
            v155[8] = 1065353216;
          }
          v156 = *(__int128 *)((char *)&v44[5] + 8);
        }
        if ( v108 )
        {
          if ( v8 )
          {
            v64 = CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
                    v108,
                    (const struct D2D_MATRIX_3X2_F *)&v44[6].m128i_u64[1],
                    (struct Matrix3x3 *)v157);
            v22 = v64;
            if ( v64 < 0 )
            {
              v95 = 508;
              goto LABEL_103;
            }
          }
          else
          {
            v157[0] = v44[6].m128i_i32[2];
            v92 = v44[6].m128i_i32[3];
            v157[2] = 0;
            v157[1] = v92;
            v157[3] = v44[7].m128i_i32[0];
            v93 = v44[7].m128i_i32[1];
            v157[5] = 0;
            v157[4] = v93;
            v157[6] = v44[7].m128i_i32[2];
            v157[7] = v44[7].m128i_i32[3];
            v157[8] = 1065353216;
          }
          v158 = v44[8];
        }
        v144 = 2;
        v143 = v155;
        v47 = &v141;
      }
      if ( v96 )
      {
        v52 = (float)(*((float *)&v145 + 1) * *(float *)v44[1].m128i_i32)
            + (float)(*((float *)&v145 + 3) * *(float *)&v44[1].m128i_i32[1]);
        *(float *)&v120 = (float)(*((float *)&v145 + 2) * *(float *)&v44[1].m128i_i32[1])
                        + (float)(*(float *)v44[1].m128i_i32 * *(float *)&v145);
        v53 = *(float *)&v44[1].m128i_i32[2] * *(float *)&v145;
        v54 = *((float *)&v145 + 2) * *(float *)&v44[1].m128i_i32[3];
        *((float *)&v120 + 1) = v52;
        v55 = *((float *)&v145 + 1) * *(float *)&v44[1].m128i_i32[2];
        v56 = v54 + v53;
        v57 = *((float *)&v145 + 3) * *(float *)&v44[1].m128i_i32[3];
        *((float *)&v120 + 2) = v56;
        v58 = (__m128)DWORD2(v145);
        v58.m128_f32[0] = *((float *)&v145 + 2) * *(float *)&v44[2].m128i_i32[1];
        v59 = v55 + v57;
        v60 = *(float *)v44[2].m128i_i32 * *(float *)&v145;
        *((float *)&v120 + 3) = v59;
        v61 = (__m128)DWORD1(v145);
        v61.m128_f32[0] = *((float *)&v145 + 1) * *(float *)v44[2].m128i_i32;
        v58.m128_f32[0] = v58.m128_f32[0] + v60;
        v62 = *((float *)&v145 + 3) * *(float *)&v44[2].m128i_i32[1];
        v63 = (const __m128i *)&v148;
        v58.m128_f32[0] = v58.m128_f32[0] + v10;
        v148 = v120;
        v61.m128_f32[0] = (float)(v61.m128_f32[0] + v62) + v11;
        v149 = _mm_unpacklo_ps(v58, v61).m128_u64[0];
      }
      else
      {
        v63 = v44 + 1;
      }
      LOBYTE(v46) = v8;
      v138 = v121;
      v137 = v45;
      v64 = CDrawListPrimitiveBuilder::Insert(v151, v46, &v137, v47, v63);
      v22 = v64;
      if ( v64 < 0 )
      {
        v95 = 539;
        goto LABEL_103;
      }
    }
    while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v135) );
    v64 = CDrawListPrimitiveBuilder::End((CDrawListPrimitiveBuilder *)v151);
    v22 = v64;
    if ( v64 < 0 )
    {
      v95 = 543;
      goto LABEL_103;
    }
    v65 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v43 + 8LL);
    if ( v65 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v43);
    else
      v65(v43);
    v12 = v96;
LABEL_60:
    v24 = *((_QWORD *)this + 2);
    v25 = v104 + 1;
    LODWORD(v104) = v25;
    if ( v25 >= *(_DWORD *)(v24 + 8) )
    {
LABEL_61:
      v66 = CDrawListCache::Update(
              v122,
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 400LL),
              v152,
              v153,
              (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 66) != 0),
              v154 != 0);
      v22 = v66;
      if ( v66 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x222u);
      goto LABEL_63;
    }
  }
  CCpuClip::RemovePrimitiveClips((CCpuClip *)&v116);
  v134 = 0;
  if ( v12 )
  {
    v71 = *((float *)&v145 + 2) * *(float *)&v136[1].m128i_i32[1];
    v72 = *(float *)&v145 * *(float *)v136[1].m128i_i32;
    HIDWORD(v124) = 0;
    v73 = *((float *)&v145 + 1) * *(float *)v136[1].m128i_i32;
    v74 = v72 + v71;
    v75 = *((float *)&v145 + 1) * *(float *)v136[2].m128i_i32;
    *((_QWORD *)&v126 + 1) = 0x3F80000000000000LL;
    v76 = *((float *)&v145 + 3) * *(float *)&v136[1].m128i_i32[1];
    v125.m256i_i64[3] = 1065353216LL;
    *(float *)&v77 = v73 + v76;
    v78 = *((float *)&v145 + 1) * *(float *)&v136[1].m128i_i32[2];
    v79 = *(float *)&v145 * *(float *)v136[2].m128i_i32;
    v80 = (float)(*(float *)&v145 * *(float *)&v136[1].m128i_i32[2])
        + (float)(*((float *)&v145 + 2) * *(float *)&v136[1].m128i_i32[3]);
    *(float *)&v124 = v74;
    v81 = *((float *)&v145 + 3) * *(float *)&v136[1].m128i_i32[3];
    *(_QWORD *)((char *)&v124 + 4) = v77;
    *(float *)v125.m256i_i32 = v80;
    v82 = v79 + (float)(*((float *)&v145 + 2) * *(float *)&v136[2].m128i_i32[1]);
    *(float *)&v125.m256i_i32[1] = v78 + v81;
    v83 = v75 + (float)(*((float *)&v145 + 3) * *(float *)&v136[2].m128i_i32[1]);
    *(_OWORD *)&v125.m256i_u64[1] = 0LL;
    *(float *)&v126 = v82 + v10;
    v130 = v124;
    v84 = *(_OWORD *)&v125.m256i_u64[2];
    *((float *)&v126 + 1) = v83 + v11;
    v131 = *(_OWORD *)v125.m256i_i8;
    v85 = v126;
  }
  else
  {
    v86 = v136[1].m128i_i32[0];
    v87 = v136[1].m128i_u32[1];
    HIDWORD(v127) = 0;
    LODWORD(v127) = v86;
    v128.m256i_i32[0] = v136[1].m128i_i32[2];
    *(_QWORD *)((char *)&v127 + 4) = v87;
    v88 = v136[1].m128i_i32[3];
    *(_OWORD *)&v128.m256i_u64[1] = 0LL;
    v128.m256i_i64[3] = 1065353216LL;
    v89 = v136[2].m128i_i32[0];
    v128.m256i_i32[1] = v88;
    v90 = v136[2].m128i_u32[1];
    LODWORD(v129) = v89;
    HIDWORD(v129) = 1065353216;
    *(_QWORD *)((char *)&v129 + 4) = v90;
    v130 = v127;
    v84 = *(_OWORD *)&v128.m256i_u64[2];
    v131 = *(_OWORD *)v128.m256i_i8;
    v85 = v129;
  }
  v134 = 0;
  v133 = v85;
  v132 = v84;
  v147 = *v136;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v150, (const struct MilRectF *)&v147);
  v91 = CCpuClip::AddPrimitiveClip((CCpuClip *)&v116, (const struct CShape *)v150, (const struct CMILMatrix *)&v130);
  v22 = v91;
  if ( v91 >= 0 )
  {
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v150);
    goto LABEL_60;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0x169u);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v150);
LABEL_63:
  CShapePtr::Release((CShapePtr *)&v117);
  CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v151);
  return (unsigned int)v22;
}

/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0
 * Callers:
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EDB8 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180174EF0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800237AC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180023AB0 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180031E04 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180035280 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180036D08 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180046C8C (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180046DCC (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?FromD2D1ExtendMode@ExtendMode@@YA?AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z @ 0x180047BC4 (-FromD2D1ExtendMode@ExtendMode@@YA-AW4Enum@1@W4D2D1_EXTEND_MODE@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180048570 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x180048924 (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x180048A10 (--0SamplerMode@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005915C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180063054 (-Insert@CDrawListEntryBuilder@@QEAAJ_NUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800630C8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18007B490 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x1800B6B50 (--8@YA_NAEBURenderTargetInfo@@0@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1800B6F60 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800B6FE8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B9EA4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x18011C834 (-RemovePrimitiveClips@CCpuClip@@QEAAXXZ.c)
 *     ??1?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ @ 0x18011DED0 (--1-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x1801524C4 (-CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MA.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x180152638 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        const struct CVisualTree **a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CDrawListCache *a4)
{
  CPrimitiveGroupDrawListGenerator *v4; // r12
  CDrawListCache *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  int v11; // eax
  CVisual *v12; // rcx
  __int64 v13; // rdi
  int TopCpuClipInScope; // eax
  int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r15
  int v19; // r11d
  int v20; // r13d
  bool v21; // cf
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 (__fastcall ***v25)(__int64, GUID *, __int64 *); // r12
  __int64 v26; // rbx
  __int64 (__fastcall **v27)(__int64, GUID *, __int64 *); // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ecx
  char v32; // al
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rcx
  int v36; // edx
  int v37; // ecx
  char v38; // al
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rcx
  struct CCommonRenderingEffect *v42; // rcx
  struct CObjectCache *ObjectCache; // rax
  char *v44; // rdi
  int v45; // edx
  __int64 v46; // rbx
  __int64 v47; // rbx
  CDrawListBitmap *v48; // rsi
  __int64 v49; // rbx
  SamplerMode *v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int128 *v56; // rsi
  CPrimitiveGroupDrawListGenerator *v57; // r13
  __int128 v58; // xmm6
  int v59; // ecx
  bool v60; // dl
  char v61; // cl
  __m128 *v62; // r9
  __m128 v63; // xmm2
  unsigned int v64; // ecx
  __m128 v65; // xmm3
  __m128 v66; // xmm3
  __m128 v67; // xmm3
  __m128 v68; // xmm3
  unsigned int v69; // eax
  bool v70; // al
  int v71; // eax
  int BuiltHWPrimitiveEntry; // eax
  CMILRefCountBase *v73; // rcx
  void (*v74)(void); // rax
  __int64 v75; // rax
  __int64 (__fastcall *v76)(CMILRefCountBase *); // rax
  int v77; // eax
  unsigned int v79; // ebx
  int v80; // edi
  float v81; // xmm1_4
  float v82; // xmm3_4
  float v83; // xmm4_4
  float v84; // xmm2_4
  float v85; // xmm5_4
  float v86; // xmm6_4
  __m128 v87; // xmm0
  __m128 v88; // xmm1
  __m128 v89; // xmm0
  __m128 v90; // xmm1
  __m128 v91; // xmm1
  __m128 v92; // xmm1
  __int128 v93; // xmm0
  int v94; // eax
  __int64 v95; // rdx
  float v96; // xmm1_4
  bool v97; // bl
  bool v98[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v99; // [rsp+3Ch] [rbp-CCh]
  int v100; // [rsp+40h] [rbp-C8h]
  __int16 v101; // [rsp+44h] [rbp-C4h]
  __int16 v102; // [rsp+48h] [rbp-C0h]
  __int128 v103; // [rsp+50h] [rbp-B8h] BYREF
  int v104; // [rsp+60h] [rbp-A8h]
  __int64 v105; // [rsp+68h] [rbp-A0h]
  __int64 v106; // [rsp+70h] [rbp-98h] BYREF
  __int64 v107; // [rsp+78h] [rbp-90h]
  __int128 v108; // [rsp+80h] [rbp-88h] BYREF
  char v109; // [rsp+90h] [rbp-78h]
  char *v110; // [rsp+98h] [rbp-70h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-68h]
  CPrimitiveGroupDrawListGenerator *v112; // [rsp+A8h] [rbp-60h]
  int v113; // [rsp+B0h] [rbp-58h] BYREF
  float v114; // [rsp+B4h] [rbp-54h] BYREF
  float v115; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v116; // [rsp+BCh] [rbp-4Ch]
  __int128 *v117; // [rsp+C0h] [rbp-48h]
  int v118; // [rsp+C8h] [rbp-40h]
  char v119; // [rsp+CCh] [rbp-3Ch]
  __int128 v120; // [rsp+D0h] [rbp-38h] BYREF
  void (__fastcall ***v121)(_QWORD, __int64); // [rsp+E0h] [rbp-28h]
  char v122; // [rsp+E8h] [rbp-20h]
  char v123; // [rsp+F0h] [rbp-18h]
  __int64 v124; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v125; // [rsp+100h] [rbp-8h] BYREF
  BOOL v126; // [rsp+108h] [rbp+0h]
  __int128 v127; // [rsp+110h] [rbp+8h]
  __int64 v128; // [rsp+120h] [rbp+18h]
  __m128 v129; // [rsp+128h] [rbp+20h]
  __m256i v130; // [rsp+138h] [rbp+30h]
  _BYTE v131[20]; // [rsp+158h] [rbp+50h]
  struct CShape *v132; // [rsp+170h] [rbp+68h] BYREF
  struct CDrawListCache *v133; // [rsp+178h] [rbp+70h]
  __m128 v134; // [rsp+180h] [rbp+78h]
  __int128 v135; // [rsp+190h] [rbp+88h]
  char v136[8]; // [rsp+1A0h] [rbp+98h] BYREF
  float *v137; // [rsp+1A8h] [rbp+A0h]
  __int128 *v138; // [rsp+1B0h] [rbp+A8h]
  unsigned int v139; // [rsp+1B8h] [rbp+B0h]
  float v140[20]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v141; // [rsp+218h] [rbp+110h] BYREF
  __int64 v142; // [rsp+228h] [rbp+120h]
  __m128 v143; // [rsp+238h] [rbp+130h] BYREF
  __m128 v144; // [rsp+248h] [rbp+140h]
  __int128 v145; // [rsp+258h] [rbp+150h]
  __m128 v146; // [rsp+268h] [rbp+160h]
  int v147; // [rsp+278h] [rbp+170h]
  __m128 v148; // [rsp+288h] [rbp+180h] BYREF
  __int64 v149; // [rsp+2A0h] [rbp+198h]
  __int128 v150; // [rsp+2A8h] [rbp+1A0h]
  __int128 v151; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v152[16]; // [rsp+2C8h] [rbp+1C0h] BYREF
  char v153[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v154[64]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v155[32]; // [rsp+328h] [rbp+220h] BYREF
  CMILRefCountBase *v156; // [rsp+348h] [rbp+240h]
  struct CDrawListEntry **v157; // [rsp+350h] [rbp+248h]
  unsigned int v158; // [rsp+368h] [rbp+260h]
  int v159; // [rsp+390h] [rbp+288h]
  _DWORD v160[9]; // [rsp+CD8h] [rbp+BD0h] BYREF
  __int128 v161; // [rsp+CFCh] [rbp+BF4h]
  _DWORD v162[9]; // [rsp+D0Ch] [rbp+C04h] BYREF
  __int128 v163; // [rsp+D30h] [rbp+C28h]

  v4 = this;
  v112 = this;
  v6 = a4;
  v133 = a4;
  memset_0(&v113, 0, 0x20uLL);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v155);
  v121 = 0LL;
  v122 = 0;
  v120 = 0LL;
  v123 = 0;
  v140[16] = 0.0;
  if ( !(unsigned __int8)operator==((char *)v4 + 48, a2 + 49) )
  {
    v15 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304315, 0x144u);
    goto LABEL_100;
  }
  ++dword_18026EDE0;
  CDrawListCache::Invalidate(v6);
  if ( !CDrawingContext::IsWarpFastPathEnabled((CDrawingContext *)a2)
    || !CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(v4)
    || (v10 = 1, v98[0] = 1, *((_DWORD *)a2 + 65) == 4) )
  {
LABEL_3:
    v10 = 0;
    v98[0] = 0;
    goto LABEL_4;
  }
  v79 = 0;
  v80 = *(_DWORD *)((*(__int64 (__fastcall **)(const struct CVisualTree *, char *))(*(_QWORD *)a2[45] + 24LL))(
                      a2[45],
                      v152)
                  + 8);
  if ( *((_DWORD *)v4 + 20) )
  {
    while ( *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo(*((_QWORD *)v4 + 15) + 24LL * v79, v153) + 8) == v80 )
    {
      if ( ++v79 >= *((_DWORD *)v4 + 20) )
        goto LABEL_4;
    }
    goto LABEL_3;
  }
LABEL_4:
  v11 = *((_DWORD *)a2 + 63);
  v100 = 0;
  if ( v11 == 1 )
  {
    v100 = 1;
    goto LABEL_6;
  }
  if ( v11 >= 1 )
  {
    if ( v11 <= 3 )
    {
      v100 = 2;
    }
    else
    {
      if ( v11 == 4 )
      {
LABEL_121:
        v100 = 3;
        goto LABEL_6;
      }
      if ( v11 != 5 )
      {
        if ( v11 != 6 )
          goto LABEL_6;
        goto LABEL_121;
      }
      v100 = 4;
    }
  }
LABEL_6:
  if ( *((_DWORD *)a2 + 120) )
    CWatermarkStack<CMILMatrix,8,2,8>::Top(a2 + 60, v140, v8, v9);
  else
    CMILMatrix::operator=(v140, v7, v8, v9);
  if ( !v10 )
  {
    if ( *((_BYTE *)a2[126] + 80 * (unsigned int)(*((_DWORD *)a2 + 258) - 1)) )
    {
      v12 = 0LL;
      if ( *((_BYTE *)a2 + 6520) )
      {
        if ( *((_BYTE *)a2 + 6521) )
          v12 = a2[395];
        else
          v12 = (CVisual *)*((_QWORD *)a2[816] + 3);
      }
      v13 = *((_QWORD *)CVisual::FindTreeData(v12, a2[816]) + 19);
      TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope((CScopedClipStack *)(a2 + 126), &v132);
      v15 = TopCpuClipInScope;
      if ( TopCpuClipInScope < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TopCpuClipInScope, 0x351u);
LABEL_17:
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x17Cu);
          goto LABEL_100;
        }
        goto LABEL_18;
      }
      if ( v122 && v121 )
        (**v121)(v121, 1LL);
      *(_QWORD *)&v120 = v132;
      v121 = 0LL;
      v122 = 0;
      v123 = 0;
      *((_QWORD *)&v120 + 1) = v13;
    }
    v15 = 0;
    goto LABEL_17;
  }
LABEL_18:
  v113 = 2;
  v116 = *((_DWORD *)a2 + 64) != 0;
  v117 = &v120;
  v119 = 1;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v140, &v114, &v115);
  v16 = *((_QWORD *)v4 + 3);
  v17 = 0;
  LODWORD(v105) = 0;
  if ( !*(_DWORD *)(v16 + 8) )
  {
LABEL_98:
    v77 = CDrawListCache::Update(
            v6,
            *((_QWORD *)a2[4] + 45),
            v157,
            v158,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 64) != 0),
            v159 != 0);
    v15 = v77;
    if ( v77 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x263u);
    goto LABEL_100;
  }
  v126 = v116;
  while ( 1 )
  {
    v18 = *(_QWORD *)v16 + 144LL * v17;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)v4, (__int64)v136, v17);
    v20 = 32;
    v118 = 32;
    if ( (*(_BYTE *)(v18 + 4) & 0x20) == 0 )
      break;
    CCpuClip::RemovePrimitiveClips((CCpuClip *)&v120);
    *(_QWORD *)&v131[12] = 1065353216LL;
    *(_OWORD *)&v130.m256i_u64[1] = 0LL;
    v130.m256i_i64[3] = 1065353216LL;
    v147 = 0;
    v81 = v137[4];
    v82 = v137[6];
    v83 = v137[7];
    v84 = v137[5];
    v85 = v137[8];
    v86 = v137[9];
    v87 = (__m128)v129.m128_u64[0];
    *(_DWORD *)&v131[8] = 0;
    v147 = 0;
    v87.m128_f32[0] = v81;
    v88 = *(__m128 *)v130.m256i_i8;
    v89 = _mm_shuffle_ps(v87, v87, 225);
    v88.m128_f32[0] = v82;
    v89.m128_f32[0] = v84;
    v90 = _mm_shuffle_ps(v88, v88, 225);
    v90.m128_f32[0] = v83;
    v144 = _mm_shuffle_ps(v90, v90, 225);
    *(__m128 *)v130.m256i_i8 = v144;
    v91 = *(__m128 *)v131;
    v129 = _mm_shuffle_ps(v89, v89, 225);
    v91.m128_f32[0] = v85;
    v143 = v129;
    v92 = _mm_shuffle_ps(v91, v91, 225);
    v92.m128_f32[0] = v86;
    v145 = *(_OWORD *)&v130.m256i_u64[2];
    v146 = _mm_shuffle_ps(v92, v92, 225);
    v93 = *(_OWORD *)v137;
    *(__m128 *)v131 = v146;
    v151 = v93;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v154, (const struct MilRectF *)&v151);
    v94 = CCpuClip::AddPrimitiveClip((CCpuClip *)&v120, (const struct CShape *)v154, (const struct CMILMatrix *)&v143);
    v15 = v94;
    if ( v94 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, 0x1A4u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v154);
      goto LABEL_100;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v154);
LABEL_96:
    v16 = *((_QWORD *)v4 + 3);
    v17 = v105 + 1;
    LODWORD(v105) = v17;
    if ( v17 >= *(_DWORD *)(v16 + 8) )
    {
      v6 = v133;
      goto LABEL_98;
    }
  }
  if ( !(_QWORD)v120 && !v121 || v19 )
    goto LABEL_23;
  if ( CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v120) )
  {
    if ( (LOBYTE(v95) = 1, (unsigned __int8)CMILMatrix::Is2DAffine<1>(v140, v95))
      && (v96 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v140[1] - 0.0)) & _xmm), v96 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v140[4] - 0.0)) & _xmm) < 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v140[0] - 0.0)) & _xmm) < 0.000081380211
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v140[5] - 0.0)) & _xmm) < 0.000081380211 )
    {
      v20 = 96;
      v118 = 96;
LABEL_23:
      v119 = 0;
      goto LABEL_24;
    }
  }
  v119 = 1;
LABEL_24:
  v21 = *(_DWORD *)v18 == 0;
  v103 = 0LL;
  v98[2] = 0;
  LOBYTE(v104) = 0;
  v108 = 0LL;
  v109 = 0;
  if ( v21 )
  {
    v111 = *((_QWORD *)&v103 + 1);
    v25 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v103;
  }
  else
  {
    v22 = *(unsigned int *)(v18 + 40);
    if ( (unsigned int)v22 >= *((_DWORD *)v4 + 20) )
    {
      v111 = *((_QWORD *)&v103 + 1);
      v25 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v103;
    }
    else
    {
      v23 = *((_QWORD *)v4 + 15);
      v24 = 3 * v22;
      v25 = *(__int64 (__fastcall ****)(__int64, GUID *, __int64 *))(v23 + 24 * v22);
      if ( v25 )
      {
        ((void (__fastcall *)(_QWORD))(*v25)[1])(*(_QWORD *)(v23 + 24 * v22));
        *(_QWORD *)&v103 = v25;
      }
      else
      {
        v25 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v103;
      }
      v26 = *(_QWORD *)(v23 + 8 * v24 + 8);
      v111 = v26;
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        *((_QWORD *)&v103 + 1) = v26;
      }
      else
      {
        v111 = *((_QWORD *)&v103 + 1);
      }
      v98[2] = *(_BYTE *)(v23 + 8 * v24 + 16);
      LOBYTE(v104) = v98[2];
      v106 = 0LL;
      v27 = *v25;
      v98[1] = 0;
      v28 = (*v27)((__int64)v25, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v106);
      v29 = v106;
      if ( v28 >= 0 )
      {
        v98[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v106 + 96LL))(v106);
        v97 = v98[1];
        Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>(&v106);
        v20 |= 0x10u;
        v118 = v20;
        if ( v97 )
        {
          v20 |= 0x80u;
          v118 = v20;
        }
      }
      else if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    v30 = *(unsigned int *)(v18 + 56);
    if ( (unsigned int)v30 < *((_DWORD *)v112 + 24) )
    {
      CDrawListBitmap::operator=(&v108, *((_QWORD *)v112 + 16) + 24 * v30);
      if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v108, &v98[1]) )
      {
        v20 |= 0x10u;
        v118 = v20;
        if ( v98[1] )
        {
          v20 |= 0x80u;
          v118 = v20;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v18 + 4) & 0x10) != 0 )
    v118 = v20 | 1;
  if ( v100 )
    v31 = *(_DWORD *)(v18 + 44);
  else
    v31 = 0;
  v32 = InterpolationMode::FromD2D1InterpolationMode(v31);
  v33 = *(unsigned int *)(v18 + 48);
  LOBYTE(v101) = v32;
  v34 = ExtendMode::FromD2D1ExtendMode(v33);
  v35 = *(unsigned int *)(v18 + 52);
  HIBYTE(v101) = v34;
  v98[3] = ExtendMode::FromD2D1ExtendMode(v35);
  if ( v36 )
    v37 = *(_DWORD *)(v18 + 60);
  else
    v37 = 0;
  v38 = InterpolationMode::FromD2D1InterpolationMode(v37);
  v39 = *(unsigned int *)(v18 + 64);
  LOBYTE(v102) = v38;
  v40 = ExtendMode::FromD2D1ExtendMode(v39);
  v41 = *(unsigned int *)(v18 + 68);
  HIBYTE(v102) = v40;
  LOBYTE(v99) = ExtendMode::FromD2D1ExtendMode(v41);
  ObjectCache = CThreadContext::GetObjectCache(v42);
  v44 = 0LL;
  v45 = *((_DWORD *)ObjectCache + 1);
  if ( v45 )
  {
    v44 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v44;
    *((_DWORD *)ObjectCache + 1) = v45 - 1;
  }
  v46 = v108;
  v107 = v108;
  if ( v44 || (v44 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    v47 = 2LL;
    *(_QWORD *)v44 = &CMILRefCountBase::`vftable';
    v48 = (CDrawListBitmap *)(v44 + 16);
    *((_DWORD *)v44 + 2) = 0;
    *(_QWORD *)v44 = &CCommonRenderingEffect::`vftable';
    do
    {
      CDrawListBitmap::CDrawListBitmap(v48);
      v48 = (CDrawListBitmap *)((char *)v48 + 24);
      --v47;
    }
    while ( v47 );
    v49 = 2LL;
    v50 = (SamplerMode *)(v44 + 64);
    do
    {
      SamplerMode::SamplerMode(v50);
      v50 = (SamplerMode *)((char *)v50 + 3);
      --v49;
    }
    while ( v49 );
    if ( *((__int64 (__fastcall ****)(__int64, GUID *, __int64 *))v44 + 2) != v25 )
    {
      if ( v25 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[1])(v25);
      v51 = *((_QWORD *)v44 + 2);
      *((_QWORD *)v44 + 2) = v25;
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v52 = v111;
    if ( *((_QWORD *)v44 + 3) != v111 )
    {
      if ( v111 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 8LL))(v111);
      v53 = *((_QWORD *)v44 + 3);
      *((_QWORD *)v44 + 3) = v52;
      if ( v53 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v107;
    v44[32] = v98[2];
    if ( *((_QWORD *)v44 + 5) != v54 )
    {
      v124 = v54;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v124);
      v124 = *((_QWORD *)v44 + 5);
      *((_QWORD *)v44 + 5) = v54;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v124);
    }
    v55 = *((_QWORD *)&v108 + 1);
    if ( *((_QWORD *)v44 + 6) != *((_QWORD *)&v108 + 1) )
    {
      v125 = *((_QWORD *)&v108 + 1);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v125);
      v125 = *((_QWORD *)v44 + 6);
      *((_QWORD *)v44 + 6) = v55;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v125);
    }
    v46 = v107;
    v44[56] = v109;
    *((_WORD *)v44 + 32) = v101;
    v44[66] = v98[3];
    *(_WORD *)(v44 + 67) = v102;
    v44[69] = v99;
  }
  else
  {
    v44 = 0LL;
  }
  v110 = v44;
  if ( v44 )
  {
    (**(void (__fastcall ***)(LPVOID))v44)(v44);
    CDrawListEntryBuilder::Begin(
      (CDrawListEntryBuilder *)v155,
      (const struct DrawListEntryBuilderSetupParams *)&v113,
      (struct CRenderingEffect *)v44);
    v56 = (__int128 *)v137;
    v57 = v112;
    while ( 1 )
    {
      v58 = *v56;
      v59 = *(_DWORD *)(v18 + 4);
      v128 = 0LL;
      LODWORD(v128) = *((_DWORD *)v56 + 11);
      v127 = v58;
      v60 = (v59 & 2) == 0;
      if ( (v59 & 1) != 0 )
        v61 = 0;
      else
        v61 = 2;
      BYTE4(v128) = v61 | v60 & 0xFD | BYTE4(v128) & 0xFC;
      memset_0(&v148, 0, 0x20uLL);
      v150 = 0LL;
      memset_0(v160, 0, 0x68uLL);
      v62 = 0LL;
      if ( *(_DWORD *)v18 )
      {
        v63 = (__m128)*((unsigned int *)v56 + 15);
        v64 = 7;
        v65 = v63;
        v65.m128_f32[0] = v63.m128_f32[0] * *((float *)v56 + 12);
        v66 = _mm_shuffle_ps(v65, v65, 225);
        v66.m128_f32[0] = *((float *)v56 + 15) * *((float *)v56 + 13);
        v67 = _mm_shuffle_ps(v66, v66, 198);
        v67.m128_f32[0] = *((float *)v56 + 15) * *((float *)v56 + 14);
        v68 = _mm_shuffle_ps(v67, v67, 39);
        v68.m128_f32[0] = v63.m128_f32[0];
        v148 = _mm_shuffle_ps(v68, v68, 57);
        v69 = *((_DWORD *)v56 + 36);
        v134 = v148;
        if ( v69 < 7 )
          v64 = v69;
        if ( v64 < *(_DWORD *)(v18 + 12) )
          v149 = *(_QWORD *)(*((_QWORD *)v57 + 13) + 8LL * (*(_DWORD *)(v18 + 8) + v64));
        v70 = v98[0];
        if ( v25 )
        {
          if ( v98[0] )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v103,
              (const struct D2D_MATRIX_3X2_F *)(v56 + 4),
              (struct Matrix3x3 *)v160);
            v70 = v98[0];
            v25 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v103;
          }
          else
          {
            v160[0] = *((_DWORD *)v56 + 16);
            v160[1] = *((_DWORD *)v56 + 17);
            v160[2] = 0;
            v160[3] = *((_DWORD *)v56 + 18);
            v160[4] = *((_DWORD *)v56 + 19);
            v160[5] = 0;
            v160[6] = *((_DWORD *)v56 + 20);
            v160[7] = *((_DWORD *)v56 + 21);
            v160[8] = 1065353216;
          }
          v161 = *(__int128 *)((char *)v56 + 88);
        }
        if ( v46 )
        {
          if ( v70 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v108,
              (const struct D2D_MATRIX_3X2_F *)((char *)v56 + 104),
              (struct Matrix3x3 *)v162);
            v107 = v108;
          }
          else
          {
            v162[0] = *((_DWORD *)v56 + 26);
            v162[1] = *((_DWORD *)v56 + 27);
            v162[2] = 0;
            v162[3] = *((_DWORD *)v56 + 28);
            v162[4] = *((_DWORD *)v56 + 29);
            v162[5] = 0;
            v162[6] = *((_DWORD *)v56 + 30);
            v162[7] = *((_DWORD *)v56 + 31);
            v162[8] = 1065353216;
          }
          v163 = v56[8];
        }
        *((_QWORD *)&v135 + 1) = 2LL;
        *(_QWORD *)&v135 = v160;
        v62 = &v148;
        v150 = v135;
      }
      v142 = v128;
      v141 = v58;
      v71 = CDrawListEntryBuilder::Insert(v155, v98[0], &v141, v62, v56 + 1);
      v15 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x25Cu);
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v110);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v108 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v108);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103 + 1);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103);
        goto LABEL_100;
      }
      if ( v56 == v138 )
        break;
      v46 = v107;
      v56 = (__int128 *)((char *)v56 + v139);
    }
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (CDrawListEntryBuilder *)v155,
                              0,
                              0LL,
                              0LL);
    v15 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2F4u);
    v73 = v156;
    if ( v156 )
    {
      v156 = 0LL;
      v74 = *(void (**)(void))(*(_QWORD *)v73 + 8LL);
      if ( (char *)v74 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v73);
      else
        v74();
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x260u);
      goto LABEL_162;
    }
    v75 = *(_QWORD *)v44;
    v110 = 0LL;
    v76 = *(__int64 (__fastcall **)(CMILRefCountBase *))(v75 + 8);
    if ( v76 == CMILRefCountBase::Release )
      CMILRefCountBase::Release((CMILRefCountBase *)v44);
    else
      v76((CMILRefCountBase *)v44);
    if ( *((_QWORD *)&v108 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v108 + 1) + 16LL))(*((_QWORD *)&v108 + 1));
    if ( v107 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
    if ( *((_QWORD *)&v103 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v103 + 1) + 16LL))(*((_QWORD *)&v103 + 1));
    if ( v25 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
    v4 = v112;
    goto LABEL_96;
  }
  v15 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1FEu);
LABEL_162:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v110);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v108 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v108);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v103);
LABEL_100:
  if ( v122 && v121 )
    (**v121)(v121, 1LL);
  v121 = 0LL;
  v122 = 0;
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v155);
  return (unsigned int)v15;
}

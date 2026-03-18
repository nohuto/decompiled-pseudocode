/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00
 * Callers:
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180097330 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z @ 0x18000611C (-IsSwapChain@CDrawListBitmap@@QEBA_NPEA_N@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800062D0 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019094 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18006320C (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800673E8 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180073054 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007314C (--0SamplerMode@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180077350 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180089E50 (-InternalAddRef@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Update@CDrawListCache@@AEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009BCB8 (-Update@CDrawListCache@@AEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18009BE3C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF0D0 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800AF2E8 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B8610 (-GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x1800BF5B8 (--8@YA_NAEBURenderTargetInfo@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1E10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x18013F5A4 (-RemovePrimitiveClips@CCpuClip@@QEAAXXZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18017B440 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18017B50C (-CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MA.c)
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18017B5EC (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::GenerateDrawList(
        CPrimitiveGroupDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CDrawListCache *a4)
{
  CPrimitiveGroupDrawListGenerator *v5; // r12
  struct CDrawListCache *v6; // rsi
  char v7; // r14
  int v8; // eax
  CMatrixStack *v9; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  CVisual *v16; // rcx
  __int64 v17; // rbx
  struct _LIST_ENTRY *v18; // r11
  struct _LIST_ENTRY *Blink; // rbx
  int TopCpuClipInScope; // eax
  int v21; // edi
  BOOL v22; // ebx
  float v23; // xmm6_4
  float v24; // xmm0_4
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // r13
  int v28; // r14d
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 (__fastcall ***v33)(__int64, GUID *, __int64 *); // r12
  __int64 v34; // rsi
  __int64 (__fastcall **v35)(__int64, GUID *, __int64 *); // rax
  int v36; // eax
  __int64 v37; // rcx
  CPrimitiveGroupDrawListGenerator *v38; // rdi
  __int64 v39; // rax
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  char v43; // cl
  char v44; // al
  int v45; // edx
  int v46; // ecx
  int v47; // ecx
  char v48; // cl
  char v49; // al
  int Current; // eax
  struct CThreadContext *v51; // rcx
  char *v52; // rbx
  int v53; // edx
  __int64 v54; // r14
  __int64 v55; // rdi
  CDrawListBitmap *v56; // rsi
  __int64 v57; // rdi
  SamplerMode *v58; // rsi
  __int64 (__fastcall ***v59)(__int64, GUID *, __int64 *); // rcx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rdi
  float *i; // rsi
  __m128 v64; // xmm6
  const struct PrimitiveVertexAttributesDesc *v65; // r8
  __m128 v66; // xmm2
  unsigned int v67; // ecx
  __m128 v68; // xmm3
  __m128 v69; // xmm3
  __m128 v70; // xmm3
  __m128 v71; // xmm3
  unsigned int v72; // eax
  bool v73; // cl
  const struct D2D_MATRIX_3X2_F *v74; // r9
  int v75; // eax
  int BuiltHWPrimitiveEntry; // eax
  CMILRefCountBase *v77; // rcx
  void (*v78)(void); // rax
  __int64 v79; // rax
  __int64 (__fastcall *v80)(CMILRefCountBase *); // rax
  unsigned int v81; // eax
  unsigned int v82; // ebx
  struct CDrawListEntry **v83; // r14
  CMILRefCountBase *v84; // rcx
  void (*v85)(void); // rax
  CMILRefCountBase *v86; // rcx
  CMILRefCountBase *v87; // rcx
  __int64 v88; // rcx
  _DWORD *v89; // rbx
  _QWORD *v90; // rsi
  void *v91; // r8
  void *v92; // r8
  void *v93; // r8
  void *v94; // r8
  void *v95; // r8
  void *v96; // r8
  void *v97; // r8
  void *v98; // r8
  CMILRefCountBase *v99; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v103; // rbx
  int v104; // edi
  float v105; // xmm1_4
  float v106; // xmm3_4
  float v107; // xmm4_4
  float v108; // xmm2_4
  float v109; // xmm5_4
  float v110; // xmm6_4
  __m128 v111; // xmm0
  __m128 v112; // xmm1
  __m128 v113; // xmm0
  __m128 v114; // xmm1
  __m128 v115; // xmm1
  __m128 v116; // xmm1
  __int128 v117; // xmm0
  int v118; // eax
  bool v119; // bl
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  int inserted; // eax
  bool v125[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v126; // [rsp+3Ch] [rbp-CCh]
  int v127; // [rsp+40h] [rbp-C8h]
  __int16 v128; // [rsp+44h] [rbp-C4h]
  __int64 v129; // [rsp+48h] [rbp-C0h]
  CPrimitiveGroupDrawListGenerator *v130; // [rsp+50h] [rbp-B8h]
  __int128 v131; // [rsp+58h] [rbp-B0h] BYREF
  int v132; // [rsp+68h] [rbp-A0h]
  __int64 v133; // [rsp+70h] [rbp-98h]
  __int64 v134; // [rsp+78h] [rbp-90h] BYREF
  __int128 v135; // [rsp+80h] [rbp-88h] BYREF
  char v136; // [rsp+90h] [rbp-78h]
  __int64 v137; // [rsp+98h] [rbp-70h]
  char *v138; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v139[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 *v140; // [rsp+B8h] [rbp-50h]
  int v141; // [rsp+C0h] [rbp-48h]
  char v142; // [rsp+C4h] [rbp-44h]
  __int128 v143; // [rsp+C8h] [rbp-40h] BYREF
  void (__fastcall ***v144)(_QWORD, __int64); // [rsp+D8h] [rbp-30h]
  char j; // [rsp+E0h] [rbp-28h]
  char v146; // [rsp+E8h] [rbp-20h]
  __int64 v147; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-10h] BYREF
  __m128 v149; // [rsp+100h] [rbp-8h]
  __int64 v150; // [rsp+110h] [rbp+8h]
  __m128 v151; // [rsp+118h] [rbp+10h]
  __m256i v152; // [rsp+128h] [rbp+20h]
  _BYTE v153[20]; // [rsp+148h] [rbp+40h]
  __m128 v154; // [rsp+160h] [rbp+58h]
  struct CThreadContext *v155; // [rsp+170h] [rbp+68h] BYREF
  __int64 v156; // [rsp+178h] [rbp+70h]
  struct CDrawListCache *v157; // [rsp+180h] [rbp+78h]
  struct CShape *v158; // [rsp+188h] [rbp+80h] BYREF
  __int128 v159; // [rsp+198h] [rbp+90h] BYREF
  __int128 v160; // [rsp+1A8h] [rbp+A0h]
  __int128 v161; // [rsp+1B8h] [rbp+B0h]
  __int128 v162; // [rsp+1C8h] [rbp+C0h]
  int v163; // [rsp+1D8h] [rbp+D0h]
  __int128 v164; // [rsp+1E8h] [rbp+E0h]
  char v165[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  float *v166; // [rsp+200h] [rbp+F8h]
  float *v167; // [rsp+208h] [rbp+100h]
  unsigned int v168; // [rsp+210h] [rbp+108h]
  __m128 v169; // [rsp+218h] [rbp+110h] BYREF
  __int64 v170; // [rsp+228h] [rbp+120h]
  __m128 v171; // [rsp+238h] [rbp+130h] BYREF
  __int64 v172; // [rsp+248h] [rbp+140h]
  __m128 v173; // [rsp+258h] [rbp+150h] BYREF
  __m128 v174; // [rsp+268h] [rbp+160h]
  __int128 v175; // [rsp+278h] [rbp+170h]
  __m128 v176; // [rsp+288h] [rbp+180h]
  int v177; // [rsp+298h] [rbp+190h]
  _BYTE v178[64]; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v179; // [rsp+2E8h] [rbp+1E0h]
  __m128 v180; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v181; // [rsp+310h] [rbp+208h]
  __int128 v182; // [rsp+318h] [rbp+210h]
  _OWORD v183[2]; // [rsp+328h] [rbp+220h] BYREF
  unsigned __int64 v184; // [rsp+348h] [rbp+240h]
  char v185[16]; // [rsp+350h] [rbp+248h] BYREF
  char v186[24]; // [rsp+360h] [rbp+258h] BYREF
  _BYTE v187[80]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v188[32]; // [rsp+3C8h] [rbp+2C0h] BYREF
  CMILRefCountBase *v189; // [rsp+3E8h] [rbp+2E0h]
  struct CDrawListEntry **v190; // [rsp+3F0h] [rbp+2E8h]
  struct CDrawListEntry **v191; // [rsp+3F8h] [rbp+2F0h]
  unsigned int v192; // [rsp+408h] [rbp+300h]
  int v193; // [rsp+430h] [rbp+328h]
  void *v194; // [rsp+438h] [rbp+330h]
  void *v195; // [rsp+440h] [rbp+338h]
  int v196; // [rsp+450h] [rbp+348h]
  LPVOID lpMem; // [rsp+4C8h] [rbp+3C0h]
  int v198; // [rsp+4E0h] [rbp+3D8h]
  void *v199; // [rsp+4E8h] [rbp+3E0h]
  __int64 v200; // [rsp+4F0h] [rbp+3E8h]
  void *v201; // [rsp+4F8h] [rbp+3F0h]
  __int64 v202; // [rsp+508h] [rbp+400h]
  int v203; // [rsp+510h] [rbp+408h]
  char v204; // [rsp+524h] [rbp+41Ch]
  __int64 v205; // [rsp+528h] [rbp+420h]
  void *v206; // [rsp+530h] [rbp+428h]
  void *v207; // [rsp+538h] [rbp+430h]
  void *v208; // [rsp+910h] [rbp+808h]
  void *v209; // [rsp+918h] [rbp+810h]
  void *v210; // [rsp+CF8h] [rbp+BF0h]
  void *v211; // [rsp+D00h] [rbp+BF8h]
  CMILRefCountBase *v212; // [rsp+D60h] [rbp+C58h]
  _DWORD v213[9]; // [rsp+D78h] [rbp+C70h] BYREF
  __int128 v214; // [rsp+D9Ch] [rbp+C94h]
  _DWORD v215[9]; // [rsp+DACh] [rbp+CA4h] BYREF
  __int128 v216; // [rsp+DD0h] [rbp+CC8h]
  void *retaddr; // [rsp+E50h] [rbp+D48h]

  v130 = this;
  v157 = a4;
  v5 = this;
  v6 = a4;
  memset_0(v139, 0, 0x20uLL);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v188);
  v7 = 0;
  v144 = 0LL;
  j = 0;
  v143 = 0LL;
  v146 = 0;
  v163 = 0;
  if ( !(unsigned __int8)operator==((char *)v5 + 40, (char *)a2 + 392) )
  {
    v21 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304315, 0x140u);
    goto LABEL_121;
  }
  ++dword_1802D6320;
  if ( *((_QWORD *)v6 + 3) )
  {
    if ( *((_DWORD *)v6 + 4) == 1 )
    {
      ++dword_1802D6340;
    }
    else if ( *((_DWORD *)v6 + 4) == 2 )
    {
      ++dword_1802D634C;
    }
    *((_QWORD *)v6 + 3) = 0LL;
    *((_DWORD *)v6 + 4) = 0;
    CDrawListCache::ReleaseDrawListEntries(v6);
    *((_BYTE *)v6 + 108) = 0;
  }
  if ( !CDrawingContext::IsWarpFastPathEnabled(a2) || !CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(v5) )
    goto LABEL_4;
  v7 = 1;
  v125[0] = 1;
  if ( *((_DWORD *)a2 + 65) == 4 )
  {
LABEL_213:
    v7 = 0;
LABEL_4:
    v125[0] = 0;
    goto LABEL_5;
  }
  v103 = 0LL;
  v104 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)a2 + 45) + 24LL))(
                       *((_QWORD *)a2 + 45),
                       v185)
                   + 8);
  if ( *((_DWORD *)v5 + 16) )
  {
    while ( *(_DWORD *)(CBitmapSourceD2DCacheAdapter::GetPixelFormatInfo(*((_QWORD *)v5 + 14) + 24 * v103, v186) + 8) == v104 )
    {
      v103 = (unsigned int)(v103 + 1);
      if ( (unsigned int)v103 >= *((_DWORD *)v5 + 16) )
        goto LABEL_5;
    }
    goto LABEL_213;
  }
LABEL_5:
  v8 = *((_DWORD *)a2 + 63);
  v127 = 0;
  if ( v8 >= 1 )
  {
    switch ( v8 )
    {
      case 1:
        v127 = 1;
        break;
      case 2:
      case 3:
        v127 = 2;
        break;
      case 4:
      case 6:
        v127 = 3;
        break;
      case 5:
        v127 = 4;
        break;
      default:
        break;
    }
  }
  v9 = (struct CDrawingContext *)((char *)a2 + 480);
  v10 = *((_DWORD *)a2 + 120);
  if ( v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    v12 = *((_QWORD *)a2 + 62);
    v13 = *(_OWORD *)(68 * v11 + v12 + 16);
    v159 = *(_OWORD *)(68 * v11 + v12);
    v14 = *(_OWORD *)(68 * v11 + v12 + 32);
    v160 = v13;
    v15 = *(_OWORD *)(68 * v11 + v12 + 48);
    LODWORD(v12) = *(_DWORD *)(68 * v11 + v12 + 64);
    v161 = v14;
    v162 = v15;
    v163 = v12;
  }
  else
  {
    v159 = _xmm;
    LOWORD(v163) = 32085;
    v160 = _xmm;
    v161 = _xmm;
    v162 = _xmm;
  }
  v183[1] = _xmm;
  v184 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  if ( v7 )
    goto LABEL_20;
  if ( !*(_BYTE *)(*((_QWORD *)a2 + 126) + 80LL * (unsigned int)(*((_DWORD *)a2 + 258) - 1)) )
    goto LABEL_18;
  v16 = 0LL;
  if ( *((_BYTE *)a2 + 6520) )
  {
    if ( *((_BYTE *)a2 + 6521) )
      v16 = (CVisual *)*((_QWORD *)a2 + 395);
    else
      v16 = *(CVisual **)(*((_QWORD *)a2 + 816) + 24LL);
  }
  v17 = *((_QWORD *)a2 + 816);
  if ( *(_BYTE *)(v17 + 32) )
  {
    v18 = (struct _LIST_ENTRY *)((char *)v16 + 288);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v16);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)v17 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_15;
        }
        v18 = Flink - 14;
      }
    }
  }
LABEL_15:
  Blink = v18[9].Blink;
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope((struct CDrawingContext *)((char *)a2 + 1008), &v158);
  v21 = TopCpuClipInScope;
  if ( TopCpuClipInScope >= 0 )
  {
    if ( j && v144 )
      (**v144)(v144, 1LL);
    *(_QWORD *)&v143 = v158;
    v144 = 0LL;
    j = 0;
    v146 = 0;
    *((_QWORD *)&v143 + 1) = Blink;
LABEL_18:
    v21 = 0;
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TopCpuClipInScope, 0x344u);
LABEL_19:
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x178u);
    goto LABEL_121;
  }
LABEL_20:
  v22 = *((_DWORD *)a2 + 64) != 0;
  v139[0] = 2;
  v133 = v22;
  v139[3] = v22;
  v140 = &v143;
  v142 = 1;
  v23 = sqrtf_0((float)(*(float *)&v159 * *(float *)&v159) + (float)(*((float *)&v159 + 1) * *((float *)&v159 + 1)));
  v24 = sqrtf_0((float)(*(float *)&v160 * *(float *)&v160) + (float)(*((float *)&v160 + 1) * *((float *)&v160 + 1)));
  v25 = *((_QWORD *)v5 + 3);
  v26 = 0;
  *(float *)&v139[1] = v23;
  *(float *)&v139[2] = v24;
  if ( !*(_DWORD *)(v25 + 8) )
  {
LABEL_116:
    v21 = CDrawListCache::Update(
            v6,
            *(_QWORD *)(*((_QWORD *)a2 + 4) + 384LL),
            v190,
            v192,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 64) != 0),
            v193 != 0);
    if ( v21 >= 0 && *((char *)v6 + 96) < 0 )
    {
      v179 = 0;
      CMatrixStack::Top(v9, (struct CMILMatrix *)v178);
      CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v178, (float *)v6 + 15, (float *)v6 + 16);
    }
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x25Fu);
    goto LABEL_121;
  }
  while ( 1 )
  {
    v27 = *(_QWORD *)v25 + 144LL * v26;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v5, v165, v26);
    v28 = 32;
    v141 = 32;
    if ( (*(_BYTE *)(v27 + 4) & 0x20) == 0 )
      break;
    CCpuClip::RemovePrimitiveClips((CCpuClip *)&v143);
    *(_QWORD *)&v153[12] = 1065353216LL;
    *(_OWORD *)&v152.m256i_u64[1] = 0LL;
    v152.m256i_i64[3] = 1065353216LL;
    v177 = 0;
    v105 = v166[4];
    v106 = v166[6];
    v107 = v166[7];
    v108 = v166[5];
    v109 = v166[8];
    v110 = v166[9];
    v111 = (__m128)v151.m128_u64[0];
    *(_DWORD *)&v153[8] = 0;
    v177 = 0;
    v111.m128_f32[0] = v105;
    v112 = *(__m128 *)v152.m256i_i8;
    v113 = _mm_shuffle_ps(v111, v111, 225);
    v112.m128_f32[0] = v106;
    v113.m128_f32[0] = v108;
    v114 = _mm_shuffle_ps(v112, v112, 225);
    v114.m128_f32[0] = v107;
    v174 = _mm_shuffle_ps(v114, v114, 225);
    *(__m128 *)v152.m256i_i8 = v174;
    v115 = *(__m128 *)v153;
    v151 = _mm_shuffle_ps(v113, v113, 225);
    v115.m128_f32[0] = v109;
    v173 = v151;
    v116 = _mm_shuffle_ps(v115, v115, 225);
    v116.m128_f32[0] = v110;
    v175 = *(_OWORD *)&v152.m256i_u64[2];
    v176 = _mm_shuffle_ps(v116, v116, 225);
    v117 = *(_OWORD *)v166;
    *(__m128 *)v153 = v176;
    v183[0] = v117;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v187, (const struct MilRectF *)v183);
    v118 = CCpuClip::AddPrimitiveClip((CCpuClip *)&v143, (const struct CShape *)v187, (const struct CMILMatrix *)&v173);
    v21 = v118;
    if ( v118 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v118, 0x1A0u);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v187);
      goto LABEL_121;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v187);
LABEL_114:
    v25 = *((_QWORD *)v5 + 3);
    v26 = HIDWORD(v133) + 1;
    HIDWORD(v133) = v26;
    if ( v26 >= *(_DWORD *)(v25 + 8) )
    {
      v6 = v157;
      v9 = (struct CDrawingContext *)((char *)a2 + 480);
      goto LABEL_116;
    }
  }
  if ( !(_QWORD)v143 && !v144 || v22 )
    goto LABEL_24;
  if ( CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v143)
    && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v159) )
  {
    v28 = 96;
    v141 = 96;
LABEL_24:
    v142 = 0;
    goto LABEL_25;
  }
  v142 = 1;
LABEL_25:
  v29 = *(_DWORD *)v27 == 0;
  v131 = 0LL;
  LOBYTE(v126) = 0;
  LOBYTE(v132) = 0;
  v135 = 0LL;
  v136 = 0;
  if ( v29 )
  {
    v33 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v131;
    v38 = v130;
    v137 = *((_QWORD *)&v131 + 1);
  }
  else
  {
    v30 = *(unsigned int *)(v27 + 40);
    if ( (unsigned int)v30 >= *((_DWORD *)v5 + 16) )
    {
      v137 = *((_QWORD *)&v131 + 1);
      v33 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v131;
    }
    else
    {
      v31 = *((_QWORD *)v5 + 14);
      v32 = 3 * v30;
      v33 = *(__int64 (__fastcall ****)(__int64, GUID *, __int64 *))(v31 + 24 * v30);
      if ( v33 )
      {
        ((void (__fastcall *)(_QWORD))(*v33)[1])(*(_QWORD *)(v31 + 24 * v30));
        *(_QWORD *)&v131 = v33;
      }
      else
      {
        v33 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v131;
      }
      v34 = *(_QWORD *)(v31 + 8 * v32 + 8);
      v137 = v34;
      if ( v34 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
        *((_QWORD *)&v131 + 1) = v34;
      }
      else
      {
        v137 = *((_QWORD *)&v131 + 1);
      }
      LOBYTE(v126) = *(_BYTE *)(v31 + 8 * v32 + 16);
      LOBYTE(v132) = v126;
      v134 = 0LL;
      v35 = *v33;
      v125[3] = 0;
      v36 = (*v35)((__int64)v33, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v134);
      v37 = v134;
      if ( v36 >= 0 )
      {
        v125[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v134 + 96LL))(v134);
        v119 = v125[3];
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v134);
        v28 |= 0x10u;
        v141 = v28;
        if ( v119 )
        {
          v28 |= 0x100u;
          v141 = v28;
        }
      }
      else if ( v134 )
      {
        v134 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    v38 = v130;
    v39 = *(unsigned int *)(v27 + 56);
    if ( (unsigned int)v39 < *((_DWORD *)v130 + 20) )
    {
      CDrawListBitmap::operator=((__int64 *)&v135, (__int64 *)(*((_QWORD *)v130 + 15) + 24 * v39));
      if ( CDrawListBitmap::IsSwapChain((CDrawListBitmap *)&v135, &v125[3]) )
      {
        v28 |= 0x10u;
        v141 = v28;
        if ( v125[3] )
        {
          v28 |= 0x100u;
          v141 = v28;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v27 + 4) & 0x10) != 0 )
    v141 = v28 | 1;
  if ( v127 )
    v40 = *(_DWORD *)(v27 + 44);
  else
    v40 = 0;
  v41 = *(_DWORD *)(v27 + 52);
  if ( !v41 )
    goto LABEL_40;
  v120 = v41 - 1;
  if ( v120 )
  {
    if ( v120 != 1 )
    {
LABEL_40:
      v125[1] = 1;
      goto LABEL_41;
    }
    v125[1] = 3;
  }
  else
  {
    v125[1] = 2;
  }
LABEL_41:
  v42 = *(_DWORD *)(v27 + 48);
  if ( !v42 )
  {
LABEL_42:
    v43 = 1;
    goto LABEL_43;
  }
  v121 = v42 - 1;
  if ( v121 )
  {
    if ( v121 != 1 )
      goto LABEL_42;
    v43 = 3;
  }
  else
  {
    v43 = 2;
  }
LABEL_43:
  if ( v40 )
  {
    if ( v40 == 3 )
      v44 = 2;
    else
      v44 = 1;
  }
  else
  {
    v44 = 0;
  }
  LOBYTE(v128) = v44;
  HIBYTE(v128) = v43;
  if ( v127 )
    v45 = *(_DWORD *)(v27 + 60);
  else
    v45 = 0;
  v46 = *(_DWORD *)(v27 + 68);
  if ( !v46 )
    goto LABEL_48;
  v122 = v46 - 1;
  if ( v122 )
  {
    if ( v122 != 1 )
    {
LABEL_48:
      v125[2] = 1;
      goto LABEL_49;
    }
    v125[2] = 3;
  }
  else
  {
    v125[2] = 2;
  }
LABEL_49:
  v47 = *(_DWORD *)(v27 + 64);
  if ( !v47 )
  {
LABEL_50:
    v48 = 1;
    goto LABEL_51;
  }
  v123 = v47 - 1;
  if ( v123 )
  {
    if ( v123 != 1 )
      goto LABEL_50;
    v48 = 3;
  }
  else
  {
    v48 = 2;
  }
LABEL_51:
  if ( v45 )
  {
    if ( v45 == 3 )
      v49 = 2;
    else
      v49 = 1;
  }
  else
  {
    v49 = 0;
  }
  LOBYTE(v129) = v49;
  BYTE1(v129) = v48;
  Current = CThreadContext::GetCurrent(&v155);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v51 = v155;
  v52 = 0LL;
  v53 = *((_DWORD *)v155 + 31);
  if ( v53 )
  {
    v52 = (char *)*((_QWORD *)v155 + 16);
    *((_QWORD *)v155 + 16) = *(_QWORD *)v52;
    *((_DWORD *)v51 + 31) = v53 - 1;
  }
  v54 = v135;
  v156 = v135;
  if ( v52 || (v52 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    v55 = 2LL;
    *(_QWORD *)v52 = &CMILRefCountBase::`vftable';
    *((_DWORD *)v52 + 2) = 0;
    v56 = (CDrawListBitmap *)(v52 + 16);
    *(_QWORD *)v52 = &CCommonRenderingEffect::`vftable';
    do
    {
      CDrawListBitmap::CDrawListBitmap(v56);
      v56 = (CDrawListBitmap *)((char *)v56 + 24);
      --v55;
    }
    while ( v55 );
    v57 = 2LL;
    v58 = (SamplerMode *)(v52 + 64);
    do
    {
      SamplerMode::SamplerMode(v58);
      v58 = (SamplerMode *)((char *)v58 + 3);
      --v57;
    }
    while ( v57 );
    v59 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*((_QWORD *)v52 + 2);
    if ( v59 != v33 )
    {
      if ( v33 )
      {
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v33)[1])(v33);
        v59 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*((_QWORD *)v52 + 2);
      }
      *((_QWORD *)v52 + 2) = v33;
      if ( v59 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v59)[2])(v59);
    }
    v60 = *((_QWORD *)v52 + 3);
    v61 = v137;
    if ( v60 != v137 )
    {
      if ( v137 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v137 + 8LL))(v137);
        v60 = *((_QWORD *)v52 + 3);
      }
      *((_QWORD *)v52 + 3) = v61;
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v54 = v156;
    v52[32] = v126;
    if ( *((_QWORD *)v52 + 5) != v54 )
    {
      v147 = v54;
      Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(&v147);
      v147 = *((_QWORD *)v52 + 5);
      *((_QWORD *)v52 + 5) = v54;
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v147);
    }
    v62 = *((_QWORD *)&v135 + 1);
    if ( *((_QWORD *)v52 + 6) != *((_QWORD *)&v135 + 1) )
    {
      v148 = *((_QWORD *)&v135 + 1);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v148);
      v148 = *((_QWORD *)v52 + 6);
      *((_QWORD *)v52 + 6) = v62;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v148);
    }
    v38 = v130;
    v52[56] = v136;
    *((_WORD *)v52 + 32) = v128;
    v52[66] = v125[1];
    *(_WORD *)(v52 + 67) = v129;
    v52[69] = v125[2];
  }
  else
  {
    v52 = 0LL;
  }
  v138 = v52;
  if ( v52 )
  {
    (**(void (__fastcall ***)(LPVOID))v52)(v52);
    CDrawListEntryBuilder::Begin(
      (CDrawListEntryBuilder *)v188,
      (const struct DrawListEntryBuilderSetupParams *)v139,
      (struct CRenderingEffect *)v52);
    for ( i = v166; ; i = (float *)((char *)i + v168) )
    {
      v64 = *(__m128 *)i;
      v150 = 0LL;
      *(float *)&v150 = i[11];
      BYTE4(v150) = ~(2 * *(_DWORD *)(v27 + 4)) & 2 | ((*(_DWORD *)(v27 + 4) & 2) == 0);
      v149 = v64;
      memset_0(&v180, 0, 0x20uLL);
      v182 = 0LL;
      memset_0(v213, 0, 0x68uLL);
      v65 = 0LL;
      if ( *(_DWORD *)v27 )
      {
        v66 = (__m128)*((unsigned int *)i + 15);
        v67 = 7;
        v68 = v66;
        v68.m128_f32[0] = v66.m128_f32[0] * i[12];
        v69 = _mm_shuffle_ps(v68, v68, 225);
        v69.m128_f32[0] = i[15] * i[13];
        v70 = _mm_shuffle_ps(v69, v69, 198);
        v70.m128_f32[0] = i[15] * i[14];
        v71 = _mm_shuffle_ps(v70, v70, 39);
        v71.m128_f32[0] = v66.m128_f32[0];
        v180 = _mm_shuffle_ps(v71, v71, 57);
        v72 = *((_DWORD *)i + 36);
        v154 = v180;
        if ( v72 < 7 )
          v67 = v72;
        if ( v67 < *(_DWORD *)(v27 + 12) )
          v181 = *(_QWORD *)(*((_QWORD *)v38 + 13) + 8LL * (*(_DWORD *)(v27 + 8) + v67));
        v73 = v125[0];
        if ( v33 )
        {
          if ( v125[0] )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v131,
              (const struct D2D_MATRIX_3X2_F *)(i + 16),
              (struct Matrix3x3 *)v213);
            v73 = v125[0];
            v33 = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v131;
          }
          else
          {
            *(float *)v213 = i[16];
            *(float *)&v213[1] = i[17];
            v213[2] = 0;
            *(float *)&v213[3] = i[18];
            *(float *)&v213[4] = i[19];
            v213[5] = 0;
            *(float *)&v213[6] = i[20];
            *(float *)&v213[7] = i[21];
            v213[8] = 1065353216;
          }
          v214 = *(_OWORD *)(i + 22);
        }
        if ( v54 )
        {
          if ( v73 )
          {
            CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
              (const struct CDrawListBitmap *)&v135,
              (const struct D2D_MATRIX_3X2_F *)(i + 26),
              (struct Matrix3x3 *)v215);
            v54 = v135;
          }
          else
          {
            *(float *)v215 = i[26];
            *(float *)&v215[1] = i[27];
            v215[2] = 0;
            *(float *)&v215[3] = i[28];
            *(float *)&v215[4] = i[29];
            v215[5] = 0;
            *(float *)&v215[6] = i[30];
            *(float *)&v215[7] = i[31];
            v215[8] = 1065353216;
          }
          v216 = *((_OWORD *)i + 8);
        }
        *(_QWORD *)&v164 = 2LL;
        *((_QWORD *)&v164 + 1) = v213;
        v65 = (const struct PrimitiveVertexAttributesDesc *)&v180;
        v182 = v164;
      }
      v74 = (const struct D2D_MATRIX_3X2_F *)(i + 4);
      v170 = v150;
      v21 = 0;
      v169 = v64;
      if ( _mm_shuffle_ps(v64, v64, 170).m128_f32[0] > v64.m128_f32[0]
        && _mm_shuffle_ps(v64, v64, 255).m128_f32[0] > _mm_shuffle_ps(v64, v64, 85).m128_f32[0]
        && ((v150 & 0x100000000LL) != 0 || (v150 & 0x200000000LL) != 0) )
      {
        if ( v125[0] )
        {
          inserted = CDrawListEntryBuilder::InsertWARP(
                       (CDrawListEntryBuilder *)v188,
                       (const struct PrimitiveGeometryDesc *)&v169,
                       v65,
                       v74);
          v21 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1E4u);
        }
        else
        {
          v172 = v150;
          v171 = v64;
          v75 = CDrawListEntryBuilder::InsertHW(v188, &v171, v65, v74);
          v21 = v75;
          if ( v75 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x1E8u);
        }
      }
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x258u);
        goto LABEL_261;
      }
      if ( i == v167 )
        break;
      v38 = v130;
    }
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (CDrawListEntryBuilder *)v188,
                              0,
                              0LL,
                              0LL);
    v21 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x2F4u);
    v77 = v189;
    if ( v189 )
    {
      v189 = 0LL;
      v78 = *(void (**)(void))(*(_QWORD *)v77 + 8LL);
      if ( (char *)v78 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v77);
      else
        v78();
    }
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x25Cu);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v138);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v135 + 1);
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v135);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v131 + 1);
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v131);
      goto LABEL_121;
    }
    v79 = *(_QWORD *)v52;
    v138 = 0LL;
    v80 = *(__int64 (__fastcall **)(CMILRefCountBase *))(v79 + 8);
    if ( v80 == CMILRefCountBase::Release )
      CMILRefCountBase::Release((CMILRefCountBase *)v52);
    else
      v80((CMILRefCountBase *)v52);
    if ( *((_QWORD *)&v135 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v135 + 1) + 16LL))(*((_QWORD *)&v135 + 1));
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    if ( *((_QWORD *)&v131 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v131 + 1) + 16LL))(*((_QWORD *)&v131 + 1));
    if ( v33 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v33)[2])(v33);
    v22 = v133;
    v5 = v130;
    goto LABEL_114;
  }
  v21 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1FAu);
LABEL_261:
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v138);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v135 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v135);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v131 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v131);
LABEL_121:
  if ( j && v144 )
    (**v144)(v144, 1LL);
  v81 = v192;
  v82 = 0;
  v144 = 0LL;
  for ( j = 0; v82 < v81; ++v82 )
  {
    v83 = v190;
    v84 = v190[v82];
    if ( v84 )
    {
      v85 = *(void (**)(void))(*(_QWORD *)v84 + 8LL);
      if ( (char *)v85 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v84);
      else
        v85();
      v83[v82] = 0LL;
      v81 = v192;
    }
  }
  v86 = v189;
  v192 = 0;
  v193 = 0;
  if ( v189 )
  {
    v189 = 0LL;
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v86 + 8LL))(v86);
  }
  v87 = v212;
  if ( v212 )
  {
    v212 = 0LL;
    CMILRefCountBase::Release(v87);
  }
  if ( v210 != v211 )
  {
    operator delete(v210);
    v210 = 0LL;
  }
  if ( v208 != v209 )
  {
    operator delete(v208);
    v208 = 0LL;
  }
  if ( v206 != v207 )
  {
    operator delete(v206);
    v206 = 0LL;
  }
  v88 = v205;
  if ( v205 )
  {
    v205 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
  }
  v89 = v199;
  v200 = 0LL;
  v198 = 0;
  v196 = 0;
  v202 = 0LL;
  v203 = 0;
  if ( v199 )
  {
    *((_QWORD *)v199 + 8) = 0LL;
    v89[8] = 0;
    v89[14] = 0;
    *((_QWORD *)v89 + 11) = 0LL;
    *((_QWORD *)v89 + 12) = 0LL;
    v89[26] = 0;
    v89[32] = 0;
    v89 = v199;
  }
  v90 = v201;
  v204 = v204 & 4 | 1;
  if ( v201 )
  {
    v91 = (void *)*((_QWORD *)v201 + 3);
    if ( v91 )
      HeapFree(WPF::g_processHeap, 0, v91);
    v92 = (void *)v90[6];
    if ( v92 )
      HeapFree(WPF::g_processHeap, 0, v92);
    v93 = (void *)v90[10];
    if ( v93 )
      HeapFree(WPF::g_processHeap, 0, v93);
    v94 = (void *)v90[15];
    if ( v94 )
      HeapFree(WPF::g_processHeap, 0, v94);
    operator delete(v90, 0x88uLL);
    v89 = v199;
  }
  if ( v89 )
  {
    v95 = (void *)*((_QWORD *)v89 + 3);
    if ( v95 )
      HeapFree(WPF::g_processHeap, 0, v95);
    v96 = (void *)*((_QWORD *)v89 + 6);
    if ( v96 )
      HeapFree(WPF::g_processHeap, 0, v96);
    v97 = (void *)*((_QWORD *)v89 + 10);
    if ( v97 )
      HeapFree(WPF::g_processHeap, 0, v97);
    v98 = (void *)*((_QWORD *)v89 + 15);
    if ( v98 )
      HeapFree(WPF::g_processHeap, 0, v98);
    operator delete(v89, 0x88uLL);
  }
  if ( lpMem )
    HeapFree(WPF::g_processHeap, 0, lpMem);
  if ( v194 != v195 )
  {
    operator delete(v194);
    v194 = 0LL;
  }
  if ( v190 != v191 )
  {
    operator delete(v190);
    v190 = 0LL;
  }
  v99 = v189;
  if ( v189 )
  {
    v189 = 0LL;
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v99 + 8LL))(v99);
  }
  return (unsigned int)v21;
}

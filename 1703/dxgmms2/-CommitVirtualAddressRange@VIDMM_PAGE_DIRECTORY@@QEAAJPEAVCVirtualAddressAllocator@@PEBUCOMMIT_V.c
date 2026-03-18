/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BBE8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00025FC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0013DE4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0050268 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0050CF8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0053A44 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0053A90 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0053CE4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053F04 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C00550E4 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0055260 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00579C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C006D4B0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0072F2C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0094B6C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BA04 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009BBE8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C009C32C (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C009C554 (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OW.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z @ 0x1C009CE04 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  VIDMM_PAGE_DIRECTORY *v9; // rsi
  __int64 v10; // r10
  int v12; // r10d
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rax
  struct _EPROCESS **v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r9
  int v20; // r8d
  struct CVirtualAddressAllocator *v21; // rcx
  unsigned int v22; // r9d
  VIDMM_GLOBAL *v23; // rdx
  __int64 v24; // rax
  struct _DXGK_UPDATEPAGETABLEFLAGS v25; // edx
  char v26; // cl
  unsigned __int64 v27; // r8
  unsigned int v28; // r9d
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // rdi
  unsigned int v32; // ebx
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rcx
  __int64 v35; // rbp
  __int64 v36; // rax
  struct COMMIT_VA_STATE *v37; // r9
  unsigned int v38; // ebx
  unsigned __int64 v39; // r8
  unsigned int v40; // ecx
  unsigned __int64 v41; // rbx
  __int64 v42; // r8
  unsigned __int64 v43; // rbx
  __int64 v44; // rcx
  VIDMM_PAGE_DIRECTORY *v45; // r8
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // ebx
  char v50; // bp
  int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rsi
  struct CVirtualAddressAllocator *v54; // rbx
  __int64 v55; // r8
  bool v56; // cl
  __int64 v57; // rdx
  char v58; // r9
  struct COMMIT_VA_STATE *v59; // rdi
  VIDMM_PAGE_DIRECTORY *v60; // rbx
  unsigned __int64 v61; // rcx
  unsigned int *v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // r9
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  bool v70; // zf
  __int64 v71; // rax
  __int64 v72; // r8
  _QWORD *v73; // rdx
  int v74; // eax
  VIDMM_GLOBAL *v75; // rsi
  int v76; // edi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v81; // eax
  void *v82; // rdi
  __int64 v83; // r10
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // r10
  __int64 v87; // rsi
  unsigned __int64 v88; // rbp
  __int64 v89; // rax
  unsigned int *v90; // rbx
  int v91; // edx
  struct CVirtualAddressAllocator *v92; // r11
  __int64 v93; // rdi
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // r9
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdx
  VIDMM_GLOBAL *v103; // rdi
  int v104; // esi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v109; // eax
  void *v110; // rsi
  __int64 v111; // r10
  int v112; // eax
  struct CVirtualAddressAllocator *v113; // r9
  __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // r10
  unsigned __int64 v117; // rbx
  __int64 v118; // rdi
  _QWORD *v119; // r8
  __int64 v120; // rdi
  unsigned __int8 v121; // cl
  int v122; // r8d
  unsigned __int64 v123; // rbx
  __int64 result; // rax
  unsigned __int8 v125; // r8
  char v126; // r9
  unsigned int v127; // edx
  struct VIDMM_PAGE_TABLE *PageDirectory; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r10
  char v132; // bl
  unsigned __int64 v133; // r9
  VIDMM_PAGE_TABLE *v134; // rcx
  struct VIDMM_ALLOC *v135; // rax
  __int64 v136; // r10
  bool v137; // cl
  __int64 v138; // r8
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  unsigned __int64 v145; // rcx
  struct _DXGK_PTE *v146; // r10
  unsigned __int64 v147; // rax
  unsigned int v148; // r8d
  struct VIDMM_ALLOC **v149; // rbx
  struct VIDMM_ALLOC **v150; // r9
  __int64 v151; // r8
  struct VIDMM_ALLOC **v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rax
  struct _EPROCESS *v157; // rdx
  unsigned __int64 v158; // r9
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v162; // rdx
  int v163; // r8d
  unsigned int v164; // ecx
  signed int v165; // eax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rbx
  _DWORD *v169; // rcx
  __int64 v170; // r10
  unsigned __int64 v171; // r8
  unsigned __int64 v172; // r11
  unsigned __int64 v173; // r9
  unsigned int v174; // edx
  unsigned int v175; // r8d
  struct CVirtualAddressAllocator *v176; // rdx
  signed int v177; // eax
  __int64 v178; // r8
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rsi
  __int64 v182; // rbp
  __int64 v183; // r8
  unsigned __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 *v189; // rax
  _QWORD *v190; // rcx
  unsigned __int64 v191; // r8
  __int64 *v192; // rax
  __int64 v193; // rsi
  __int64 v194; // rbp
  __int64 v195; // r8
  unsigned __int64 v196; // rax
  __int64 **v197; // rax
  __int64 *v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 **v201; // rax
  VIDMM_PAGE_DIRECTORY *v202; // rcx
  struct VIDMM_ALLOC **v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  struct _VIDMM_GLOBAL_ALLOC *v213; // [rsp+28h] [rbp-190h]
  struct VIDMM_ALLOC **v214; // [rsp+30h] [rbp-188h]
  struct VIDMM_ALLOC **v215; // [rsp+30h] [rbp-188h]
  unsigned __int8 v216; // [rsp+38h] [rbp-180h]
  unsigned __int64 v217; // [rsp+38h] [rbp-180h]
  struct VIDMM_ALLOC **v218; // [rsp+40h] [rbp-178h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v219; // [rsp+80h] [rbp-138h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v220; // [rsp+80h] [rbp-138h]
  unsigned __int8 v221; // [rsp+90h] [rbp-128h]
  char v222; // [rsp+91h] [rbp-127h]
  unsigned __int8 v223; // [rsp+92h] [rbp-126h] BYREF
  char v224; // [rsp+93h] [rbp-125h]
  char v225; // [rsp+94h] [rbp-124h]
  unsigned int v226; // [rsp+98h] [rbp-120h]
  unsigned int v227; // [rsp+9Ch] [rbp-11Ch]
  unsigned int v228; // [rsp+A0h] [rbp-118h]
  char v229; // [rsp+A4h] [rbp-114h]
  unsigned int v230; // [rsp+A8h] [rbp-110h]
  unsigned int v231[2]; // [rsp+B0h] [rbp-108h]
  unsigned int v232; // [rsp+B8h] [rbp-100h]
  __int64 v233; // [rsp+C0h] [rbp-F8h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v234; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v235; // [rsp+D0h] [rbp-E8h]
  unsigned __int64 v236; // [rsp+D8h] [rbp-E0h]
  unsigned int v237[2]; // [rsp+E0h] [rbp-D8h]
  __int64 v238; // [rsp+E8h] [rbp-D0h]
  unsigned int v239; // [rsp+F0h] [rbp-C8h]
  VIDMM_GLOBAL *v240; // [rsp+F8h] [rbp-C0h]
  unsigned int v241[2]; // [rsp+100h] [rbp-B8h]
  unsigned int v242; // [rsp+108h] [rbp-B0h]
  __int64 v243; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v244; // [rsp+118h] [rbp-A0h]
  unsigned int v245; // [rsp+120h] [rbp-98h] BYREF
  unsigned int v246; // [rsp+124h] [rbp-94h] BYREF
  unsigned __int64 v247; // [rsp+128h] [rbp-90h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v248[2]; // [rsp+130h] [rbp-88h]
  void *v249; // [rsp+138h] [rbp-80h] BYREF
  __int64 v250; // [rsp+140h] [rbp-78h]
  unsigned __int64 v251; // [rsp+148h] [rbp-70h]
  unsigned __int64 v252; // [rsp+150h] [rbp-68h]
  enum _DXGK_PAGETABLEUPDATEMODE v253[2]; // [rsp+158h] [rbp-60h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+160h] [rbp-58h]
  struct VIDMM_ALLOC *VidMmAllocFromOwner; // [rsp+168h] [rbp-50h]
  unsigned __int64 v256; // [rsp+170h] [rbp-48h]
  void *v257; // [rsp+178h] [rbp-40h] BYREF
  void *v258; // [rsp+180h] [rbp-38h] BYREF
  void *v259; // [rsp+188h] [rbp-30h] BYREF
  struct COMMIT_VA_STATE *v262; // [rsp+1D0h] [rbp+18h] BYREF
  unsigned __int64 v263; // [rsp+1D8h] [rbp+20h]

  v263 = a4;
  v262 = a3;
  v9 = this;
  v10 = *(_QWORD *)a3;
  *(_QWORD *)v253 = 0LL;
  v244 = a4;
  *a9 = 0LL;
  v12 = v10 & 1;
  if ( !v12 )
  {
    v13 = *((_QWORD *)this + 1);
    if ( !v13 || !*(_QWORD *)(v13 + 136) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v212 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v212 + 24) = 5292LL;
    WdLogEvent5_WdAssertion(v212);
    return 3221225485LL;
  }
  v247 = a5 >> 12;
  v256 = (a5 >> 12) + a6;
  if ( v256 <= a5 >> 12 )
  {
    v156 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v156 + 24) = 5309LL;
    WdLogEvent5_WdAssertion(v156);
    return 3221225485LL;
  }
  v14 = *(_DWORD *)this;
  v240 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
  v15 = *((_QWORD *)v240 + 5021);
  v16 = (struct _EPROCESS **)*((_QWORD *)a2 + 11);
  v17 = (v14 >> 7) & 0x1F;
  VidMmGlobalAllocFromOwner = 0LL;
  v18 = 472 * v17;
  VidMmAllocFromOwner = 0LL;
  v250 = 472 * v17 + v15;
  v19 = 48LL * (v14 & 7);
  v234 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v19 + v250 + 88);
  v236 = (v247 & *((_QWORD *)v234 + 2)) >> *((_QWORD *)v234 + 3);
  v20 = v14 & 0x10;
  if ( v20 )
  {
    v21 = a2;
    v22 = *(_DWORD *)(32 * v17 + *((_QWORD *)a2 + 14) + 16);
    v23 = v240;
  }
  else
  {
    v23 = v240;
    v22 = *(_DWORD *)(v19 + *((_QWORD *)v240 + 5021) + v18 + 88);
    v21 = a2;
  }
  v230 = v22;
  if ( v20 && *((_QWORD *)v23 + 5115) )
  {
    v157 = *v16;
    v158 = a6 << 12;
    if ( v12 )
    {
      v214 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 4);
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(v240, v157, a5, v158, *((_DWORD *)a3 + 13), a7);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v240, v157, a5, v158);
    }
    v22 = v230;
    v21 = a2;
  }
  v24 = *((_QWORD *)v9 + 1);
  v25 = 0;
  v239 = 0;
  v232 = 0;
  v225 = 0;
  *(_QWORD *)v248 = 0LL;
  if ( v24 && *(_QWORD *)(v24 + 136) )
  {
    v26 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(v9, v21, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)v9 &= ~0x10000u;
    v26 = 1;
    v22 = v230;
    v25 = v248[0];
  }
  if ( (*(_DWORD *)v9 & 0x10000) == 0 )
  {
    *(_QWORD *)v248 = *(unsigned int *)&v25 | 2;
    goto LABEL_174;
  }
  if ( v26 )
  {
LABEL_174:
    LODWORD(v27) = v236;
    if ( (_DWORD)v236 )
    {
      v153 = 0LL;
      v154 = (unsigned int)v236;
      do
      {
        v155 = *((_QWORD *)v9 + 3);
        v153 += 16LL;
        *(_QWORD *)(v153 + v155 - 16) = 0LL;
        *(_QWORD *)(v153 + v155 - 8) = 0LL;
        --v154;
      }
      while ( v154 );
    }
    v232 = v22;
    v225 = 1;
    goto LABEL_17;
  }
  LODWORD(v27) = v236;
LABEL_17:
  v28 = 0;
  *(_QWORD *)v231 = v247;
  v229 = 0;
  v29 = *((_QWORD *)v234 + 5);
  v30 = *(_DWORD *)v9;
  v31 = v247 & ~*((_QWORD *)v234 + 4);
  v32 = v230;
  v242 = 0;
  v33 = v29 + v31;
  v233 = v29 + v31;
  v34 = v29 + v31;
  if ( (v30 & 0x20) != 0 && *((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
      v28 = v230;
    v242 = v28;
  }
  LODWORD(v35) = 0;
  v226 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v27 >= v32 )
      goto LABEL_116;
    v221 = 0;
    v223 = 0;
    v224 = 0;
    v222 = 0;
    v36 = v28 + (unsigned int)v27;
    v37 = v262;
    v227 = v36;
    v228 = v36;
    if ( *((_BYTE *)v262 + 58) )
    {
      v36 = v227;
      if ( (*(_DWORD *)v9 & 0x20) != 0 )
      {
        v38 = v227 + v32;
        v222 = 1;
        if ( v227 != (_DWORD)v27 )
          v38 = v27;
        v228 = v38;
      }
    }
    if ( v34 >= v256 )
      v229 = 1;
    v39 = v256;
    if ( v34 < v256 )
      v39 = v34;
    v40 = v231[0];
    v41 = v39;
    v252 = v39;
    v42 = *(_QWORD *)v262;
    v43 = v41 - *(_QWORD *)v231;
    v235 = v43;
    if ( (v42 & 1) == 0 )
    {
      v44 = *((_QWORD *)v9 + 3);
      if ( (*(_BYTE *)(v44 + 16 * v36) & 1) == 0 && (*(_BYTE *)(v44 + 16LL * v228) & 1) == 0 )
        goto LABEL_114;
      v40 = v231[0];
    }
    if ( (v42 & 2) != 0 )
    {
      v159 = *((_QWORD *)v9 + 3);
      if ( (*(_BYTE *)(v159 + 16LL * v227) & 2) != 0 )
      {
        v160 = v227;
      }
      else
      {
        if ( !v222 || (*(_BYTE *)(v159 + 16LL * v228) & 2) == 0 )
        {
LABEL_199:
          v40 = v231[0];
          goto LABEL_37;
        }
        v160 = v228;
      }
      if ( (_DWORD)v160 != -1 && (((unsigned __int8)v42 ^ *(_BYTE *)(v159 + 16 * v160)) & 8) == 0 )
        goto LABEL_114;
      goto LABEL_199;
    }
LABEL_37:
    if ( v29 <= v43 && (*((_DWORD *)a2 + 34) & 4) == 0 )
    {
      if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             v9,
             a2,
             *(const struct _DXGK_GPUMMUCAPS **)(v250 + 440),
             v262,
             v234,
             v227,
             v228,
             v40,
             a7,
             &v223) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 3) + 16LL * v227) & 0x400LL) != 0 )
        {
          VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(
                                                                      *((_DWORD *)v262 + 12),
                                                                      *((_QWORD *)v262 + 5));
          VidMmAllocFromOwner = (struct VIDMM_ALLOC *)GetVidMmAllocFromOwner(v163, v162);
        }
        v121 = v223;
        goto LABEL_112;
      }
      v33 = v233;
      v37 = v262;
      v221 = v223;
    }
    v45 = this;
    v46 = v227;
    v47 = *((_QWORD *)this + 3);
    v48 = *(_QWORD *)(v47 + 16LL * v227) & 0x400LL;
    if ( (*(_QWORD *)(v47 + 16LL * v227) & 0x400) != 0 || v222 && (*(_DWORD *)(v47 + 16LL * v228) & 0x400LL) != 0 )
    {
      v164 = v228;
      if ( v48 )
        v164 = v227;
      if ( *((_QWORD *)v234 + 5) <= v235 )
      {
        v168 = v164;
        ExFreeToPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 10) + 40192LL),
          *(PVOID *)(*((_QWORD *)this + 4) + 8LL * v164));
        v45 = this;
        *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v168) = 0LL;
        v168 *= 2LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v168) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v168) &= ~1uLL;
        --*((_DWORD *)this + 1);
      }
      else
      {
        v165 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(this, a2, v234, *((_BYTE *)v37 + 57), v31 << 12, v164, a9);
        v35 = v165;
        v226 = v165;
        if ( v165 < 0 )
        {
          v204 = WdLogNewEntry5_WdWarning(v167, v166);
          *(_QWORD *)(v204 + 24) = v35;
          WdLogEvent5_WdWarning(v204);
          v9 = this;
LABEL_116:
          v54 = a2;
LABEL_117:
          v59 = v262;
          goto LABEL_118;
        }
        v45 = this;
      }
      v33 = v233;
      v37 = v262;
      v224 = 1;
    }
    v49 = *(_DWORD *)v45;
    v50 = *((_BYTE *)v37 + 56);
    v51 = *(_DWORD *)v45 & 0x20;
    if ( !v51 || *((_DWORD *)v37 + 13) || !v50 )
      goto LABEL_43;
    if ( *((_BYTE *)v37 + 57)
      || (v169 = *(_DWORD **)(*((_QWORD *)v45 + 4) + 8 * v46)) == 0LL
      || !v169[1]
      || (*v169 & 0x40) != 0 )
    {
      if ( (v235 & 0xF) == 0 )
      {
        v170 = *((_QWORD *)v37 + 4);
        v171 = a7 >> 12;
        v172 = (a7 >> 12) + (unsigned int)v235;
        v173 = (unsigned int)(a7 >> 12);
        if ( v173 < v172 )
        {
          do
          {
            if ( (v171 & 0xF) != 0 )
            {
              if ( *(_QWORD *)(v170 + 8 * v173 + 48) != *(_QWORD *)(v170 + 8LL * (unsigned int)(v171 - 1) + 48) + 1LL )
                goto LABEL_222;
            }
            else if ( (*(_BYTE *)(v170 + 8 * v173 + 48) & 0xF) != 0 )
            {
LABEL_222:
              v33 = v233;
              v50 = 0;
              v45 = this;
              v37 = v262;
              goto LABEL_223;
            }
            LODWORD(v171) = v171 + 1;
            v173 = (unsigned int)v171;
          }
          while ( (unsigned int)v171 < v172 );
        }
        v33 = v233;
        v50 = 1;
        v45 = this;
        v37 = v262;
LABEL_43:
        v52 = v227;
        goto LABEL_44;
      }
      v50 = 0;
    }
    else
    {
      v50 = 0;
    }
LABEL_223:
    v52 = (unsigned int)v236;
    v227 = v236;
    if ( v222 )
      v228 = v230 + v236;
LABEL_44:
    if ( (*(_BYTE *)v37 & 1) == 0 && (v53 = (unsigned int)v52, (*(_BYTE *)(16 * v52 + *((_QWORD *)v45 + 3)) & 2) == 0)
      || (v53 = v227, *(_QWORD *)(*((_QWORD *)v45 + 4) + 8LL * v227)) )
    {
      v54 = a2;
      goto LABEL_47;
    }
    if ( !v51 )
    {
      v174 = (v49 >> 7) & 0x1F;
      v175 = (v49 & 7) - 1;
      v54 = a2;
      PageDirectory = CreatePageDirectory(a2, v174, v175);
      goto LABEL_130;
    }
    if ( *((_BYTE *)v37 + 57) && v50 || *((_DWORD *)v37 + 13) == -3 )
    {
      v125 = 1;
    }
    else
    {
      v125 = 0;
      if ( v50 )
      {
        v126 = 1;
        goto LABEL_129;
      }
    }
    v126 = 0;
LABEL_129:
    v127 = (v49 >> 7) & 0x1F;
    v54 = a2;
    PageDirectory = CreatePageTable(a2, v127, v125, v126);
LABEL_130:
    v45 = this;
    v130 = *((_QWORD *)this + 4);
    *(_QWORD *)(v130 + 8 * v53) = PageDirectory;
    if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v53) )
    {
      v205 = WdLogNewEntry5_WdAssertion(v130, v129);
      *(_QWORD *)(v205 + 24) = 5654LL;
      WdLogEvent5_WdAssertion(v205);
      v9 = this;
      LODWORD(v35) = -1073741801;
      goto LABEL_117;
    }
    v33 = v233;
LABEL_47:
    v55 = *((_QWORD *)v45 + 3);
    v243 = 16 * v53;
    v56 = (*(_QWORD *)(16 * v53 + v55) & 1) == 0;
    v57 = *(_QWORD *)(16 * v53 + v55) & 2LL;
    if ( (_DWORD)v57 || (v58 = (*(_QWORD *)(16 * v53 + v55) & 1) == 0, v222) && (*(_BYTE *)(v55 + 16LL * v228) & 2) != 0 )
    {
      if ( *((_QWORD *)v234 + 5) <= v235 )
      {
        v178 = v228;
        v70 = (unsigned int)v57 == 0LL;
        v60 = this;
        v57 = -3LL;
        if ( !v70 )
          v178 = v227;
        v179 = 2 * v178;
        v180 = 2LL;
        do
        {
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v179) &= v57++;
          --v180;
        }
        while ( v180 );
        --*((_DWORD *)this + 1);
        v58 = v56;
        v59 = v262;
      }
      else
      {
        v176 = v54;
        v60 = this;
        v217 = v31;
        v59 = v262;
        v177 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
                 this,
                 v176,
                 v262,
                 v227,
                 v228,
                 *(unsigned __int64 *)v231,
                 v252,
                 v217,
                 v33,
                 a9);
        v226 = v177;
        if ( v177 < 0 )
        {
          v9 = this;
          LODWORD(v35) = v177;
          v54 = a2;
          goto LABEL_118;
        }
        v58 = 0;
      }
      v224 = 1;
    }
    else
    {
      v59 = v262;
      v60 = this;
    }
    if ( (*(_DWORD *)v60 & 0x20) == 0 )
    {
      v114 = 8 * v53;
      v9 = this;
      v202 = *(VIDMM_PAGE_DIRECTORY **)(v114 + *((_QWORD *)this + 4));
      v238 = v114;
      LODWORD(v35) = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                       v202,
                       a2,
                       v59,
                       v244,
                       *(_QWORD *)v231 << 12,
                       v235,
                       a7,
                       v58,
                       a9);
      v226 = v35;
      goto LABEL_149;
    }
    if ( (*(_BYTE *)v59 & 1) != 0 )
    {
      v131 = 8 * v53;
      v132 = *((_BYTE *)v59 + 56);
      v9 = this;
      v218 = a9;
      v216 = v58;
      v133 = v244;
      v215 = (struct VIDMM_ALLOC **)a7;
      v134 = *(VIDMM_PAGE_TABLE **)(v131 + *((_QWORD *)this + 4));
      v213 = (struct _VIDMM_GLOBAL_ALLOC *)v235;
      v135 = (struct VIDMM_ALLOC *)(*(_QWORD *)v231 << 12);
      *((_BYTE *)v59 + 56) = v50;
      v238 = v131;
      LODWORD(v35) = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                       v134,
                       a2,
                       v59,
                       v133,
                       v135,
                       (unsigned __int64)v213,
                       (unsigned __int64)v215,
                       v216,
                       v218);
      v226 = v35;
      *((_BYTE *)v59 + 56) = v132;
    }
    else
    {
      v61 = 8 * v53;
      v9 = this;
      v238 = v61;
      v62 = *(unsigned int **)(v61 + *((_QWORD *)this + 4));
      if ( v62 && v62[1] )
      {
        v63 = *(_QWORD *)v231 << 12;
        *(_QWORD *)v241 = *(_QWORD *)v231 << 12;
        if ( (*(_QWORD *)v231 & 0xFFFFFFFFFFFFFLL) + v235 <= (*(_QWORD *)v231 & 0xFFFFFFFFFFFFFuLL) )
        {
          LODWORD(v35) = -1073741811;
          v226 = -1073741811;
        }
        else
        {
          v57 = *v62;
          v64 = *((_QWORD *)a2 + 10);
          v65 = *((_QWORD *)v62 + 1);
          v61 = *(_QWORD *)(v64 + 40168) + 472LL * ((*v62 >> 7) & 0x1F);
          if ( v65 && *(_QWORD *)(v65 + 136) )
          {
            v66 = *(_DWORD *)(v61 + 72);
            LODWORD(v67) = v66 & v231[0];
            *(_QWORD *)v237 = v66 & v231[0];
            v68 = v66 & (v231[0] + v235 - 1);
            if ( (v57 & 0x40) != 0 )
            {
              v67 = (unsigned int)v67 >> 4;
              v68 >>= 4;
              v63 &= 0xFFFFFFFFFFFF0000uLL;
              *(_QWORD *)v237 = v67;
              *(_QWORD *)v241 = v63;
            }
            v69 = v68 - v67 + 1;
            v70 = *(_QWORD *)(v64 + 40952) == 0LL;
            v226 = v69;
            if ( !v70 && (unsigned int)v67 < v69 + (unsigned int)v67 )
            {
              v181 = 16LL * (unsigned int)v67;
              v182 = v69;
              do
              {
                v183 = *((_QWORD *)v62 + 3);
                v184 = *(_QWORD *)(v183 + v181);
                if ( (v184 & 1) != 0 )
                  VIDMM_GLOBAL::RecordPageMappingHistory(
                    v64,
                    (v184 >> 5) & 0x1F,
                    *(_QWORD *)(v183 + v181 + 8),
                    1LL,
                    1,
                    0LL,
                    v214);
                v181 += 16LL;
                --v182;
              }
              while ( v182 );
              LODWORD(v67) = v237[0];
              v69 = v226;
              v63 = *(_QWORD *)v241;
              v9 = this;
            }
            v61 = (unsigned int)v67 + v69;
            if ( (unsigned int)v67 < (unsigned int)v61 )
            {
              v71 = 16LL * (unsigned int)v67;
              v72 = (unsigned int)(v61 - v67);
              do
              {
                v73 = (_QWORD *)(v71 + *((_QWORD *)v62 + 3));
                v61 = *(unsigned __int8 *)v73;
                if ( (v61 & 1) != 0 )
                {
                  --v62[1];
                  *v73 = 0LL;
                  v61 = *((_QWORD *)v62 + 3);
                  *(_QWORD *)(v71 + v61 + 8) = 0LL;
                }
                v71 += 16LL;
                --v72;
              }
              while ( v72 );
            }
            v57 = (__int64)a2;
            if ( v62[1] || (*((_DWORD *)a2 + 34) & 4) != 0 )
            {
              if ( (*v62 & 0x40) != 0 )
                v74 = 8;
              else
                v74 = 0;
              v75 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
              v76 = v74;
              if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                          (VIDMM_PAGE_TABLE_BASE *)v62,
                          a2,
                          &v246,
                          (unsigned __int64 *)&v257,
                          &v258) < 0 )
              {
                v185 = WdLogNewEntry5_WdError(v78, v77, v79, v80);
                *(_QWORD *)(v185 + 24) = 3679LL;
                WdLogEvent5_WdError(v185);
                v188 = WdLogNewEntry5_WdAssertion(v187, v186);
                *(_QWORD *)(v188 + 24) = 6250LL;
                WdLogEvent5_WdAssertion(v188);
                v9 = this;
                LODWORD(v35) = -1073741823;
                v59 = v262;
                v226 = -1073741823;
                goto LABEL_77;
              }
              if ( (*((_BYTE *)v75 + 40872) & 8) != 0 )
                v81 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
              else
                v81 = (int)(*v62 << 16) >> 29;
              v219 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v76;
              v82 = v257;
              VIDMM_GLOBAL::UpdatePageTable(
                v75,
                *v62 & 7,
                *((struct VIDMM_PROCESS **)a2 + 11),
                0LL,
                0LL,
                0LL,
                0LL,
                v237[0],
                v226,
                0LL,
                0LL,
                (*v62 >> 7) & 0x1F,
                v246,
                (unsigned __int64)v257,
                v81,
                v63 >> 12,
                v219,
                0LL);
              v57 = (__int64)a2;
              v83 = *((_QWORD *)a2 + 10);
              if ( (*(_BYTE *)(v83 + 40872) & 8) != 0 || (v61 = *v62, (v84 = (int)(*v62 << 16) >> 29) == 0) )
              {
                VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
                  (VIDMM_PAGE_TABLE_BASE *)v62,
                  *((struct VIDMM_GLOBAL **)a2 + 10),
                  v82,
                  v258);
              }
              else if ( v84 == 1 )
              {
                v61 = (v61 >> 7) & 0x1F;
                if ( *(struct CVirtualAddressAllocator **)(v83 + 8 * v61 + 40352) != a2 )
                {
                  v189 = (__int64 *)(*((_QWORD *)v62 + 2) + 128LL);
                  v57 = *v189;
                  v190 = *(_QWORD **)*v189;
                  if ( *(__int64 **)(*v189 + 8) != v189 || v190[1] != v57 )
                    __fastfail(3u);
                  *v189 = (__int64)v190;
                  v190[1] = v189;
                  *(_QWORD *)(v57 + 16) = *(_QWORD *)(v83 + 8LL * ((*v62 >> 7) & 0x1F) + 4880);
                  v61 = 472LL * ((*v62 >> 7) & 0x1F);
                  v191 = v61 + *(_QWORD *)(v83 + 40168) + 456LL;
                  v192 = *(__int64 **)(v191 + 8);
                  if ( *v192 != v191 )
                    __fastfail(3u);
                  *(_QWORD *)v57 = v191;
                  *(_QWORD *)(v57 + 8) = v192;
                  *v192 = v57;
                  *(_QWORD *)(v191 + 8) = v57;
                }
              }
              v9 = this;
            }
          }
          v59 = v262;
          LODWORD(v35) = 0;
          v226 = 0;
        }
      }
      else
      {
        LODWORD(v35) = v226;
      }
    }
LABEL_77:
    if ( *((_BYTE *)v59 + 58) )
    {
      if ( (int)v35 < 0 )
        goto LABEL_285;
      v57 = v228;
      v85 = *((_QWORD *)v9 + 3);
      v86 = 16LL * v228;
      v233 = v86;
      v61 = *(unsigned __int8 *)(v86 + v85);
      if ( (v61 & 1) != 0 )
        break;
    }
    v114 = v238;
LABEL_149:
    if ( (int)v35 < 0 )
      goto LABEL_285;
    v113 = a2;
LABEL_102:
    if ( (*(_BYTE *)v59 & 1) != 0 )
    {
      v9 = this;
      v136 = v243;
      v137 = (*(_DWORD *)this & 0x20) != 0
          && !*((_BYTE *)v59 + 57)
          && ((**(_DWORD **)(v114 + *((_QWORD *)this + 4)) >> 6) & 1) != ((*(_DWORD *)(v243 + *((_QWORD *)this + 3)) & 0x60000) == 0x20000LL);
      v138 = *((_QWORD *)this + 3);
      if ( (*(_QWORD *)(v138 + v243) & 1) == 0 || v137 || v224 )
      {
        if ( (*(_QWORD *)(v138 + v243) & 1LL) == 0 )
        {
          *(_QWORD *)(v138 + v243) |= 1uLL;
          ++*((_DWORD *)this + 1);
        }
        *(_QWORD *)(*((_QWORD *)this + 3) + v136) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 3) + v136) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)this + 3) + v136) &= ~8uLL;
        if ( v222 )
        {
          v139 = 2LL * v228;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v139) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v139) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v139) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, v113, v227);
        goto LABEL_144;
      }
    }
    else
    {
      if ( v224 )
        v221 = 1;
      v9 = this;
      if ( (*((_DWORD *)v113 + 34) & 4) == 0 )
      {
        v115 = *((_QWORD *)this + 3);
        v116 = v243;
        v117 = *(_QWORD *)v231 & ~*((_QWORD *)v234 + 4);
        if ( (*(_BYTE *)(v115 + v243) & 1) != 0 )
        {
          v118 = v238;
          if ( !*(_DWORD *)(*(_QWORD *)(v238 + *((_QWORD *)this + 4)) + 4LL) )
          {
            --*((_DWORD *)this + 1);
            *(_QWORD *)(v115 + v116) = 0LL;
            *(_QWORD *)(v115 + v116 + 8) = 0LL;
            v152 = *(struct VIDMM_ALLOC ***)(v118 + *((_QWORD *)this + 4));
            if ( (*(_DWORD *)this & 0x20) != 0 )
              VIDMM_PAGE_TABLE::DestroyPageTable(v152, v113, v117);
            else
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                (VIDMM_PAGE_DIRECTORY *)v152,
                v113,
                v117,
                (unsigned __int8)v113);
            v113 = a2;
            v221 = 1;
            *(_QWORD *)(v118 + *((_QWORD *)this + 4)) = 0LL;
          }
        }
        if ( v228 != v227 )
        {
          v119 = (_QWORD *)(16LL * v228 + *((_QWORD *)this + 3));
          if ( (*(_BYTE *)v119 & 1) != 0 )
          {
            v120 = 8LL * v228;
            if ( !*(_DWORD *)(*(_QWORD *)(v120 + *((_QWORD *)this + 4)) + 4LL) )
            {
              --*((_DWORD *)this + 1);
              *v119 = 0LL;
              v119[1] = 0LL;
              v203 = *(struct VIDMM_ALLOC ***)(v120 + *((_QWORD *)this + 4));
              if ( (*(_DWORD *)this & 0x20) != 0 )
                VIDMM_PAGE_TABLE::DestroyPageTable(v203, v113, v117);
              else
                VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                  (VIDMM_PAGE_DIRECTORY *)v203,
                  v113,
                  v117,
                  (unsigned __int8)v113);
              *(_QWORD *)(v120 + *((_QWORD *)this + 4)) = 0LL;
              goto LABEL_144;
            }
          }
        }
      }
    }
    v121 = v221;
LABEL_112:
    if ( !v121 )
    {
      v43 = v235;
LABEL_114:
      v122 = v236;
      goto LABEL_115;
    }
LABEL_144:
    v122 = v236;
    if ( !v225 )
    {
      v225 = 1;
      v239 = v236;
    }
    v43 = v235;
    if ( (unsigned int)v236 >= v232 )
      v232 = v236 + 1;
LABEL_115:
    *(_QWORD *)v231 += v43;
    v27 = (unsigned int)(v122 + 1);
    v31 = v252;
    v123 = v43 << 12;
    a7 += v123;
    v244 += v123;
    v29 = *((_QWORD *)v234 + 5);
    v34 = v29 + v252;
    v236 = v27;
    v33 = v29 + v252;
    v233 = v29 + v252;
    if ( v229 )
      goto LABEL_116;
    v28 = v242;
    v32 = v230;
  }
  v87 = 8LL * v228;
  v88 = *(_QWORD *)v231 << 12;
  v89 = *((_QWORD *)this + 4);
  v251 = *(_QWORD *)v231 << 12;
  *(_QWORD *)v237 = v87;
  v90 = *(unsigned int **)(v87 + v89);
  if ( (*(_QWORD *)v231 & 0xFFFFFFFFFFFFFLL) + v235 > (*(_QWORD *)v231 & 0xFFFFFFFFFFFFFuLL) )
  {
    v91 = *v90;
    v92 = a2;
    v93 = *((_QWORD *)a2 + 10);
    v94 = *((_QWORD *)v90 + 1);
    if ( v94 && *(_QWORD *)(v94 + 136) )
    {
      v95 = *(_DWORD *)(*(_QWORD *)(v93 + 40168) + 472LL * ((*v90 >> 7) & 0x1F) + 72);
      LODWORD(v96) = v95 & v231[0];
      *(_QWORD *)v241 = v95 & v231[0];
      v97 = v95 & (v231[0] + v235 - 1);
      if ( (v91 & 0x40) != 0 )
      {
        v96 = (unsigned int)v96 >> 4;
        v97 >>= 4;
        v88 &= 0xFFFFFFFFFFFF0000uLL;
        *(_QWORD *)v241 = v96;
        v251 = v88;
      }
      v98 = v97 - v96 + 1;
      v70 = *(_QWORD *)(v93 + 40952) == 0LL;
      v226 = v98;
      if ( !v70 && (unsigned int)v96 < v98 + (unsigned int)v96 )
      {
        v193 = 16LL * (unsigned int)v96;
        v194 = v98;
        do
        {
          v195 = *((_QWORD *)v90 + 3);
          v196 = *(_QWORD *)(v195 + v193);
          if ( (v196 & 1) != 0 )
            VIDMM_GLOBAL::RecordPageMappingHistory(
              v93,
              (v196 >> 5) & 0x1F,
              *(_QWORD *)(v195 + v193 + 8),
              1LL,
              1,
              0LL,
              v214);
          v193 += 16LL;
          --v194;
        }
        while ( v194 );
        LODWORD(v96) = v241[0];
        v98 = v226;
        v88 = v251;
        v86 = v233;
        v87 = *(_QWORD *)v237;
        v92 = a2;
      }
      v99 = v98 + v96;
      if ( (unsigned int)v96 < v98 + (unsigned int)v96 )
      {
        v100 = 16LL * (unsigned int)v96;
        v101 = (unsigned int)(v99 - v96);
        do
        {
          v102 = *((_QWORD *)v90 + 3);
          if ( (*(_BYTE *)(v102 + v100) & 1) != 0 )
          {
            --v90[1];
            *(_QWORD *)(v102 + v100) = 0LL;
            *(_QWORD *)(v100 + *((_QWORD *)v90 + 3) + 8) = 0LL;
          }
          v100 += 16LL;
          --v101;
        }
        while ( v101 );
        v86 = v233;
      }
      if ( v90[1] || (*((_DWORD *)v92 + 34) & 4) != 0 )
      {
        v103 = (VIDMM_GLOBAL *)*((_QWORD *)v92 + 10);
        v104 = (*v90 >> 3) & 8;
        if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                    (VIDMM_PAGE_TABLE_BASE *)v90,
                    v92,
                    &v245,
                    (unsigned __int64 *)&v259,
                    &v249) < 0 )
        {
          v206 = WdLogNewEntry5_WdError(v106, v105, v107, v108);
          *(_QWORD *)(v206 + 24) = 3679LL;
          WdLogEvent5_WdError(v206);
          v209 = WdLogNewEntry5_WdAssertion(v208, v207);
          *(_QWORD *)(v209 + 24) = 6250LL;
          WdLogEvent5_WdAssertion(v209);
          v59 = v262;
          LODWORD(v35) = -1073741823;
          goto LABEL_284;
        }
        if ( (*((_BYTE *)v103 + 40872) & 8) != 0 )
          v109 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        else
          v109 = (int)(*v90 << 16) >> 29;
        v220 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v104;
        v110 = v259;
        VIDMM_GLOBAL::UpdatePageTable(
          v103,
          *v90 & 7,
          *((struct VIDMM_PROCESS **)a2 + 11),
          0LL,
          0LL,
          0LL,
          0LL,
          v241[0],
          v226,
          0LL,
          0LL,
          (*v90 >> 7) & 0x1F,
          v245,
          (unsigned __int64)v259,
          v109,
          v88 >> 12,
          v220,
          0LL);
        v111 = *((_QWORD *)a2 + 10);
        if ( (*(_BYTE *)(v111 + 40872) & 8) != 0 || (v112 = (int)(*v90 << 16) >> 29) == 0 )
        {
          VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
            (VIDMM_PAGE_TABLE_BASE *)v90,
            *((struct VIDMM_GLOBAL **)a2 + 10),
            v110,
            v249);
        }
        else if ( v112 == 1
               && *(struct CVirtualAddressAllocator **)(v111 + 8 * (((unsigned __int64)*v90 >> 7) & 0x1F) + 40352) != a2 )
        {
          v197 = (__int64 **)(*((_QWORD *)v90 + 2) + 128LL);
          v198 = *v197;
          v199 = **v197;
          if ( (__int64 **)(*v197)[1] != v197 || *(__int64 **)(v199 + 8) != v198 )
            __fastfail(3u);
          *v197 = (__int64 *)v199;
          *(_QWORD *)(v199 + 8) = v197;
          v198[2] = *(_QWORD *)(v111 + 8LL * ((*v90 >> 7) & 0x1F) + 4880);
          v200 = 472LL * ((*v90 >> 7) & 0x1F) + *(_QWORD *)(v111 + 40168) + 456LL;
          v201 = *(__int64 ***)(v200 + 8);
          if ( *v201 != (__int64 *)v200 )
            __fastfail(3u);
          *v198 = v200;
          v198[1] = (__int64)v201;
          *v201 = v198;
          *(_QWORD *)(v200 + 8) = v198;
        }
        v87 = *(_QWORD *)v237;
        v86 = v233;
      }
    }
    v113 = a2;
    LODWORD(v35) = 0;
    v226 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)(v87 + *((_QWORD *)this + 4)) + 4LL) && (*((_DWORD *)a2 + 34) & 4) == 0 )
    {
      --*((_DWORD *)this + 1);
      v140 = *((_QWORD *)this + 3);
      v221 = 1;
      *(_QWORD *)(v86 + v140) = 0LL;
      *(_QWORD *)(v86 + v140 + 8) = 0LL;
      VIDMM_PAGE_TABLE::DestroyPageTable(
        *(struct VIDMM_ALLOC ***)(v87 + *((_QWORD *)this + 4)),
        a2,
        *(_QWORD *)v231 & ~*((_QWORD *)v234 + 4));
      v113 = a2;
      *(_QWORD *)(v87 + *((_QWORD *)this + 4)) = 0LL;
    }
    v59 = v262;
    v114 = v238;
    goto LABEL_102;
  }
  LODWORD(v35) = -1073741811;
LABEL_284:
  v9 = this;
LABEL_285:
  v210 = WdLogNewEntry5_WdWarning(v61, v57);
  WdLogEvent5_WdWarning(v210);
  v54 = a2;
LABEL_118:
  if ( v225 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v9,
                v54,
                (unsigned int *)&v262,
                (unsigned __int64 *)&a9,
                &v249) >= 0 )
    {
      v145 = *((_QWORD *)v234 + 5) * v239 + (v247 & ~(*((_QWORD *)v234 + 4) | *((_QWORD *)v234 + 2)));
      if ( *((_BYTE *)v59 + 57) && (*(_DWORD *)v9 & 0x20) != 0 )
        v146 = (struct _DXGK_PTE *)(*((_QWORD *)v9 + 3) + 16LL * (v239 + v230));
      else
        v146 = 0LL;
      if ( (*((_BYTE *)v240 + 40872) & 8) == 0 )
        v253[0] = (int)(*(_DWORD *)v9 << 16) >> 29;
      v147 = *((_QWORD *)v59 + 8);
      v148 = *(_DWORD *)v9;
      v232 -= v239;
      v149 = a9;
      VIDMM_GLOBAL::UpdatePageTable(
        v240,
        v148 & 7,
        *((struct VIDMM_PROCESS **)a2 + 11),
        *((_QWORD *)v59 + 2),
        VidMmAllocFromOwner,
        VidMmGlobalAllocFromOwner,
        v263 + (v145 << 12) - (v247 << 12),
        v239,
        v232,
        (struct _DXGK_PTE *)(*((_QWORD *)v9 + 3) + 16LL * v239),
        v146,
        (v148 >> 7) & 0x1F,
        (unsigned int)v262,
        (unsigned __int64)a9,
        v253[0],
        v145,
        v248[0],
        v147);
      v150 = v149;
      v54 = a2;
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(v9, a2, v151, v150, v249);
      *(_DWORD *)v9 |= 0x10000u;
      goto LABEL_119;
    }
    v211 = WdLogNewEntry5_WdError(v142, v141, v143, v144);
    *(_QWORD *)(v211 + 24) = 5924LL;
    WdLogEvent5_WdError(v211);
    return 3221225473LL;
  }
  else
  {
LABEL_119:
    if ( !*((_DWORD *)v9 + 1) && (*((_DWORD *)v54 + 34) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v9, v54, a5 & ~*((_QWORD *)v234 + 4), 1u, 1);
    return (unsigned int)v35;
  }
}

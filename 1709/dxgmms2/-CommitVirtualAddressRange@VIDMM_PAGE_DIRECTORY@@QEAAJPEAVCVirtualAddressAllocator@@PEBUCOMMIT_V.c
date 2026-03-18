/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0054BF0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3E9C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001AB8 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00160F8 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055B38 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C0056D30 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00573F0 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0072E4C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C007328C (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00793E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C009CABC (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3CAC (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A3E9C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C00A45DC (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00A4800 (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00A50D4 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
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
  __int64 v9; // r10
  int v11; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  struct VIDMM_PROCESS *v14; // rsi
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r9
  unsigned __int64 v20; // rbp
  int v21; // r8d
  struct CVirtualAddressAllocator *v22; // r9
  unsigned int v23; // edi
  VIDMM_PAGE_DIRECTORY *v24; // rbx
  enum _DXGK_PAGETABLEUPDATEMODE v25; // esi
  struct _DXGK_UPDATEPAGETABLEFLAGS v26; // edx
  __int64 v27; // rax
  char v28; // cl
  unsigned __int64 v29; // r8
  struct COMMIT_VA_STATE *v30; // r11
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  bool v33; // zf
  unsigned int v34; // eax
  unsigned int v35; // ebp
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rcx
  __int64 v38; // rbp
  struct CVirtualAddressAllocator *v39; // r9
  __int64 v40; // rax
  unsigned int v41; // ebp
  unsigned __int64 v42; // r8
  unsigned int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rsi
  char v50; // bp
  unsigned int v51; // r11d
  struct COMMIT_VA_STATE *v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  bool v56; // cl
  int v57; // edx
  char v58; // r9
  unsigned __int64 v59; // r11
  struct COMMIT_VA_STATE *v60; // rdi
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned int *v63; // rbx
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rbp
  int v67; // r8d
  __int64 v68; // rdi
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r9
  unsigned int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // r8
  _QWORD *v75; // rdx
  int v76; // eax
  VIDMM_GLOBAL *v77; // rsi
  int v78; // edi
  enum _DXGK_PAGETABLEUPDATEMODE v79; // eax
  void *v80; // rdi
  __int64 v81; // r10
  int v82; // eax
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int64 v86; // rbp
  unsigned int *v87; // rbx
  unsigned int v88; // r9d
  unsigned __int64 v89; // r8
  int v90; // edx
  __int64 v91; // rdi
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // r9
  unsigned int v95; // r10d
  unsigned int v96; // r10d
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rdx
  struct CVirtualAddressAllocator *v100; // rdx
  VIDMM_GLOBAL *v101; // rdi
  int v102; // esi
  enum _DXGK_PAGETABLEUPDATEMODE v103; // eax
  void *v104; // rsi
  __int64 v105; // r10
  int v106; // eax
  VIDMM_PAGE_DIRECTORY *v107; // r9
  char *v108; // rbx
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v109; // rdi
  struct CVirtualAddressAllocator *v110; // r10
  __int64 v111; // rdx
  __int64 v112; // r8
  unsigned __int64 v113; // rbx
  __int64 v114; // rdi
  _QWORD *v115; // r8
  __int64 v116; // rdi
  unsigned __int8 v117; // cl
  int v118; // r8d
  struct CVirtualAddressAllocator *v119; // rdi
  __int64 result; // rax
  char v121; // bl
  struct COMMIT_VA_STATE *v122; // r8
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r9
  unsigned int v125; // eax
  unsigned __int8 v126; // r8
  unsigned __int8 v127; // r9
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  bool v132; // dl
  _QWORD *v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  unsigned __int64 v136; // rcx
  struct _DXGK_PTE *v137; // r10
  unsigned int v138; // r8d
  unsigned int v139; // edx
  struct _DXGK_PTE *v140; // r11
  struct VIDMM_ALLOC **v141; // rbx
  unsigned __int64 v142; // r9
  unsigned __int64 v143; // r9
  unsigned int v144; // r8d
  VIDMM_PAGE_TABLE *v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // rax
  unsigned __int8 v154; // al
  __int64 v155; // rdx
  int v156; // r8d
  unsigned int v157; // ecx
  int v158; // eax
  __int64 v159; // rcx
  __int64 v160; // rax
  __int64 v161; // rbx
  int *v162; // rcx
  int v163; // eax
  __int64 v164; // r9
  unsigned __int64 v165; // rdx
  unsigned __int64 v166; // r10
  unsigned __int64 v167; // r8
  int v168; // eax
  __int64 v169; // r8
  __int64 v170; // rdx
  __int64 v171; // r9
  __int64 v172; // r8
  __int64 v173; // rsi
  __int64 v174; // rbp
  __int64 v175; // r8
  unsigned __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // rax
  unsigned __int64 *v182; // rdx
  unsigned __int64 v183; // rcx
  unsigned __int64 v184; // r8
  unsigned __int64 **v185; // rax
  __int64 v186; // rsi
  __int64 v187; // rbp
  __int64 v188; // r8
  unsigned __int64 v189; // rax
  __int64 v190; // rax
  __int64 *v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 **v194; // rax
  VIDMM_PAGE_DIRECTORY *v195; // rcx
  unsigned int v196; // eax
  VIDMM_PAGE_TABLE *v197; // rcx
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  struct _VIDMM_GLOBAL_ALLOC *v206; // [rsp+28h] [rbp-190h]
  struct VIDMM_ALLOC **v207; // [rsp+30h] [rbp-188h]
  struct VIDMM_ALLOC **v208; // [rsp+30h] [rbp-188h]
  char v209; // [rsp+38h] [rbp-180h]
  unsigned __int64 v210; // [rsp+38h] [rbp-180h]
  struct VIDMM_ALLOC **v211; // [rsp+40h] [rbp-178h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v212; // [rsp+80h] [rbp-138h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v213; // [rsp+80h] [rbp-138h]
  unsigned __int64 v214; // [rsp+88h] [rbp-130h]
  unsigned __int8 v215; // [rsp+90h] [rbp-128h]
  char v216; // [rsp+91h] [rbp-127h]
  unsigned int v217; // [rsp+94h] [rbp-124h]
  unsigned int v218; // [rsp+94h] [rbp-124h]
  unsigned int v219; // [rsp+94h] [rbp-124h]
  unsigned __int8 v220; // [rsp+98h] [rbp-120h] BYREF
  char v221; // [rsp+99h] [rbp-11Fh]
  char v222; // [rsp+9Ah] [rbp-11Eh]
  unsigned int v223; // [rsp+9Ch] [rbp-11Ch]
  unsigned int v224; // [rsp+A0h] [rbp-118h]
  char v225; // [rsp+A4h] [rbp-114h]
  unsigned int v226[2]; // [rsp+A8h] [rbp-110h]
  unsigned int v227; // [rsp+B0h] [rbp-108h]
  __int64 v228; // [rsp+B8h] [rbp-100h]
  unsigned __int64 v229; // [rsp+C0h] [rbp-F8h]
  unsigned int v230; // [rsp+C8h] [rbp-F0h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v231; // [rsp+D0h] [rbp-E8h]
  unsigned int v232; // [rsp+D8h] [rbp-E0h]
  unsigned __int64 v233; // [rsp+E0h] [rbp-D8h]
  unsigned int v234[2]; // [rsp+E8h] [rbp-D0h]
  unsigned int v235; // [rsp+F0h] [rbp-C8h]
  __int64 v236; // [rsp+F8h] [rbp-C0h]
  __int64 v237; // [rsp+100h] [rbp-B8h]
  unsigned __int64 v238; // [rsp+108h] [rbp-B0h]
  unsigned int v239; // [rsp+110h] [rbp-A8h] BYREF
  unsigned int v240; // [rsp+114h] [rbp-A4h] BYREF
  struct _DXGK_UPDATEPAGETABLEFLAGS v241[2]; // [rsp+118h] [rbp-A0h]
  VIDMM_GLOBAL *v242; // [rsp+120h] [rbp-98h]
  void *v243; // [rsp+128h] [rbp-90h] BYREF
  unsigned __int64 v244; // [rsp+130h] [rbp-88h]
  unsigned __int64 v245; // [rsp+138h] [rbp-80h]
  unsigned __int64 v246; // [rsp+140h] [rbp-78h]
  unsigned __int64 v247; // [rsp+148h] [rbp-70h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+150h] [rbp-68h]
  struct VIDMM_ALLOC *VidMmAllocFromOwner; // [rsp+158h] [rbp-60h]
  __int64 v250; // [rsp+160h] [rbp-58h]
  void *v251; // [rsp+168h] [rbp-50h] BYREF
  void *v252; // [rsp+170h] [rbp-48h] BYREF
  void *v253; // [rsp+178h] [rbp-40h] BYREF
  void *v254; // [rsp+180h] [rbp-38h] BYREF
  struct COMMIT_VA_STATE *v257; // [rsp+1D0h] [rbp+18h] BYREF
  unsigned __int64 v258; // [rsp+1D8h] [rbp+20h]

  v258 = a4;
  v257 = a3;
  v9 = *(_QWORD *)a3;
  v238 = a4;
  *a9 = 0LL;
  v11 = v9 & 1;
  if ( !v11 )
  {
    v12 = *((_QWORD *)this + 1);
    if ( !v12 || !*(_QWORD *)(v12 + 136) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v205 = WdLogNewEntry5_WdAssertion(0LL, a5);
    *(_QWORD *)(v205 + 24) = 5293LL;
    WdLogEvent5_WdAssertion(v205);
    return 3221225485LL;
  }
  v247 = a5 >> 12;
  v13 = (a5 >> 12) + a6;
  v244 = v13;
  if ( v13 <= a5 >> 12 )
  {
    v149 = WdLogNewEntry5_WdAssertion(0LL, v13);
    *(_QWORD *)(v149 + 24) = 5310LL;
    WdLogEvent5_WdAssertion(v149);
    return 3221225485LL;
  }
  v242 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
  v14 = (struct VIDMM_PROCESS *)*((_QWORD *)a2 + 11);
  v15 = *(_DWORD *)this;
  v16 = *(unsigned int *)this;
  VidMmGlobalAllocFromOwner = 0LL;
  v17 = (v16 >> 7) & 0x1F;
  VidMmAllocFromOwner = 0LL;
  v18 = *((_QWORD *)v242 + 5021);
  v250 = 1552 * v17 + v18;
  v19 = 48LL * (v15 & 7);
  v20 = v247;
  v231 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v19 + v250 + 88);
  v233 = (v247 & *((_QWORD *)v231 + 2)) >> *(_QWORD *)(v19 + v250 + 112);
  v21 = (v15 >> 4) & 1;
  if ( v21 )
  {
    v22 = a2;
    v23 = *(_DWORD *)(32 * v17 + *((_QWORD *)a2 + 14) + 16);
  }
  else
  {
    v150 = v19 + 1552 * v17;
    v22 = a2;
    v23 = *(_DWORD *)(v150 + v18 + 88);
  }
  v227 = v23;
  if ( v21 && *((_QWORD *)v242 + 5115) )
  {
    v151 = a6 << 12;
    if ( v11 )
    {
      v207 = (struct VIDMM_ALLOC **)*((_QWORD *)v257 + 4);
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(v242, v14, a5, v151, *((_DWORD *)v257 + 13), a7);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v242, v14, a5, v151);
    }
    v22 = a2;
  }
  v24 = this;
  v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
  v26 = 0;
  v232 = 0;
  v230 = 0;
  v222 = 0;
  v27 = *((_QWORD *)this + 1);
  *(_QWORD *)v241 = 0LL;
  if ( v27 && *(_QWORD *)(v27 + 136) )
  {
    v28 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, v22, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    v28 = 1;
    v26 = v241[0];
  }
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    *(_QWORD *)v241 = *(unsigned int *)&v26 | 2;
    goto LABEL_173;
  }
  if ( v28 )
  {
LABEL_173:
    LODWORD(v29) = v233;
    if ( (_DWORD)v233 )
    {
      v146 = 0LL;
      v147 = (unsigned int)v233;
      do
      {
        v148 = *((_QWORD *)this + 3);
        v146 += 16LL;
        *(_QWORD *)(v146 + v148 - 16) = 0LL;
        *(_QWORD *)(v146 + v148 - 8) = 0LL;
        --v147;
      }
      while ( v147 );
    }
    v230 = v23;
    v222 = 1;
    goto LABEL_17;
  }
  LODWORD(v29) = v233;
LABEL_17:
  v30 = v257;
  *(_QWORD *)v226 = v20;
  v225 = 0;
  v31 = *((_QWORD *)v231 + 5);
  v32 = v20 & ~*((_QWORD *)v231 + 4);
  v33 = (*(_DWORD *)this & 0x20) == 0;
  v235 = 0;
  v34 = v227;
  v35 = 0;
  v36 = v31 + v32;
  v228 = v31 + v32;
  v37 = v31 + v32;
  if ( !v33 && *((_BYTE *)v257 + 57) )
  {
    if ( *((_BYTE *)v257 + 56) )
      v35 = v227;
    v235 = v35;
  }
  LODWORD(v38) = 0;
  v217 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v29 >= v34 )
      goto LABEL_113;
    v39 = a2;
    v215 = 0;
    v220 = 0;
    v221 = 0;
    v216 = 0;
    v40 = (unsigned int)v29 + v235;
    v33 = *((_BYTE *)v30 + 58) == 0;
    v223 = v29 + v235;
    v224 = v29 + v235;
    if ( !v33 )
    {
      v40 = v223;
      if ( (*(_DWORD *)v24 & 0x20) != 0 )
      {
        v41 = v223 + v227;
        v216 = 1;
        if ( v223 != (_DWORD)v29 )
          v41 = v29;
        v224 = v41;
        LODWORD(v38) = v217;
      }
    }
    v42 = v244;
    if ( v37 < v244 )
      v42 = v37;
    else
      v225 = 1;
    v43 = v226[0];
    v246 = v42;
    v229 = v42 - *(_QWORD *)v226;
    v44 = *(_QWORD *)v30;
    if ( (*(_QWORD *)v30 & 1) == 0 )
    {
      v45 = *((_QWORD *)v24 + 3);
      if ( (*(_BYTE *)(v45 + 16 * v40) & 1) == 0 && (*(_BYTE *)(v45 + 16LL * v224) & 1) == 0 )
      {
LABEL_111:
        v118 = v233;
        goto LABEL_112;
      }
      v43 = v226[0];
    }
    if ( (v44 & 2) != 0 )
    {
      v152 = *((_QWORD *)v24 + 3);
      if ( (*(_BYTE *)(v152 + 16LL * v223) & 2) != 0 )
      {
        v153 = v223;
      }
      else
      {
        if ( !v216 || (*(_BYTE *)(v152 + 16LL * v224) & 2) == 0 )
        {
LABEL_198:
          v43 = v226[0];
          goto LABEL_36;
        }
        v153 = v224;
      }
      if ( (_DWORD)v153 != -1 && (((unsigned __int8)v44 ^ *(_BYTE *)(v152 + 16 * v153)) & 8) == 0 )
        goto LABEL_111;
      goto LABEL_198;
    }
LABEL_36:
    v46 = v229;
    if ( v31 <= v229 && (*((_DWORD *)a2 + 34) & 4) == 0 )
    {
      v154 = VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
               v24,
               a2,
               *(const struct _DXGK_GPUMMUCAPS **)(v250 + 440),
               v30,
               v231,
               v223,
               v224,
               v43,
               a7,
               &v220);
      v30 = v257;
      if ( v154 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v24 + 3) + 16LL * v223) & 0x400LL) != 0 )
        {
          VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(
                                                                      *((_DWORD *)v257 + 12),
                                                                      *((_QWORD *)v257 + 5));
          VidMmAllocFromOwner = (struct VIDMM_ALLOC *)GetVidMmAllocFromOwner(v156, v155);
        }
        v117 = v220;
        goto LABEL_110;
      }
      v36 = v228;
      v39 = a2;
      v46 = v229;
      v215 = v220;
    }
    v47 = v223;
    v48 = *((_QWORD *)v24 + 3);
    v49 = v223;
    if ( (*(_DWORD *)(v48 + 16LL * v223) & 0x400LL) != 0 )
    {
      v157 = v223;
    }
    else
    {
      if ( !v216 || (*(_DWORD *)(v48 + 16LL * v224) & 0x400LL) == 0 )
        goto LABEL_40;
      v157 = v224;
    }
    if ( *((_QWORD *)v231 + 5) <= v46 )
    {
      v161 = v157;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v39 + 10) + 40192LL),
        *(PVOID *)(*((_QWORD *)this + 4) + 8LL * v157));
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v161) = 0LL;
      v161 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v161) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v161) &= ~1uLL;
      v24 = this;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v158 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(v24, a2, v231, *((_BYTE *)v30 + 57), v32 << 12, v157, a9);
      v38 = v158;
      v217 = v158;
      if ( v158 < 0 )
      {
        v160 = WdLogNewEntry5_WdWarning(v159);
        *(_QWORD *)(v160 + 24) = v38;
        WdLogEvent5_WdWarning(v160);
        goto LABEL_209;
      }
    }
    v36 = v228;
    v30 = v257;
    v39 = a2;
    LODWORD(v46) = v229;
    v47 = v223;
    v221 = 1;
LABEL_40:
    v50 = *((_BYTE *)v30 + 56);
    v51 = *(_DWORD *)v24;
    v52 = v257;
    if ( (*(_DWORD *)v24 & 0x20) == 0 || *((_DWORD *)v257 + 13) || !v50 )
      goto LABEL_42;
    if ( !*((_BYTE *)v257 + 57) )
    {
      v162 = *(int **)(*((_QWORD *)v24 + 4) + 8 * v49);
      if ( v162 && v162[1] )
      {
        v163 = *v162;
        v52 = v257;
        if ( (v163 & 0x40) == 0 )
          goto LABEL_223;
      }
      else
      {
        v52 = v257;
      }
    }
    if ( (v46 & 0xF) != 0 )
    {
LABEL_223:
      v50 = 0;
      v47 = v233;
      v223 = v233;
      if ( v216 )
        v224 = v227 + v233;
      goto LABEL_42;
    }
    v164 = *((_QWORD *)v52 + 4);
    v165 = a7 >> 12;
    v166 = (a7 >> 12) + (unsigned int)v46;
    v167 = (unsigned int)(a7 >> 12);
    if ( v167 < v166 )
    {
      do
      {
        if ( (v165 & 0xF) != 0 )
        {
          if ( *(_QWORD *)(v164 + 8 * v167 + 48) != *(_QWORD *)(v164 + 8LL * (unsigned int)(v165 - 1) + 48) + 1LL )
            goto LABEL_222;
        }
        else if ( (*(_BYTE *)(v164 + 8 * v167 + 48) & 0xF) != 0 )
        {
LABEL_222:
          v39 = a2;
          v52 = v257;
          v36 = v228;
          goto LABEL_223;
        }
        LODWORD(v165) = v165 + 1;
        v167 = (unsigned int)v165;
      }
      while ( (unsigned int)v165 < v166 );
      v52 = v257;
    }
    v36 = v228;
    v50 = 1;
    v39 = a2;
    v47 = v223;
LABEL_42:
    if ( (*(_BYTE *)v52 & 1) != 0 )
      goto LABEL_122;
    v53 = v47;
    if ( (*(_BYTE *)(16LL * v47 + *((_QWORD *)v24 + 3)) & 2) != 0 )
    {
      v52 = v257;
LABEL_122:
      v53 = v47;
      if ( *(_QWORD *)(*((_QWORD *)v24 + 4) + 8LL * v47) )
        goto LABEL_44;
      if ( (v51 & 0x20) == 0 )
      {
        PageDirectory = CreatePageDirectory(v39, (v51 >> 7) & 0x1F, (v51 & 7) - 1);
        goto LABEL_129;
      }
      if ( *((_BYTE *)v52 + 57) && v50 || *((_DWORD *)v52 + 13) == -3 )
      {
        v126 = 1;
      }
      else
      {
        v126 = 0;
        if ( v50 )
        {
          v127 = 1;
LABEL_128:
          PageDirectory = CreatePageTable(a2, (v51 >> 7) & 0x1F, v126, v127);
LABEL_129:
          v130 = *((_QWORD *)v24 + 4);
          *(_QWORD *)(v130 + 8 * v53) = PageDirectory;
          if ( *(_QWORD *)(*((_QWORD *)v24 + 4) + 8 * v53) )
          {
            v36 = v228;
            goto LABEL_44;
          }
          v198 = WdLogNewEntry5_WdAssertion(v130, v129);
          *(_QWORD *)(v198 + 24) = 5655LL;
          WdLogEvent5_WdAssertion(v198);
          LODWORD(v38) = -1073741801;
LABEL_209:
          v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          goto LABEL_113;
        }
      }
      v127 = 0;
      goto LABEL_128;
    }
LABEL_44:
    v54 = *((_QWORD *)v24 + 3);
    v236 = 16 * v53;
    v55 = *(_QWORD *)(16 * v53 + v54);
    v56 = (v55 & 1) == 0;
    v57 = (v55 >> 1) & 1;
    if ( !v57 )
    {
      v58 = v56;
      if ( !v216 || (*(_BYTE *)(v54 + 16LL * v224) & 2) == 0 )
      {
        v59 = v229;
        v60 = v257;
        goto LABEL_48;
      }
    }
    v59 = v229;
    if ( *((_QWORD *)v231 + 5) <= v229 )
    {
      v169 = v224;
      v33 = v57 == 0LL;
      v170 = -3LL;
      v171 = 2LL;
      if ( !v33 )
        v169 = v223;
      v172 = 2 * v169;
      do
      {
        *(_QWORD *)(*((_QWORD *)v24 + 3) + 8 * v172) &= v170++;
        --v171;
      }
      while ( v171 );
      --*((_DWORD *)v24 + 1);
      v58 = v56;
      v60 = v257;
      goto LABEL_239;
    }
    v210 = v32;
    v60 = v257;
    v168 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
             v24,
             a2,
             v257,
             v223,
             v224,
             *(unsigned __int64 *)v226,
             v246,
             v210,
             v36,
             a9);
    v217 = v168;
    if ( v168 < 0 )
      break;
    v59 = v229;
    v58 = 0;
LABEL_239:
    v221 = 1;
LABEL_48:
    if ( (*(_DWORD *)v24 & 0x20) == 0 )
    {
      v195 = *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)v24 + 4) + 8 * v53);
      v237 = 8 * v53;
      v196 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
               v195,
               a2,
               v60,
               v238,
               *(_QWORD *)v226 << 12,
               v59,
               a7,
               v58,
               a9);
      v30 = v257;
      LODWORD(v38) = v196;
      v217 = v196;
      v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
LABEL_138:
      if ( (int)v38 < 0 )
        goto LABEL_287;
      v107 = this;
      goto LABEL_98;
    }
    v30 = v257;
    if ( (*(_BYTE *)v257 & 1) != 0 )
    {
      v121 = *((_BYTE *)v257 + 56);
      v122 = v257;
      v123 = *(_QWORD *)v226;
      v211 = a9;
      v209 = v58;
      v124 = v238;
      v208 = (struct VIDMM_ALLOC **)a7;
      v206 = (struct _VIDMM_GLOBAL_ALLOC *)v229;
      *((_BYTE *)v257 + 56) = v50;
      v237 = 8 * v53;
      v125 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
               *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + 8 * v53),
               a2,
               v122,
               v124,
               v123 << 12,
               (unsigned __int64)v206,
               (unsigned __int64)v208,
               v209,
               v211);
      v30 = v257;
      LODWORD(v38) = v125;
      v217 = v125;
      *((_BYTE *)v257 + 56) = v121;
      goto LABEL_120;
    }
    v61 = *((_QWORD *)v24 + 4);
    v62 = 8 * v53;
    v237 = 8 * v53;
    v63 = *(unsigned int **)(8 * v53 + v61);
    if ( !v63 )
    {
      LODWORD(v38) = v217;
      goto LABEL_120;
    }
    v64 = *(_QWORD *)v226;
    v65 = v229;
    if ( !v63[1] )
    {
      LODWORD(v38) = v217;
      goto LABEL_121;
    }
    v66 = *(_QWORD *)v226 << 12;
    v228 = *(_QWORD *)v226 << 12;
    if ( (*(_QWORD *)v226 & 0xFFFFFFFFFFFFFLL) + v229 <= (*(_QWORD *)v226 & 0xFFFFFFFFFFFFFuLL) )
    {
      LODWORD(v38) = -1073741811;
      v217 = -1073741811;
      goto LABEL_121;
    }
    v67 = *v63;
    v68 = *((_QWORD *)a2 + 10);
    v69 = *((_QWORD *)v63 + 1);
    v62 = *(_QWORD *)(v68 + 40168) + 1552LL * ((*v63 >> 7) & 0x1F);
    if ( v69 && *(_QWORD *)(v69 + 136) )
    {
      v70 = *(_DWORD *)(v62 + 72);
      LODWORD(v71) = v70 & v226[0];
      *(_QWORD *)v234 = v70 & v226[0];
      v72 = v70 & (v226[0] + v229 - 1);
      if ( (v67 & 0x40) != 0 )
      {
        v71 = (unsigned int)v71 >> 4;
        v72 >>= 4;
        v66 &= 0xFFFFFFFFFFFF0000uLL;
        *(_QWORD *)v234 = v71;
        v228 = v66;
      }
      v62 = v72 - (unsigned int)v71 + 1;
      v218 = v62;
      if ( *(_QWORD *)(v68 + 40952) && (unsigned int)v71 < (int)v62 + (int)v71 )
      {
        v173 = 16LL * (unsigned int)v71;
        v174 = (unsigned int)v62;
        do
        {
          v175 = *((_QWORD *)v63 + 3);
          v176 = *(_QWORD *)(v175 + v173);
          if ( (v176 & 1) != 0 )
            VIDMM_GLOBAL::RecordPageMappingHistory(
              v68,
              (v176 >> 5) & 0x1F,
              *(_QWORD *)(v175 + v173 + 8),
              1LL,
              1,
              0LL,
              v207);
          v173 += 16LL;
          --v174;
        }
        while ( v174 );
        LODWORD(v71) = v234[0];
        v62 = v218;
        v66 = v228;
        v30 = v257;
      }
      if ( (unsigned int)v71 < (int)v62 + (int)v71 )
      {
        v73 = 16LL * (unsigned int)v71;
        v74 = (unsigned int)v62;
        do
        {
          v75 = (_QWORD *)(*((_QWORD *)v63 + 3) + v73);
          v62 = *(unsigned __int8 *)v75;
          if ( (v62 & 1) != 0 )
          {
            --v63[1];
            *v75 = 0LL;
            v62 = *((_QWORD *)v63 + 3);
            *(_QWORD *)(v62 + v73 + 8) = 0LL;
          }
          v73 += 16LL;
          --v74;
        }
        while ( v74 );
        v66 = v228;
      }
      if ( v63[1] || (*((_DWORD *)a2 + 34) & 4) != 0 )
      {
        if ( (*v63 & 0x40) != 0 )
          v76 = 8;
        else
          v76 = 0;
        v77 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
        v78 = v76;
        if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                    (VIDMM_PAGE_TABLE_BASE *)v63,
                    a2,
                    &v239,
                    (unsigned __int64 *)&v251,
                    &v252) < 0 )
        {
          v177 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v177 + 24) = 3679LL;
          WdLogEvent5_WdError(v177);
          v180 = WdLogNewEntry5_WdAssertion(v179, v178);
          *(_QWORD *)(v180 + 24) = 6251LL;
          WdLogEvent5_WdAssertion(v180);
          v30 = v257;
          LODWORD(v38) = -1073741823;
          v217 = -1073741823;
LABEL_120:
          v65 = v229;
          v64 = *(_QWORD *)v226;
LABEL_121:
          v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          goto LABEL_75;
        }
        if ( (*((_BYTE *)v77 + 40872) & 8) != 0 )
          v79 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        else
          v79 = (int)(*v63 << 16) >> 29;
        v212 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v78;
        v80 = v251;
        VIDMM_GLOBAL::UpdatePageTable(
          v77,
          *v63 & 7,
          *((struct VIDMM_PROCESS **)a2 + 11),
          0LL,
          0LL,
          0LL,
          0LL,
          v234[0],
          v218,
          0LL,
          0LL,
          (*v63 >> 7) & 0x1F,
          v239,
          (unsigned __int64)v251,
          v79,
          v66 >> 12,
          v212,
          0LL);
        v81 = *((_QWORD *)a2 + 10);
        if ( (*(_BYTE *)(v81 + 40872) & 8) != 0 || (v62 = *v63, (v82 = (int)(*v63 << 16) >> 29) == 0) )
        {
          VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
            (VIDMM_PAGE_TABLE_BASE *)v63,
            *((struct VIDMM_GLOBAL **)a2 + 10),
            v80,
            v252);
        }
        else if ( v82 == 1 )
        {
          v62 = (v62 >> 7) & 0x1F;
          if ( *(struct CVirtualAddressAllocator **)(v81 + 8 * v62 + 40352) != a2 )
          {
            v181 = *((_QWORD *)v63 + 2) + 128LL;
            v182 = *(unsigned __int64 **)v181;
            if ( *(_QWORD *)(*(_QWORD *)v181 + 8LL) != v181 || (v183 = *v182, *(unsigned __int64 **)(*v182 + 8) != v182) )
              __fastfail(3u);
            *(_QWORD *)v181 = v183;
            *(_QWORD *)(v183 + 8) = v181;
            v182[2] = *(_QWORD *)(v81 + 8LL * ((*v63 >> 7) & 0x1F) + 4880);
            v62 = 1552LL * ((*v63 >> 7) & 0x1F);
            v184 = v62 + *(_QWORD *)(v81 + 40168) + 456LL;
            v185 = *(unsigned __int64 ***)(v184 + 8);
            if ( *v185 != (unsigned __int64 *)v184 )
              __fastfail(3u);
            *v182 = v184;
            v182[1] = (unsigned __int64)v185;
            *v185 = v182;
            *(_QWORD *)(v184 + 8) = v182;
          }
        }
        v30 = v257;
      }
    }
    v65 = v229;
    v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    v64 = *(_QWORD *)v226;
    LODWORD(v38) = 0;
    v217 = 0;
LABEL_75:
    if ( !*((_BYTE *)v30 + 58) )
      goto LABEL_138;
    if ( (int)v38 < 0 )
      goto LABEL_287;
    v83 = 16LL * v224;
    v84 = *((_QWORD *)this + 3);
    v228 = v83;
    v62 = *(unsigned __int8 *)(v83 + v84);
    if ( (v62 & 1) == 0 )
      goto LABEL_138;
    v85 = *((_QWORD *)this + 4);
    v62 = 8LL * v224;
    v243 = (void *)v62;
    v86 = v64 << 12;
    v245 = v64 << 12;
    v87 = *(unsigned int **)(v62 + v85);
    v88 = v64;
    v89 = (v64 & 0xFFFFFFFFFFFFFLL) + v65;
    if ( v89 <= (v64 & 0xFFFFFFFFFFFFFLL) )
    {
      LODWORD(v38) = -1073741811;
LABEL_287:
      v203 = WdLogNewEntry5_WdWarning(v62);
      WdLogEvent5_WdWarning(v203);
      v24 = this;
LABEL_113:
      v60 = v257;
      goto LABEL_114;
    }
    v90 = *v87;
    v91 = *((_QWORD *)a2 + 10);
    v92 = *((_QWORD *)v87 + 1);
    if ( v92 && *(_QWORD *)(v92 + 136) )
    {
      v93 = *(_DWORD *)(*(_QWORD *)(v91 + 40168) + 1552LL * ((*v87 >> 7) & 0x1F) + 72);
      v94 = v93 & v88;
      v95 = v93 & (v89 - 1);
      *(_QWORD *)v234 = v94;
      if ( (v90 & 0x40) != 0 )
      {
        v94 = (unsigned int)v94 >> 4;
        v95 >>= 4;
        v86 &= 0xFFFFFFFFFFFF0000uLL;
        *(_QWORD *)v234 = v94;
        v245 = v86;
      }
      v96 = v95 - v94 + 1;
      v219 = v96;
      if ( *(_QWORD *)(v91 + 40952) && (unsigned int)v94 < v96 + (unsigned int)v94 )
      {
        v186 = 16LL * (unsigned int)v94;
        v187 = v96;
        do
        {
          v188 = *((_QWORD *)v87 + 3);
          v189 = *(_QWORD *)(v188 + v186);
          if ( (v189 & 1) != 0 )
            VIDMM_GLOBAL::RecordPageMappingHistory(
              v91,
              (v189 >> 5) & 0x1F,
              *(_QWORD *)(v188 + v186 + 8),
              1LL,
              1,
              0LL,
              v207);
          v186 += 16LL;
          --v187;
        }
        while ( v187 );
        LODWORD(v94) = v234[0];
        v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        v96 = v219;
        v86 = v245;
        v30 = v257;
      }
      if ( (unsigned int)v94 < v96 + (unsigned int)v94 )
      {
        v97 = 16LL * (unsigned int)v94;
        v98 = v96;
        do
        {
          v99 = *((_QWORD *)v87 + 3);
          if ( (*(_BYTE *)(v99 + v97) & 1) != 0 )
          {
            --v87[1];
            *(_QWORD *)(v99 + v97) = 0LL;
            *(_QWORD *)(*((_QWORD *)v87 + 3) + v97 + 8) = 0LL;
          }
          v97 += 16LL;
          --v98;
        }
        while ( v98 );
      }
      v100 = a2;
      if ( !v87[1] && (*((_DWORD *)a2 + 34) & 4) == 0 )
      {
        v83 = v228;
        goto LABEL_97;
      }
      v101 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 10);
      v102 = (*v87 >> 3) & 8;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                  (VIDMM_PAGE_TABLE_BASE *)v87,
                  a2,
                  &v240,
                  (unsigned __int64 *)&v253,
                  &v254) < 0 )
      {
        v199 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v199 + 24) = 3679LL;
        WdLogEvent5_WdError(v199);
        v202 = WdLogNewEntry5_WdAssertion(v201, v200);
        *(_QWORD *)(v202 + 24) = 6251LL;
        WdLogEvent5_WdAssertion(v202);
        v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
        LODWORD(v38) = -1073741823;
        goto LABEL_287;
      }
      if ( (*((_BYTE *)v101 + 40872) & 8) != 0 )
        v103 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v103 = (int)(*v87 << 16) >> 29;
      v213 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v102;
      v104 = v253;
      VIDMM_GLOBAL::UpdatePageTable(
        v101,
        *v87 & 7,
        *((struct VIDMM_PROCESS **)a2 + 11),
        0LL,
        0LL,
        0LL,
        0LL,
        v234[0],
        v219,
        0LL,
        0LL,
        (*v87 >> 7) & 0x1F,
        v240,
        (unsigned __int64)v253,
        v103,
        v86 >> 12,
        v213,
        0LL);
      v100 = a2;
      v105 = *((_QWORD *)a2 + 10);
      if ( (*(_BYTE *)(v105 + 40872) & 8) != 0 || (v106 = (int)(*v87 << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
          (VIDMM_PAGE_TABLE_BASE *)v87,
          *((struct VIDMM_GLOBAL **)a2 + 10),
          v104,
          v254);
      }
      else
      {
        if ( v106 != 1
          || *(struct CVirtualAddressAllocator **)(v105 + 8 * (((unsigned __int64)*v87 >> 7) & 0x1F) + 40352) == a2 )
        {
          v83 = v228;
          v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
          v30 = v257;
          goto LABEL_97;
        }
        v190 = *((_QWORD *)v87 + 2) + 128LL;
        v191 = *(__int64 **)v190;
        if ( *(_QWORD *)(*(_QWORD *)v190 + 8LL) != v190 || (v192 = *v191, *(__int64 **)(*v191 + 8) != v191) )
          __fastfail(3u);
        *(_QWORD *)v190 = v192;
        *(_QWORD *)(v192 + 8) = v190;
        v191[2] = *(_QWORD *)(v105 + 8LL * ((*v87 >> 7) & 0x1F) + 4880);
        v193 = 1552LL * ((*v87 >> 7) & 0x1F) + *(_QWORD *)(v105 + 40168) + 456LL;
        v194 = *(__int64 ***)(v193 + 8);
        if ( *v194 != (__int64 *)v193 )
          __fastfail(3u);
        *v191 = v193;
        v191[1] = (__int64)v194;
        *v194 = v191;
        *(_QWORD *)(v193 + 8) = v191;
      }
      v83 = v228;
      v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      v30 = v257;
    }
    v100 = a2;
LABEL_97:
    v107 = this;
    LODWORD(v38) = 0;
    v108 = (char *)v243;
    v217 = 0;
    if ( !*(_DWORD *)(*(_QWORD *)((char *)v243 + *((_QWORD *)this + 4)) + 4LL) )
    {
      v109 = v231;
      v217 = 0;
      if ( (*((_DWORD *)v100 + 34) & 4) == 0 )
      {
        --*((_DWORD *)this + 1);
        v134 = *((_QWORD *)this + 3);
        v215 = 1;
        *(_QWORD *)(v83 + v134) = 0LL;
        *(_QWORD *)(v83 + v134 + 8) = 0LL;
        VIDMM_PAGE_TABLE::DestroyPageTable(
          *(VIDMM_PAGE_TABLE **)&v108[*((_QWORD *)this + 4)],
          v100,
          *(_QWORD *)v226 & ~*((_QWORD *)v109 + 4));
        v107 = this;
        v30 = v257;
        v217 = 0;
        *(_QWORD *)&v108[*((_QWORD *)this + 4)] = 0LL;
      }
      goto LABEL_99;
    }
LABEL_98:
    v109 = v231;
LABEL_99:
    if ( (*(_BYTE *)v30 & 1) != 0 )
    {
      v24 = this;
      v131 = v236;
      v132 = (*(_DWORD *)this & 0x20) != 0
          && !*((_BYTE *)v30 + 57)
          && ((**(_DWORD **)(v237 + *((_QWORD *)this + 4)) >> 6) & 1) != ((*(_DWORD *)(v236 + *((_QWORD *)this + 3)) & 0x60000) == 0x20000LL);
      v133 = (_QWORD *)(v236 + *((_QWORD *)this + 3));
      if ( (*v133 & 1) == 0 )
      {
        *v133 |= 1uLL;
        ++*((_DWORD *)this + 1);
LABEL_150:
        *(_QWORD *)(*((_QWORD *)this + 3) + v131) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 3) + v131) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)this + 3) + v131) &= ~8uLL;
        if ( v216 )
        {
          v135 = 2LL * v224;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v135) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v135) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v135) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v223);
        goto LABEL_153;
      }
      if ( v132 || v221 )
        goto LABEL_150;
    }
    else
    {
      if ( v221 )
        v215 = 1;
      v110 = a2;
      if ( (*((_DWORD *)a2 + 34) & 4) == 0 )
      {
        v111 = *((_QWORD *)v107 + 3);
        v112 = v236;
        v113 = *(_QWORD *)v226 & ~*((_QWORD *)v109 + 4);
        if ( (*(_BYTE *)(v111 + v236) & 1) != 0 )
        {
          v114 = v237;
          if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v107 + 4) + v237) + 4LL) )
          {
            --*((_DWORD *)v107 + 1);
            *(_QWORD *)(v111 + v112) = 0LL;
            *(_QWORD *)(v111 + v112 + 8) = 0LL;
            v145 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)v107 + 4) + v114);
            if ( (*(_DWORD *)v107 & 0x20) != 0 )
              VIDMM_PAGE_TABLE::DestroyPageTable(v145, a2, v113);
            else
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v145, a2, v113, (unsigned __int8)v107);
            v107 = this;
            v30 = v257;
            v110 = a2;
            v215 = 1;
            *(_QWORD *)(v114 + *((_QWORD *)this + 4)) = 0LL;
          }
        }
        if ( v224 != v223 )
        {
          v115 = (_QWORD *)(16LL * v224 + *((_QWORD *)v107 + 3));
          if ( (*(_BYTE *)v115 & 1) != 0 )
          {
            v116 = 8LL * v224;
            if ( !*(_DWORD *)(*(_QWORD *)(v116 + *((_QWORD *)v107 + 4)) + 4LL) )
            {
              --*((_DWORD *)v107 + 1);
              *v115 = 0LL;
              v115[1] = 0LL;
              v197 = *(VIDMM_PAGE_TABLE **)(v116 + *((_QWORD *)v107 + 4));
              if ( (*(_DWORD *)v107 & 0x20) != 0 )
                VIDMM_PAGE_TABLE::DestroyPageTable(v197, v110, v113);
              else
                VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v197, v110, v113, (unsigned __int8)v107);
              v24 = this;
              *(_QWORD *)(v116 + *((_QWORD *)this + 4)) = 0LL;
              goto LABEL_153;
            }
          }
        }
      }
      v24 = this;
    }
    v117 = v215;
LABEL_110:
    if ( !v117 )
      goto LABEL_111;
LABEL_153:
    v118 = v233;
    if ( !v222 )
    {
      v222 = 1;
      v232 = v233;
    }
    v30 = v257;
    if ( (unsigned int)v233 >= v230 )
      v230 = v233 + 1;
LABEL_112:
    v29 = (unsigned int)(v118 + 1);
    *(_QWORD *)v226 += v229;
    v32 = v246;
    v31 = *((_QWORD *)v231 + 5);
    a7 += v229 << 12;
    v238 += v229 << 12;
    v37 = v246 + v31;
    v36 = v246 + v31;
    v228 = v246 + v31;
    v233 = v29;
    if ( v225 )
      goto LABEL_113;
    v34 = v227;
  }
  LODWORD(v38) = v168;
  v25 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
LABEL_114:
  if ( !v222 )
  {
    v119 = a2;
    goto LABEL_116;
  }
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              v24,
              a2,
              (unsigned int *)&v257,
              (unsigned __int64 *)&a9,
              &v243) < 0 )
  {
    v204 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v204 + 24) = 5925LL;
    WdLogEvent5_WdError(v204);
    return 3221225473LL;
  }
  else
  {
    v136 = *((_QWORD *)v231 + 5) * v232 + (v247 & ~(*((_QWORD *)v231 + 4) | *((_QWORD *)v231 + 2)));
    if ( *((_BYTE *)v60 + 57) && (*(_DWORD *)v24 & 0x20) != 0 )
      v137 = (struct _DXGK_PTE *)(*((_QWORD *)v24 + 3) + 16LL * (v227 + v232));
    else
      v137 = 0LL;
    if ( (*((_BYTE *)v242 + 40872) & 8) == 0 )
      v25 = (int)(*(_DWORD *)v24 << 16) >> 29;
    v138 = *(_DWORD *)v24;
    v139 = *(_DWORD *)v24 & 7;
    v230 -= v232;
    v214 = *((_QWORD *)v60 + 8);
    v140 = (struct _DXGK_PTE *)(*((_QWORD *)v24 + 3) + 16LL * v232);
    v141 = a9;
    v142 = *((_QWORD *)v60 + 2);
    v119 = a2;
    VIDMM_GLOBAL::UpdatePageTable(
      v242,
      v139,
      *((struct VIDMM_PROCESS **)a2 + 11),
      v142,
      VidMmAllocFromOwner,
      VidMmGlobalAllocFromOwner,
      v258 + (v136 << 12) - (v247 << 12),
      v232,
      v230,
      v140,
      v137,
      (v138 >> 7) & 0x1F,
      (unsigned int)v257,
      (unsigned __int64)a9,
      v25,
      v136,
      v241[0],
      v214);
    v143 = (unsigned __int64)v141;
    v24 = this;
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v144, v143, v243);
    *(_DWORD *)this |= 0x10000u;
LABEL_116:
    if ( !*((_DWORD *)v24 + 1) && (*((_DWORD *)v119 + 34) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v24, v119, a5 & ~*((_QWORD *)v231 + 4), 1u, 1);
    return (unsigned int)v38;
  }
}

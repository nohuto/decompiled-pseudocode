/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C005B1F0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AAF98 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0004F20 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0023B00 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C0025884 (ExFreeToPagedLookasideList.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C005302C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE@Z @ 0x1C0053608 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00567D4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0058118 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058E60 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00592D8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005BF68 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C005BFC0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005C214 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C428 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C005D75C (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005D8B0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005F2A0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00A2FD4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AADA4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AAF98 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00ABBF4 (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00AC4B4 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  __int64 v9; // r10
  int v10; // esi
  int v12; // r10d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rbx
  struct VIDMM_PROCESS *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  struct CVirtualAddressAllocator *v21; // rcx
  int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rax
  char v25; // cl
  int v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // r11d
  unsigned int v29; // r10d
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v30; // r8
  struct COMMIT_VA_STATE *v31; // r9
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  struct VIDMM_ALLOC **v34; // rbp
  unsigned __int64 v35; // rcx
  unsigned int v36; // r8d
  VIDMM_PAGE_DIRECTORY *v37; // rbx
  int v38; // r10d
  unsigned int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // r11
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rcx
  unsigned int v47; // r10d
  char v48; // dl
  unsigned __int8 v49; // r11
  int v50; // edx
  __int64 v51; // rbx
  VIDMM_PAGE_DIRECTORY *v52; // rsi
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  bool v55; // cl
  unsigned __int64 v56; // rdx
  char v57; // r9
  unsigned __int64 v58; // r10
  struct COMMIT_VA_STATE *v59; // rbp
  int v60; // eax
  __int64 v61; // rbx
  unsigned __int64 v62; // rcx
  VIDMM_PAGE_TABLE **v63; // r10
  VIDMM_PAGE_TABLE *v64; // rbx
  unsigned __int64 v65; // r8
  int v66; // r8d
  struct CVirtualAddressAllocator *v67; // r11
  VIDMM_GLOBAL *v68; // rdi
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r9
  unsigned int v72; // ecx
  bool v73; // zf
  __int64 v74; // rax
  __int64 v75; // r8
  int v76; // esi
  VIDMM_GLOBAL *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v82; // eax
  void *v83; // rsi
  VIDMM_GLOBAL *v84; // r10
  int v85; // eax
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned __int64 v88; // r8
  unsigned int *v89; // rbx
  unsigned __int64 v90; // r10
  int v91; // r9d
  VIDMM_GLOBAL *v92; // rbp
  __int64 v93; // rax
  int v94; // eax
  __int64 v95; // r11
  unsigned int v96; // edx
  int v97; // r9d
  unsigned __int64 v98; // rax
  unsigned int v99; // edx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rdx
  struct CVirtualAddressAllocator *v103; // rdx
  VIDMM_GLOBAL *v104; // rsi
  int v105; // edi
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v110; // eax
  void *v111; // rdi
  VIDMM_GLOBAL *v112; // r10
  int v113; // eax
  VIDMM_PAGE_DIRECTORY *v114; // r9
  char *v115; // rbx
  unsigned __int64 v116; // rdi
  struct CVirtualAddressAllocator *v117; // r10
  __int64 v118; // rdx
  __int64 v119; // r11
  unsigned __int64 v120; // rbx
  __int64 v121; // rdi
  unsigned __int8 v122; // r11
  __int64 v123; // r8
  __int64 v124; // rdi
  unsigned __int64 v125; // r11
  struct CVirtualAddressAllocator *v126; // rdi
  __int64 result; // rax
  char v128; // bl
  unsigned __int64 v129; // r9
  VIDMM_PAGE_TABLE *v130; // rcx
  struct VIDMM_ALLOC *v131; // rax
  __int64 v132; // r11
  __int64 v133; // rdx
  char v134; // cl
  unsigned __int8 v135; // r8
  char v136; // r9
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // eax
  __int64 v141; // rax
  __int64 v142; // rcx
  char v143; // al
  unsigned int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  unsigned __int64 v149; // rdx
  unsigned int v150; // ecx
  __int64 v151; // rbx
  struct _DXGK_PTE *v152; // r9
  int v153; // edi
  struct _DXGK_PTE *v154; // r11
  struct VIDMM_ALLOC **v155; // rbx
  struct VIDMM_ALLOC **v156; // r9
  __int64 v157; // r8
  struct VIDMM_ALLOC **v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rax
  unsigned __int8 v162; // al
  __int64 v163; // rax
  unsigned __int64 v164; // r9
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  int v168; // r8d
  unsigned int v169; // edx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rbx
  _DWORD *v174; // rcx
  unsigned __int64 v175; // r8
  __int64 v176; // r11
  unsigned __int64 v177; // rbx
  unsigned __int64 v178; // rax
  _QWORD *v179; // r9
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // r8
  __int64 v183; // rsi
  __int64 v184; // rbp
  __int64 v185; // r8
  unsigned __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rcx
  unsigned __int64 v193; // r8
  unsigned __int64 *v194; // rax
  __int64 v195; // rdi
  __int64 v196; // rsi
  __int64 v197; // r8
  unsigned __int64 v198; // rax
  __int64 v199; // rax
  __int64 *v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 **v203; // rax
  struct VIDMM_ALLOC **v204; // rcx
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  struct _VIDMM_GLOBAL_ALLOC *v213; // [rsp+28h] [rbp-180h]
  struct VIDMM_ALLOC **v214; // [rsp+30h] [rbp-178h]
  struct VIDMM_ALLOC **v215; // [rsp+30h] [rbp-178h]
  unsigned __int8 v216; // [rsp+38h] [rbp-170h]
  unsigned __int64 v217; // [rsp+38h] [rbp-170h]
  struct VIDMM_ALLOC **v218; // [rsp+40h] [rbp-168h]
  struct VIDMM_ALLOC **v219; // [rsp+40h] [rbp-168h]
  enum _DXGK_PAGETABLEUPDATEMODE v220; // [rsp+70h] [rbp-138h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v221; // [rsp+80h] [rbp-128h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v222; // [rsp+80h] [rbp-128h]
  unsigned __int8 v223; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int8 v224; // [rsp+91h] [rbp-117h]
  char v225; // [rsp+92h] [rbp-116h]
  char v226; // [rsp+93h] [rbp-115h]
  unsigned int v227; // [rsp+94h] [rbp-114h]
  char v228; // [rsp+98h] [rbp-110h]
  unsigned int v229; // [rsp+9Ch] [rbp-10Ch]
  unsigned int v230; // [rsp+A0h] [rbp-108h]
  char v231; // [rsp+A4h] [rbp-104h]
  unsigned int v232[2]; // [rsp+A8h] [rbp-100h]
  char v233; // [rsp+B0h] [rbp-F8h]
  unsigned int v234; // [rsp+B4h] [rbp-F4h]
  unsigned int v235; // [rsp+B8h] [rbp-F0h]
  unsigned int v236; // [rsp+BCh] [rbp-ECh]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v237; // [rsp+C0h] [rbp-E8h]
  unsigned __int64 v238; // [rsp+C8h] [rbp-E0h]
  unsigned int v239[2]; // [rsp+D0h] [rbp-D8h]
  unsigned __int64 v240; // [rsp+D8h] [rbp-D0h]
  unsigned int v241[2]; // [rsp+E0h] [rbp-C8h]
  unsigned int v242; // [rsp+E8h] [rbp-C0h]
  __int64 v243; // [rsp+F0h] [rbp-B8h]
  unsigned __int64 v244; // [rsp+F8h] [rbp-B0h]
  unsigned int v245; // [rsp+100h] [rbp-A8h] BYREF
  unsigned int v246; // [rsp+104h] [rbp-A4h] BYREF
  __int64 v247; // [rsp+108h] [rbp-A0h]
  VIDMM_GLOBAL *v248; // [rsp+110h] [rbp-98h]
  void *v249; // [rsp+118h] [rbp-90h] BYREF
  __int64 v250; // [rsp+120h] [rbp-88h]
  unsigned __int64 v251; // [rsp+128h] [rbp-80h]
  unsigned __int64 v252; // [rsp+130h] [rbp-78h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v253[2]; // [rsp+138h] [rbp-70h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+140h] [rbp-68h]
  struct VIDMM_ALLOC *VidMmAllocFromOwner; // [rsp+148h] [rbp-60h]
  unsigned __int64 v256; // [rsp+150h] [rbp-58h]
  void *v257; // [rsp+158h] [rbp-50h] BYREF
  void *v258; // [rsp+160h] [rbp-48h] BYREF
  unsigned __int64 v259; // [rsp+168h] [rbp-40h]
  void *v260; // [rsp+170h] [rbp-38h] BYREF
  void *v261; // [rsp+178h] [rbp-30h] BYREF
  struct COMMIT_VA_STATE *v264; // [rsp+1C0h] [rbp+18h] BYREF
  unsigned __int64 v265; // [rsp+1C8h] [rbp+20h]

  v265 = a4;
  v264 = a3;
  v9 = *(_QWORD *)a3;
  v10 = 0;
  v244 = a4;
  *a9 = 0LL;
  v12 = v9 & 1;
  if ( !v12 )
  {
    v13 = *((_QWORD *)this + 1);
    if ( !v13 || !*(_QWORD *)(v13 + 136) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v212 = WdLogNewEntry5_WdAssertion(a5, a2);
    *(_QWORD *)(v212 + 24) = 5304LL;
    WdLogEvent5_WdAssertion(v212);
    return 3221225485LL;
  }
  v14 = a5 >> 12;
  v252 = v14;
  v256 = (a5 >> 12) + a6;
  if ( v14 + a6 <= v14 )
  {
    v163 = WdLogNewEntry5_WdAssertion(v14, a2);
    *(_QWORD *)(v163 + 24) = 5321LL;
    WdLogEvent5_WdAssertion(v163);
    return 3221225485LL;
  }
  v15 = *(_DWORD *)this;
  v248 = a2[10];
  v16 = *((_QWORD *)v248 + 5090);
  v17 = a2[11];
  v18 = (v15 >> 7) & 0x1F;
  VidMmGlobalAllocFromOwner = 0LL;
  VidMmAllocFromOwner = 0LL;
  v247 = v16 + 1560 * v18;
  v19 = 48LL * (v15 & 7);
  v237 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v19 + v247 + 88);
  v20 = (v14 & *((_QWORD *)v237 + 2)) >> *(_QWORD *)(v19 + v247 + 112);
  v21 = (struct CVirtualAddressAllocator *)a2;
  v240 = v20;
  v22 = (v15 >> 4) & 1;
  if ( v22 )
    v23 = *((_DWORD *)a2[14] + 8 * v18 + 4);
  else
    v23 = *(_DWORD *)(v19 + 1560 * v18 + v16 + 88);
  v234 = v23;
  if ( v22 && *((_QWORD *)v248 + 5187) )
  {
    v164 = a6 << 12;
    if ( v12 )
    {
      v214 = (struct VIDMM_ALLOC **)*((_QWORD *)v264 + 4);
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(v248, v17, a5, v164, *((_DWORD *)v264 + 13), a7);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v248, v17, a5, v164);
    }
    v21 = (struct CVirtualAddressAllocator *)a2;
  }
  v24 = *((_QWORD *)this + 1);
  v236 = 0;
  v235 = 0;
  v226 = 0;
  *(_QWORD *)v253 = 0LL;
  if ( v24 && *(_QWORD *)(v24 + 136) )
  {
    v25 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, v21, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    v25 = 1;
  }
  v26 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    v25 = 1;
    v253[0] = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
  }
  v27 = v240;
  if ( v25 )
  {
    if ( (_DWORD)v240 )
    {
      v159 = 0LL;
      v160 = (unsigned int)v240;
      do
      {
        v161 = *((_QWORD *)this + 3);
        v159 += 16LL;
        *(_QWORD *)(v159 + v161 - 16) = 0LL;
        *(_QWORD *)(v159 + v161 - 8) = 0LL;
        --v160;
      }
      while ( v160 );
      v26 = *(_DWORD *)this;
    }
    v28 = v234;
    v235 = v234;
    v226 = 1;
  }
  else
  {
    v28 = v234;
  }
  v29 = 0;
  v30 = v237;
  v31 = v264;
  *(_QWORD *)v232 = v252;
  v231 = 0;
  v32 = *((_QWORD *)v237 + 5);
  v33 = v252 & ~*((_QWORD *)v237 + 4);
  v242 = 0;
  v34 = (struct VIDMM_ALLOC **)(v32 + v33);
  v35 = v32 + v33;
  if ( (v26 & 0x20) != 0 && *((_BYTE *)v264 + 57) )
  {
    if ( *((_BYTE *)v264 + 56) )
      v29 = v28;
    v242 = v29;
  }
  v227 = 0;
  while ( 1 )
  {
    v233 = v226;
    if ( v27 >= v28 )
      goto LABEL_284;
    v36 = v29 + v27;
    v37 = this;
    v38 = v240;
    v224 = 0;
    v223 = 0;
    v228 = 0;
    v225 = 0;
    v230 = v36;
    v229 = v36;
    if ( *((_BYTE *)v31 + 58) && (*(_DWORD *)this & 0x20) != 0 )
    {
      v225 = 1;
      v39 = v36 + v28;
      if ( v36 != (_DWORD)v240 )
        v39 = v240;
      v229 = v39;
    }
    if ( v35 >= v256 )
      v231 = 1;
    v40 = v256;
    v41 = *(_QWORD *)v31;
    if ( v35 < v256 )
      v40 = v35;
    v251 = v40;
    v42 = v40 - *(_QWORD *)v232;
    v238 = v40 - *(_QWORD *)v232;
    if ( (v41 & 1) != 0 )
      break;
    v43 = *((_QWORD *)this + 3);
    if ( (*(_BYTE *)(v43 + 16LL * v230) & 1) != 0 || (*(_BYTE *)(v43 + 16LL * v229) & 1) != 0 )
      break;
LABEL_119:
    *(_QWORD *)v232 += v42;
    v33 = v251;
    v30 = v237;
    v125 = v42 << 12;
    a7 += v125;
    v244 += v125;
    v32 = *((_QWORD *)v237 + 5);
    v240 = (unsigned int)(v38 + 1);
    v35 = v32 + v251;
    v34 = (struct VIDMM_ALLOC **)(v32 + v251);
    if ( v231 )
      goto LABEL_120;
    v27 = v240;
    v29 = v242;
    v28 = v234;
  }
  if ( (v41 & 2) != 0 )
  {
    v165 = *((_QWORD *)this + 3);
    if ( (*(_BYTE *)(v165 + 16LL * v230) & 2) != 0 )
    {
      v166 = v230;
    }
    else
    {
      if ( !v225 || (*(_BYTE *)(v165 + 16LL * v229) & 2) == 0 )
        goto LABEL_37;
      v166 = v229;
    }
    if ( (_DWORD)v166 != -1 && (((unsigned __int8)v41 ^ *(_BYTE *)(v165 + 16 * v166)) & 8) == 0 )
      goto LABEL_119;
  }
LABEL_37:
  if ( v32 <= v42 && ((_DWORD)a2[17] & 4) == 0 )
  {
    v162 = VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             this,
             (struct CVirtualAddressAllocator *)a2,
             *(const struct _DXGK_GPUMMUCAPS **)(v247 + 440),
             v31,
             v237,
             v230,
             v229,
             v232[0],
             a7,
             &v223);
    v31 = v264;
    if ( v162 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * v230) & 0x400LL) != 0 )
      {
        VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(
                                                                    *((_DWORD *)v264 + 12),
                                                                    *((_QWORD *)v264 + 5));
        VidMmAllocFromOwner = (struct VIDMM_ALLOC *)GetVidMmAllocFromOwner(v168, v167);
      }
      v122 = v223;
LABEL_117:
      if ( !v122 )
      {
        v38 = v240;
        v42 = v238;
        goto LABEL_119;
      }
      goto LABEL_163;
    }
    v42 = v238;
    v224 = v223;
  }
  v44 = *((_QWORD *)this + 3);
  v45 = v230;
  v46 = (*(_DWORD *)(v44 + 16LL * v230) >> 10) & 1;
  if ( ((*(_DWORD *)(v44 + 16LL * v230) >> 10) & 1) != 0
    || v225 != ((*(_DWORD *)(v44 + 16LL * v230) & 0x400) != 0) && (*(_DWORD *)(v44 + 16LL * v229) & 0x400LL) != 0 )
  {
    v169 = v230;
    if ( !v46 )
      v169 = v229;
    if ( *((_QWORD *)v237 + 5) <= v42 )
    {
      v173 = v169;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)((char *)a2[10] + 40768),
        *(PVOID *)(*((_QWORD *)this + 4) + 8LL * v169));
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v173) = 0LL;
      v173 *= 2LL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v173) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v173) &= ~1uLL;
      v37 = this;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v227 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
               this,
               (struct CVirtualAddressAllocator *)a2,
               v237,
               *((_BYTE *)v31 + 57),
               v33 << 12,
               v169,
               a9);
      if ( (v227 & 0x80000000) != 0 )
      {
        v172 = WdLogNewEntry5_WdWarning(v171, v170);
        v10 = v227;
        *(_QWORD *)(v172 + 24) = (int)v227;
        WdLogEvent5_WdWarning(v172);
        v30 = v237;
        goto LABEL_120;
      }
    }
    v31 = v264;
    v228 = 1;
  }
  v47 = *(_DWORD *)v37;
  v48 = *(_DWORD *)v37;
  v49 = *((_BYTE *)v31 + 56);
  v223 = v49;
  v50 = v48 & 0x20;
  if ( v50 && !*((_DWORD *)v31 + 13) && v49 )
  {
    if ( !*((_BYTE *)v31 + 57)
      && (v174 = *(_DWORD **)(*((_QWORD *)v37 + 4) + 8 * v45)) != 0LL
      && v174[1]
      && (*v174 & 0x40) == 0
      || (v238 & 0xF) != 0 )
    {
LABEL_229:
      v49 = 0;
      v230 = v240;
      v223 = 0;
      if ( !v225 )
        goto LABEL_43;
      v229 = v234 + v240;
    }
    else
    {
      v175 = a7 >> 12;
      v176 = *((_QWORD *)v31 + 4) + 48LL;
      v177 = (a7 >> 12) + (unsigned int)v238;
      v178 = (unsigned int)(a7 >> 12);
      if ( v178 < v177 )
      {
        do
        {
          v179 = (_QWORD *)(v176 + 8 * v178);
          if ( (v175 & 0xF) != 0 )
          {
            if ( *v179 != *(_QWORD *)(v176 + 8LL * (unsigned int)(v175 - 1)) + 1LL )
              goto LABEL_228;
          }
          else if ( (*(_BYTE *)v179 & 0xF) != 0 )
          {
LABEL_228:
            v31 = v264;
            goto LABEL_229;
          }
          LODWORD(v175) = v175 + 1;
          v178 = (unsigned int)v175;
        }
        while ( (unsigned int)v175 < v177 );
        v31 = v264;
      }
      v49 = 1;
    }
    v223 = v49;
  }
LABEL_43:
  v51 = v230;
  v52 = this;
  if ( (*(_BYTE *)v31 & 1) == 0 && (*(_BYTE *)(16LL * v230 + *((_QWORD *)this + 3)) & 2) == 0
    || *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v230) )
  {
    goto LABEL_45;
  }
  if ( !v50 )
  {
    PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a2, (v47 >> 7) & 0x1F, (v47 & 7) - 1);
    goto LABEL_143;
  }
  if ( *((_BYTE *)v31 + 57) && v49 || *((_DWORD *)v31 + 13) == -3 )
  {
    v135 = 1;
  }
  else
  {
    v135 = 0;
    if ( v49 )
    {
      v136 = 1;
      goto LABEL_142;
    }
  }
  v136 = 0;
LABEL_142:
  PageDirectory = CreatePageTable((struct CVirtualAddressAllocator *)a2, (v47 >> 7) & 0x1F, v135, v136);
LABEL_143:
  v139 = *((_QWORD *)this + 4);
  *(_QWORD *)(v139 + 8 * v51) = PageDirectory;
  if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v51) )
  {
    v205 = WdLogNewEntry5_WdAssertion(v139, v138);
    *(_QWORD *)(v205 + 24) = 5666LL;
    WdLogEvent5_WdAssertion(v205);
    v10 = -1073741801;
LABEL_283:
    v30 = v237;
LABEL_284:
    v37 = this;
LABEL_120:
    v59 = v264;
    v126 = (struct CVirtualAddressAllocator *)a2;
    goto LABEL_121;
  }
  v49 = v223;
LABEL_45:
  v53 = *((_QWORD *)this + 3);
  v243 = 16 * v51;
  v54 = *(_QWORD *)(v53 + 16 * v51);
  v55 = (v54 & 1) == 0;
  v56 = (v54 >> 1) & 1;
  if ( !(_DWORD)v56 )
  {
    v57 = v55;
    if ( !v225 || (*(_BYTE *)(v53 + 16LL * v229) & 2) == 0 )
    {
      v58 = v238;
      v59 = v264;
      goto LABEL_49;
    }
  }
  v58 = v238;
  if ( *((_QWORD *)v237 + 5) <= v238 )
  {
    v180 = v230;
    v73 = (unsigned int)v56 == 0LL;
    v56 = -3LL;
    v181 = 2LL;
    if ( v73 )
      v180 = v229;
    v182 = 2 * v180;
    do
    {
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v182) &= v56++;
      --v181;
    }
    while ( v181 );
    --*((_DWORD *)this + 1);
    v57 = v55;
    v59 = v264;
    goto LABEL_246;
  }
  v219 = v34;
  v59 = v264;
  v217 = v33;
  v126 = (struct CVirtualAddressAllocator *)a2;
  v227 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
           this,
           (struct CVirtualAddressAllocator *)a2,
           v264,
           v230,
           v229,
           *(unsigned __int64 *)v232,
           v251,
           v217,
           (unsigned __int64)v219,
           a9);
  v10 = v227;
  if ( (v227 & 0x80000000) == 0 )
  {
    v49 = v223;
    v57 = 0;
    v52 = this;
    v58 = v238;
LABEL_246:
    v228 = 1;
LABEL_49:
    v60 = *(_DWORD *)v52;
    v61 = 8 * v51;
    v62 = *((_QWORD *)v52 + 4);
    v250 = v61;
    if ( (v60 & 0x20) == 0 )
    {
      v116 = *(_QWORD *)v232;
      v10 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v62 + v61),
              (struct CVirtualAddressAllocator *)a2,
              v59,
              v244,
              *(_QWORD *)v232 << 12,
              v58,
              a7,
              v57,
              a9);
      v227 = v10;
      goto LABEL_103;
    }
    v63 = (VIDMM_PAGE_TABLE **)(v62 + v61);
    if ( (*(_BYTE *)v59 & 1) != 0 )
    {
      v128 = *((_BYTE *)v59 + 56);
      v218 = a9;
      v216 = v57;
      v129 = v244;
      v215 = (struct VIDMM_ALLOC **)a7;
      v213 = (struct _VIDMM_GLOBAL_ALLOC *)v238;
      v130 = *v63;
      v131 = (struct VIDMM_ALLOC *)(*(_QWORD *)v232 << 12);
      *((_BYTE *)v59 + 56) = v49;
      v227 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
               v130,
               a2,
               v59,
               v129,
               v131,
               (unsigned __int64)v213,
               (unsigned __int64)v215,
               v216,
               v218);
      *((_BYTE *)v59 + 56) = v128;
    }
    else
    {
      v64 = *v63;
      if ( *v63 )
      {
        v65 = *(_QWORD *)v232;
        if ( *((_DWORD *)v64 + 1) )
        {
          v62 = v238;
          *(_QWORD *)v241 = *(_QWORD *)v232 << 12;
          v56 = (*(_QWORD *)v232 & 0xFFFFFFFFFFFFFLL) + v238;
          if ( v56 <= (*(_QWORD *)v232 & 0xFFFFFFFFFFFFFuLL) )
          {
            v227 = -1073741811;
          }
          else
          {
            v66 = *(_DWORD *)v64;
            v67 = (struct CVirtualAddressAllocator *)a2;
            v68 = a2[10];
            v69 = *((_QWORD *)v64 + 1);
            v62 = *((_QWORD *)v68 + 5090) + 1560LL * ((*(_DWORD *)v64 >> 7) & 0x1F);
            if ( !v69 || !*(_QWORD *)(v69 + 136) )
              goto LABEL_73;
            v70 = *(_DWORD *)(v62 + 72);
            LODWORD(v71) = v70 & v232[0];
            *(_QWORD *)v239 = v70 & v232[0];
            v72 = v70 & (v232[0] + v238 - 1);
            if ( (v66 & 0x40) != 0 )
            {
              v71 = (unsigned int)v71 >> 4;
              v72 >>= 4;
              *(_QWORD *)v239 = v71;
              *(_QWORD *)v241 = (*(_QWORD *)v232 << 12) & 0xFFFFFFFFFFFF0000uLL;
            }
            v62 = v72 - (unsigned int)v71 + 1;
            v73 = *((_QWORD *)v68 + 5191) == 0LL;
            v227 = v62;
            if ( !v73 && (unsigned int)v71 < (int)v62 + (int)v71 )
            {
              v183 = 16LL * (unsigned int)v71;
              v184 = (unsigned int)v62;
              do
              {
                v185 = *((_QWORD *)v64 + 3);
                v186 = *(_QWORD *)(v185 + v183);
                if ( (v186 & 1) != 0 )
                  VIDMM_GLOBAL::RecordPageMappingHistory(
                    v68,
                    (v186 >> 5) & 0x1F,
                    *(_QWORD *)(v185 + v183 + 8),
                    1LL,
                    1,
                    0LL,
                    v214);
                v183 += 16LL;
                --v184;
              }
              while ( v184 );
              LODWORD(v71) = v239[0];
              v62 = v227;
              v67 = (struct CVirtualAddressAllocator *)a2;
            }
            if ( (unsigned int)v71 < (int)v62 + (int)v71 )
            {
              v74 = 16LL * (unsigned int)v71;
              v75 = (unsigned int)v62;
              do
              {
                v56 = v74 + *((_QWORD *)v64 + 3);
                v62 = *(unsigned __int8 *)v56;
                if ( (v62 & 1) != 0 )
                {
                  --*((_DWORD *)v64 + 1);
                  *(_QWORD *)v56 = 0LL;
                  v62 = *((_QWORD *)v64 + 3);
                  *(_QWORD *)(v74 + v62 + 8) = 0LL;
                }
                v74 += 16LL;
                --v75;
              }
              while ( v75 );
            }
            if ( !*((_DWORD *)v64 + 1) && (*((_DWORD *)v67 + 34) & 4) == 0 )
              goto LABEL_73;
            if ( (*(_DWORD *)v64 & 0x40) != 0 )
              v76 = 8;
            else
              v76 = 0;
            v77 = (VIDMM_GLOBAL *)*((_QWORD *)v67 + 10);
            if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(v64, v67, &v245, (unsigned __int64 *)&v257, &v258) >= 0 )
            {
              if ( (*((_BYTE *)v77 + 41448) & 0x10) != 0 )
                v82 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
              else
                v82 = (__int16)*(_DWORD *)v64 >> 13;
              v221 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v76;
              v83 = v257;
              VIDMM_GLOBAL::UpdatePageTable(
                v77,
                *(_DWORD *)v64 & 7,
                a2[11],
                0LL,
                0LL,
                0LL,
                0LL,
                v239[0],
                v227,
                0LL,
                0LL,
                (*(_DWORD *)v64 >> 7) & 0x1F,
                v245,
                (unsigned __int64)v257,
                v82,
                *(_QWORD *)v241 >> 12,
                v221,
                0LL);
              v84 = a2[10];
              if ( (*((_BYTE *)v84 + 41448) & 0x10) != 0
                || (v62 = *(unsigned int *)v64, (v85 = (int)(*(_DWORD *)v64 << 16) >> 29) == 0) )
              {
                VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(v64, a2[10], v83, (struct _MDL *)v258);
              }
              else if ( v85 == 1 )
              {
                v62 = (v62 >> 7) & 0x1F;
                if ( *((VIDMM_GLOBAL ***)v84 + v62 + 5116) != a2 )
                {
                  v191 = *((_QWORD *)v64 + 2) + 128LL;
                  v56 = *(_QWORD *)v191;
                  if ( *(_QWORD *)(*(_QWORD *)v191 + 8LL) != v191
                    || (v192 = *(_QWORD *)v56, *(_QWORD *)(*(_QWORD *)v56 + 8LL) != v56) )
                  {
                    __fastfail(3u);
                  }
                  *(_QWORD *)v191 = v192;
                  *(_QWORD *)(v192 + 8) = v191;
                  *(_QWORD *)(v56 + 16) = *((_QWORD *)v84 + ((*(_DWORD *)v64 >> 7) & 0x1F) + 618);
                  v62 = 1560LL * ((*(_DWORD *)v64 >> 7) & 0x1F);
                  v193 = v62 + *((_QWORD *)v84 + 5090) + 464LL;
                  v194 = *(unsigned __int64 **)(v193 + 8);
                  if ( *v194 != v193 )
                    __fastfail(3u);
                  *(_QWORD *)v56 = v193;
                  *(_QWORD *)(v56 + 8) = v194;
                  *v194 = v56;
                  *(_QWORD *)(v193 + 8) = v56;
                }
              }
LABEL_73:
              v65 = *(_QWORD *)v232;
              v227 = 0;
              goto LABEL_74;
            }
            v187 = WdLogNewEntry5_WdError(v79, v78, v80, v81);
            *(_QWORD *)(v187 + 24) = 3690LL;
            WdLogEvent5_WdError(v187);
            v190 = WdLogNewEntry5_WdAssertion(v189, v188);
            *(_QWORD *)(v190 + 24) = 6262LL;
            WdLogEvent5_WdAssertion(v190);
            v65 = *(_QWORD *)v232;
            v227 = -1073741823;
          }
        }
LABEL_74:
        v10 = v227;
        if ( *((_BYTE *)v264 + 58) )
        {
          if ( (v227 & 0x80000000) != 0 )
            goto LABEL_291;
          v56 = v229;
          v86 = 16LL * v229;
          v87 = *((_QWORD *)this + 3);
          *(_QWORD *)v239 = v86;
          v62 = *(unsigned __int8 *)(v86 + v87);
          if ( (v62 & 1) != 0 )
          {
            v62 = *((_QWORD *)this + 4);
            v88 = v65 << 12;
            v249 = (void *)(8LL * v229);
            v89 = *(unsigned int **)((char *)v249 + v62);
            v90 = (v88 >> 12) + v238;
            if ( v90 <= v88 >> 12 )
            {
              v10 = -1073741811;
            }
            else
            {
              v91 = *v89;
              v92 = a2[10];
              v93 = *((_QWORD *)v89 + 1);
              if ( !v93 || !*(_QWORD *)(v93 + 136) )
              {
                v114 = this;
                v103 = (struct CVirtualAddressAllocator *)a2;
                goto LABEL_100;
              }
              v94 = *(_DWORD *)(*((_QWORD *)v92 + 5090) + 1560LL * ((*v89 >> 7) & 0x1F) + 72);
              LODWORD(v95) = v94 & (v88 >> 12);
              *(_QWORD *)v241 = (unsigned int)v95;
              v96 = v94 & (v90 - 1);
              v97 = v91 & 0x40;
              if ( v97 )
              {
                v95 = (unsigned int)v95 >> 4;
                *(_QWORD *)v241 = v95;
                v96 >>= 4;
              }
              v98 = v88 & 0xFFFFFFFFFFFF0000uLL;
              if ( !v97 )
                v98 = v88;
              v99 = v96 - v95 + 1;
              v259 = v98;
              v73 = *((_QWORD *)v92 + 5191) == 0LL;
              v227 = v99;
              if ( !v73 && (unsigned int)v95 < v99 + (unsigned int)v95 )
              {
                v195 = 16LL * (unsigned int)v95;
                v196 = v99;
                do
                {
                  v197 = *((_QWORD *)v89 + 3);
                  v198 = *(_QWORD *)(v197 + v195);
                  if ( (v198 & 1) != 0 )
                    VIDMM_GLOBAL::RecordPageMappingHistory(
                      v92,
                      (v198 >> 5) & 0x1F,
                      *(_QWORD *)(v197 + v195 + 8),
                      1LL,
                      1,
                      0LL,
                      v214);
                  v195 += 16LL;
                  --v196;
                }
                while ( v196 );
                LODWORD(v95) = v241[0];
                v99 = v227;
                v86 = *(_QWORD *)v239;
              }
              if ( (unsigned int)v95 < v99 + (unsigned int)v95 )
              {
                v100 = 16LL * (unsigned int)v95;
                v101 = v99;
                do
                {
                  v102 = *((_QWORD *)v89 + 3);
                  if ( (*(_BYTE *)(v102 + v100) & 1) != 0 )
                  {
                    --v89[1];
                    *(_QWORD *)(v102 + v100) = 0LL;
                    *(_QWORD *)(v100 + *((_QWORD *)v89 + 3) + 8) = 0LL;
                  }
                  v100 += 16LL;
                  --v101;
                }
                while ( v101 );
                v86 = *(_QWORD *)v239;
              }
              v103 = (struct CVirtualAddressAllocator *)a2;
              if ( !v89[1] && ((_DWORD)a2[17] & 4) == 0 )
              {
LABEL_99:
                v114 = this;
                v62 = *((_QWORD *)this + 4);
LABEL_100:
                v115 = (char *)v249;
                v10 = 0;
                v227 = 0;
                if ( *(_DWORD *)(*(_QWORD *)((char *)v249 + v62) + 4LL)
                  || (v140 = *((_DWORD *)v103 + 34), v227 = 0, (v140 & 4) != 0) )
                {
                  v116 = *(_QWORD *)v232;
                }
                else
                {
                  --*((_DWORD *)v114 + 1);
                  v141 = *((_QWORD *)v114 + 3);
                  v224 = 1;
                  *(_QWORD *)(v86 + v141) = 0LL;
                  *(_QWORD *)(v86 + v141 + 8) = 0LL;
                  v116 = *(_QWORD *)v232;
                  VIDMM_PAGE_TABLE::DestroyPageTable(
                    *(struct VIDMM_ALLOC ***)&v115[*((_QWORD *)v114 + 4)],
                    v103,
                    *(_QWORD *)v232 & ~*((_QWORD *)v237 + 4));
                  v114 = this;
                  v227 = 0;
                  *(_QWORD *)&v115[*((_QWORD *)this + 4)] = 0LL;
                }
                goto LABEL_105;
              }
              v104 = a2[10];
              v105 = (*v89 >> 3) & 8;
              if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                          (VIDMM_PAGE_TABLE_BASE *)v89,
                          (struct CVirtualAddressAllocator *)a2,
                          &v246,
                          (unsigned __int64 *)&v260,
                          &v261) >= 0 )
              {
                if ( (*((_BYTE *)v104 + 41448) & 0x10) != 0 )
                  v110 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
                else
                  v110 = (__int16)*v89 >> 13;
                v222 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v105;
                v111 = v260;
                VIDMM_GLOBAL::UpdatePageTable(
                  v104,
                  *v89 & 7,
                  a2[11],
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v241[0],
                  v227,
                  0LL,
                  0LL,
                  (*v89 >> 7) & 0x1F,
                  v246,
                  (unsigned __int64)v260,
                  v110,
                  v259 >> 12,
                  v222,
                  0LL);
                v103 = (struct CVirtualAddressAllocator *)a2;
                v112 = a2[10];
                if ( (*((_BYTE *)v112 + 41448) & 0x10) != 0 || (v113 = (int)(*v89 << 16) >> 29) == 0 )
                {
                  VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
                    (VIDMM_PAGE_TABLE_BASE *)v89,
                    a2[10],
                    v111,
                    (struct _MDL *)v261);
                  v103 = (struct CVirtualAddressAllocator *)a2;
                  v86 = *(_QWORD *)v239;
                }
                else if ( v113 != 1 || *((VIDMM_GLOBAL ***)v112 + (((unsigned __int64)*v89 >> 7) & 0x1F) + 5116) == a2 )
                {
                  v86 = *(_QWORD *)v239;
                }
                else
                {
                  v199 = *((_QWORD *)v89 + 2) + 128LL;
                  v200 = *(__int64 **)v199;
                  if ( *(_QWORD *)(*(_QWORD *)v199 + 8LL) != v199 || (v201 = *v200, *(__int64 **)(*v200 + 8) != v200) )
                    __fastfail(3u);
                  *(_QWORD *)v199 = v201;
                  *(_QWORD *)(v201 + 8) = v199;
                  v200[2] = *((_QWORD *)v112 + ((*v89 >> 7) & 0x1F) + 618);
                  v202 = 1560LL * ((*v89 >> 7) & 0x1F) + *((_QWORD *)v112 + 5090) + 464LL;
                  v203 = *(__int64 ***)(v202 + 8);
                  if ( *v203 != (__int64 *)v202 )
                    __fastfail(3u);
                  v86 = *(_QWORD *)v239;
                  *v200 = v202;
                  v200[1] = (__int64)v203;
                  *v203 = v200;
                  *(_QWORD *)(v202 + 8) = v200;
                  v103 = (struct CVirtualAddressAllocator *)a2;
                }
                goto LABEL_99;
              }
              v206 = WdLogNewEntry5_WdError(v107, v106, v108, v109);
              *(_QWORD *)(v206 + 24) = 3690LL;
              WdLogEvent5_WdError(v206);
              v209 = WdLogNewEntry5_WdAssertion(v208, v207);
              *(_QWORD *)(v209 + 24) = 6262LL;
              WdLogEvent5_WdAssertion(v209);
              v10 = -1073741823;
            }
LABEL_291:
            v210 = WdLogNewEntry5_WdWarning(v62, v56);
            WdLogEvent5_WdWarning(v210);
            goto LABEL_283;
          }
        }
        v116 = *(_QWORD *)v232;
LABEL_103:
        if ( v10 < 0 )
          goto LABEL_291;
        v114 = this;
LABEL_105:
        if ( (*(_BYTE *)v264 & 1) != 0 )
        {
          v37 = this;
          v132 = v243;
          if ( (*(_DWORD *)this & 0x20) == 0
            || *((_BYTE *)v264 + 57)
            || (v133 = *((_QWORD *)this + 3),
                ((**(_DWORD **)(v250 + *((_QWORD *)this + 4)) >> 6) & 1) == ((*(_DWORD *)(v133 + v243) & 0x60000) == 0x20000LL)) )
          {
            v133 = *((_QWORD *)this + 3);
            v134 = 0;
          }
          else
          {
            v134 = 1;
          }
          if ( (*(_QWORD *)(v133 + v243) & 1) == 0 || v134 || v228 )
          {
            if ( (*(_QWORD *)(v133 + v243) & 1LL) == 0 )
            {
              *(_QWORD *)(v133 + v243) |= 1uLL;
              ++*((_DWORD *)this + 1);
              v133 = *((_QWORD *)this + 3);
            }
            *(_QWORD *)(v133 + v132) &= ~0x400uLL;
            *(_QWORD *)(v132 + *((_QWORD *)this + 3)) &= ~2uLL;
            *(_QWORD *)(v132 + *((_QWORD *)this + 3)) &= ~8uLL;
            if ( v225 )
            {
              v142 = 2LL * v229;
              *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v142) &= ~0x400uLL;
              *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v142) &= ~2uLL;
              *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v142) &= ~8uLL;
            }
            VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, (struct CVirtualAddressAllocator *)a2, v230);
            goto LABEL_163;
          }
        }
        else
        {
          if ( v228 )
            v224 = 1;
          v117 = (struct CVirtualAddressAllocator *)a2;
          if ( ((_DWORD)a2[17] & 4) == 0 )
          {
            v118 = *((_QWORD *)v114 + 3);
            v119 = v243;
            v120 = v116 & ~*((_QWORD *)v237 + 4);
            if ( (*(_BYTE *)(v118 + v243) & 1) != 0
              && (v121 = v250, !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v114 + 4) + v250) + 4LL)) )
            {
              --*((_DWORD *)v114 + 1);
              *(_QWORD *)(v118 + v119) = 0LL;
              *(_QWORD *)(v118 + v119 + 8) = 0LL;
              v158 = *(struct VIDMM_ALLOC ***)(v121 + *((_QWORD *)v114 + 4));
              if ( (*(_DWORD *)v114 & 0x20) != 0 )
                VIDMM_PAGE_TABLE::DestroyPageTable(v158, (struct CVirtualAddressAllocator *)a2, v120);
              else
                VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                  (VIDMM_PAGE_DIRECTORY *)v158,
                  (struct CVirtualAddressAllocator *)a2,
                  v120,
                  (unsigned __int8)v114);
              v114 = this;
              v122 = 1;
              v117 = (struct CVirtualAddressAllocator *)a2;
              *(_QWORD *)(v121 + *((_QWORD *)this + 4)) = 0LL;
            }
            else
            {
              v122 = v224;
            }
            if ( v229 == v230
              || (v123 = *((_QWORD *)v114 + 3) + 16LL * v229, (*(_BYTE *)v123 & 1) == 0)
              || (v124 = 8LL * v229, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v114 + 4) + v124) + 4LL)) )
            {
              v37 = this;
LABEL_116:
              v31 = v264;
              goto LABEL_117;
            }
            --*((_DWORD *)v114 + 1);
            *(_QWORD *)v123 = 0LL;
            *(_QWORD *)(v123 + 8) = 0LL;
            v204 = *(struct VIDMM_ALLOC ***)(v124 + *((_QWORD *)v114 + 4));
            if ( (*(_DWORD *)v114 & 0x20) != 0 )
              VIDMM_PAGE_TABLE::DestroyPageTable(v204, v117, v120);
            else
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                (VIDMM_PAGE_DIRECTORY *)v204,
                v117,
                v120,
                (unsigned __int8)v114);
            v37 = this;
            *(_QWORD *)(v124 + *((_QWORD *)this + 4)) = 0LL;
LABEL_163:
            v38 = v240;
            v31 = v264;
            v143 = v226;
            v42 = v238;
            if ( !v226 )
              v143 = 1;
            v226 = v143;
            v144 = v240;
            if ( v233 )
              v144 = v236;
            v236 = v144;
            if ( (unsigned int)v240 >= v235 )
            {
              v236 = v144;
              v235 = v240 + 1;
            }
            goto LABEL_119;
          }
          v37 = this;
        }
        v122 = v224;
        goto LABEL_116;
      }
    }
    v65 = *(_QWORD *)v232;
    goto LABEL_74;
  }
  v37 = this;
  v30 = v237;
LABEL_121:
  if ( v226 )
  {
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v37,
                v126,
                (unsigned int *)&v264,
                (unsigned __int64 *)&a9,
                &v249) >= 0 )
    {
      v149 = v236 * *((_QWORD *)v237 + 5) + (v252 & ~(*((_QWORD *)v237 + 4) | *((_QWORD *)v237 + 2)));
      v150 = *(_DWORD *)v37;
      if ( *((_BYTE *)v59 + 57) && (v150 & 0x20) != 0 )
      {
        v151 = *((_QWORD *)v37 + 3);
        v152 = (struct _DXGK_PTE *)(v151 + 16LL * (v234 + v236));
        v153 = 0;
      }
      else
      {
        v151 = *((_QWORD *)v37 + 3);
        v153 = 0;
        v152 = 0LL;
      }
      if ( (*((_BYTE *)v248 + 41448) & 0x10) == 0 )
        v153 = (__int16)v150 >> 13;
      v235 -= v236;
      v220 = v153;
      v126 = (struct CVirtualAddressAllocator *)a2;
      v154 = (struct _DXGK_PTE *)(v151 + 16LL * v236);
      v155 = a9;
      VIDMM_GLOBAL::UpdatePageTable(
        v248,
        v150 & 7,
        a2[11],
        *((_QWORD *)v59 + 2),
        VidMmAllocFromOwner,
        VidMmGlobalAllocFromOwner,
        v265 + (v149 << 12) - (v252 << 12),
        v236,
        v235,
        v154,
        v152,
        (v150 >> 7) & 0x1F,
        (unsigned int)v264,
        (unsigned __int64)a9,
        v220,
        v149,
        v253[0],
        *((_QWORD *)v59 + 8));
      v156 = v155;
      v37 = this;
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        this,
        (struct CVirtualAddressAllocator *)a2,
        v157,
        v156,
        (struct _MDL *)v249);
      *(_DWORD *)this |= 0x10000u;
      v30 = v237;
      goto LABEL_122;
    }
    v211 = WdLogNewEntry5_WdError(v146, v145, v147, v148);
    *(_QWORD *)(v211 + 24) = 5936LL;
    WdLogEvent5_WdError(v211);
    return 3221225473LL;
  }
  else
  {
LABEL_122:
    if ( !*((_DWORD *)v37 + 1) && (*((_DWORD *)v126 + 34) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v37, v126, a5 & ~*((_QWORD *)v30 + 4), 1u, 1);
    return (unsigned int)v10;
  }
}

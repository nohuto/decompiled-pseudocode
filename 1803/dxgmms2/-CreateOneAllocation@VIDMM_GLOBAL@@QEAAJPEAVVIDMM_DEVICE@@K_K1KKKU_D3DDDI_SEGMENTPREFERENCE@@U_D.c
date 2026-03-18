/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005BD4C (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00685B4 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0002EE4 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00037F4 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001625C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C00224A0 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C002250C (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00228B8 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023770 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023A54 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00637A0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0063970 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C0063C28 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0063C88 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006C280 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006C694 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C007B270 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C009E094 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C009F9C4 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        struct _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS a10,
        struct DXGADAPTERALLOCATION *a11,
        void *a12,
        void *a13,
        unsigned int a14,
        char a15,
        void *a16,
        char a17,
        struct _VIDMM_CROSSADAPTER_ALLOC **a18,
        struct _D3DDDI_SEGMENTPREFERENCE **a19)
{
  char v19; // bp
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v21; // ebx
  unsigned int v22; // r13d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGADAPTERALLOCATION *v28; // rcx
  unsigned int v29; // r14d
  __int64 CurrentProcess; // rax
  void *v31; // r9
  unsigned int i; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int Value; // ebx
  char v38; // si
  unsigned __int64 v39; // r13
  unsigned int v40; // r11d
  __int64 v41; // rax
  int v42; // r10d
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  __int64 v45; // rcx
  int v46; // r14d
  int v47; // r12d
  unsigned int v48; // r9d
  int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rdx
  char v52; // si
  char v53; // r14
  char v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rcx
  struct _D3DDDI_SEGMENTPREFERENCE *v60; // r14
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  PVOID v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v67; // ebx
  __int64 v68; // rdx
  struct DXGADAPTERALLOCATION *v69; // r9
  __int64 v70; // rcx
  int v71; // eax
  struct _VIDMM_CROSSADAPTER_ALLOC **v72; // rsi
  volatile signed __int32 *v73; // rax
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // rsi
  __int64 v76; // r13
  int v77; // edx
  unsigned int v78; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D *v79; // rax
  char v80; // si
  bool v81; // r9
  unsigned int v82; // ecx
  char v83; // r13
  int v84; // r11d
  unsigned int v85; // ecx
  unsigned int v86; // r11d
  _DWORD *v87; // r8
  int v88; // eax
  __int64 v89; // r8
  int CrossAdapterDataDpc; // r13d
  UINT v91; // eax
  struct VIDMM_SEGMENT *v92; // r9
  unsigned __int8 v93; // dl
  int v94; // ecx
  VIDMM_PARTITION *v95; // rbx
  UINT v96; // r13d
  int v97; // edx
  __int64 v98; // rcx
  bool v99; // zf
  __int64 v100; // rsi
  unsigned int *v101; // rbx
  char v102; // r13
  unsigned int v103; // edx
  __int64 v104; // r8
  unsigned int v105; // r9d
  unsigned int v106; // r10d
  unsigned int v107; // r11d
  unsigned int v108; // eax
  unsigned int v109; // ebx
  int v111; // eax
  __int64 v112; // rax
  int v113; // r10d
  unsigned int v114; // r9d
  int v115; // r8d
  int v116; // eax
  __int64 v117; // rcx
  unsigned int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int8 v125; // al
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  int v145; // r9d
  __int64 v146; // rax
  int v147; // r9d
  unsigned int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  _QWORD *v162; // rax
  unsigned __int64 v163; // rcx
  int **v164; // rcx
  KSPIN_LOCK *v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // r8
  VIDMM_GLOBAL *v168; // rcx
  int *v169; // rbx
  __int64 v170; // rdi
  _QWORD *v171; // rax
  DXGFASTMUTEX *v172; // rcx
  int v173; // [rsp+48h] [rbp-140h]
  int v174; // [rsp+60h] [rbp-128h]
  char v175; // [rsp+100h] [rbp-88h]
  unsigned __int8 v176; // [rsp+101h] [rbp-87h]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v177; // [rsp+104h] [rbp-84h] BYREF
  unsigned int v178; // [rsp+108h] [rbp-80h]
  unsigned int v179; // [rsp+10Ch] [rbp-7Ch] BYREF
  __int64 v180; // [rsp+110h] [rbp-78h]
  __int64 CurrentProcessId; // [rsp+118h] [rbp-70h] BYREF
  __int64 v182; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v183; // [rsp+128h] [rbp-60h]
  struct DXGADAPTERALLOCATION *v184; // [rsp+130h] [rbp-58h]
  unsigned __int8 v185; // [rsp+190h] [rbp+8h]
  unsigned int v186; // [rsp+190h] [rbp+8h]
  unsigned int v188; // [rsp+1A0h] [rbp+18h]
  char v189; // [rsp+1A0h] [rbp+18h]
  unsigned __int8 v191; // [rsp+1D8h] [rbp+50h]
  struct _DXGK_ALLOCATIONINFOFLAGS v192; // [rsp+1D8h] [rbp+50h]

  v188 = a3;
  v19 = (char)a10.0;
  v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  v22 = a3;
  v177.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 8) != 0 && !a16 && (*(_BYTE *)&a10.0 & 1) != 0 )
  {
    v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
    v177.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
  }
  if ( *((_DWORD *)this + 1748) == 1 )
  {
    v22 = 0;
    v188 = 0;
  }
  v180 = 1560LL * v22;
  v28 = (struct DXGADAPTERALLOCATION *)(*((_QWORD *)this + 5090) + v180);
  v184 = v28;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a2;
    v121 = (_QWORD *)WdLogNewEntry5_WdTrace(v120);
    v29 = a7;
    v121[4] = a6;
    v121[7] = a8;
    v121[3] = a4;
    v121[5] = 0LL;
    v121[6] = (unsigned int)a7;
    v122 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v122[4] = (unsigned int)v21;
    v28 = a11;
    v122[5] = a11;
    v122[3] = a9.Value;
  }
  else
  {
    v29 = a7;
  }
  *a19 = 0LL;
  if ( *((_DWORD *)this + 8) < 0x5023u && (*(_DWORD *)&v21 & 0x40000) != 0 )
  {
    v123 = WdLogNewEntry5_WdAssertion(v28, v25);
    *(_QWORD *)(v123 + 24) = 2359LL;
    WdLogEvent5_WdAssertion(v123);
    return 3221225485LL;
  }
  LOBYTE(v178) = (*(_BYTE *)&v21 & 1) != 0 && (*(_DWORD *)&v21 & 0x40000) == 0;
  if ( !*((_BYTE *)this + 40672)
    && (CurrentProcess = PsGetCurrentProcess(v28, v25, v26, v27), PsGetProcessWow64Process(CurrentProcess)) )
  {
    v31 = a16;
  }
  else
  {
    v31 = a16;
    if ( (*(_DWORD *)&v21 & 0x20000000) == 0
      && (*(_DWORD *)&v21 & 0x40000000) == 0
      && *(int *)&v21 >= 0
      && (*(_DWORD *)&v21 & 0x10000000) == 0
      && (*(_BYTE *)&v21 & 8) == 0
      && (*(_DWORD *)&v21 & 0x400000) == 0
      && !a16 )
    {
      v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v21 & 0xFFFBFFFF);
      LOBYTE(v178) = 1;
      v177.0 = v21;
    }
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v33 = i;
    if ( ((a9.Value >> i) & 0x1F) != 0 )
    {
      v33 = ((a9.Value >> i) & 0x1F) - 1;
      v111 = ~v29;
      if ( _bittest(&v111, (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1)) )
      {
        v124 = WdLogNewEntry5_WdAssertion(((a9.Value >> i) & 0x1F) - 1, (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1));
        *(_QWORD *)(v124 + 24) = 2408LL;
        WdLogEvent5_WdAssertion(v124);
        return 3221225485LL;
      }
    }
  }
  if ( !dword_1C0047428 || (*(_BYTE *)&v21 & 1) != 0 )
    goto LABEL_25;
  if ( (*(_BYTE *)&a9.0 & 0x1F) == 0 )
  {
    v125 = VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v22, v29, 0x1001u, &v179);
    v31 = a16;
    if ( !v125 )
    {
      v34 = v179;
      a7 = v179;
      goto LABEL_26;
    }
LABEL_25:
    v34 = (unsigned int)a7;
    goto LABEL_26;
  }
  v33 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
  v34 = (unsigned int)(1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1));
  a7 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
LABEL_26:
  if ( !a4 )
  {
    v126 = WdLogNewEntry5_WdAssertion(v33, v34);
    *(_QWORD *)(v126 + 24) = 2448LL;
    WdLogEvent5_WdAssertion(v126);
    return 3221225485LL;
  }
  if ( ((*(_DWORD *)&v21 | (*(unsigned int *)&v21 >> 1)) & 0x1000) != 0 )
  {
    v127 = WdLogNewEntry5_WdAssertion(v33, v34);
    *(_QWORD *)(v127 + 24) = 2456LL;
    WdLogEvent5_WdAssertion(v127);
    return 3221225485LL;
  }
  LODWORD(v182) = 0;
  LODWORD(CurrentProcessId) = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          this,
          v22,
          v34,
          &v177,
          a4,
          a5,
          v31 != 0LL,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&CurrentProcessId) )
  {
    v128 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v128 + 24) = 2467LL;
    WdLogEvent5_WdAssertion(v128);
    return 3221225485LL;
  }
  Value = v177.Value;
  if ( (v177.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v177.0 & 1) == 0 )
    {
      v129 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v129 + 24) = 2482LL;
      WdLogEvent5_WdAssertion(v129);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v177.0 & 2) != 0 || (*(_BYTE *)&v177.0 & 0x20) != 0 || (*(_BYTE *)&v177.0 & 0x10) != 0 )
    {
      v130 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v130 + 24) = 2494LL;
      WdLogEvent5_WdAssertion(v130);
      return 3221225485LL;
    }
  }
  if ( (v177.Value & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)&v177.0 & 2) != 0
      || (*(_BYTE *)&v177.0 & 4) != 0 && (v36 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (v36 & 8) == 0)
      || (v177.Value & 0x100000) != 0
      || (v177.Value & 0x80000) != 0
      || (*(_BYTE *)&v177.0 & 8) != 0
      || (*(_BYTE *)&v177.0 & 0x10) != 0
      || (*(_BYTE *)&v177.0 & 0x20) != 0 )
    {
      v131 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v131 + 24) = 2513LL;
      WdLogEvent5_WdAssertion(v131);
      return 3221225485LL;
    }
  }
  v38 = CurrentProcessId;
  v39 = 0LL;
  v40 = a8;
  if ( (CurrentProcessId & 4) != 0 )
    v39 = a5;
  v183 = v39;
  if ( a8 )
  {
    v41 = *((_QWORD *)this + 5090);
    v42 = 0;
    v43 = a8;
    v44 = *(_DWORD *)(v180 + v41 + 20);
    v45 = (unsigned int)~*(_DWORD *)(v41 + 16);
    if ( ((unsigned int)v45 & a8) != 0 )
      goto LABEL_209;
    LODWORD(v35) = 1;
    do
    {
      if ( (v43 & 1) != 0 )
      {
        v45 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v44);
        if ( (*(_DWORD *)(v45 + 80) & 1) == 0 )
          v42 |= v35;
      }
      v35 = (unsigned int)__ROL4__(v35, 1);
      ++v44;
      v43 >>= 1;
    }
    while ( v43 );
    if ( v42 )
    {
LABEL_209:
      v133 = WdLogNewEntry5_WdAssertion(v45, v35);
      *(_QWORD *)(v133 + 24) = 2545LL;
      WdLogEvent5_WdAssertion(v133);
      return 3221225485LL;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(this, v188, a8, 32) )
    {
      v132 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v132 + 24) = 2560LL;
      WdLogEvent5_WdAssertion(v132);
      return 3221225485LL;
    }
    v40 = a8;
  }
  v46 = (Value >> 1) & 1;
  if ( v46 )
  {
    if ( (Value & 1) == 0 )
    {
      v134 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v134 + 24) = 2578LL;
      WdLogEvent5_WdAssertion(v134);
      return 3221225485LL;
    }
    if ( (Value & 0x20000000) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0 )
    {
      v135 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v135 + 24) = 2591LL;
      WdLogEvent5_WdAssertion(v135);
      return 3221225485LL;
    }
  }
  v47 = (Value >> 2) & 1;
  if ( !v47 || (Value & 0x800000) != 0 )
  {
LABEL_45:
    v48 = 1;
    goto LABEL_46;
  }
  if ( *((_BYTE *)this + 7073) )
  {
    v112 = *((_QWORD *)this + 5090);
    v113 = 0;
    v35 = v40;
    v114 = *(_DWORD *)(v180 + v112 + 20);
    v36 = (unsigned int)~*(_DWORD *)(v112 + 16);
    if ( ((unsigned int)v36 & v40) != 0 )
      goto LABEL_216;
    if ( v40 )
    {
      v115 = 1;
      do
      {
        if ( (v35 & 1) != 0 )
        {
          v36 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v114);
          if ( (*(_DWORD *)(v36 + 80) & 0x10) == 0 )
            v113 |= v115;
        }
        v115 = __ROL4__(v115, 1);
        ++v114;
        v35 = (unsigned int)v35 >> 1;
      }
      while ( (_DWORD)v35 );
      if ( v113 )
      {
LABEL_216:
        v136 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v136 + 24) = 2624LL;
        WdLogEvent5_WdAssertion(v136);
        return 3221225485LL;
      }
    }
    goto LABEL_45;
  }
  v48 = 1;
  v36 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
  if ( (v36 & 8) == 0 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v188, v40, 1u, 0LL) )
    {
      v137 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v137 + 24) = 2631LL;
      WdLogEvent5_WdAssertion(v137);
      return 3221225485LL;
    }
    v40 = a8;
  }
LABEL_46:
  v49 = (Value >> 29) & 1;
  if ( v49 && (v46 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    v138 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v138 + 24) = 2651LL;
    WdLogEvent5_WdAssertion(v138);
    return 3221225485LL;
  }
  if ( (Value & 0x100000) != 0 && (!v49 || !a18 || (v38 & 1) == 0) )
  {
    v139 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v139 + 24) = 2663LL;
    WdLogEvent5_WdAssertion(v139);
    return 3221225485LL;
  }
  if ( a16 && (v46 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    v140 = WdLogNewEntry5_WdAssertion(a16, v35);
    *(_QWORD *)(v140 + 24) = 2683LL;
    WdLogEvent5_WdAssertion(v140);
    return 3221225485LL;
  }
  if ( ((Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      v141 = WdLogNewEntry5_WdAssertion(a16, v35);
      *(_QWORD *)(v141 + 24) = 2699LL;
      WdLogEvent5_WdAssertion(v141);
      return 3221225485LL;
    }
  }
  else if ( (Value & 8) == 0 )
  {
    goto LABEL_51;
  }
  if ( (Value & 1) != 0 && ((Value >> 26) & 1) == 0 && !a16
    || v46
    || v49
    || (Value & 0x10) != 0
    || (Value & 0x20) != 0
    || (Value & 0x80000000) != 0
    || (Value & 0x40000000) != 0 )
  {
    v142 = WdLogNewEntry5_WdAssertion(a16, v35);
    *(_QWORD *)(v142 + 24) = 2732LL;
    WdLogEvent5_WdAssertion(v142);
    return 3221225485LL;
  }
LABEL_51:
  v50 = (Value >> 4) & 1;
  if ( ((Value >> 4) & 1) != 0 && (v46 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v143 = WdLogNewEntry5_WdAssertion(v50, v35);
    *(_QWORD *)(v143 + 24) = 2754LL;
    WdLogEvent5_WdAssertion(v143);
    return 3221225485LL;
  }
  v51 = (Value >> 5) & 1;
  if ( ((Value >> 5) & 1) != 0 && (v46 || v49 || (_DWORD)v50 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v144 = WdLogNewEntry5_WdAssertion(v50, v51);
    *(_QWORD *)(v144 + 24) = 2778LL;
    WdLogEvent5_WdAssertion(v144);
    return 3221225485LL;
  }
  if ( (Value & 0x80000000) != 0 )
  {
    if ( !v46 )
    {
      if ( v47 )
      {
        v145 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL);
        if ( (v145 & 0x10) == 0 && (v145 & 8) == 0 )
          goto LABEL_244;
        v48 = 1;
      }
      if ( !(_DWORD)v50 && !(_DWORD)v51 && (Value & 0x40000000) == 0 )
        goto LABEL_55;
    }
LABEL_244:
    v146 = WdLogNewEntry5_WdAssertion(v50, v51);
    *(_QWORD *)(v146 + 24) = 2802LL;
    WdLogEvent5_WdAssertion(v146);
    return 3221225485LL;
  }
  if ( (Value & 0x40000000) == 0 )
    goto LABEL_55;
  if ( v46 )
    goto LABEL_257;
  if ( v47 )
  {
    v147 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL);
    if ( (v147 & 0x10) == 0 && (v147 & 8) == 0 )
      goto LABEL_257;
    v48 = 1;
  }
  if ( (_DWORD)v50 || (_DWORD)v51 )
  {
LABEL_257:
    v149 = WdLogNewEntry5_WdAssertion(v50, v51);
    *(_QWORD *)(v149 + 24) = 2826LL;
    WdLogEvent5_WdAssertion(v149);
    return 3221225485LL;
  }
  v50 = *(unsigned int *)(*((_QWORD *)this + 3) + 1836LL);
  if ( (v50 & 0x200) == 0 )
    Value |= 1u;
  v148 = (unsigned __int8)v178;
  if ( (Value & 1) != 0 )
    v148 = v48;
  Value |= 0x20000000u;
  v177.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  v178 = v148;
LABEL_55:
  if ( ((Value >> 28) & 1) != 0 )
  {
    v117 = *((_QWORD *)this + 3);
    v118 = Value & 0xEFFF7FBF;
    v119 = *(unsigned int *)(v117 + 300);
    if ( (v119 & 8) != 0 || (v119 & 0x10) != 0 )
      v118 = Value & 0xEFFF7FBB;
    if ( v118 )
    {
      v150 = WdLogNewEntry5_WdAssertion(v117, v119);
      *(_QWORD *)(v150 + 24) = 2868LL;
      WdLogEvent5_WdAssertion(v150);
      return 3221225485LL;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v188, v40, v48, 0LL) )
    {
      v151 = WdLogNewEntry5_WdAssertion(v50, v51);
      *(_QWORD *)(v151 + 24) = 2878LL;
      WdLogEvent5_WdAssertion(v151);
      return 3221225485LL;
    }
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      v152 = WdLogNewEntry5_WdAssertion(v50, v51);
      *(_QWORD *)(v152 + 24) = 2894LL;
      WdLogEvent5_WdAssertion(v152);
      return 3221225485LL;
    }
    if ( !a12 )
    {
      v153 = WdLogNewEntry5_WdAssertion(v50, v51);
      *(_QWORD *)(v153 + 24) = 2904LL;
      WdLogEvent5_WdAssertion(v153);
      return 3221225485LL;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( (Value & 1) == 0 )
    {
      v154 = WdLogNewEntry5_WdAssertion(v50, v51);
      *(_QWORD *)(v154 + 24) = 2916LL;
      WdLogEvent5_WdAssertion(v154);
      return 3221225485LL;
    }
    if ( (Value & 2) != 0
      || (Value & 8) != 0
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x40) != 0
      || (Value & 0x100) != 0
      || (Value & 0x200) != 0
      || (Value & 0x40000) != 0 )
    {
      v155 = WdLogNewEntry5_WdAssertion(v50, v51);
      *(_QWORD *)(v155 + 24) = Value;
      WdLogEvent5_WdAssertion(v155);
      return 3221225485LL;
    }
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0
    && DXGPROCESS::GetCurrent()
    && *((_BYTE *)DXGPROCESS::GetCurrent() + 322)
    && ((Value >> 28) & 1) == 0
    && (Value & 0x40000000) == 0 )
  {
    Value |= 0x8000000u;
    v177.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v191 = 0;
  v175 = 0;
  v176 = 0;
  v185 = 0;
  v56 = *((unsigned __int8 *)DXGPROCESS::GetCurrent() + 323);
  if ( (v56 & 8) != 0 && !a16 )
  {
    v175 = 1;
    if ( (Value & 0x10) != 0 )
    {
      v53 = 1;
      v176 = 1;
    }
    else if ( (Value & 1) != 0 )
    {
      if ( (Value & 0x8000) != 0 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v56, v55);
        *(_QWORD *)(v156 + 24) = 2976LL;
        WdLogEvent5_WdAssertion(v156);
        return 3221225485LL;
      }
      if ( (v56 & 0x10) == 0 || (Value & 0x20000000) != 0 )
      {
        v52 = 1;
        v191 = 1;
      }
      else
      {
        v54 = 1;
        v185 = 1;
      }
    }
  }
  if ( (unsigned __int8)v52 | (unsigned __int8)(v53 | v54) )
  {
    v58 = operator new(0x218uLL, 0x61306956u, v57, PagedPool);
    v60 = (struct _D3DDDI_SEGMENTPREFERENCE *)v58;
    if ( !v58 )
      goto LABEL_285;
  }
  else
  {
    v58 = operator new(0x200uLL, 0x31306956u, v57, PagedPool);
    v60 = (struct _D3DDDI_SEGMENTPREFERENCE *)v58;
    if ( !v58 )
    {
LABEL_285:
      _InterlockedIncrement(&dword_1C0047574);
      v157 = WdLogNewEntry5_WdLowResource(v59);
      *(_QWORD *)(v157 + 24) = 3012LL;
      WdLogEvent5_WdLowResource(v157);
      return 3221225495LL;
    }
  }
  v58[44] = 0LL;
  v58[60] = 0LL;
  v61 = v58 + 24;
  *v61 = v61;
  v61[1] = v61;
  if ( !v60 )
    goto LABEL_285;
  v62 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v62 )
  {
    *v62 = 0LL;
    v62[1] = 0LL;
    *((_DWORD *)v62 + 6) = 0;
    *((_DWORD *)v62 + 7) = 13;
    *((_DWORD *)v62 + 8) = 32;
    v62[2] = 0LL;
  }
  else
  {
    v62 = 0LL;
  }
  *(_QWORD *)&v60[80].0 = v62;
  if ( !v62 )
  {
    _InterlockedIncrement(&dword_1C0047620);
    v158 = WdLogNewEntry5_WdLowResource(v63);
    *(_QWORD *)(v158 + 24) = 3024LL;
    WdLogEvent5_WdLowResource(v158);
    CrossAdapterDataDpc = -1073741801;
LABEL_306:
    v72 = a18;
    goto LABEL_307;
  }
  v64 = operator new[](0x20uLL, 0x32346956u, (POOL_TYPE)512);
  *(_QWORD *)&v60[126].0 = v64;
  if ( !v64 )
  {
    _InterlockedIncrement(&dword_1C004767C);
    v159 = WdLogNewEntry5_WdLowResource(v65);
    *(_QWORD *)(v159 + 24) = 3037LL;
    WdLogEvent5_WdLowResource(v159);
    CrossAdapterDataDpc = -1073741801;
    goto LABEL_306;
  }
  memset(v64, 0, 0x20uLL);
  *(_QWORD *)(*(_QWORD *)&v60[126].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
  v66 = *(_QWORD *)(*(_QWORD *)&v60[126].0 + 16LL);
  if ( !v66 )
  {
    _InterlockedIncrement(&dword_1C004756C);
    v160 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v160 + 24) = 3048LL;
    WdLogEvent5_WdLowResource(v160);
    CrossAdapterDataDpc = -1073741801;
    goto LABEL_306;
  }
  *(_QWORD *)v66 = 0LL;
  *(_DWORD *)(v66 + 8) = 0;
  _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v60[126].0 + 16LL));
  v67 = v177.0;
  if ( (v177.Value & 0x100000) != 0 )
    v68 = 0LL;
  else
    v68 = 0xFFFFFFFFLL;
  v69 = a11;
  v70 = *(_QWORD *)(*(_QWORD *)&v60[126].0 + 16LL);
  *(_DWORD *)(v70 + 4) = v68;
  if ( a11 )
  {
    v71 = *((_DWORD *)a11 + 1);
    if ( (v71 & 0x8000) != 0 )
    {
      v60[19].Value |= 0x800u;
      v71 = *((_DWORD *)a11 + 1);
    }
    if ( (v71 & 0x10000) != 0 )
      v60[20].Value |= 0x400u;
  }
  v72 = a18;
  if ( a18 )
    v73 = (volatile signed __int32 *)*a18;
  else
    v73 = 0LL;
  *(_QWORD *)&v60[124].0 = v73;
  if ( v73 )
  {
    _InterlockedIncrement(v73);
    CrossAdapterDataDpc = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
                            this,
                            *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v60[124].0,
                            (struct _VIDMM_GLOBAL_ALLOC *)v60);
    if ( CrossAdapterDataDpc < 0 )
      goto LABEL_307;
    v67 = v177.0;
    v39 = v183;
    v69 = a11;
  }
  *(_QWORD *)&v60->0 = a4;
  v74 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 <= v74 )
  {
    v75 = (v39 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v39 <= v75 )
    {
      if ( v74 > 0xFFFF0000 )
      {
        v162 = (_QWORD *)WdLogNewEntry5_WdAssertion(v70, v68);
        v162[3] = 3129LL;
        goto LABEL_305;
      }
      v39 = a6;
      v70 = (a6 + 4095) & 0xFFFFF000;
      LODWORD(v183) = v70;
      if ( a6 <= (unsigned int)v70 )
      {
        v76 = (unsigned int)v70;
        if ( v74 + v70 >= v74 && v75 + v70 >= v75 )
        {
          if ( (*(_DWORD *)&v67 & 0x10000000) != 0 )
          {
            v67 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v67 | 8);
            v177.0 = v67;
          }
          *(_QWORD *)&v60[90].0 = a12;
          if ( (*(_DWORD *)&v67 & 0x20000000) == 0 || (*(_BYTE *)&v67 & 0x10) != 0 )
            v77 = 0;
          else
            v77 = 0x20000;
          v78 = v77 | v60[20].Value & 0xFFFDFFFF;
          v60[8].Value = v70;
          v60[20].Value = v78;
          v79 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D **)&v60[126].0;
          v60[40].Value = 0;
          *(_QWORD *)&v60[6].0 = v75;
          v80 = CurrentProcessId;
          *(_QWORD *)&v60[4].0 = v74;
          *(_QWORD *)&v60[2].0 = v74;
          *v79 = v67;
          v60[16].Value = a8;
          v60[32].Value = 0;
          v60[78].Value = 0;
          *(_QWORD *)&v60[10].0 = v69;
          v81 = 0;
          v82 = v60[19].Value & 0xFFFFFF3F | (32 * (v80 & 2 | (4 * (v80 & 1))));
          v60[17].Value = a7;
          v60[19].Value = v82;
          v83 = v82;
          v84 = (v178 & 0xF | (16 * (v175 & 0xF1 | (4 * (v185 | (4 * v191)))))) << 7;
          v85 = v60[20].Value & 0xFFFF277F | ((v191 | (4 * v176)) << 12);
          v60[18].0 = a9.0;
          v86 = v85 & 0xFFFFDFFF | v84;
          v60[20].Value = v86;
          if ( (*(_BYTE *)&v67 & 1) != 0 )
            v81 = (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 8) != 0
               || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(this, v188, a7);
          v60[20].Value = v86 & 0xFFFBFFFF | (v81 << 18);
          v87 = *(_DWORD **)(1560LL * (v83 & 0x3F) + *((_QWORD *)this + 5090) + 440);
          if ( dword_1C004742C
            && (v80 & 2) != 0
            && v87
            && ((*v87 & 0x200) != 0 || dword_1C004742C == 2)
            && ((v163 = *(_QWORD *)&v60[2].0, !(_WORD)v163) || v163 > (unsigned int)dword_1C0047430)
            && !v81 )
          {
            v88 = 256;
          }
          else
          {
            v88 = 0;
          }
          v60[20].Value = v88 | v86 & 0xFFFBFEFF | (v81 << 18);
          CrossAdapterDataDpc = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v60);
          if ( CrossAdapterDataDpc >= 0 )
          {
            if ( (*(_WORD *)&v67 & 0x4000) != 0 )
              v60[20].Value |= 0x20u;
            if ( (*((_BYTE *)v184 + 436) & 3) != 0 )
            {
              v116 = 1 << (*((_WORD *)v184 + 14) - *((_BYTE *)v184 + 20));
              v60[16].Value |= v116;
              if ( (v80 & 2) != 0 && (*(_WORD *)&v67 & 0x8000) == 0 )
                v60[17].Value |= v116;
            }
            *(_QWORD *)&v60[12].0 = a13;
            v60[94].Value = a14;
            v91 = v60[19].Value;
            *(_QWORD *)&v60[30].0 = a16;
            v92 = 0LL;
            v60[19].Value = v188 & 0x3F | ((a15 & 1) << 28) | v91 & 0xE7FFFFC0 | (a16 != 0LL ? 0x8000000 : 0);
            *(_QWORD *)&v60[76].0 = v60 + 74;
            *(_QWORD *)&v60[74].0 = v60 + 74;
            *(_QWORD *)&v60[118].0 = -1LL;
            v93 = (v60[19].Value & 0x80) != 0;
            if ( a9.0 )
            {
              if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
              {
                v92 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                               + 8LL
                                               * ((*(_BYTE *)&a9.0 & 0x1Fu)
                                                + *(_DWORD *)(v180 + *((_QWORD *)this + 5090) + 20)
                                                - 1));
                v93 = *((_BYTE *)v92 + 80);
              }
              else if ( ((a9.Value >> 6) & 0x1F) != 0 )
              {
                v92 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                               + 8LL
                                               * (((a9.Value >> 6) & 0x1F)
                                                + *(_DWORD *)(v180 + *((_QWORD *)this + 5090) + 20)
                                                - 1));
              }
            }
            v60[19].Value ^= ((unsigned __int16)*(_DWORD *)&v60[19].0 ^ (unsigned __int16)(v93 << 10)) & 0x400;
            if ( VIDMM_GLOBAL::VerifyBudgetGroups(this, v188, a7, v92, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v182) )
            {
              v94 = v60[19].Value ^ (v60[19].Value ^ ((_DWORD)v182 << 12)) & 0xFF000;
              v60[19].Value = v94;
              if ( (*(_BYTE *)&v67 & 0x10) != 0 || (*(_BYTE *)&v67 & 0x20) != 0 )
                *((_BYTE *)&v60[24].0 + 1) = 1;
              v60[19].Value = v94 ^ ((unsigned __int16)v94 ^ (unsigned __int16)((unsigned __int8)a17 << 8)) & 0x100;
              v95 = *(VIDMM_PARTITION **)(*((_QWORD *)a2 + 1) + 240LL);
              *(_QWORD *)&v60[122].0 = VIDMM_PARTITION::GetAdapterInfo(v95, this);
              VidMmiReferencePartition(v95);
              v96 = v60[19].Value;
              LOBYTE(v97) = (v60[20].Value & 0x1000) == 0 && (**(_DWORD **)&v60[126].0 & 0x4000003A) == 0;
              v98 = (v96 & 0x100) == 0;
              v99 = bTracingEnabled == 0;
              v60[20].Value = v60[20].Value & 0xFFFEFFFF | (((unsigned int)v98 & v97) << 16);
              if ( !v99 )
              {
                v100 = *(_QWORD *)&v60[10].0;
                v101 = v100 ? *(unsigned int **)(v100 + 24) : 0LL;
                v102 = v96 & 0x3F;
                v182 = *((_QWORD *)a2 + 3);
                v180 = *((_QWORD *)this + 3);
                v184 = *(struct DXGADAPTERALLOCATION **)&v60[90].0;
                CurrentProcessId = (__int64)PsGetCurrentProcessId();
                LOBYTE(v186) = 0;
                v98 = 0LL;
                *(_BYTE *)&v192.0 = 0;
                LOBYTE(v103) = 0;
                v189 = 0;
                v104 = 0LL;
                LOBYTE(v105) = 0;
                LOBYTE(v106) = 0;
                LOBYTE(v107) = 0;
                if ( v101 )
                {
                  v98 = *v101;
                  v103 = v101[1];
                  v104 = v101[2];
                  v105 = v101[3];
                  v106 = v101[4];
                  v107 = v101[5];
                  v186 = v101[6];
                  v192.0 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v101[7];
                  v108 = v101[8];
                  v109 = v101[9];
                  v189 = v108;
                }
                else
                {
                  LOBYTE(v109) = 0;
                }
                if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                  McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
                    v98,
                    (__int64)&EventCreateAdapterAllocation,
                    v104,
                    CurrentProcessId,
                    v182,
                    v180,
                    v19,
                    0,
                    v183,
                    v173,
                    a7,
                    *(_BYTE *)&a9.0,
                    v174,
                    a8,
                    a14,
                    (char)v60,
                    v100,
                    0,
                    v98,
                    v103,
                    v104,
                    v105,
                    v106,
                    v107,
                    v186,
                    *(_BYTE *)&v192.0,
                    v189,
                    v109,
                    0,
                    (char)v184,
                    v102,
                    a17);
              }
              ++*((_DWORD *)this + 2042);
              *((_QWORD *)this + 1022) += v74;
              *((_QWORD *)this + 5086) += v74;
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v98) + 24) = v60;
              *a19 = v60;
              return 0LL;
            }
            return 3221225485LL;
          }
          goto LABEL_306;
        }
        v162 = (_QWORD *)WdLogNewEntry5_WdAssertion(v70, v68);
        v162[3] = v74;
        v162[4] = v75;
        v162[5] = v74;
        v162[6] = v76;
        goto LABEL_305;
      }
    }
    v162 = (_QWORD *)WdLogNewEntry5_WdAssertion(v70, v68);
    v162[3] = v39;
LABEL_305:
    WdLogEvent5_WdAssertion(v162);
    CrossAdapterDataDpc = -1073741811;
    goto LABEL_306;
  }
  v161 = WdLogNewEntry5_WdAssertion(v70, v68);
  *(_QWORD *)(v161 + 24) = a4;
  WdLogEvent5_WdAssertion(v161);
  CrossAdapterDataDpc = -1073741811;
LABEL_307:
  if ( (v60[23].Value & 1) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v60, 1);
  v164 = *(int ***)&v60[126].0;
  if ( v164 )
  {
    if ( v164[2] )
    {
      VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v164[2], v68, v89);
      v164 = *(int ***)&v60[126].0;
    }
    operator delete(v164);
  }
  v165 = *(KSPIN_LOCK **)&v60[124].0;
  if ( v165 )
  {
    VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v164, v165, (struct _VIDMM_GLOBAL_ALLOC *)v60);
    v168 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*(volatile signed __int32 **)&v60[124].0);
    if ( (_DWORD)v168 )
    {
      if ( (int)v168 < 0 )
      {
        v169 = *(int **)&v60[124].0;
        v170 = *v169;
        v171 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v168, v166, v167);
        v171[3] = 270LL;
        v171[4] = 66LL;
        v171[5] = v169;
        v171[6] = v170;
        v171[7] = 0LL;
        WdLogEvent5_WdCriticalError(v171);
      }
    }
    else
    {
      VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v168, *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v60[124].0);
      *v72 = 0LL;
    }
  }
  v172 = *(DXGFASTMUTEX **)&v60[80].0;
  if ( v172 )
    DXGFASTMUTEX::`scalar deleting destructor'(v172);
  _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v60);
  return (unsigned int)CrossAdapterDataDpc;
}

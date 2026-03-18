/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00571E8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00641B4 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0012F5C (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0013430 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001696C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001FF7C (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001FFE8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C002038C (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00587C0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058BD0 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005F1B0 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C005F380 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0074208 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0098FF0 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C009A57C (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
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
  char v19; // r14
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v21; // ebx
  unsigned int v22; // r12d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGADAPTERALLOCATION *v28; // rcx
  int v29; // r15d
  __int64 CurrentProcess; // rax
  void *v31; // r9
  unsigned int i; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int Value; // ebx
  char v37; // si
  unsigned int v38; // r11d
  __int64 v39; // rax
  unsigned int v40; // r9d
  unsigned int v41; // r10d
  unsigned int v42; // r11d
  UINT v43; // r15d
  UINT v44; // r12d
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rdx
  char v48; // si
  char v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct _D3DDDI_SEGMENTPREFERENCE *v56; // r15
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  PVOID v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v66; // ebx
  __int64 v67; // rdx
  int v68; // r8d
  __int64 v69; // rcx
  volatile signed __int32 *v70; // rax
  unsigned __int64 v71; // r12
  unsigned __int64 v72; // rsi
  __int64 v73; // rdx
  unsigned int v74; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D *v75; // rax
  char v76; // si
  int v77; // r8d
  unsigned int v78; // r8d
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  _DWORD *v81; // rdx
  int v82; // eax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // r8
  struct VIDMM_SEGMENT *v86; // r9
  unsigned int v87; // eax
  unsigned __int8 v88; // dl
  UINT v89; // ecx
  VIDMM_PARTITION *v90; // rbx
  int v91; // edx
  __int64 v92; // rcx
  bool v93; // zf
  __int64 v94; // rsi
  unsigned int *v95; // rbx
  unsigned int v96; // edx
  __int64 v97; // r8
  unsigned int v98; // r9d
  unsigned int v99; // r10d
  unsigned int v100; // r11d
  unsigned int v101; // eax
  unsigned int v102; // ebx
  int v104; // eax
  __int64 v105; // rax
  int v106; // r10d
  unsigned int v107; // r9d
  int v108; // r8d
  int v109; // eax
  __int64 v110; // rcx
  unsigned int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned __int8 v118; // al
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
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
  int v138; // r9d
  __int64 v139; // rax
  int v140; // r9d
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned int v151; // esi
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  _QWORD *v155; // rax
  unsigned __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rax
  unsigned __int64 v159; // rcx
  __int64 v160; // rax
  int *v161; // rcx
  volatile signed __int32 *v162; // rcx
  int v163; // eax
  int *v164; // rbx
  __int64 v165; // rdi
  _QWORD *v166; // rax
  DXGFASTMUTEX *v167; // rcx
  int v168; // [rsp+48h] [rbp-138h]
  int v169; // [rsp+60h] [rbp-120h]
  unsigned __int8 v170; // [rsp+100h] [rbp-80h]
  char v171; // [rsp+101h] [rbp-7Fh]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v172; // [rsp+104h] [rbp-7Ch] BYREF
  unsigned int v173; // [rsp+108h] [rbp-78h] BYREF
  int v174; // [rsp+10Ch] [rbp-74h] BYREF
  unsigned int v175; // [rsp+110h] [rbp-70h] BYREF
  __int64 v176; // [rsp+118h] [rbp-68h]
  unsigned int v177[2]; // [rsp+120h] [rbp-60h]
  struct DXGADAPTERALLOCATION *v178; // [rsp+128h] [rbp-58h]
  HANDLE CurrentProcessId; // [rsp+130h] [rbp-50h]
  __int64 v180; // [rsp+138h] [rbp-48h]
  unsigned int v181; // [rsp+190h] [rbp+10h]
  unsigned __int8 v182; // [rsp+190h] [rbp+10h]
  unsigned int v183; // [rsp+190h] [rbp+10h]
  unsigned int v185; // [rsp+1A0h] [rbp+20h]
  __int16 v186; // [rsp+1A0h] [rbp+20h]
  bool v188; // [rsp+1D8h] [rbp+58h]
  char v189; // [rsp+1D8h] [rbp+58h]

  v185 = a3;
  v19 = (char)a10.0;
  v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  v22 = a3;
  v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 307) & 8) != 0 && !a16 && (*(_BYTE *)&a10.0 & 1) != 0 )
  {
    v21 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
    v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
  }
  if ( *((_DWORD *)this + 1604) == 1 )
  {
    v22 = 0;
    v185 = 0;
  }
  v176 = 1552LL * v22;
  v28 = (struct DXGADAPTERALLOCATION *)(*((_QWORD *)this + 5021) + v176);
  v178 = v28;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a2;
    v114 = (_QWORD *)WdLogNewEntry5_WdTrace(v113);
    v29 = a7;
    v114[3] = a4;
    v114[4] = a6;
    v114[5] = 0LL;
    v114[6] = (unsigned int)a7;
    v114[7] = a8;
    v115 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v115[4] = (unsigned int)v21;
    v28 = a11;
    v115[5] = a11;
    v115[3] = a9.Value;
  }
  else
  {
    v29 = a7;
  }
  *a19 = 0LL;
  if ( *((_DWORD *)this + 8) < 0x5023u && (*(_DWORD *)&v21 & 0x40000) != 0 )
  {
    v116 = WdLogNewEntry5_WdAssertion(v28, v25);
    *(_QWORD *)(v116 + 24) = 2336LL;
    WdLogEvent5_WdAssertion(v116);
    return 3221225485LL;
  }
  v188 = (*(_BYTE *)&v21 & 1) != 0 && (*(_DWORD *)&v21 & 0x40000) == 0;
  if ( !*((_BYTE *)this + 40096)
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
      v188 = 1;
      v172.0 = v21;
    }
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v33 = i;
    if ( ((a9.Value >> i) & 0x1F) != 0 )
    {
      v33 = ((a9.Value >> i) & 0x1F) - 1;
      v104 = ~v29;
      v25 = (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1);
      if ( _bittest(&v104, (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1)) )
      {
        v117 = WdLogNewEntry5_WdAssertion(((a9.Value >> i) & 0x1F) - 1, (unsigned __int8)(((a9.Value >> i) & 0x1F) - 1));
        *(_QWORD *)(v117 + 24) = 2385LL;
        WdLogEvent5_WdAssertion(v117);
        return 3221225485LL;
      }
    }
  }
  if ( dword_1C0040428 && (*(_BYTE *)&v21 & 1) == 0 )
  {
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v33 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
      v29 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
    }
    else
    {
      v118 = VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v22, v29, 0x1001u, &v175);
      v31 = a16;
      if ( v118 )
        goto LABEL_25;
      v29 = v175;
    }
    a7 = v29;
  }
LABEL_25:
  if ( !a4 )
  {
    v119 = WdLogNewEntry5_WdAssertion(v33, v25);
    *(_QWORD *)(v119 + 24) = 2425LL;
    WdLogEvent5_WdAssertion(v119);
    return 3221225485LL;
  }
  if ( ((*(_DWORD *)&v21 | (*(unsigned int *)&v21 >> 1)) & 0x1000) != 0 )
  {
    v120 = WdLogNewEntry5_WdAssertion(v33, v25);
    *(_QWORD *)(v120 + 24) = 2433LL;
    WdLogEvent5_WdAssertion(v120);
    return 3221225485LL;
  }
  v173 = 0;
  v174 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          this,
          v22,
          v29,
          &v172,
          a4,
          a5,
          v31 != 0LL,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v174) )
  {
    v121 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v121 + 24) = 2444LL;
    WdLogEvent5_WdAssertion(v121);
    return 3221225485LL;
  }
  Value = v172.Value;
  *(_QWORD *)v177 = 1LL;
  LODWORD(CurrentProcessId) = 1;
  if ( (v172.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v172.0 & 1) == 0 )
    {
      v122 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v122 + 24) = 2459LL;
      WdLogEvent5_WdAssertion(v122);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v172.0 & 2) != 0 || (*(_BYTE *)&v172.0 & 0x20) != 0 || (*(_BYTE *)&v172.0 & 0x10) != 0 )
    {
      v123 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v123 + 24) = 2471LL;
      WdLogEvent5_WdAssertion(v123);
      return 3221225485LL;
    }
  }
  if ( (v172.Value & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)&v172.0 & 2) != 0
      || (*(_BYTE *)&v172.0 & 4) != 0 && (v35 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (v35 & 8) == 0)
      || (v172.Value & 0x100000) != 0
      || (v172.Value & 0x80000) != 0
      || (*(_BYTE *)&v172.0 & 8) != 0
      || (*(_BYTE *)&v172.0 & 0x10) != 0
      || (*(_BYTE *)&v172.0 & 0x20) != 0 )
    {
      v124 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v124 + 24) = 2490LL;
      WdLogEvent5_WdAssertion(v124);
      return 3221225485LL;
    }
  }
  v37 = v174;
  if ( (v174 & 4) == 0 )
  {
    v35 = 0LL;
    a5 = 0LL;
  }
  v38 = a8;
  if ( !a8 )
    goto LABEL_44;
  v39 = *((_QWORD *)this + 5021);
  LODWORD(v180) = 32;
  v40 = a8;
  v35 = 0LL;
  v181 = 0;
  v41 = *(_DWORD *)(v39 + v176 + 20);
  v42 = v41;
  if ( (~*(_DWORD *)(v39 + 16) & a8) != 0 )
    goto LABEL_218;
  LODWORD(v34) = 1;
  do
  {
    if ( (v40 & 1) != 0 )
    {
      v35 = v181;
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v42) + 80LL) & 1) != 1 )
      {
        v35 = (unsigned int)v34 | v181;
        v181 |= v34;
      }
    }
    v34 = (unsigned int)__ROL4__(v34, 1);
    ++v42;
    v40 >>= 1;
  }
  while ( v40 );
  if ( (_DWORD)v35 )
  {
LABEL_218:
    v126 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v126 + 24) = 2522LL;
    WdLogEvent5_WdAssertion(v126);
    return 3221225485LL;
  }
  v38 = a8;
  v34 = a8;
  if ( (~*(_DWORD *)(v39 + v176 + 16) & a8) != 0 )
  {
LABEL_44:
    v43 = (v172.Value >> 1) & 1;
    if ( v43 )
    {
      if ( (*(_BYTE *)&v172.0 & 1) == 0 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v127 + 24) = 2555LL;
        WdLogEvent5_WdAssertion(v127);
        return 3221225485LL;
      }
      if ( (v172.Value & 0x20000000) != 0 || (v172.Value & 0x80000000) != 0 || (v172.Value & 0x40000000) != 0 )
      {
        v128 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v128 + 24) = 2568LL;
        WdLogEvent5_WdAssertion(v128);
        return 3221225485LL;
      }
    }
    v44 = (v172.Value >> 2) & 1;
    if ( v44 && (v172.Value & 0x800000) == 0 )
    {
      if ( *((_BYTE *)this + 6497) )
      {
        v105 = *((_QWORD *)this + 5021);
        v106 = 0;
        v34 = v38;
        v107 = *(_DWORD *)(v176 + v105 + 20);
        v35 = (unsigned int)~*(_DWORD *)(v105 + 16);
        if ( ((unsigned int)v35 & v38) != 0 )
          goto LABEL_225;
        if ( v38 )
        {
          v108 = 1;
          do
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v107);
              if ( (*(_DWORD *)(v35 + 80) & 0x10) == 0 )
                v106 |= v108;
            }
            v108 = __ROL4__(v108, 1);
            ++v107;
            v34 = (unsigned int)v34 >> 1;
          }
          while ( (_DWORD)v34 );
          if ( v106 )
          {
LABEL_225:
            v129 = WdLogNewEntry5_WdAssertion(v35, v34);
            *(_QWORD *)(v129 + 24) = 2601LL;
            WdLogEvent5_WdAssertion(v129);
            return 3221225485LL;
          }
        }
      }
      else
      {
        v35 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
        if ( (v35 & 8) == 0 )
        {
          if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v185, v38, v177[0], 0LL) )
          {
            v130 = WdLogNewEntry5_WdAssertion(v35, v34);
            *(_QWORD *)(v130 + 24) = 2608LL;
            WdLogEvent5_WdAssertion(v130);
            return 3221225485LL;
          }
          v38 = a8;
        }
      }
    }
    v45 = (Value >> 29) & 1;
    if ( v45 && (v43 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
    {
      v131 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v131 + 24) = 2628LL;
      WdLogEvent5_WdAssertion(v131);
      return 3221225485LL;
    }
    if ( (Value & 0x100000) != 0 && (!v45 || !a18 || (v37 & 1) == 0) )
    {
      v132 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v132 + 24) = 2640LL;
      WdLogEvent5_WdAssertion(v132);
      return 3221225485LL;
    }
    if ( a16 && (v43 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
    {
      v133 = WdLogNewEntry5_WdAssertion(a16, v34);
      *(_QWORD *)(v133 + 24) = 2660LL;
      WdLogEvent5_WdAssertion(v133);
      return 3221225485LL;
    }
    if ( ((Value >> 26) & 1) != 0 )
    {
      if ( (Value & 8) == 0 )
      {
        v134 = WdLogNewEntry5_WdAssertion(a16, v34);
        *(_QWORD *)(v134 + 24) = 2676LL;
        WdLogEvent5_WdAssertion(v134);
        return 3221225485LL;
      }
    }
    else if ( (Value & 8) == 0 )
    {
LABEL_51:
      v46 = (Value >> 4) & 1;
      if ( ((Value >> 4) & 1) != 0
        && (v43 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
      {
        v136 = WdLogNewEntry5_WdAssertion(v46, v34);
        *(_QWORD *)(v136 + 24) = 2731LL;
        WdLogEvent5_WdAssertion(v136);
        return 3221225485LL;
      }
      v47 = (Value >> 5) & 1;
      if ( ((Value >> 5) & 1) != 0
        && (v43 || v45 || (_DWORD)v46 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
      {
        v137 = WdLogNewEntry5_WdAssertion(v46, v47);
        *(_QWORD *)(v137 + 24) = 2755LL;
        WdLogEvent5_WdAssertion(v137);
        return 3221225485LL;
      }
      if ( (Value & 0x80000000) != 0 )
      {
        if ( v43
          || v44 && (v138 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v138 & 0x10) == 0) && (v138 & 8) == 0
          || (_DWORD)v46
          || (_DWORD)v47
          || (Value & 0x40000000) != 0 )
        {
          v139 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v139 + 24) = 2779LL;
          WdLogEvent5_WdAssertion(v139);
          return 3221225485LL;
        }
      }
      else if ( (Value & 0x40000000) != 0 )
      {
        if ( v43
          || v44 && (v140 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v140 & 0x10) == 0) && (v140 & 8) == 0
          || (_DWORD)v46
          || (_DWORD)v47 )
        {
          v141 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v141 + 24) = 2803LL;
          WdLogEvent5_WdAssertion(v141);
          return 3221225485LL;
        }
        if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 1700LL) & 0x200) == 0 )
          Value |= 1u;
        if ( (Value & 1) != 0 )
          v188 = 1;
        Value |= 0x20000000u;
        v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      }
      if ( ((Value >> 28) & 1) != 0 )
      {
        v110 = *((_QWORD *)this + 3);
        v111 = Value & 0xEFFF7FBF;
        v112 = *(unsigned int *)(v110 + 300);
        if ( (v112 & 8) != 0 || (v112 & 0x10) != 0 )
          v111 = Value & 0xEFFF7FBB;
        if ( v111 )
        {
          v142 = WdLogNewEntry5_WdAssertion(v110, v112);
          *(_QWORD *)(v142 + 24) = 2845LL;
          WdLogEvent5_WdAssertion(v142);
          return 3221225485LL;
        }
        if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v185, v38, v177[0], 0LL) )
        {
          v143 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v143 + 24) = 2855LL;
          WdLogEvent5_WdAssertion(v143);
          return 3221225485LL;
        }
      }
      if ( (Value & 0x400000) != 0 )
      {
        if ( (Value & 0x20000000) == 0 )
        {
          v144 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v144 + 24) = 2871LL;
          WdLogEvent5_WdAssertion(v144);
          return 3221225485LL;
        }
        if ( !a12 )
        {
          v145 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v145 + 24) = 2881LL;
          WdLogEvent5_WdAssertion(v145);
          return 3221225485LL;
        }
      }
      if ( (Value & 0x4000) != 0 )
      {
        if ( (Value & 1) == 0 )
        {
          v146 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v146 + 24) = 2893LL;
          WdLogEvent5_WdAssertion(v146);
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
          v147 = WdLogNewEntry5_WdAssertion(v46, v47);
          *(_QWORD *)(v147 + 24) = Value;
          WdLogEvent5_WdAssertion(v147);
          return 3221225485LL;
        }
      }
      if ( (VIDMM_GLOBAL::_Config & 2) != 0
        && DXGPROCESS::GetCurrent()
        && *((_BYTE *)DXGPROCESS::GetCurrent() + 306)
        && ((Value >> 28) & 1) == 0
        && (Value & 0x40000000) == 0 )
      {
        Value |= 0x8000000u;
        v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      }
      v48 = 0;
      v49 = 0;
      v182 = 0;
      v171 = 0;
      v170 = 0;
      if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 307) & 8) != 0 && !a16 )
      {
        v171 = 1;
        if ( (Value & 0x10) != 0 )
        {
          v49 = 1;
          v170 = 1;
        }
        else if ( (Value & 1) != 0 )
        {
          if ( (Value & 0x8000) != 0 )
          {
            v148 = WdLogNewEntry5_WdAssertion(v51, v50);
            *(_QWORD *)(v148 + 24) = 2952LL;
            WdLogEvent5_WdAssertion(v148);
            return 3221225485LL;
          }
          v48 = 1;
          v182 = 1;
        }
      }
      if ( (unsigned __int8)v48 | (unsigned __int8)v49 )
      {
        v53 = operator new(0x218uLL, 0x61306956u, v52, PagedPool);
        v56 = (struct _D3DDDI_SEGMENTPREFERENCE *)v53;
        if ( !v53 )
          goto LABEL_277;
      }
      else
      {
        v53 = operator new(0x200uLL, 0x31306956u, v52, PagedPool);
        v56 = (struct _D3DDDI_SEGMENTPREFERENCE *)v53;
        if ( !v53 )
          goto LABEL_277;
      }
      v53[44] = 0LL;
      v53[60] = 0LL;
      v57 = v53 + 24;
      *v57 = v57;
      v57[1] = v57;
      if ( v56 )
      {
        v58 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
        if ( v58 )
        {
          *v58 = 0LL;
          v58[1] = 0LL;
          *((_DWORD *)v58 + 6) = 0;
          *((_DWORD *)v58 + 7) = 13;
          *((_DWORD *)v58 + 8) = 32;
          v58[2] = 0LL;
        }
        else
        {
          v58 = 0LL;
        }
        *(_QWORD *)&v56[80].0 = v58;
        if ( !v58 )
        {
          _InterlockedIncrement(&dword_1C0040620);
          v150 = WdLogNewEntry5_WdLowResource(v60, v59);
          *(_QWORD *)(v150 + 24) = 2991LL;
          WdLogEvent5_WdLowResource(v150);
          v151 = -1073741801;
          goto LABEL_298;
        }
        v61 = operator new[](0x20uLL, 0x32346956u, (POOL_TYPE)512);
        *(_QWORD *)&v56[126].0 = v61;
        if ( !v61 )
        {
          _InterlockedIncrement(&dword_1C004067C);
          v152 = WdLogNewEntry5_WdLowResource(v63, v62);
          *(_QWORD *)(v152 + 24) = 3004LL;
          WdLogEvent5_WdLowResource(v152);
          v151 = -1073741801;
          goto LABEL_298;
        }
        memset(v61, 0, 0x20uLL);
        *(_QWORD *)(*(_QWORD *)&v56[126].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
        v65 = *(_QWORD *)(*(_QWORD *)&v56[126].0 + 16LL);
        if ( !v65 )
        {
          _InterlockedIncrement(&dword_1C004056C);
          v153 = WdLogNewEntry5_WdLowResource(0LL, v64);
          *(_QWORD *)(v153 + 24) = 3015LL;
          WdLogEvent5_WdLowResource(v153);
          v151 = -1073741801;
          goto LABEL_298;
        }
        *(_QWORD *)v65 = 0LL;
        *(_DWORD *)(v65 + 8) = 0;
        _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v56[126].0 + 16LL));
        v66 = v172.0;
        if ( (v172.Value & 0x100000) != 0 )
          v67 = 0LL;
        else
          v67 = 0xFFFFFFFFLL;
        v68 = 0x10000;
        v69 = *(_QWORD *)(*(_QWORD *)&v56[126].0 + 16LL);
        *(_DWORD *)(v69 + 4) = v67;
        if ( a11 )
        {
          if ( (*((_DWORD *)a11 + 1) & 0x8000) != 0 )
            v56[19].Value |= 0x800u;
          if ( (*((_DWORD *)a11 + 1) & 0x10000) != 0 )
            v56[20].Value |= 0x400u;
        }
        if ( a18 )
          v70 = (volatile signed __int32 *)*a18;
        else
          v70 = 0LL;
        *(_QWORD *)&v56[124].0 = v70;
        if ( v70 )
        {
          _InterlockedIncrement(v70);
          v66 = v172.0;
        }
        *(_QWORD *)&v56->0 = a4;
        v71 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( a4 > v71 )
        {
          v154 = WdLogNewEntry5_WdAssertion(v69, v67);
          *(_QWORD *)(v154 + 24) = a4;
          WdLogEvent5_WdAssertion(v154);
          v151 = -1073741811;
          goto LABEL_298;
        }
        v72 = (a5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( a5 > v72 )
        {
          v155 = (_QWORD *)WdLogNewEntry5_WdAssertion(v69, v67);
          v156 = a5;
        }
        else
        {
          if ( v71 > 0xFFFF0000 )
          {
            v158 = WdLogNewEntry5_WdAssertion(v69, v67);
            *(_QWORD *)(v158 + 24) = 3087LL;
            WdLogEvent5_WdAssertion(v158);
            v151 = -1073741811;
            goto LABEL_298;
          }
          v73 = (a6 + 4095) & 0xFFFFF000;
          v177[0] = v73;
          if ( a6 <= (unsigned int)v73 )
          {
            if ( v73 + v71 >= v71 && v73 + v72 >= v72 )
            {
              if ( (*(_DWORD *)&v66 & 0x10000000) != 0 )
              {
                v66 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v66 | 8);
                v172.0 = v66;
              }
              *(_QWORD *)&v56[90].0 = a12;
              if ( (*(_DWORD *)&v66 & 0x20000000) == 0 || (*(_BYTE *)&v66 & 0x10) != 0 )
                v68 = 0;
              v74 = v56[20].Value & 0xFFFEFFFF;
              v56[8].Value = v73;
              v56[20].Value = v68 | v74;
              v75 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D **)&v56[126].0;
              *(_QWORD *)&v56[6].0 = v72;
              v76 = v174;
              v77 = v174 & 1;
              v56[40].Value = 0;
              *(_QWORD *)&v56[4].0 = v71;
              *(_QWORD *)&v56[2].0 = v71;
              *v75 = v66;
              v56[17].Value = a7;
              *(_QWORD *)&v56[10].0 = a11;
              v78 = v56[19].Value & 0xFFFFFF3F | (32 * (v76 & 2 | (4 * v77)));
              v56[16].Value = a8;
              v56[19].Value = v78;
              v56[18].0 = a9.0;
              v79 = v56[20].Value & 0xFFFF977F | ((v171 & 0xFB | (4 * v170)) << 11);
              v56[32].Value = 0;
              v56[78].Value = 0;
              v80 = ((v188 & 0xF | (32 * (v182 | (4 * v182)))) << 7) | v79 & 0xFFFFEFFF;
              v56[20].Value = v80;
              v81 = *(_DWORD **)(1552LL * (v78 & 0x3F) + *((_QWORD *)this + 5021) + 440);
              if ( dword_1C004042C
                && (v76 & 2) != 0
                && v81
                && ((*v81 & 0x200) != 0 || dword_1C004042C == 2)
                && ((v159 = *(_QWORD *)&v56[2].0, !(_WORD)v159) || v159 > (unsigned int)dword_1C0040430) )
              {
                v82 = 256;
              }
              else
              {
                v82 = 0;
              }
              v56[20].Value = v82 | v80 & 0xFFFFFEFF;
              v83 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v56);
              if ( v83 >= 0 )
              {
                if ( (*(_WORD *)&v66 & 0x4000) != 0 )
                  v56[20].Value |= 0x20u;
                if ( (*((_BYTE *)v178 + 436) & 3) != 0 )
                {
                  v109 = 1 << (*((_WORD *)v178 + 14) - *((_BYTE *)v178 + 20));
                  v56[16].Value |= v109;
                  if ( (v76 & 2) != 0 && (*(_WORD *)&v66 & 0x8000) == 0 )
                    v56[17].Value |= v109;
                }
                *(_QWORD *)&v56[12].0 = a13;
                v56[94].Value = a14;
                v86 = 0LL;
                v87 = v56[19].Value & 0xF7FFFFFF;
                *(_QWORD *)&v56[30].0 = a16;
                v56[19].Value = v185 & 0x3F | ((a15 & 1) << 28) | (v87 | ((a16 != 0LL) << 27)) & 0xEFFFFFC0;
                *(_QWORD *)&v56[76].0 = v56 + 74;
                *(_QWORD *)&v56[74].0 = v56 + 74;
                *(_QWORD *)&v56[118].0 = -1LL;
                v88 = (v56[19].Value & 0x80) != 0;
                if ( a9.0 )
                {
                  if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
                  {
                    v86 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                                   + 8LL
                                                   * ((*(_BYTE *)&a9.0 & 0x1Fu)
                                                    + *(_DWORD *)(*((_QWORD *)this + 5021) + v176 + 20)
                                                    - 1));
                    v88 = *((_BYTE *)v86 + 80);
                  }
                  else if ( ((a9.Value >> 6) & 0x1F) != 0 )
                  {
                    v86 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                                   + 8LL
                                                   * (((a9.Value >> 6) & 0x1F)
                                                    + *(_DWORD *)(*((_QWORD *)this + 5021) + v176 + 20)
                                                    - 1));
                  }
                }
                v56[19].Value ^= ((unsigned __int16)*(_DWORD *)&v56[19].0 ^ (unsigned __int16)(v88 << 10)) & 0x400;
                if ( VIDMM_GLOBAL::VerifyBudgetGroups(this, v185, a7, v86, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v173) )
                {
                  v56[19].Value ^= (v56[19].Value ^ (v173 << 12)) & 0xFF000;
                  v89 = v56[19].Value;
                  if ( (*(_BYTE *)&v66 & 0x10) != 0 || (*(_BYTE *)&v66 & 0x20) != 0 )
                    *((_BYTE *)&v56[24].0 + 1) = 1;
                  v56[19].Value = v89 ^ ((unsigned __int16)v89 ^ (unsigned __int16)((unsigned __int8)a17 << 8)) & 0x100;
                  v90 = *(VIDMM_PARTITION **)(*((_QWORD *)a2 + 1) + 168LL);
                  *(_QWORD *)&v56[122].0 = VIDMM_PARTITION::GetAdapterInfo(v90, this);
                  VidMmiReferencePartition(v90);
                  LOBYTE(v91) = (v56[20].Value & 0x1000) == 0 && (**(_DWORD **)&v56[126].0 & 0x4000003A) == 0;
                  v92 = (v56[19].Value & 0x100) == 0;
                  v93 = bTracingEnabled == 0;
                  v56[20].Value = v56[20].Value & 0xFFFF7FFF | (((unsigned int)v92 & v91) << 15);
                  if ( !v93 )
                  {
                    v94 = *(_QWORD *)&v56[10].0;
                    v95 = v94 ? *(unsigned int **)(v94 + 24) : 0LL;
                    v180 = *((_QWORD *)a2 + 3);
                    v176 = *((_QWORD *)this + 3);
                    v186 = *(_WORD *)&v56[19].0 & 0x3F;
                    v178 = *(struct DXGADAPTERALLOCATION **)&v56[90].0;
                    CurrentProcessId = PsGetCurrentProcessId();
                    v173 = 0;
                    v92 = 0LL;
                    LOBYTE(v183) = 0;
                    LOBYTE(v96) = 0;
                    v189 = 0;
                    v97 = 0LL;
                    LOBYTE(v98) = 0;
                    LOBYTE(v99) = 0;
                    LOBYTE(v100) = 0;
                    if ( v95 )
                    {
                      v92 = *v95;
                      v96 = v95[1];
                      v97 = v95[2];
                      v98 = v95[3];
                      v99 = v95[4];
                      v100 = v95[5];
                      v173 = v95[6];
                      v183 = v95[7];
                      v101 = v95[8];
                      v102 = v95[9];
                      v189 = v101;
                    }
                    else
                    {
                      LOBYTE(v102) = 0;
                    }
                    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
                        v92,
                        (__int64)&EventCreateAdapterAllocation,
                        v97,
                        (__int64)CurrentProcessId,
                        v180,
                        v176,
                        v19,
                        0,
                        v177[0],
                        v168,
                        a7,
                        *(_BYTE *)&a9.0,
                        v169,
                        a8,
                        a14,
                        (char)v56,
                        v94,
                        0,
                        v92,
                        v96,
                        v97,
                        v98,
                        v99,
                        v100,
                        v173,
                        v183,
                        v189,
                        v102,
                        0,
                        (char)v178,
                        v186,
                        a17);
                  }
                  ++*((_DWORD *)this + 1898);
                  *((_QWORD *)this + 950) += v71;
                  *((_QWORD *)this + 5017) += v71;
                  if ( g_IsInternalReleaseOrDbg )
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v92) + 24) = v56;
                  *a19 = v56;
                  return 0LL;
                }
                return 3221225485LL;
              }
              v151 = v83;
LABEL_298:
              if ( (v56[23].Value & 1) != 0 )
                VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v56, 1);
              v160 = *(_QWORD *)&v56[126].0;
              if ( v160 )
              {
                v161 = *(int **)(v160 + 16);
                if ( v161 )
                  VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v161, v84, v85);
                operator delete(*(void **)&v56[126].0);
              }
              v162 = *(volatile signed __int32 **)&v56[124].0;
              if ( v162 )
              {
                v163 = _InterlockedDecrement(v162);
                if ( v163 )
                {
                  if ( v163 < 0 )
                  {
                    v164 = *(int **)&v56[124].0;
                    v165 = *v164;
                    v166 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v162, v84, v85);
                    v166[3] = 270LL;
                    v166[4] = 66LL;
                    v166[5] = v164;
                    v166[6] = v165;
                    v166[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v166);
                  }
                }
                else
                {
                  VIDMM_GLOBAL::DestroyCrossAdapterAllocation(
                    (VIDMM_GLOBAL *)v162,
                    *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v56[124].0);
                  *a18 = 0LL;
                }
              }
              v167 = *(DXGFASTMUTEX **)&v56[80].0;
              if ( v167 )
                DXGFASTMUTEX::`scalar deleting destructor'(v167);
              _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v56);
              return v151;
            }
            v155 = (_QWORD *)WdLogNewEntry5_WdAssertion(v69, v73);
            v157 = v177[0];
            v155[3] = v71;
            v155[4] = v72;
            v155[5] = v71;
            v155[6] = v157;
LABEL_289:
            WdLogEvent5_WdAssertion(v155);
            v151 = -1073741811;
            goto LABEL_298;
          }
          v155 = (_QWORD *)WdLogNewEntry5_WdAssertion(v69, v73);
          v156 = a6;
        }
        v155[3] = v156;
        goto LABEL_289;
      }
LABEL_277:
      _InterlockedIncrement(&dword_1C0040574);
      v149 = WdLogNewEntry5_WdLowResource(v55, v54);
      *(_QWORD *)(v149 + 24) = 2979LL;
      WdLogEvent5_WdLowResource(v149);
      return 3221225495LL;
    }
    if ( (Value & 1) != 0 && ((Value >> 26) & 1) == 0 && !a16
      || v43
      || v45
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x80000000) != 0
      || (Value & 0x40000000) != 0 )
    {
      v135 = WdLogNewEntry5_WdAssertion(a16, v34);
      *(_QWORD *)(v135 + 24) = 2709LL;
      WdLogEvent5_WdAssertion(v135);
      return 3221225485LL;
    }
    goto LABEL_51;
  }
  while ( 1 )
  {
    if ( (v34 & 1) != 0 )
    {
      v35 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v41);
      if ( (*(_DWORD *)(v35 + 80) & 0x20) == 0x20 )
        break;
    }
    ++v41;
    v34 = (unsigned int)v34 >> 1;
    if ( !(_DWORD)v34 )
      goto LABEL_44;
  }
  v125 = WdLogNewEntry5_WdAssertion(v35, v34);
  *(_QWORD *)(v125 + 24) = 2537LL;
  WdLogEvent5_WdAssertion(v125);
  return 3221225485LL;
}

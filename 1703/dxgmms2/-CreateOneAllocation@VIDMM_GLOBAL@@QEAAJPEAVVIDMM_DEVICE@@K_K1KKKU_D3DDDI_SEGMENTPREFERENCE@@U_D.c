/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0053838 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0060FE0 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062978 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0002624 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001447C (Template_pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C001E340 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001E3AC (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055FAC (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C005BD30 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C005BF10 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C005C17C (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00918F4 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
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
        struct _VIDMM_GLOBAL_ALLOC **a18)
{
  char v18; // bp
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v20; // ebx
  unsigned int v21; // r14d
  struct DXGPROCESS *Current; // rax
  __int64 v25; // rdx
  void *v26; // r12
  __int64 Value; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 CurrentProcess; // rax
  unsigned int i; // r8d
  __int64 v33; // rcx
  bool v34; // zf
  unsigned __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // edi
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  unsigned int v44; // r8d
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // r8d
  __int64 v48; // rdi
  UINT v49; // edi
  UINT v50; // r14d
  int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned __int64 *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 *v57; // r14
  _QWORD *v58; // rax
  __int64 v59; // rcx
  PVOID v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v63; // ebx
  int v64; // edx
  __int64 v65; // rcx
  struct DXGADAPTERALLOCATION *v66; // rdx
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rdi
  __int64 v70; // r12
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D *v71; // rax
  char v72; // di
  int v73; // ecx
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // rcx
  _DWORD *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  VIDMM_GLOBAL *v81; // rcx
  __int64 v82; // r8
  int v83; // r12d
  unsigned int v84; // r10d
  unsigned int v85; // edi
  void *v86; // rax
  struct VIDMM_SEGMENT *v87; // rcx
  unsigned __int8 v88; // dl
  unsigned int v89; // r8d
  __int64 v90; // rcx
  char v91; // bl
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  unsigned int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 v101; // rcx
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  int v125; // r9d
  __int64 v126; // rax
  int v127; // r9d
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
  _QWORD *v138; // rax
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // rax
  unsigned int *v141; // r12
  unsigned int v142; // edx
  __int64 v143; // r8
  unsigned int v144; // r9d
  unsigned int v145; // r10d
  unsigned int v146; // r11d
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v147; // eax
  unsigned int v148; // r12d
  unsigned __int64 v149; // rax
  int *v150; // rcx
  DXGFASTMUTEX *v151; // rcx
  __int64 v152; // rax
  int v153; // [rsp+48h] [rbp-140h]
  int v154; // [rsp+60h] [rbp-128h]
  unsigned int v155; // [rsp+100h] [rbp-88h] BYREF
  unsigned int v156; // [rsp+104h] [rbp-84h] BYREF
  __int64 v157; // [rsp+108h] [rbp-80h] BYREF
  int v158; // [rsp+110h] [rbp-78h]
  __int64 v159; // [rsp+118h] [rbp-70h]
  __int64 v160; // [rsp+120h] [rbp-68h]
  unsigned __int64 v161; // [rsp+128h] [rbp-60h]
  HANDLE CurrentProcessId; // [rsp+130h] [rbp-58h]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v163; // [rsp+190h] [rbp+8h] BYREF
  struct VIDMM_DEVICE *v164; // [rsp+198h] [rbp+10h]
  unsigned int v165; // [rsp+1A0h] [rbp+18h]
  unsigned __int64 v166; // [rsp+1A8h] [rbp+20h]

  v166 = a4;
  v165 = a3;
  v164 = a2;
  v18 = (char)a10.0;
  v20 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  v21 = a3;
  v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  Current = DXGPROCESS::GetCurrent();
  v26 = a16;
  if ( (*((_BYTE *)Current + 275) & 4) != 0 && !a16 && (v18 & 1) != 0 )
  {
    v20 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v20 & 0xFFFF7FFF);
    v163.0 = v20;
  }
  if ( *((_DWORD *)this + 1604) == 1 )
  {
    v21 = 0;
    v165 = 0;
  }
  Value = a9.Value;
  v28 = 472LL * v21;
  v29 = v28 + *((_QWORD *)this + 5021);
  v159 = v28;
  v160 = v29;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a2;
    v100 = (_QWORD *)WdLogNewEntry5_WdTrace(v99);
    v30 = a7;
    v100[4] = a6;
    v101 = a8;
    v100[7] = a8;
    v100[3] = a4;
    v100[5] = 0LL;
    v100[6] = v30;
    v102 = (_QWORD *)WdLogNewEntry5_WdTrace(v101);
    v102[4] = (unsigned int)v20;
    v28 = (__int64)a11;
    v102[5] = a11;
    v102[3] = Value;
  }
  else
  {
    LODWORD(v30) = a7;
  }
  *a18 = 0LL;
  if ( *((_DWORD *)this + 8) < 0x5023u && (*(_DWORD *)&v20 & 0x40000) != 0 )
  {
    v103 = WdLogNewEntry5_WdAssertion(v28, v25);
    *(_QWORD *)(v103 + 24) = 2042LL;
    WdLogEvent5_WdAssertion(v103);
    return 3221225485LL;
  }
  *(_BYTE *)&a10.0 = (*(_BYTE *)&v20 & 1) != 0 && (*(_DWORD *)&v20 & 0x40000) == 0;
  if ( *((_BYTE *)this + 40096)
    || (CurrentProcess = PsGetCurrentProcess(v28), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    if ( (*(_DWORD *)&v20 & 0x20000000) == 0
      && (*(_DWORD *)&v20 & 0x40000000) == 0
      && *(int *)&v20 >= 0
      && (*(_DWORD *)&v20 & 0x10000000) == 0
      && (*(_BYTE *)&v20 & 8) == 0
      && (*(_DWORD *)&v20 & 0x400000) == 0
      && !v26 )
    {
      v20 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v20 & 0xFFFBFFFF);
      *(_BYTE *)&a10.0 = 1;
      v163.0 = v20;
    }
  }
  for ( i = 0; i < 0x1E; i += 6 )
  {
    v33 = i;
    if ( (((unsigned int)Value >> i) & 0x1F) != 0 )
    {
      v33 = (((unsigned int)Value >> i) & 0x1F) - 1;
      v93 = ~(_DWORD)v30;
      v25 = (unsigned __int8)((((unsigned int)Value >> i) & 0x1F) - 1);
      if ( _bittest(&v93, (unsigned __int8)((((unsigned int)Value >> i) & 0x1F) - 1)) )
      {
        v104 = WdLogNewEntry5_WdAssertion(
                 (((unsigned int)Value >> i) & 0x1F) - 1,
                 (unsigned __int8)((((unsigned int)Value >> i) & 0x1F) - 1));
        *(_QWORD *)(v104 + 24) = 2091LL;
        WdLogEvent5_WdAssertion(v104);
        return 3221225485LL;
      }
    }
  }
  if ( dword_1C003C3F0 && (*(_BYTE *)&v20 & 1) == 0 )
  {
    if ( (Value & 0x1F) != 0 )
    {
      v33 = (unsigned int)(Value & 0x1F) - 1;
      LODWORD(v30) = 1 << ((Value & 0x1F) - 1);
    }
    else
    {
      if ( VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v21, v30, 0x1001u, &v156) )
        goto LABEL_25;
      LODWORD(v30) = v156;
    }
    a7 = v30;
  }
LABEL_25:
  if ( !a4 )
  {
    v105 = WdLogNewEntry5_WdAssertion(v33, v25);
    *(_QWORD *)(v105 + 24) = 2131LL;
    WdLogEvent5_WdAssertion(v105);
    return 3221225485LL;
  }
  if ( ((*(_DWORD *)&v20 | (*(unsigned int *)&v20 >> 1)) & 0x1000) != 0 )
  {
    v106 = WdLogNewEntry5_WdAssertion(v33, v25);
    *(_QWORD *)(v106 + 24) = 2139LL;
    WdLogEvent5_WdAssertion(v106);
    return 3221225485LL;
  }
  v34 = v26 == 0LL;
  v155 = 0;
  v35 = a5;
  LODWORD(v157) = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          this,
          v21,
          v30,
          &v163,
          a4,
          a5,
          !v34,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v157) )
  {
    v107 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v107 + 24) = 2150LL;
    WdLogEvent5_WdAssertion(v107);
    return 3221225485LL;
  }
  v38 = v163.Value;
  v158 = 1;
  if ( (v163.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v163.0 & 1) == 0 )
    {
      v108 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v108 + 24) = 2165LL;
      WdLogEvent5_WdAssertion(v108);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v163.0 & 2) != 0 || (*(_BYTE *)&v163.0 & 0x20) != 0 || (*(_BYTE *)&v163.0 & 0x10) != 0 )
    {
      v109 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v109 + 24) = 2177LL;
      WdLogEvent5_WdAssertion(v109);
      return 3221225485LL;
    }
  }
  if ( (v163.Value & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)&v163.0 & 2) != 0
      || (*(_BYTE *)&v163.0 & 4) != 0 && (v37 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL), (v37 & 8) == 0)
      || (v163.Value & 0x100000) != 0
      || (v163.Value & 0x80000) != 0
      || (*(_BYTE *)&v163.0 & 8) != 0
      || (*(_BYTE *)&v163.0 & 0x10) != 0
      || (*(_BYTE *)&v163.0 & 0x20) != 0 )
    {
      v110 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v110 + 24) = 2196LL;
      WdLogEvent5_WdAssertion(v110);
      return 3221225485LL;
    }
  }
  if ( (v157 & 4) == 0 )
    v35 = 0LL;
  v39 = a8;
  if ( a8 )
  {
    v40 = *((_QWORD *)this + 5021);
    LODWORD(v161) = 32;
    v41 = 0;
    v42 = a8;
    v43 = *(_DWORD *)(v40 + v159 + 20);
    if ( (~*(_DWORD *)(v40 + 16) & a8) != 0 )
      goto LABEL_197;
    LODWORD(v36) = 1;
    do
    {
      if ( (v42 & 1) != 0 )
      {
        v39 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v43);
        if ( (*(_DWORD *)(v39 + 80) & 1) != 1 )
          v41 |= v36;
      }
      v36 = (unsigned int)__ROL4__(v36, 1);
      ++v43;
      v42 >>= 1;
    }
    while ( v42 );
    if ( v41 )
    {
LABEL_197:
      v113 = WdLogNewEntry5_WdAssertion(v39, v36);
      *(_QWORD *)(v113 + 24) = 2228LL;
      WdLogEvent5_WdAssertion(v113);
      return 3221225485LL;
    }
    v39 = a8;
    v44 = *(_DWORD *)(v40 + v159 + 20);
    v45 = a8;
    if ( (~*(_DWORD *)(v40 + v159 + 16) & a8) == 0 )
    {
      do
      {
        if ( (v45 & 1) != 0 )
        {
          v46 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v44);
          if ( (*(_DWORD *)(v46 + 80) & 0x20) == 0x20 )
          {
            v111 = WdLogNewEntry5_WdAssertion(v46, v45);
            *(_QWORD *)(v111 + 24) = 2243LL;
            WdLogEvent5_WdAssertion(v111);
            return 3221225485LL;
          }
        }
        ++v44;
        v45 = (unsigned int)v45 >> 1;
      }
      while ( (_DWORD)v45 );
      v39 = a8;
    }
    v36 = 0LL;
    v47 = *(_DWORD *)(v160 + 24);
    if ( v47 )
    {
      do
      {
        v48 = (unsigned int)(*(_DWORD *)(v40 + v159 + 20) + v36);
        if ( _bittest((const int *)&v39, v36) )
        {
          v94 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v48);
          if ( v166 > *(_QWORD *)(v94 + 104) )
          {
            v112 = WdLogNewEntry5_WdWarning(v94, v36);
            *(_QWORD *)(v112 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v48) + 104LL);
            *(_QWORD *)(v112 + 32) = v166;
            WdLogEvent5_WdWarning(v112);
            return 3223191808LL;
          }
          v39 = a8;
        }
        v36 = (unsigned int)(v36 + 1);
      }
      while ( (unsigned int)v36 < v47 );
    }
  }
  v49 = (v163.Value >> 1) & 1;
  if ( v49 )
  {
    if ( (*(_BYTE *)&v163.0 & 1) == 0 )
    {
      v114 = WdLogNewEntry5_WdAssertion(v39, v36);
      *(_QWORD *)(v114 + 24) = 2280LL;
      WdLogEvent5_WdAssertion(v114);
      return 3221225485LL;
    }
    if ( (v163.Value & 0x20000000) != 0 || (v163.Value & 0x80000000) != 0 || (v163.Value & 0x40000000) != 0 )
    {
      v115 = WdLogNewEntry5_WdAssertion(v39, v36);
      *(_QWORD *)(v115 + 24) = 2293LL;
      WdLogEvent5_WdAssertion(v115);
      return 3221225485LL;
    }
  }
  v50 = (v163.Value >> 2) & 1;
  if ( v50 && (v163.Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)this + 6497) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v165, v39, 16, 0LL) )
      {
        v116 = WdLogNewEntry5_WdAssertion(v39, v36);
        *(_QWORD *)(v116 + 24) = 2326LL;
        WdLogEvent5_WdAssertion(v116);
        return 3221225485LL;
      }
    }
    else
    {
      v39 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
      if ( (v39 & 8) == 0 && !VIDMM_GLOBAL::VerifySegmentSet(this, v165, a8, 1, 0LL) )
      {
        v117 = WdLogNewEntry5_WdAssertion(v39, v36);
        *(_QWORD *)(v117 + 24) = 2333LL;
        WdLogEvent5_WdAssertion(v117);
        return 3221225485LL;
      }
    }
  }
  v51 = (v38 >> 29) & 1;
  if ( v51 && (v49 || (v38 & 8) != 0 || (v38 & 0x10) != 0 || (v38 & 0x20) != 0 || (v38 & 0x40000000) != 0) )
  {
    v118 = WdLogNewEntry5_WdAssertion(v39, v36);
    *(_QWORD *)(v118 + 24) = 2354LL;
    WdLogEvent5_WdAssertion(v118);
    return 3221225485LL;
  }
  if ( (v38 & 0x100000) != 0 && !v51 )
  {
    v119 = WdLogNewEntry5_WdAssertion(v39, v36);
    *(_QWORD *)(v119 + 24) = 2366LL;
    WdLogEvent5_WdAssertion(v119);
    return 3221225485LL;
  }
  if ( a16 && (v49 || (v38 & 0x100) != 0 || (v38 & 0x200) != 0 || (v38 & 0x40000000) != 0) )
  {
    v120 = WdLogNewEntry5_WdAssertion(a16, v36);
    *(_QWORD *)(v120 + 24) = 2386LL;
    WdLogEvent5_WdAssertion(v120);
    return 3221225485LL;
  }
  if ( ((v38 >> 26) & 1) != 0 )
  {
    if ( (v38 & 8) == 0 )
    {
      v121 = WdLogNewEntry5_WdAssertion(a16, v36);
      *(_QWORD *)(v121 + 24) = 2402LL;
      WdLogEvent5_WdAssertion(v121);
      return 3221225485LL;
    }
  }
  else if ( (v38 & 8) == 0 )
  {
    goto LABEL_55;
  }
  if ( (v38 & 1) != 0 && ((v38 >> 26) & 1) == 0 && !a16
    || v49
    || v51
    || (v38 & 0x10) != 0
    || (v38 & 0x20) != 0
    || (v38 & 0x80000000) != 0
    || (v38 & 0x40000000) != 0 )
  {
    v122 = WdLogNewEntry5_WdAssertion(a16, v36);
    *(_QWORD *)(v122 + 24) = 2435LL;
    WdLogEvent5_WdAssertion(v122);
    return 3221225485LL;
  }
LABEL_55:
  v52 = (v38 >> 4) & 1;
  if ( ((v38 >> 4) & 1) != 0 && (v49 || v51 || (v38 & 0x20) != 0 || (v38 & 0x80000000) != 0 || (v38 & 0x40000000) != 0) )
  {
    v123 = WdLogNewEntry5_WdAssertion(v52, v36);
    *(_QWORD *)(v123 + 24) = 2459LL;
    WdLogEvent5_WdAssertion(v123);
    return 3221225485LL;
  }
  v53 = (v38 >> 5) & 1;
  if ( ((v38 >> 5) & 1) != 0 && (v49 || v51 || (_DWORD)v52 || (v38 & 0x80000000) != 0 || (v38 & 0x40000000) != 0) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v52, v53);
    *(_QWORD *)(v124 + 24) = 2483LL;
    WdLogEvent5_WdAssertion(v124);
    return 3221225485LL;
  }
  v54 = v38 >> 31;
  if ( (v38 & 0x80000000) != 0 )
  {
    if ( v49
      || v50 && (v125 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v125 & 0x10) == 0) && (v125 & 8) == 0
      || (_DWORD)v52
      || (_DWORD)v53
      || (v38 & 0x40000000) != 0 )
    {
      v126 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v126 + 24) = 2507LL;
      WdLogEvent5_WdAssertion(v126);
      return 3221225485LL;
    }
  }
  else if ( (v38 & 0x40000000) != 0 )
  {
    if ( v49
      || v50 && (v127 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v127 & 0x10) == 0) && (v127 & 8) == 0
      || (_DWORD)v52
      || (_DWORD)v53 )
    {
      v128 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v128 + 24) = 2531LL;
      WdLogEvent5_WdAssertion(v128);
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 1676LL) & 0x200) == 0 )
      v38 |= 1u;
    if ( (v38 & 1) != 0 )
      *(_BYTE *)&a10.0 = 1;
    v38 |= 0x20000000u;
    v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v38;
  }
  if ( ((v38 >> 28) & 1) != 0 )
  {
    v96 = *((_QWORD *)this + 3);
    v97 = v38 & 0xEFFF7FBF;
    v98 = *(unsigned int *)(v96 + 300);
    if ( (v98 & 8) != 0 || (v98 & 0x10) != 0 )
      v97 = v38 & 0xEFFF7FBB;
    if ( v97 )
    {
      v129 = WdLogNewEntry5_WdAssertion(v96, v98);
      *(_QWORD *)(v129 + 24) = 2573LL;
      WdLogEvent5_WdAssertion(v129);
      return 3221225485LL;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v165, a8, 1, 0LL) )
    {
      v130 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v130 + 24) = 2583LL;
      WdLogEvent5_WdAssertion(v130);
      return 3221225485LL;
    }
  }
  if ( (v38 & 0x400000) != 0 )
  {
    if ( (v38 & 0x20000000) == 0 )
    {
      v131 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v131 + 24) = 2599LL;
      WdLogEvent5_WdAssertion(v131);
      return 3221225485LL;
    }
    if ( !a12 )
    {
      v132 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v132 + 24) = 2609LL;
      WdLogEvent5_WdAssertion(v132);
      return 3221225485LL;
    }
  }
  if ( (v38 & 0x4000) != 0 )
  {
    if ( (v38 & 1) == 0 )
    {
      v133 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v133 + 24) = 2621LL;
      WdLogEvent5_WdAssertion(v133);
      return 3221225485LL;
    }
    if ( (v38 & 2) != 0
      || (v38 & 8) != 0
      || (v38 & 0x10) != 0
      || (v38 & 0x20) != 0
      || (v38 & 0x40) != 0
      || (v38 & 0x100) != 0
      || (v38 & 0x200) != 0
      || (v38 & 0x40000) != 0 )
    {
      v134 = WdLogNewEntry5_WdAssertion(v52, v53);
      *(_QWORD *)(v134 + 24) = v38;
      WdLogEvent5_WdAssertion(v134);
      return 3221225485LL;
    }
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0
    && DXGPROCESS::GetCurrent()
    && *((_BYTE *)DXGPROCESS::GetCurrent() + 274)
    && ((v38 >> 28) & 1) == 0
    && (v38 & 0x40000000) == 0 )
  {
    v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v38 | 0x8000000);
  }
  v55 = (unsigned __int64 *)operator new(0x210uLL, 0x31306956u, v54, PagedPool);
  v57 = v55;
  if ( !v55 )
  {
    _InterlockedIncrement(&dword_1C003C564);
    v152 = WdLogNewEntry5_WdLowResource(v56);
    *(_QWORD *)(v152 + 24) = 2665LL;
    WdLogEvent5_WdLowResource(v152);
    return 3221225495LL;
  }
  v55[44] = 0LL;
  v55[64] = 0LL;
  v55[25] = (unsigned __int64)(v55 + 24);
  v55[24] = (unsigned __int64)(v55 + 24);
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
  v57[40] = (unsigned __int64)v58;
  if ( !v58 )
  {
    _InterlockedIncrement(&dword_1C003C610);
    v135 = WdLogNewEntry5_WdLowResource(v59);
    *(_QWORD *)(v135 + 24) = 2677LL;
    WdLogEvent5_WdLowResource(v135);
    v83 = -1073741801;
LABEL_281:
    if ( (*((_DWORD *)v57 + 23) & 1) != 0 )
    {
      LOBYTE(v82) = 1;
      VIDMM_GLOBAL::UncommitGlobalBackingStore(v81, (struct _VIDMM_GLOBAL_ALLOC *)v57, v82);
    }
    v149 = v57[65];
    if ( v149 )
    {
      v150 = *(int **)(v149 + 16);
      if ( v150 )
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v150, v80, v82);
      operator delete((void *)v57[65]);
    }
    v151 = (DXGFASTMUTEX *)v57[40];
    if ( v151 )
      DXGFASTMUTEX::`scalar deleting destructor'(v151);
    operator delete(v57);
    return (unsigned int)v83;
  }
  v60 = operator new[](0x20uLL, 0x32346956u, (POOL_TYPE)512);
  v57[65] = (unsigned __int64)v60;
  if ( !v60 )
  {
    _InterlockedIncrement(&dword_1C003C66C);
    v136 = WdLogNewEntry5_WdLowResource(v61);
    *(_QWORD *)(v136 + 24) = 2690LL;
    WdLogEvent5_WdLowResource(v136);
    v83 = -1073741801;
    goto LABEL_281;
  }
  memset(v60, 0, 0x20uLL);
  *(_QWORD *)(v57[65] + 16) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
  v62 = *(_QWORD *)(v57[65] + 16);
  if ( !v62 )
  {
    _InterlockedIncrement(&dword_1C003C55C);
    v137 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v137 + 24) = 2701LL;
    WdLogEvent5_WdLowResource(v137);
    v83 = -1073741801;
    goto LABEL_281;
  }
  *(_QWORD *)v62 = 0LL;
  *(_DWORD *)(v62 + 8) = 0;
  _InterlockedIncrement(*(volatile signed __int32 **)(v57[65] + 16));
  v63 = v163.0;
  if ( (v163.Value & 0x100000) != 0 )
    v64 = 0;
  else
    v64 = -1;
  v65 = *(_QWORD *)(v57[65] + 16);
  *(_DWORD *)(v65 + 4) = v64;
  v66 = a11;
  if ( a11 )
  {
    if ( (*((_DWORD *)a11 + 1) & 0x8000) != 0 )
      *((_DWORD *)v57 + 19) |= 0x800u;
    if ( (*((_DWORD *)v66 + 1) & 0x10000) != 0 )
      *((_DWORD *)v57 + 20) |= 0x800u;
  }
  v67 = v166;
  *v57 = v166;
  v68 = (v67 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v67 > v68 )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdAssertion(v65, v66);
    v138[3] = v67;
LABEL_280:
    WdLogEvent5_WdAssertion(v138);
    v83 = -1073741811;
    goto LABEL_281;
  }
  v69 = (v35 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v35 > v69 )
    goto LABEL_254;
  if ( v68 > 0xFFFF0000 )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdAssertion(v65, v66);
    v138[3] = 2763LL;
    goto LABEL_280;
  }
  v35 = a6;
  v65 = (a6 + 4095) & 0xFFFFF000;
  v158 = v65;
  if ( a6 > (unsigned int)v65 )
  {
LABEL_254:
    v138 = (_QWORD *)WdLogNewEntry5_WdAssertion(v65, v66);
    v138[3] = v35;
    goto LABEL_280;
  }
  v70 = (unsigned int)v65;
  if ( v68 + v65 < v68 || v69 + v65 < v69 )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdAssertion(v65, v66);
    v138[3] = v68;
    v138[4] = v69;
    v138[5] = v68;
    v138[6] = v70;
    goto LABEL_280;
  }
  if ( (*(_DWORD *)&v63 & 0x10000000) != 0 )
    v63 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&v63 | 8);
  v57[45] = (unsigned __int64)a12;
  v71 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D *)v57[65];
  *((_DWORD *)v57 + 8) = v65;
  v57[3] = v69;
  v72 = v157;
  v73 = v157 & 1;
  *((_DWORD *)v57 + 40) = 0;
  v57[2] = v68;
  v57[1] = v68;
  *v71 = v63;
  *((_DWORD *)v57 + 17) = a7;
  *((_DWORD *)v57 + 16) = a8;
  *((_DWORD *)v57 + 18) = Value;
  *((_DWORD *)v57 + 32) = 0;
  v74 = *((_DWORD *)v57 + 19) & 0xFFFFFF3F | (32 * (v72 & 2 | (4 * v73)));
  *((_DWORD *)v57 + 78) = 0;
  LODWORD(v71) = *((_DWORD *)v57 + 20);
  *((_DWORD *)v57 + 19) = v74;
  v75 = (unsigned int)v71 & 0xFFFFFF7F | (LOBYTE(a10.Value) << 7);
  v57[5] = (unsigned __int64)v66;
  *((_DWORD *)v57 + 20) = v75;
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 275) & 4) != 0 && !a16 )
  {
    *((_DWORD *)v57 + 20) |= 0x1000u;
    if ( (*(_BYTE *)&v63 & 1) != 0 )
    {
      if ( (*(_DWORD *)v57[65] & 0x8000) != 0 )
      {
        v138 = (_QWORD *)WdLogNewEntry5_WdAssertion(v77, v76);
        v138[3] = 2847LL;
        goto LABEL_280;
      }
      *((_DWORD *)v57 + 20) |= 0x2000u;
    }
  }
  v78 = *(_DWORD **)(472LL * (*((_DWORD *)v57 + 19) & 0x3F) + *((_QWORD *)this + 5021) + 440);
  if ( dword_1C003C3F4
    && (v72 & 2) != 0
    && v78
    && ((*v78 & 0x200) != 0 || dword_1C003C3F4 == 2)
    && ((v139 = v57[1], !(_WORD)v139) || v139 > (unsigned int)dword_1C003C3F8) )
  {
    v79 = 256LL;
  }
  else
  {
    v79 = 0LL;
  }
  *((_DWORD *)v57 + 20) = v79 | v57[10] & 0xFFFFFEFF;
  v83 = VIDMM_GLOBAL::CommitGlobalBackingStore((VIDMM_GLOBAL *)v79, (struct _VIDMM_GLOBAL_ALLOC *)v57);
  if ( v83 < 0 )
    goto LABEL_281;
  if ( (*(_WORD *)&v63 & 0x4000) != 0 )
    *((_DWORD *)v57 + 20) |= 0x20u;
  if ( (*(_BYTE *)(v160 + 436) & 3) != 0 )
  {
    v95 = 1 << (*(_WORD *)(v160 + 28) - *(_BYTE *)(v160 + 20));
    *((_DWORD *)v57 + 16) |= v95;
    if ( (v72 & 2) != 0 && (*(_WORD *)&v63 & 0x8000) == 0 )
      *((_DWORD *)v57 + 17) |= v95;
  }
  v84 = v165;
  v85 = a14;
  v57[6] = (unsigned __int64)a13;
  v86 = a16;
  v57[15] = (unsigned __int64)a16;
  v34 = v86 == 0LL;
  LODWORD(v86) = *((_DWORD *)v57 + 19);
  *((_DWORD *)v57 + 102) = v85;
  *((_DWORD *)v57 + 19) = v84 & 0x3F | ((a15 & 1) << 28) | (unsigned int)v86 & 0xE7FFFFC0 | (!v34 << 27) & 0xEFFFFFC0;
  v87 = 0LL;
  v57[38] = (unsigned __int64)(v57 + 37);
  v57[37] = (unsigned __int64)(v57 + 37);
  v57[63] = -1LL;
  v88 = (*((_DWORD *)v57 + 19) & 0x80) != 0;
  if ( (_DWORD)Value )
  {
    if ( (Value & 0x1F) != 0 )
    {
      v87 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                     + 8LL
                                     * ((unsigned int)(Value & 0x1F)
                                      + *(_DWORD *)(*((_QWORD *)this + 5021) + v159 + 20)
                                      - 1));
      v88 = *((_BYTE *)v87 + 80) & 1;
    }
    else if ( (((unsigned int)Value >> 6) & 0x1F) != 0 )
    {
      v87 = *(struct VIDMM_SEGMENT **)(*((_QWORD *)this + 464)
                                     + 8LL
                                     * ((((unsigned int)Value >> 6) & 0x1F)
                                      + *(_DWORD *)(*((_QWORD *)this + 5021) + v159 + 20)
                                      - 1));
    }
  }
  v89 = a7;
  *((_DWORD *)v57 + 19) = *((_DWORD *)v57 + 19) & 0xFFFFFBFF | (v88 << 10);
  if ( !VIDMM_GLOBAL::VerifyBudgetGroups(this, v84, v89, v87, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v155) )
    return 3221225485LL;
  *((_DWORD *)v57 + 19) ^= (*((_DWORD *)v57 + 19) ^ (v155 << 12)) & 0xFF000;
  v90 = *((unsigned int *)v57 + 19);
  if ( (*(_BYTE *)&v63 & 0x10) != 0 || (*(_BYTE *)&v63 & 0x20) != 0 )
    *((_BYTE *)v57 + 97) = 1;
  v91 = a17;
  v34 = bTracingEnabled == 0;
  *((_DWORD *)v57 + 19) = v90 ^ ((unsigned __int16)v90 ^ (unsigned __int16)((unsigned __int8)a17 << 8)) & 0x100;
  if ( !v34 )
  {
    v140 = v57[5];
    v161 = v140;
    v141 = v140 ? *(unsigned int **)(v140 + 24) : 0LL;
    v160 = v164 ? *((_QWORD *)v164 + 3) : 0LL;
    v157 = *((_QWORD *)this + 3);
    LOWORD(v165) = *((_WORD *)v57 + 38) & 0x3F;
    v159 = v57[45];
    CurrentProcessId = PsGetCurrentProcessId();
    v155 = 0;
    v90 = 0LL;
    v163.0 = 0;
    LOBYTE(v142) = 0;
    a10.0 = 0;
    v143 = 0LL;
    LOBYTE(v144) = 0;
    LOBYTE(v145) = 0;
    LOBYTE(v146) = 0;
    if ( v141 )
    {
      v90 = *v141;
      v142 = v141[1];
      v143 = v141[2];
      v144 = v141[3];
      v145 = v141[4];
      v146 = v141[5];
      v155 = v141[6];
      v163.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v141[7];
      v147 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v141[8];
      v148 = v141[9];
      a10.0 = v147;
    }
    else
    {
      LOBYTE(v148) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pppqxqqqqqqqpppqqqqqqqqqqtpht(
        v90,
        &EventCreateAdapterAllocation,
        v143,
        (__int64)CurrentProcessId,
        v160,
        v157,
        v18,
        v68,
        v158,
        v153,
        a7,
        Value,
        v154,
        a8,
        v85,
        (char)v57,
        v161,
        0,
        v90,
        v142,
        v143,
        v144,
        v145,
        v146,
        v155,
        *(_BYTE *)&v163.0,
        *(_BYTE *)&a10.0,
        v148,
        0,
        v159,
        v165,
        v91);
  }
  ++*((_DWORD *)this + 1898);
  *((_QWORD *)this + 950) += v68;
  *((_QWORD *)this + 5017) += v68;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v90) + 24) = v57;
  *a18 = (struct _VIDMM_GLOBAL_ALLOC *)v57;
  return 0LL;
}

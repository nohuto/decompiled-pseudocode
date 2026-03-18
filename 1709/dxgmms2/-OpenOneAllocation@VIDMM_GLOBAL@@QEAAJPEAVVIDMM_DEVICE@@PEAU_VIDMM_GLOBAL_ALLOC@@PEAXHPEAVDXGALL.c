/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00571E8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0058318 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C0064298 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016144 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C00202E4 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0pppppppppppp @ 0x1C002171C (McTemplateK0pppppppppppp.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005ED4C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005EEF8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00660F4 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066190 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0074388 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0098CD4 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C009CBE0 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS **a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  __int64 v8; // rbp
  struct VIDMM_PROCESS **v11; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  VIDMM_ALLOC *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  VIDMM_ALLOC *v18; // rdi
  VIDMM_ALLOC *v19; // rax
  struct VIDMM_PROCESS *v20; // rbx
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  struct VIDMM_PROCESS *v26; // rcx
  struct VIDMM_PROCESS ***v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r13
  struct _VIDMM_LOCAL_ALLOC *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _VIDMM_LOCAL_ALLOC *v35; // r12
  bool v36; // al
  __int64 v37; // rax
  __int64 CurrentProcess; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _VIDMM_LOCAL_ALLOC **v50; // rdx
  struct _VIDMM_LOCAL_ALLOC *v51; // rcx
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rax
  bool v55; // zf
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rax
  VIDMM_GLOBAL *v60; // rcx
  __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 **v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // ecx
  __int64 v73; // r12
  struct VIDMM_PROCESS *v74; // rcx
  __int64 v75; // rax
  struct _VIDSCH_SYNC_OBJECT **v76; // rbx
  int Resident; // eax
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // r9
  char *v86; // rax
  __int64 v87; // rdx
  char **v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // rbx
  struct VIDMM_PROCESS *v93; // r13
  HANDLE CurrentProcessId; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned int v98; // [rsp+80h] [rbp-F8h]
  unsigned int v99; // [rsp+84h] [rbp-F4h]
  struct _VIDMM_LOCAL_ALLOC *v100; // [rsp+88h] [rbp-F0h]
  __int64 v101; // [rsp+88h] [rbp-F0h]
  __int64 v102; // [rsp+90h] [rbp-E8h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v103; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v104; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-D0h]
  unsigned int v106; // [rsp+B0h] [rbp-C8h]
  __int64 v107; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v109; // [rsp+C8h] [rbp-B0h] BYREF
  struct _VIDMM_MULTI_ALLOC *v110; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int64 v111; // [rsp+D8h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v112; // [rsp+E0h] [rbp-98h] BYREF
  _BYTE v113[24]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v114[15]; // [rsp+100h] [rbp-78h] BYREF
  struct VIDMM_ALLOC **v116; // [rsp+1B0h] [rbp+38h]

  v8 = 0LL;
  v99 = 0;
  v98 = 0;
  v11 = a2;
  v105 = 0LL;
  LODWORD(v13) = 0;
  v103 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = v11;
  }
  *a7 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (VIDMM_ALLOC *)operator new[](0x120uLL, 0x33306956u, (POOL_TYPE)512);
    v18 = v15;
    if ( v15 )
    {
      VIDMM_ALLOC::VIDMM_ALLOC(v15);
      *((_DWORD *)v18 + 7) |= 0x20u;
      *((_QWORD *)v18 + 30) = 0LL;
      *((_QWORD *)v18 + 31) = 0LL;
      *((_QWORD *)v18 + 32) = 0LL;
      *((_QWORD *)v18 + 33) = 0LL;
      *((_QWORD *)v18 + 34) = 0LL;
      *((_QWORD *)v18 + 35) = 0LL;
      goto LABEL_8;
    }
LABEL_117:
    _InterlockedIncrement(&dword_1C0040568);
    v96 = WdLogNewEntry5_WdLowResource(v17, v16);
    *(_QWORD *)(v96 + 24) = 3748LL;
    WdLogEvent5_WdLowResource(v96);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v19 = (VIDMM_ALLOC *)operator new[](0xF0uLL, 0x33306956u, (POOL_TYPE)512);
  v18 = v19;
  if ( !v19 )
    goto LABEL_117;
  memset(v19, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)v18 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v18 + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v18 + 29);
LABEL_8:
  if ( !v18 )
    goto LABEL_117;
  *((_BYTE *)v18 + 36) ^= (*((_BYTE *)v18 + 36) ^ (*((_DWORD *)this + 1616) >> 13)) & 1;
  v20 = v11[2];
  if ( v20 )
  {
    v21 = (char *)v20 + 360;
    if ( v21 && *((struct _KTHREAD **)v21 + 1) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v22 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v21, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *((_DWORD *)v21 + 4);
        if ( v25 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v23, (__int64)&EventBlockThread, v24, v25);
      }
      ExAcquirePushLockExclusiveEx(v21, 0LL);
    }
    v26 = (VIDMM_ALLOC *)((char *)v18 + 112);
    *((_QWORD *)v21 + 1) = KeGetCurrentThread();
    v27 = (struct VIDMM_PROCESS ***)v11[21];
    if ( *v27 != v11 + 20 )
      __fastfail(3u);
    *((_QWORD *)v18 + 15) = v27;
    *(_QWORD *)v26 = v11 + 20;
    *v27 = (struct VIDMM_PROCESS **)v26;
    v11[21] = v26;
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v18 + 8) ^= (*((_DWORD *)v18 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
  if ( *((_BYTE *)a3 + 96) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a3;
    LODWORD(v13) = -1071775482;
    goto LABEL_105;
  }
  v29 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = a3;
    LODWORD(v13) = -1071775470;
    goto LABEL_105;
  }
  v30 = *((_QWORD *)a3 + 13);
  if ( (v29 & 4) != 0 )
    v103 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL)
                                                 + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
  v31 = VIDMM_GLOBAL::OpenLocalAllocation(this, a3, a2[1], a4, a8);
  v100 = v31;
  v35 = v31;
  if ( !v31 )
  {
    LODWORD(v13) = -1071775488;
    v11 = a2;
LABEL_105:
    VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)v11, v18);
    operator delete(v18);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v89, v90);
    return (unsigned int)v13;
  }
  v108 = *((_QWORD *)a3 + 13);
  *((_QWORD *)v18 + 2) = a6;
  *(_QWORD *)v18 = v31;
  *((_QWORD *)v18 + 1) = a2;
  *((_QWORD *)v18 + 12) = *((_QWORD *)a3 + 63);
  v106 = **((_DWORD **)a3 + 63);
  *((_DWORD *)v18 + 7) ^= (*((_DWORD *)v18 + 7) ^ (v106 >> 26)) & 8;
  LOBYTE(v33) = a5 != 0;
  *((_BYTE *)v18 + 24) = a5 != 0;
  if ( a5 )
  {
    if ( (**((_DWORD **)a3 + 63) & 0x200000) != 0 )
    {
      v32 = *(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL);
      if ( *(_BYTE *)(v32 + 306) )
      {
        v36 = a5 != 0;
        if ( *((_DWORD *)this + 1604) > 1u )
          v36 = 0;
        *((_BYTE *)v18 + 24) = v36;
      }
    }
  }
  *((_QWORD *)v18 + 18) = 0LL;
  *((_QWORD *)v18 + 17) = (char *)v18 + 128;
  *((_QWORD *)v18 + 16) = (char *)v18 + 128;
  if ( (*((_BYTE *)this + 40872) & 2) != 0 )
  {
    if ( (**((_DWORD **)a3 + 63) & 0x10000008) != 0 )
    {
      v102 = 0LL;
      v107 = 0LL;
      CurrentProcess = PsGetCurrentProcess(v32, a6, v33, v34);
      v39 = MmMapViewOfSection(
              *((_QWORD *)a3 + 45),
              CurrentProcess,
              &v102,
              0LL,
              *((_QWORD *)a3 + 1),
              &v107,
              (char *)a3 + 8,
              2,
              0,
              4);
      v13 = v39;
      if ( v39 < 0 )
      {
        _InterlockedIncrement(&dword_1C004057C);
        v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v41, v40);
        v42[3] = a3;
        v47 = PsGetCurrentProcess(v44, v43, v45, v46);
        v42[5] = v13;
        v42[4] = v47;
        WdLogEvent5_WdLowResource(v42);
LABEL_82:
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v48, v49);
        v11 = a2;
        goto LABEL_98;
      }
      v37 = v102;
    }
    else
    {
      v37 = *((_QWORD *)v35 + 2);
    }
    *((_QWORD *)v18 + 18) = v37;
  }
  v50 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v35 + 6);
  v51 = (VIDMM_ALLOC *)((char *)v18 + 40);
  if ( *v50 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v35 + 40) )
    __fastfail(3u);
  *(_QWORD *)v51 = (char *)v35 + 40;
  *((_QWORD *)v18 + 6) = v50;
  *v50 = v51;
  *((_QWORD *)v35 + 6) = v51;
  v52 = *((_QWORD *)a3 + 40);
  if ( *(struct _KTHREAD **)(v52 + 8) != KeGetCurrentThread() )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v33);
    v53[3] = 275LL;
    v53[4] = 4LL;
    v53[5] = v52;
    v53[6] = 0LL;
    v53[7] = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  if ( *(int *)(v52 + 24) <= 0 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v51, v50);
    *(_QWORD *)(v54 + 24) = 406LL;
    WdLogEvent5_WdAssertion(v54);
  }
  v55 = (*(_DWORD *)(v52 + 24))-- == 1;
  if ( v55 )
  {
    *(_QWORD *)(v52 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v52 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v30 != v108 )
  {
    if ( v35 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 13) && g_IsInternalRelease )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v57, v56, v58);
      v59[3] = 270LL;
      v59[4] = 9LL;
      v59[5] = 0LL;
      v59[6] = 0LL;
      v59[7] = 0LL;
      WdLogEvent5_WdCriticalError(v59);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 63) + 4LL) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v113,
        (struct _KTHREAD **)this + 4989);
      v61 = (__int64 *)((char *)a3 + 416);
      if ( *((_QWORD *)a3 + 52) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v60, a3, v103);
      if ( (*((_BYTE *)a3 + 92) & 3) == 3 )
      {
        v62 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
        v63 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 1) + 16LL) + 8 * v62) + 416LL;
        v64 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 1) + 16LL) + 8 * v62) + 424LL);
        if ( *v64 != (__int64 *)v63 )
          __fastfail(3u);
        *v61 = v63;
        *((_QWORD *)a3 + 53) = v64;
        *v64 = v61;
        *(_QWORD *)(v63 + 8) = v61;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v113);
    }
  }
  if ( (**((_DWORD **)a3 + 63) & 0x40000000) != 0 )
  {
    if ( (*((_DWORD *)this + 1616) & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v35 + 504LL) & 0x20000000) != 0
      && v35 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v35 + 104LL) )
    {
      v11 = a2;
      LODWORD(v13) = -1071775487;
LABEL_98:
      memset(v114, 0, 0x50uLL);
      v78 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v114[0]) = 200;
      v114[2] = v18;
      v79 = VIDMM_GLOBAL::QueueDeferredCommand(
              this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 72LL) + 160 * v78),
              (struct _VIDMM_DEFERRED_COMMAND *)v114,
              1,
              0LL);
      v83 = v79;
      if ( v79 < 0 )
      {
        v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80, v82);
        v84[3] = 270LL;
        v84[4] = 5LL;
        v84[5] = 200LL;
        v84[6] = v83;
        v84[7] = 0LL;
        WdLogEvent5_WdCriticalError(v84);
      }
      KeWaitForSingleObject((char *)v18 + 72, Executive, 0, 0, 0LL);
      DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
      v86 = (char *)v18 + 40;
      if ( *((_QWORD *)v18 + 5) )
      {
        v87 = *(_QWORD *)v86;
        if ( *(char **)(*(_QWORD *)v86 + 8LL) != v86 || (v88 = (char **)*((_QWORD *)v18 + 6), *v88 != v86) )
          __fastfail(3u);
        *v88 = (char *)v87;
        *(_QWORD *)(v87 + 8) = v88;
      }
      VIDMM_GLOBAL::CloseLocalAllocation(this, v35, (struct _VIDMM_LOCAL_ALLOC *)1, v85);
      goto LABEL_105;
    }
    v65 = VIDMM_GLOBAL::PinOneAllocation(this, v18);
    v13 = v65;
    if ( v65 < 0 )
    {
      _InterlockedIncrement(&dword_1C00405E8);
      v68 = WdLogNewEntry5_WdLowResource(v67, v66);
      *(_QWORD *)(v68 + 24) = v18;
      *(_QWORD *)(v68 + 32) = v13;
      WdLogEvent5_WdLowResource(v68);
      v11 = a2;
      goto LABEL_98;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
    if ( *((_BYTE *)a3 + 96) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v69) + 24) = a3;
      LODWORD(v13) = -1071775482;
      goto LABEL_82;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v69) + 24) = a3;
      LODWORD(v13) = -1071775470;
      goto LABEL_82;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v48, v49);
    v11 = a2;
  }
  else
  {
    v11 = a2;
    v74 = a2[3];
    if ( v74
      && (!*((_BYTE *)v74 + 1695)
       && (*((_DWORD *)v74 + 82) != 2
        || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v74 + 2) + 16LL)) < 2000)
       || (*((_DWORD *)a3 + 20) & 0x20) != 0) )
    {
      v75 = *((_DWORD *)a3 + 19) & 0x3F;
      v104 = 0LL;
      v109 = 0LL;
      v110 = v18;
      v76 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 72LL) + 160 * v75);
      Resident = VIDMM_GLOBAL::MakeResident(this, (struct VIDMM_PAGING_QUEUE *)v76, &v110, 1uLL, 0, &v104, &v109);
      LODWORD(v13) = Resident;
      if ( Resident == 259 )
      {
        v112 = v76[11];
        v111 = v104;
        VIDMM_GLOBAL::WaitForFences(this, &v112, &v111, 1u, 0LL);
        LODWORD(v13) = 0;
      }
      else if ( Resident < 0 )
      {
        goto LABEL_98;
      }
    }
  }
  *((_DWORD *)v18 + 7) |= 0x40u;
  v55 = bTracingEnabled == 0;
  *a7 = v18;
  if ( !v55 )
  {
    v70 = *((_QWORD *)v18 + 2);
    if ( v70 )
    {
      v99 = *(_DWORD *)(v70 + 16);
      v71 = *(_QWORD *)(v70 + 40);
      if ( v71 )
      {
        v72 = *(_DWORD *)(v71 + 16);
        v105 = *(_QWORD *)(v71 + 48);
        v98 = v72;
      }
    }
    if ( (**((_DWORD **)a3 + 63) & 8) != 0 )
      v73 = *((_QWORD *)a3 + 46);
    else
      v73 = *((_QWORD *)v35 + 2);
    if ( v70 && (v91 = *(_QWORD *)(v70 + 40)) != 0 )
      v92 = *(_QWORD *)(v91 + 56);
    else
      v92 = 0LL;
    if ( v70 )
      v8 = *(_QWORD *)(v70 + 40);
    v93 = v11[3];
    v116 = (struct VIDMM_ALLOC **)*((_QWORD *)v100 + 3);
    v101 = *((_QWORD *)this + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp(
        v98,
        &EventCreateDeviceAllocation,
        (__int64)v116,
        CurrentProcessId,
        v93,
        v101,
        v18,
        a3,
        v8,
        v92,
        v99,
        v98,
        v105,
        v73,
        v116);
  }
  v95 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1906);
  *((_QWORD *)this + 954) += v95;
  return (unsigned int)v13;
}

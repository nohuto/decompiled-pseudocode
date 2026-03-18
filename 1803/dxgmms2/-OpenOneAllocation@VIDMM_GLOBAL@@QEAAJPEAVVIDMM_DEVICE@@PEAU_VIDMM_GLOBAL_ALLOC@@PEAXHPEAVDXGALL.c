/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005BD4C (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C0068698 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C006BE24 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0004B10 (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C0022810 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     McTemplateK0pppppppppppp @ 0x1C0024068 (McTemplateK0pppppppppppp.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0063330 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00634E8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006A520 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006AA20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0079DE8 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009DC14 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C00A30F4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        DXGADAPTER **this,
        struct VIDMM_PROCESS **a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        void *a4,
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
  __int64 v16; // rcx
  VIDMM_ALLOC *v17; // rdi
  __int64 v18; // rdx
  VIDMM_ALLOC *v19; // rax
  struct VIDMM_PROCESS *v20; // rbx
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  struct VIDMM_PROCESS *v26; // rax
  struct VIDMM_PROCESS ***v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r13
  struct _VIDMM_LOCAL_ALLOC *v31; // rax
  __int64 v32; // r8
  struct _VIDMM_LOCAL_ALLOC *v33; // r12
  bool v34; // al
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 CurrentProcess; // rax
  int v40; // eax
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
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  VIDMM_GLOBAL *v61; // rcx
  __int64 *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 **v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  bool v70; // zf
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned int v73; // ecx
  __int64 v74; // r12
  struct VIDMM_PROCESS *v75; // rcx
  __int64 v76; // rax
  struct _VIDSCH_SYNC_OBJECT **v77; // rbx
  int Resident; // eax
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rbx
  _QWORD *v85; // rax
  __int64 v86; // r9
  __int64 v87; // rax
  char *v88; // rcx
  char **v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rbx
  struct VIDMM_PROCESS *v94; // r13
  HANDLE CurrentProcessId; // r9
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned int v99; // [rsp+80h] [rbp-F8h]
  unsigned int v100; // [rsp+84h] [rbp-F4h]
  struct _VIDMM_LOCAL_ALLOC *v101; // [rsp+88h] [rbp-F0h]
  __int64 v102; // [rsp+88h] [rbp-F0h]
  __int64 v103; // [rsp+90h] [rbp-E8h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v104; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v106; // [rsp+A8h] [rbp-D0h]
  __int64 v107; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v109; // [rsp+C0h] [rbp-B8h] BYREF
  struct _VIDMM_MULTI_ALLOC *v110; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 v111; // [rsp+D0h] [rbp-A8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v112; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v113[32]; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v114[15]; // [rsp+100h] [rbp-78h] BYREF
  struct VIDMM_ALLOC **v116; // [rsp+1B0h] [rbp+38h]

  v8 = 0LL;
  v100 = 0;
  v99 = 0;
  v11 = a2;
  v106 = 0LL;
  LODWORD(v13) = 0;
  v104 = 0LL;
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
    v17 = v15;
    if ( v15 )
    {
      VIDMM_ALLOC::VIDMM_ALLOC(v15);
      *((_DWORD *)v17 + 7) |= 0x20u;
      *((_QWORD *)v17 + 30) = 0LL;
      *((_QWORD *)v17 + 31) = 0LL;
      *((_QWORD *)v17 + 32) = 0LL;
      *((_QWORD *)v17 + 33) = 0LL;
      *((_QWORD *)v17 + 34) = 0LL;
      *((_QWORD *)v17 + 35) = 0LL;
      goto LABEL_8;
    }
LABEL_119:
    _InterlockedIncrement(&dword_1C0047568);
    v97 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v97 + 24) = 3806LL;
    WdLogEvent5_WdLowResource(v97);
    LODWORD(v13) = -1073741801;
    return (unsigned int)v13;
  }
  v19 = (VIDMM_ALLOC *)operator new[](0xF0uLL, 0x33306956u, (POOL_TYPE)512);
  v17 = v19;
  if ( !v19 )
    goto LABEL_119;
  memset(v19, 0, 0xF0uLL);
  KeInitializeEvent((PRKEVENT)v17 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v17 + 7, SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v17 + 29);
LABEL_8:
  if ( !v17 )
    goto LABEL_119;
  *((_BYTE *)v17 + 36) ^= (*((_BYTE *)v17 + 36) ^ (*((_DWORD *)this + 1760) >> 13)) & 1;
  v20 = v11[2];
  if ( v20 )
  {
    v21 = (char *)v20 + 360;
    if ( v21 && *((struct _KTHREAD **)v21 + 1) == KeGetCurrentThread() )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v18);
      *(_QWORD *)(v22 + 24) = 1306LL;
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
    *((_QWORD *)v21 + 1) = KeGetCurrentThread();
    v26 = (VIDMM_ALLOC *)((char *)v17 + 112);
    v27 = (struct VIDMM_PROCESS ***)v11[21];
    if ( *v27 != v11 + 20 )
      __fastfail(3u);
    *(_QWORD *)v26 = v11 + 20;
    *((_QWORD *)v17 + 15) = v27;
    *v27 = (struct VIDMM_PROCESS **)v26;
    v11[21] = v26;
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v21, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v17 + 8) ^= (*((_DWORD *)v17 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
  if ( *((_BYTE *)a3 + 96) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28) + 24) = a3;
    LODWORD(v13) = -1071775482;
    goto LABEL_107;
  }
  v29 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = a3;
    LODWORD(v13) = -1071775470;
    goto LABEL_107;
  }
  v30 = *((_QWORD *)a3 + 13);
  if ( (v29 & 4) != 0 )
    v104 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL)
                                                 + 8LL * *((unsigned int *)this[3] + 50));
  v31 = VIDMM_GLOBAL::OpenLocalAllocation((VIDMM_GLOBAL *)this, a3, a2[1], a4, a8);
  v101 = v31;
  v33 = v31;
  if ( !v31 )
  {
    LODWORD(v13) = -1071775488;
    v11 = a2;
LABEL_107:
    VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)v11, v17);
    operator delete(v17);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v90, v91);
    return (unsigned int)v13;
  }
  v108 = *((_QWORD *)a3 + 13);
  *((_QWORD *)v17 + 2) = a6;
  *(_QWORD *)v17 = v31;
  *((_QWORD *)v17 + 1) = a2;
  *((_QWORD *)v17 + 12) = *((_QWORD *)a3 + 63);
  *((_DWORD *)v17 + 7) ^= (*((_DWORD *)v17 + 7) ^ (**((_DWORD **)a3 + 63) >> 26)) & 8;
  LOBYTE(v32) = a5 != 0;
  *((_BYTE *)v17 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 63) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 322LL) )
  {
    v34 = a5 != 0;
    if ( *((_DWORD *)this + 1748) > 1u )
      v34 = 0;
    *((_BYTE *)v17 + 24) = v34;
  }
  *((_QWORD *)v17 + 18) = 0LL;
  *((_QWORD *)v17 + 17) = (char *)v17 + 128;
  *((_QWORD *)v17 + 16) = (char *)v17 + 128;
  if ( ((_BYTE)this[5181] & 4) != 0 )
  {
    if ( (**((_DWORD **)a3 + 63) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v35 = *((_QWORD *)a3 + 46);
      }
      else
      {
        v103 = 0LL;
        v107 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v37, v36, v32, v38);
        v40 = MmMapViewOfSection(
                *((_QWORD *)a3 + 45),
                CurrentProcess,
                &v103,
                0LL,
                *((_QWORD *)a3 + 1),
                &v107,
                (char *)a3 + 8,
                2,
                0,
                4);
        v13 = v40;
        if ( v40 < 0 )
        {
          _InterlockedIncrement(&dword_1C004757C);
          v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v41);
          v42[3] = a3;
          v47 = PsGetCurrentProcess(v44, v43, v45, v46);
          v42[5] = v13;
          v42[4] = v47;
          WdLogEvent5_WdLowResource(v42);
LABEL_84:
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v48, v49);
          v11 = a2;
          goto LABEL_100;
        }
        v35 = v103;
      }
    }
    else
    {
      v35 = *((_QWORD *)v33 + 2);
    }
    *((_QWORD *)v17 + 18) = v35;
  }
  v50 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v33 + 6);
  v51 = (VIDMM_ALLOC *)((char *)v17 + 40);
  if ( *v50 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v33 + 40) )
    __fastfail(3u);
  *(_QWORD *)v51 = (char *)v33 + 40;
  *((_QWORD *)v17 + 6) = v50;
  *v50 = v51;
  *((_QWORD *)v33 + 6) = v51;
  v52 = *((_QWORD *)a3 + 40);
  if ( *(struct _KTHREAD **)(v52 + 8) != KeGetCurrentThread() )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v32);
    v53[3] = 275LL;
    v53[4] = 4LL;
    v53[5] = v52;
    v53[6] = 0LL;
    v53[7] = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  v54 = *(_DWORD *)(v52 + 24);
  if ( v54 <= 0 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v51, v50);
    *(_QWORD *)(v55 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v55);
    v54 = *(_DWORD *)(v52 + 24);
  }
  v56 = v54 - 1;
  *(_DWORD *)(v52 + 24) = v56;
  if ( !v56 )
  {
    *(_QWORD *)(v52 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v52 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v30 != v108 )
  {
    if ( v33 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 13) && g_IsInternalRelease )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v57, v59);
      v60[3] = 270LL;
      v60[4] = 9LL;
      v60[5] = 0LL;
      v60[6] = 0LL;
      v60[7] = 0LL;
      WdLogEvent5_WdCriticalError(v60);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 63) + 4LL) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v113, this + 5061);
      v62 = (__int64 *)((char *)a3 + 416);
      if ( *((_QWORD *)a3 + 52) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v61, a3, v104);
      if ( (*((_BYTE *)a3 + 92) & 3) == 3 )
      {
        v63 = *((unsigned int *)this[3] + 50);
        v64 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 1) + 16LL) + 8 * v63) + 416LL;
        v65 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 1) + 16LL) + 8 * v63) + 424LL);
        if ( *v65 != (__int64 *)v64 )
          __fastfail(3u);
        *v62 = v64;
        *((_QWORD *)a3 + 53) = v65;
        *v65 = v62;
        *(_QWORD *)(v64 + 8) = v62;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v113);
    }
  }
  if ( (**((_DWORD **)a3 + 63) & 0x40000000) != 0 )
  {
    if ( ((_DWORD)this[880] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v33 + 504LL) & 0x20000000) != 0
      && v33 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v33 + 104LL) )
    {
      v11 = a2;
      LODWORD(v13) = -1071775487;
LABEL_100:
      memset(v114, 0, 0x50uLL);
      v79 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v114[0]) = 200;
      v114[2] = v17;
      v80 = VIDMM_GLOBAL::QueueDeferredCommand(
              (VIDMM_GLOBAL *)this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v17 + 1) + 72LL) + 160 * v79),
              (struct _VIDMM_DEFERRED_COMMAND *)v114,
              1,
              0LL);
      v84 = v80;
      if ( v80 < 0 )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v82, v81, v83);
        v85[3] = 270LL;
        v85[4] = 5LL;
        v85[5] = 200LL;
        v85[6] = v84;
        v85[7] = 0LL;
        WdLogEvent5_WdCriticalError(v85);
      }
      KeWaitForSingleObject((char *)v17 + 72, Executive, 0, 0, 0LL);
      DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
      v87 = *((_QWORD *)v17 + 5);
      v88 = (char *)v17 + 40;
      if ( v87 )
      {
        if ( *(char **)(v87 + 8) != v88 || (v89 = (char **)*((_QWORD *)v17 + 6), *v89 != v88) )
          __fastfail(3u);
        *v89 = (char *)v87;
        *(_QWORD *)(v87 + 8) = v89;
      }
      VIDMM_GLOBAL::CloseLocalAllocation((VIDMM_GLOBAL *)this, v33, (struct _VIDMM_LOCAL_ALLOC *)1, v86);
      goto LABEL_107;
    }
    v66 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v17);
    v13 = v66;
    if ( v66 < 0 )
    {
      _InterlockedIncrement(&dword_1C00475E8);
      v68 = WdLogNewEntry5_WdLowResource(v67);
      *(_QWORD *)(v68 + 24) = v17;
      *(_QWORD *)(v68 + 32) = v13;
      WdLogEvent5_WdLowResource(v68);
      v11 = a2;
      goto LABEL_100;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
    if ( *((_BYTE *)a3 + 96) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v69) + 24) = a3;
      LODWORD(v13) = -1071775482;
      goto LABEL_84;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v69) + 24) = a3;
      LODWORD(v13) = -1071775470;
      goto LABEL_84;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v48, v49);
    v11 = a2;
  }
  else
  {
    v11 = a2;
    v75 = a2[3];
    if ( v75
      && (!*((_BYTE *)v75 + 1711)
       && (*((_DWORD *)v75 + 82) != 2
        || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v75 + 2) + 16LL)) < 2000)
       || (*((_DWORD *)a3 + 20) & 0x20) != 0) )
    {
      v76 = *((_DWORD *)a3 + 19) & 0x3F;
      v105 = 0LL;
      v109 = 0LL;
      v110 = v17;
      v77 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)v17 + 1) + 72LL) + 160 * v76);
      Resident = VIDMM_GLOBAL::MakeResident(
                   (VIDMM_GLOBAL *)this,
                   (struct VIDMM_PAGING_QUEUE *)v77,
                   &v110,
                   1uLL,
                   0,
                   &v105,
                   &v109);
      LODWORD(v13) = Resident;
      if ( Resident == 259 )
      {
        v112 = v77[11];
        v111 = v105;
        VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v112, &v111, 1u, 0LL);
        LODWORD(v13) = 0;
      }
      else if ( Resident < 0 )
      {
        goto LABEL_100;
      }
    }
  }
  *((_DWORD *)v17 + 7) |= 0x40u;
  v70 = bTracingEnabled == 0;
  *a7 = v17;
  if ( !v70 )
  {
    v71 = *((_QWORD *)v17 + 2);
    if ( v71 )
    {
      v100 = *(_DWORD *)(v71 + 16);
      v72 = *(_QWORD *)(v71 + 40);
      if ( v72 )
      {
        v73 = *(_DWORD *)(v72 + 16);
        v106 = *(_QWORD *)(v72 + 48);
        v99 = v73;
      }
    }
    if ( (**((_DWORD **)a3 + 63) & 8) != 0 )
      v74 = *((_QWORD *)a3 + 46);
    else
      v74 = *((_QWORD *)v33 + 2);
    if ( v71 && (v92 = *(_QWORD *)(v71 + 40)) != 0 )
      v93 = *(_QWORD *)(v92 + 56);
    else
      v93 = 0LL;
    if ( v71 )
      v8 = *(_QWORD *)(v71 + 40);
    v94 = v11[3];
    v116 = (struct VIDMM_ALLOC **)*((_QWORD *)v101 + 3);
    v102 = (__int64)this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppppppppppp(
        v99,
        &EventCreateDeviceAllocation,
        (__int64)v116,
        CurrentProcessId,
        v94,
        v102,
        v17,
        a3,
        v8,
        v93,
        v100,
        v99,
        v106,
        v74,
        v116);
  }
  v96 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 2050);
  this[1026] = (DXGADAPTER *)((char *)this[1026] + v96);
  return (unsigned int)v13;
}

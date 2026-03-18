/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0053838 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00557E0 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDXGALLOCATION@@PEAPEAU_VIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1C00610B0 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@IPEAXHPEAVDX.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062978 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0063ED4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002BAC (-IsWarpAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0013E28 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C001E5A4 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     Template_pppppppppppp @ 0x1C001F644 (Template_pppppppppppp.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005B98C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005BAD4 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C005CFE0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0062D50 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0062DF0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C006E028 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009154C (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C0094D64 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        DXGADAPTER **this,
        struct VIDMM_PROCESS **a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        int a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  _BYTE *v8; // rax
  __int64 v9; // rbp
  struct VIDMM_PROCESS **v12; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  VIDMM_ALLOC *v16; // rax
  __int64 v17; // rcx
  VIDMM_ALLOC *v18; // rdi
  __int64 v19; // rdx
  VIDMM_ALLOC *v20; // rax
  struct VIDMM_PROCESS *v21; // rbx
  char *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  struct VIDMM_PROCESS *v27; // rcx
  struct VIDMM_PROCESS ***v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r13
  struct _VIDMM_LOCAL_ALLOC *v32; // rax
  __int64 v33; // r8
  struct _VIDMM_LOCAL_ALLOC *v34; // r12
  bool v35; // al
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 CurrentProcess; // rax
  int v39; // eax
  __int64 v40; // rcx
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _VIDMM_LOCAL_ALLOC **v46; // rdx
  struct _VIDMM_LOCAL_ALLOC *v47; // rcx
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // rax
  bool v51; // zf
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  VIDMM_GLOBAL *v56; // rcx
  __int64 *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 **v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // ecx
  __int64 v68; // r12
  struct VIDMM_PROCESS *v69; // rcx
  __int64 v70; // rax
  struct _VIDSCH_SYNC_OBJECT **v71; // rbx
  int Resident; // eax
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rbx
  _QWORD *v79; // rax
  VIDMM_GLOBAL *v80; // rcx
  char *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // rbx
  struct VIDMM_PROCESS *v87; // r13
  HANDLE CurrentProcessId; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned int v92; // [rsp+80h] [rbp-F8h]
  unsigned int v93; // [rsp+84h] [rbp-F4h]
  struct _VIDMM_LOCAL_ALLOC *v94; // [rsp+88h] [rbp-F0h]
  __int64 v95; // [rsp+88h] [rbp-F0h]
  __int64 v96; // [rsp+90h] [rbp-E8h] BYREF
  struct VIDMM_PROCESS_ADAPTER_INFO *v97; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v98; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-D0h]
  unsigned int v100; // [rsp+B0h] [rbp-C8h]
  __int64 v101; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v102; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 v103; // [rsp+C8h] [rbp-B0h] BYREF
  struct _VIDMM_MULTI_ALLOC *v104; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int64 v105; // [rsp+D8h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v106; // [rsp+E0h] [rbp-98h] BYREF
  _BYTE v107[24]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v108[15]; // [rsp+100h] [rbp-78h] BYREF
  struct VIDMM_ALLOC **v110; // [rsp+1B0h] [rbp+38h]

  v8 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v9 = 0LL;
  v93 = 0;
  v92 = 0;
  v12 = a2;
  v99 = 0LL;
  LODWORD(v14) = 0;
  v97 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = v12;
    v8 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  *a7 = 0LL;
  if ( *v8 )
  {
    v16 = (VIDMM_ALLOC *)operator new[](0x118uLL, 0x33306956u, (POOL_TYPE)512);
    v18 = v16;
    if ( v16 )
    {
      VIDMM_ALLOC::VIDMM_ALLOC(v16);
      *((_DWORD *)v18 + 7) |= 0x20u;
      *((_QWORD *)v18 + 29) = 0LL;
      *((_QWORD *)v18 + 30) = 0LL;
      *((_QWORD *)v18 + 31) = 0LL;
      *((_QWORD *)v18 + 32) = 0LL;
      *((_QWORD *)v18 + 33) = 0LL;
      *((_QWORD *)v18 + 34) = 0LL;
      goto LABEL_8;
    }
LABEL_119:
    _InterlockedIncrement(&dword_1C003C558);
    v90 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v90 + 24) = 3371LL;
    WdLogEvent5_WdLowResource(v90);
    LODWORD(v14) = -1073741801;
    return (unsigned int)v14;
  }
  v20 = (VIDMM_ALLOC *)operator new[](0xE8uLL, 0x33306956u, (POOL_TYPE)512);
  v18 = v20;
  if ( !v20 )
    goto LABEL_119;
  memset(v20, 0, 0xE8uLL);
  KeInitializeEvent((PRKEVENT)v18 + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v18 + 7, SynchronizationEvent, 0);
LABEL_8:
  if ( !v18 )
    goto LABEL_119;
  *((_BYTE *)v18 + 36) ^= (*((_BYTE *)v18 + 36) ^ (*((_DWORD *)this + 1616) >> 13)) & 1;
  v21 = v12[2];
  if ( v21 )
  {
    v22 = (char *)v21 + 328;
    if ( v22 && *((struct _KTHREAD **)v22 + 1) == KeGetCurrentThread() )
    {
      v23 = WdLogNewEntry5_WdAssertion(v17, v19);
      *(_QWORD *)(v23 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v26 = *((_DWORD *)v22 + 4);
        if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v24, &EventBlockThread, v25, v26);
      }
      ExAcquirePushLockExclusiveEx(v22, 0LL);
    }
    v27 = (VIDMM_ALLOC *)((char *)v18 + 112);
    *((_QWORD *)v22 + 1) = KeGetCurrentThread();
    v28 = (struct VIDMM_PROCESS ***)v12[21];
    if ( *v28 != v12 + 20 )
      __fastfail(3u);
    *((_QWORD *)v18 + 15) = v28;
    *(_QWORD *)v27 = v12 + 20;
    *v28 = (struct VIDMM_PROCESS **)v27;
    v12[21] = v27;
    *((_QWORD *)v22 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v22, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)v18 + 8) ^= (*((_DWORD *)v18 + 8) ^ (4 * *((_DWORD *)a3 + 19))) & 0xFC;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
  if ( *((_BYTE *)a3 + 96) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29) + 24) = a3;
    LODWORD(v14) = -1071775482;
    goto LABEL_107;
  }
  v30 = *((unsigned int *)a3 + 21);
  if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v30) + 24) = a3;
    LODWORD(v14) = -1071775470;
    goto LABEL_107;
  }
  v31 = *((_QWORD *)a3 + 13);
  if ( (v30 & 4) != 0 )
    v97 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(v31 + 8) + 16LL)
                                                + 8LL * *((unsigned int *)this[3] + 50));
  v32 = VIDMM_GLOBAL::OpenLocalAllocation(this, a3, a2[1], a4, a8);
  v94 = v32;
  v34 = v32;
  if ( !v32 )
  {
    LODWORD(v14) = -1071775488;
    v12 = a2;
LABEL_107:
    VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)v12, v18);
    operator delete(v18);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v83, v84);
    return (unsigned int)v14;
  }
  v102 = *((_QWORD *)a3 + 13);
  *((_QWORD *)v18 + 2) = a6;
  *(_QWORD *)v18 = v32;
  *((_QWORD *)v18 + 1) = a2;
  *((_QWORD *)v18 + 12) = *((_QWORD *)a3 + 65);
  v100 = **((_DWORD **)a3 + 65);
  *((_DWORD *)v18 + 7) ^= (*((_DWORD *)v18 + 7) ^ (v100 >> 26)) & 8;
  LOBYTE(v33) = a5 != 0;
  *((_BYTE *)v18 + 24) = a5 != 0;
  if ( a5 && (**((_DWORD **)a3 + 65) & 0x200000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 274LL) )
  {
    v35 = a5 != 0;
    if ( *((_DWORD *)this + 1604) > 1u )
      v35 = 0;
    *((_BYTE *)v18 + 24) = v35;
  }
  *((_QWORD *)v18 + 18) = 0LL;
  *((_QWORD *)v18 + 17) = (char *)v18 + 128;
  *((_QWORD *)v18 + 16) = (char *)v18 + 128;
  if ( ((_BYTE)this[5109] & 2) != 0 )
  {
    if ( (**((_DWORD **)a3 + 65) & 0x10000008) != 0 )
    {
      if ( DXGADAPTER::IsWarpAdapter(this[3]) )
      {
        v36 = *((_QWORD *)a3 + 46);
      }
      else
      {
        v96 = 0LL;
        v101 = 0LL;
        CurrentProcess = PsGetCurrentProcess(v37);
        v39 = MmMapViewOfSection(
                *((_QWORD *)a3 + 45),
                CurrentProcess,
                &v96,
                0LL,
                *((_QWORD *)a3 + 1),
                &v101,
                (char *)a3 + 8,
                2,
                0,
                4);
        v14 = v39;
        if ( v39 < 0 )
        {
          _InterlockedIncrement(&dword_1C003C56C);
          v41 = (_QWORD *)WdLogNewEntry5_WdLowResource(v40);
          v41[3] = a3;
          v43 = PsGetCurrentProcess(v42);
          v41[5] = v14;
          v41[4] = v43;
          WdLogEvent5_WdLowResource(v41);
LABEL_84:
          DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v44, v45);
          v12 = a2;
          goto LABEL_100;
        }
        v36 = v96;
      }
    }
    else
    {
      v36 = *((_QWORD *)v34 + 2);
    }
    *((_QWORD *)v18 + 18) = v36;
  }
  v46 = (struct _VIDMM_LOCAL_ALLOC **)*((_QWORD *)v34 + 6);
  v47 = (VIDMM_ALLOC *)((char *)v18 + 40);
  if ( *v46 != (struct _VIDMM_LOCAL_ALLOC *)((char *)v34 + 40) )
    __fastfail(3u);
  *(_QWORD *)v47 = (char *)v34 + 40;
  *((_QWORD *)v18 + 6) = v46;
  *v46 = v47;
  *((_QWORD *)v34 + 6) = v47;
  v48 = *((_QWORD *)a3 + 40);
  if ( *(struct _KTHREAD **)(v48 + 8) != KeGetCurrentThread() )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46, v33);
    v49[3] = 275LL;
    v49[4] = 4LL;
    v49[5] = v48;
    v49[6] = 0LL;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  if ( *(int *)(v48 + 24) <= 0 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v47, v46);
    *(_QWORD *)(v50 + 24) = 395LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v51 = (*(_DWORD *)(v48 + 24))-- == 1;
  if ( v51 )
  {
    *(_QWORD *)(v48 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v48 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v31 != v102 )
  {
    if ( v34 != *((struct _VIDMM_LOCAL_ALLOC **)a3 + 13) && g_IsInternalRelease )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52, v54);
      v55[3] = 270LL;
      v55[4] = 9LL;
      v55[5] = 0LL;
      v55[6] = 0LL;
      v55[7] = 0LL;
      WdLogEvent5_WdCriticalError(v55);
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 65) + 4LL) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v107, this + 4989);
      v57 = (__int64 *)((char *)a3 + 448);
      if ( *((_QWORD *)a3 + 56) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v56, a3, v97);
      if ( (*((_BYTE *)a3 + 92) & 3) == 3 )
      {
        v58 = *((unsigned int *)this[3] + 50);
        v59 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 1) + 16LL) + 8 * v58) + 384LL;
        v60 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 1) + 16LL) + 8 * v58) + 392LL);
        if ( *v60 != (__int64 *)v59 )
          __fastfail(3u);
        *v57 = v59;
        *((_QWORD *)a3 + 57) = v60;
        *v60 = v57;
        *(_QWORD *)(v59 + 8) = v57;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v107);
    }
  }
  if ( (**((_DWORD **)a3 + 65) & 0x40000000) != 0 )
  {
    if ( ((_DWORD)this[808] & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v34 + 520LL) & 0x20000000) != 0
      && v34 == *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v34 + 104LL) )
    {
      v12 = a2;
      LODWORD(v14) = -1071775487;
LABEL_100:
      memset(v108, 0, 0x50uLL);
      v73 = *((_DWORD *)a3 + 19) & 0x3F;
      LODWORD(v108[0]) = 200;
      v108[2] = v18;
      v74 = VIDMM_GLOBAL::QueueDeferredCommand(
              (VIDMM_GLOBAL *)this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 72LL) + 160 * v73),
              (struct _VIDMM_DEFERRED_COMMAND *)v108,
              1,
              0LL);
      v78 = v74;
      if ( v74 < 0 )
      {
        v79 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v76, v75, v77);
        v79[3] = 270LL;
        v79[4] = 5LL;
        v79[5] = 200LL;
        v79[6] = v78;
        v79[7] = 0LL;
        WdLogEvent5_WdCriticalError(v79);
      }
      KeWaitForSingleObject((char *)v18 + 72, Executive, 0, 0, 0LL);
      DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
      v81 = (char *)v18 + 40;
      if ( *((_QWORD *)v18 + 5) )
      {
        v82 = *(_QWORD *)v81;
        v80 = (VIDMM_GLOBAL *)*((_QWORD *)v18 + 6);
        if ( *(char **)(*(_QWORD *)v81 + 8LL) != v81 || *(char **)v80 != v81 )
          __fastfail(3u);
        *(_QWORD *)v80 = v82;
        *(_QWORD *)(v82 + 8) = v80;
      }
      VIDMM_GLOBAL::CloseLocalAllocation(v80, v34, 1LL);
      goto LABEL_107;
    }
    v61 = VIDMM_GLOBAL::PinOneAllocation((VIDMM_GLOBAL *)this, v18);
    v14 = v61;
    if ( v61 < 0 )
    {
      _InterlockedIncrement(&dword_1C003C5D8);
      v63 = WdLogNewEntry5_WdLowResource(v62);
      *(_QWORD *)(v63 + 24) = v18;
      *(_QWORD *)(v63 + 32) = v14;
      WdLogEvent5_WdLowResource(v63);
      v12 = a2;
      goto LABEL_100;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a3 + 40));
    if ( *((_BYTE *)a3 + 96) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v64) + 24) = a3;
      LODWORD(v14) = -1071775482;
      goto LABEL_84;
    }
    if ( (*((_BYTE *)a3 + 84) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v64) + 24) = a3;
      LODWORD(v14) = -1071775470;
      goto LABEL_84;
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a3 + 40), v44, v45);
    v12 = a2;
  }
  else
  {
    v12 = a2;
    v69 = a2[3];
    if ( v69
      && (!*((_BYTE *)v69 + 1823)
       && (*((_DWORD *)v69 + 82) != 2
        || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v69 + 2) + 16LL)) < 2000)
       || (*((_DWORD *)a3 + 20) & 0x20) != 0) )
    {
      v70 = *((_DWORD *)a3 + 19) & 0x3F;
      v98 = 0LL;
      v103 = 0LL;
      v104 = v18;
      v71 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 72LL) + 160 * v70);
      Resident = VIDMM_GLOBAL::MakeResident(
                   (VIDMM_GLOBAL *)this,
                   (struct VIDMM_PAGING_QUEUE *)v71,
                   &v104,
                   1uLL,
                   0,
                   &v98,
                   &v103);
      LODWORD(v14) = Resident;
      if ( Resident == 259 )
      {
        v106 = v71[11];
        v105 = v98;
        VIDMM_GLOBAL::WaitForFences((VIDMM_GLOBAL *)this, &v106, &v105, 1u, 0LL);
        LODWORD(v14) = 0;
      }
      else if ( Resident < 0 )
      {
        goto LABEL_100;
      }
    }
  }
  *((_DWORD *)v18 + 7) |= 0x40u;
  v51 = bTracingEnabled == 0;
  *a7 = v18;
  if ( !v51 )
  {
    v65 = *((_QWORD *)v18 + 2);
    if ( v65 )
    {
      v93 = *(_DWORD *)(v65 + 16);
      v66 = *(_QWORD *)(v65 + 40);
      if ( v66 )
      {
        v67 = *(_DWORD *)(v66 + 16);
        v99 = *(_QWORD *)(v66 + 48);
        v92 = v67;
      }
    }
    if ( (**((_DWORD **)a3 + 65) & 8) != 0 )
      v68 = *((_QWORD *)a3 + 46);
    else
      v68 = *((_QWORD *)v34 + 2);
    if ( v65 && (v85 = *(_QWORD *)(v65 + 40)) != 0 )
      v86 = *(_QWORD *)(v85 + 56);
    else
      v86 = 0LL;
    if ( v65 )
      v9 = *(_QWORD *)(v65 + 40);
    v87 = v12[3];
    v110 = (struct VIDMM_ALLOC **)*((_QWORD *)v94 + 3);
    v95 = (__int64)this[3];
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pppppppppppp(
        v92,
        &EventCreateDeviceAllocation,
        (__int64)v110,
        CurrentProcessId,
        v87,
        v95,
        v18,
        a3,
        v9,
        v86,
        v93,
        v92,
        v99,
        v68,
        v110);
  }
  v89 = *((_QWORD *)a3 + 2);
  ++*((_DWORD *)this + 1906);
  this[954] = (DXGADAPTER *)((char *)this[954] + v89);
  return (unsigned int)v14;
}

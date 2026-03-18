/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00BC580 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C00F3250 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193A10 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0008920 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00089FC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00146EC (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0014DC8 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0ppqq @ 0x1C0028924 (McTemplateK0ppqq.c)
 *     McTemplateK0qxx @ 0x1C00289BC (McTemplateK0qxx.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0170840 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C017087C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0196EA4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DXGPROCESS *v10; // rcx
  DXGPROCESS **ThreadProperty; // rax
  DXGPROCESS **v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct D3DDDI_MAKERESIDENT *v17; // rax
  struct D3DDDI_MAKERESIDENT *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGPAGINGQUEUE *v25; // r15
  __int64 v26; // rax
  unsigned __int64 NumAllocations; // rdi
  _BYTE *v28; // r12
  __int64 v29; // rax
  bool v30; // cf
  unsigned __int64 v31; // rax
  char *v32; // rax
  unsigned __int64 v33; // rdi
  _BYTE *PoolWithTag; // rcx
  unsigned int *AllocationList; // r14
  ULONG_PTR *v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rcx
  int v39; // ebx
  struct _KEVENT *v40; // rdi
  struct _KEVENT *v41; // rcx
  __int64 v42; // r9
  unsigned __int8 v43; // bl
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  char v54; // r13
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  struct DXGPROCESS *v58; // r15
  struct DXGPROCESS **v59; // rax
  struct DXGPROCESS **v60; // rbx
  struct DXGALLOCATION **v61; // rbx
  unsigned int *v62; // rax
  unsigned int v63; // r8d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rdx
  ULONG_PTR Count; // rbx
  __int64 v70; // rax
  struct DXGALLOCATION *v71; // rcx
  __int64 v72; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v74; // rax
  int CurrentProcessSessionId; // ebx
  bool v76; // zf
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v80; // rax
  struct _KTHREAD *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // ebx
  __int64 v86; // r8
  __int64 v87; // rbx
  __int64 *v88; // rax
  __int64 v89; // rbx
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  struct DXGPAGINGQUEUE *v93; // rbx
  __int64 v94; // rdi
  __int64 v95; // rax
  int Resident; // ebx
  struct D3DDDI_MAKERESIDENT *v97; // r14
  int v98; // r8d
  int v99; // esi
  unsigned __int64 *p_PagingFenceValue; // r15
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rdi
  unsigned int v105; // esi
  unsigned __int64 *p_NumBytesToTrim; // rbx
  unsigned int HostProcess; // eax
  struct D3DDDI_MAKERESIDENT *v108; // r9
  _QWORD *v109; // rdx
  _QWORD *v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  struct _EX_RUNDOWN_REF *v117; // [rsp+58h] [rbp-400h] BYREF
  struct DXGALLOCATION **v118; // [rsp+60h] [rbp-3F8h]
  char v119[8]; // [rsp+68h] [rbp-3F0h] BYREF
  struct D3DDDI_MAKERESIDENT *v120; // [rsp+70h] [rbp-3E8h]
  _BYTE *v121; // [rsp+78h] [rbp-3E0h]
  struct DXGPAGINGQUEUE *v122; // [rsp+80h] [rbp-3D8h] BYREF
  DXGPROCESS *v123; // [rsp+88h] [rbp-3D0h]
  struct DXGALLOCATIONREFERENCE *v124; // [rsp+90h] [rbp-3C8h]
  struct D3DDDI_MAKERESIDENT *v125; // [rsp+98h] [rbp-3C0h]
  __int64 v126; // [rsp+A0h] [rbp-3B8h] BYREF
  int v127; // [rsp+A8h] [rbp-3B0h]
  __int64 v128; // [rsp+B0h] [rbp-3A8h]
  unsigned int v129; // [rsp+B8h] [rbp-3A0h]
  unsigned int *v130; // [rsp+C0h] [rbp-398h]
  struct D3DDDI_MAKERESIDENT *v131; // [rsp+C8h] [rbp-390h]
  char v132[8]; // [rsp+D0h] [rbp-388h] BYREF
  _BYTE v133[16]; // [rsp+D8h] [rbp-380h] BYREF
  DXGADAPTER *v134; // [rsp+E8h] [rbp-370h]
  char v135; // [rsp+F0h] [rbp-368h]
  _BYTE v136[16]; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v137; // [rsp+108h] [rbp-350h]
  __int64 v138; // [rsp+118h] [rbp-340h]
  char v139; // [rsp+120h] [rbp-338h]
  _BYTE v140[24]; // [rsp+130h] [rbp-328h] BYREF
  _OWORD v141[3]; // [rsp+148h] [rbp-310h] BYREF
  PVOID P; // [rsp+180h] [rbp-2D8h] BYREF
  _BYTE v143[320]; // [rsp+188h] [rbp-2D0h] BYREF
  int v144; // [rsp+2C8h] [rbp-190h]
  _BYTE *v145; // [rsp+2D0h] [rbp-188h] BYREF
  _BYTE v146[320]; // [rsp+2D8h] [rbp-180h] BYREF
  int v147; // [rsp+418h] [rbp-40h]

  v125 = a1;
  v131 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2115);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = ProcessDxgProcess;
  v123 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*((_BYTE *)ProcessDxgProcess + 307) & 4) != 0 )
  {
    ThreadProperty = (DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v12 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v10 = *v12;
      v123 = *v12;
    }
    else
    {
      v10 = v123;
    }
  }
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_11:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_13;
    return 3221225485LL;
  }
  v120 = 0LL;
  if ( a2 )
  {
    v17 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v17 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v141[0] = *(_OWORD *)&v17->hPagingQueue;
    v141[1] = *(_OWORD *)&v17->PriorityList;
    v141[2] = *(_OWORD *)&v17->PagingFenceValue;
    v18 = (struct D3DDDI_MAKERESIDENT *)v141;
    v120 = (struct D3DDDI_MAKERESIDENT *)v141;
    v10 = v123;
  }
  else
  {
    v18 = a1;
    v120 = a1;
  }
  if ( !v18->NumAllocations )
  {
    v19 = WdLogNewEntry5_WdWarning(v10, v8, v9);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_11;
  }
  if ( !v18->AllocationList )
  {
    v20 = WdLogNewEntry5_WdWarning(v10, v8, v9);
    *(_QWORD *)(v20 + 24) = 478LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_11;
  }
  if ( v18->Flags.Value >= 4 )
  {
    v21 = WdLogNewEntry5_WdWarning(v10, v8, v9);
    *(_QWORD *)(v21 + 24) = 485LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_11;
  }
  v122 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119, v18->hPagingQueue, v10, &v122);
  v25 = v122;
  if ( !v122 )
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v18->hPagingQueue;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
    goto LABEL_11;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v145);
  P = 0LL;
  v144 = 0;
  NumAllocations = v18->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v28 = v146;
    v124 = (struct DXGALLOCATIONREFERENCE *)v146;
    goto LABEL_39;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 8 )
  {
    v28 = 0LL;
    v124 = 0LL;
    goto LABEL_41;
  }
  v29 = 8LL * (unsigned int)NumAllocations;
  if ( !is_mul_ok((unsigned int)NumAllocations, 8uLL) )
    v29 = -1LL;
  v30 = __CFADD__(v29, 8LL);
  v31 = v29 + 8;
  if ( v30 )
    v31 = -1LL;
  v32 = (char *)operator new[](v31, 0x4B677844u, PagedPool);
  if ( v32 )
  {
    *(_QWORD *)v32 = (unsigned int)NumAllocations;
    v28 = v32 + 8;
    v124 = (struct DXGALLOCATIONREFERENCE *)(v32 + 8);
    `vector constructor iterator'(
      v32 + 8,
      8LL,
      (unsigned int)NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_39:
    v145 = v28;
    goto LABEL_40;
  }
  v28 = 0LL;
  v124 = 0LL;
  v145 = 0LL;
LABEL_40:
  v147 = NumAllocations;
LABEL_41:
  v33 = v18->NumAllocations;
  if ( (unsigned int)v33 <= 0x28 )
  {
    PoolWithTag = v143;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
    {
      PoolWithTag = 0LL;
LABEL_48:
      v121 = PoolWithTag;
      goto LABEL_49;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v33, 0x4B677844u);
  }
  P = PoolWithTag;
  v121 = PoolWithTag;
  v144 = v33;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v33);
    PoolWithTag = P;
    goto LABEL_48;
  }
LABEL_49:
  if ( !v28 || !PoolWithTag )
  {
    v113 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v113 + 24) = 520LL;
    WdLogEvent5_WdLowResource(v113);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v114);
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v145);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v115, &EventProfilerExit, v116, 2115);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v18->AllocationList;
  v130 = &AllocationList[v18->NumAllocations];
  v118 = (struct DXGALLOCATION **)v28;
  v36 = (ULONG_PTR *)PoolWithTag;
  v37 = *((_QWORD *)v25 + 2);
  v128 = v37;
  v126 = v37;
  v38 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
  if ( *(int *)(v38 + 1968) >= 0x2000 || *(_BYTE *)(v38 + 2252) )
    v39 = *((_DWORD *)DXGGLOBAL::GetGlobal(v38) + 203);
  else
    v39 = 0;
  v127 = v39;
  v40 = *(struct _KEVENT **)(v37 + 16);
  if ( *(_DWORD *)(v37 + 328) == 2 )
  {
    if ( KeReadStateEvent(v40 + 4) )
      goto LABEL_61;
    v41 = v40 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v40 + 3) )
      goto LABEL_61;
    v41 = v40 + 3;
  }
  KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
LABEL_61:
  KeEnterCriticalRegion();
  if ( v39 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v37 + 112, 0LL) )
    {
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 96LL));
      v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v37 + 112));
LABEL_69:
      if ( v43 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 96LL));
    v43 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v44, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 104), 1u);
    goto LABEL_69;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v132, v37, 0, v42, 0);
  if ( v135 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45, v47);
    v48[3] = 275LL;
    v48[4] = 4LL;
    v48[5] = v133;
    v48[6] = 0LL;
    v48[7] = 0LL;
    WdLogEvent5_WdCriticalError(v48);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v134 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v49, &EventBlockThread, v50, 72);
      KeWaitForSingleObject((char *)v134 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v134);
  }
  v135 = 1;
  if ( *(_DWORD *)(v138 + 408) != 1 )
    goto LABEL_85;
  if ( v139 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v136);
    if ( *(_DWORD *)(v137 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v136);
LABEL_85:
      COREACCESS::Release((COREACCESS *)v133);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v132);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v51);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v145);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v52, &EventProfilerExit, v53, 2115);
      return 3221226166LL;
    }
  }
  v54 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 185LL);
  v55 = PsGetCurrentProcess();
  v57 = PsGetProcessDxgProcess(v55, v56);
  v58 = (struct DXGPROCESS *)v57;
  if ( v57 )
  {
    if ( (*(_BYTE *)(v57 + 307) & 4) != 0 )
    {
      v59 = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v60 = v59;
      if ( v59 )
      {
        ObfDereferenceObject(v59);
        v58 = *v60;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v140, v58);
LABEL_94:
  v61 = v118;
  while ( 1 )
  {
    if ( AllocationList == v130 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
      if ( v54 )
      {
        v104 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
        v105 = *((_DWORD *)v122 + 7);
        v97 = v120;
        p_PagingFenceValue = &v120->PagingFenceValue;
        p_NumBytesToTrim = &v120->NumBytesToTrim;
        HostProcess = DXGPROCESS::GetHostProcess(v123);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v104 + 3888),
                     HostProcess,
                     0,
                     v105,
                     v97->Flags,
                     v97->NumAllocations,
                     v124,
                     p_PagingFenceValue,
                     p_NumBytesToTrim);
      }
      else
      {
        v93 = v122;
        v94 = *((_QWORD *)v122 + 2);
        if ( !*(_BYTE *)(v94 + 1695)
          && (*(_DWORD *)(v94 + 328) != 2
           || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v94 + 16) + 16LL)) < 2000) )
        {
          v95 = WdLogNewEntry5_WdError(v91);
          *(_QWORD *)(v95 + 24) = v93;
          WdLogEvent5_WdError(v95);
          Resident = -1073741637;
          v97 = v120;
          v98 = a2;
          goto LABEL_155;
        }
        v97 = v120;
        v99 = v120->Flags.Value & 1 | 2;
        if ( (v120->Flags.Value & 2) == 0 )
          v99 = v120->Flags.Value & 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0ppqq(
            *(_QWORD *)(*((_QWORD *)v93 + 5) + 32LL),
            &EventMakeResidentBegin,
            v92,
            v93,
            *(_QWORD *)(*((_QWORD *)v93 + 5) + 32LL),
            v120->NumAllocations,
            v120->Flags.Value);
        p_PagingFenceValue = &v97->PagingFenceValue;
        Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94 + 16) + 528LL) + 8LL) + 768LL))(
                     *(_QWORD *)(*(_QWORD *)(v94 + 16) + 536LL),
                     *((_QWORD *)v93 + 4),
                     v121,
                     v97->NumAllocations,
                     v99,
                     &v97->PagingFenceValue,
                     &v97->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          McTemplateK0qxx(v102, v101, v103, Resident, v97->NumBytesToTrim, *p_PagingFenceValue);
      }
      v98 = a2;
      if ( Resident >= 0 && a2 )
      {
        v108 = v125;
        v109 = &v125->PagingFenceValue;
        if ( (unsigned __int64)&v125->PagingFenceValue >= MmUserProbeAddress )
          v109 = (_QWORD *)MmUserProbeAddress;
        *v109 = *p_PagingFenceValue;
        goto LABEL_156;
      }
LABEL_155:
      v108 = v125;
LABEL_156:
      if ( v98 )
      {
        v110 = &v108->NumBytesToTrim;
        if ( (unsigned __int64)&v108->NumBytesToTrim >= MmUserProbeAddress )
          v110 = (_QWORD *)MmUserProbeAddress;
        *v110 = v97->NumBytesToTrim;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v132);
      if ( v127 )
        ExReleasePushLockSharedEx(v126 + 112, 0LL);
      else
        ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
      KeLeaveCriticalRegion();
      if ( P != v143 && P )
        ExFreePoolWithTag(P, 0);
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v145);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v111, &EventProfilerExit, v112, 2115);
      return (unsigned int)Resident;
    }
    if ( a2 )
    {
      v62 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v62 = (unsigned int *)MmUserProbeAddress;
      v63 = *v62;
      v129 = *v62;
    }
    else
    {
      v63 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v58, (DXGALLOCATIONREFERENCE *)&v117, v63);
    if ( !v117 )
    {
      v67 = WdLogNewEntry5_WdError(v65);
      *(_QWORD *)(v67 + 24) = v117;
      goto LABEL_103;
    }
    if ( v117[1].Count != v37 )
      break;
    if ( !v54 )
    {
      Count = v117[3].Count;
      if ( !Count )
      {
        v70 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        *(_QWORD *)(v70 + 24) = v117;
        WdLogEvent5_WdWarning(v70);
      }
      *v36++ = Count;
      v61 = v118;
    }
    DXGALLOCATIONREFERENCE::MoveAssign(v61++, (struct DXGALLOCATION **)&v117);
    v118 = v61;
    ++AllocationList;
    v71 = (struct DXGALLOCATION *)v117;
    if ( v117 )
      ExReleaseRundownProtection(v117 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v71) + 203) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v74 = WdLogNewEntry5_WdAssertion(v72);
        *(_QWORD *)(v74 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v74);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( !CurrentProcessSessionId )
        goto LABEL_94;
      v76 = (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId;
      v61 = v118;
      if ( v76 )
      {
        v77 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v77 = *ThreadWin32Thread;
        }
        v80 = v77 ? *(_QWORD *)(v77 + 80) : 0LL;
        v61 = v118;
        if ( v80 )
        {
          v81 = KeGetCurrentThread();
          if ( !v81 )
          {
            v82 = WdLogNewEntry5_WdAssertion(v78);
            *(_QWORD *)(v82 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v82);
          }
          v85 = PsGetCurrentProcessSessionId();
          if ( !v85 || (unsigned int)PsGetThreadSessionId(v81) != v85 )
            goto LABEL_135;
          v87 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v88 = (__int64 *)PsGetThreadWin32Thread(v81);
            if ( v88 )
              v87 = *v88;
          }
          if ( v87 )
            v89 = *(_QWORD *)(v87 + 80);
          else
LABEL_135:
            v89 = 0LL;
          if ( *(_DWORD *)(v89 + 136) )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84, v83, v86);
            v90[3] = 275LL;
            v90[4] = 25LL;
            v90[5] = *(int *)(v89 + 136);
            v90[6] = 0LL;
            v90[7] = 0LL;
            WdLogEvent5_WdCriticalError(v90);
          }
          goto LABEL_94;
        }
      }
    }
  }
  v67 = WdLogNewEntry5_WdError(v65);
  *(_QWORD *)(v67 + 24) = v37;
  *(struct _EX_RUNDOWN_REF *)(v67 + 32) = v117[1];
LABEL_103:
  WdLogEvent5_WdError(v67);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v117);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v140);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v132);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v68);
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v145);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
  if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
    return 3221225485LL;
LABEL_13:
  McTemplateK0q(v14, &EventProfilerExit, v15, 2115);
  return 3221225485LL;
}

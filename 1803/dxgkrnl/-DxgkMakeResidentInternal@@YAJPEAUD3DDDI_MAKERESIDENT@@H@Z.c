/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00E62E0
 * Callers:
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00D5D80 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z.c)
 *     DxgkMakeResident @ 0x1C00E2770 (DxgkMakeResident.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017FC20 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C000B9A0 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A6A4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0ppqq @ 0x1C00334E0 (McTemplateK0ppqq.c)
 *     McTemplateK0qxx @ 0x1C0033578 (McTemplateK0qxx.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0147690 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C01476CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01837E8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct DXGPROCESS *v11; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct D3DDDI_MAKERESIDENT *v18; // rax
  struct D3DDDI_MAKERESIDENT *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGPAGINGQUEUE *v26; // r15
  __int64 v27; // rax
  unsigned __int64 NumAllocations; // rdi
  _BYTE *v29; // r13
  __int64 v30; // rax
  bool v31; // cf
  SIZE_T v32; // rax
  char *v33; // rax
  _BYTE *PoolWithTag; // rcx
  unsigned int *AllocationList; // r12
  ULONG_PTR *v36; // r13
  __int64 v37; // r15
  struct _KEVENT *v38; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v40; // eax
  int v41; // ebx
  int v42; // esi
  int v43; // r14d
  struct _KEVENT *v44; // rdi
  __int64 v45; // r9
  unsigned __int8 v46; // bl
  __int64 v47; // r8
  struct _KEVENT *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  char v57; // r14
  __int64 v58; // rax
  __int64 v59; // rax
  struct _KTHREAD **v60; // rsi
  struct _KTHREAD ***v61; // rax
  struct _KTHREAD ***v62; // rbx
  struct DXGALLOCATION **v63; // rbx
  unsigned int *v64; // rax
  unsigned int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  ULONG_PTR Count; // rbx
  __int64 v71; // rax
  struct DXGALLOCATION *v72; // rcx
  __int64 v73; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v75; // rax
  int CurrentProcessSessionId; // ebx
  bool v77; // zf
  __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v81; // rax
  struct _KTHREAD *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  int v85; // ebx
  __int64 v86; // rbx
  __int64 *v87; // rax
  __int64 v88; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  struct DXGPAGINGQUEUE *v92; // rbx
  __int64 v93; // rdi
  __int64 v94; // rax
  int Resident; // ebx
  struct D3DDDI_MAKERESIDENT *v96; // r14
  int v97; // r8d
  int v98; // esi
  unsigned __int64 *p_PagingFenceValue; // r15
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rdi
  unsigned int v104; // esi
  unsigned __int64 *p_NumBytesToTrim; // rbx
  unsigned int HostProcess; // eax
  struct D3DDDI_MAKERESIDENT *v107; // r9
  _QWORD *v108; // rdx
  _QWORD *v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // r8
  int v115; // [rsp+50h] [rbp-408h] BYREF
  __int64 v116; // [rsp+58h] [rbp-400h]
  struct _EX_RUNDOWN_REF *v117; // [rsp+60h] [rbp-3F8h] BYREF
  struct DXGALLOCATION **v118; // [rsp+68h] [rbp-3F0h]
  char v119[8]; // [rsp+70h] [rbp-3E8h] BYREF
  struct D3DDDI_MAKERESIDENT *v120; // [rsp+78h] [rbp-3E0h]
  _BYTE *v121; // [rsp+80h] [rbp-3D8h]
  struct DXGPAGINGQUEUE *v122; // [rsp+88h] [rbp-3D0h] BYREF
  struct DXGPROCESS *v123; // [rsp+90h] [rbp-3C8h]
  struct DXGALLOCATIONREFERENCE *v124; // [rsp+98h] [rbp-3C0h]
  struct D3DDDI_MAKERESIDENT *v125; // [rsp+A0h] [rbp-3B8h]
  __int64 v126; // [rsp+A8h] [rbp-3B0h] BYREF
  int v127; // [rsp+B0h] [rbp-3A8h]
  __int64 v128; // [rsp+B8h] [rbp-3A0h]
  unsigned int v129; // [rsp+C0h] [rbp-398h]
  unsigned int *v130; // [rsp+C8h] [rbp-390h]
  struct D3DDDI_MAKERESIDENT *v131; // [rsp+D0h] [rbp-388h]
  _BYTE v132[24]; // [rsp+D8h] [rbp-380h] BYREF
  char v133[8]; // [rsp+F0h] [rbp-368h] BYREF
  struct _KTHREAD **v134[2]; // [rsp+F8h] [rbp-360h] BYREF
  DXGADAPTER *v135; // [rsp+108h] [rbp-350h]
  char v136; // [rsp+110h] [rbp-348h]
  struct _KTHREAD **v137[5]; // [rsp+118h] [rbp-340h] BYREF
  char v138; // [rsp+140h] [rbp-318h]
  _OWORD v139[3]; // [rsp+150h] [rbp-308h] BYREF
  PVOID P; // [rsp+180h] [rbp-2D8h] BYREF
  _BYTE v141[320]; // [rsp+188h] [rbp-2D0h] BYREF
  int v142; // [rsp+2C8h] [rbp-190h]
  _BYTE *v143; // [rsp+2D0h] [rbp-188h] BYREF
  _BYTE v144[320]; // [rsp+2D8h] [rbp-180h] BYREF
  int v145; // [rsp+418h] [rbp-40h]

  v125 = a1;
  v131 = a1;
  v116 = 0LL;
  v115 = 2115;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2115);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v115, 2115);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  v123 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*((_BYTE *)ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v13 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v13;
      v123 = *v13;
    }
    else
    {
      v11 = v123;
    }
  }
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v115);
    return 3221225485LL;
  }
  v120 = 0LL;
  if ( a2 )
  {
    v18 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v18 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    v139[0] = *(_OWORD *)&v18->hPagingQueue;
    v139[1] = *(_OWORD *)&v18->PriorityList;
    v139[2] = *(_OWORD *)&v18->PagingFenceValue;
    v19 = (struct D3DDDI_MAKERESIDENT *)v139;
    v120 = (struct D3DDDI_MAKERESIDENT *)v139;
    v11 = v123;
  }
  else
  {
    v19 = a1;
    v120 = a1;
  }
  if ( !v19->NumAllocations )
  {
    v20 = WdLogNewEntry5_WdWarning(v11, v9, v10);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_11;
  }
  if ( !v19->AllocationList )
  {
    v21 = WdLogNewEntry5_WdWarning(v11, v9, v10);
    *(_QWORD *)(v21 + 24) = 493LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_11;
  }
  if ( v19->Flags.Value >= 4 )
  {
    v22 = WdLogNewEntry5_WdWarning(v11, v9, v10);
    *(_QWORD *)(v22 + 24) = 500LL;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_11;
  }
  v122 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119, v19->hPagingQueue, v11, &v122);
  v26 = v122;
  if ( !v122 )
  {
    v27 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v27 + 24) = v19->hPagingQueue;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
    goto LABEL_11;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v143);
  P = 0LL;
  v142 = 0;
  NumAllocations = v19->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v29 = v144;
    v124 = (struct DXGALLOCATIONREFERENCE *)v144;
    goto LABEL_39;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations < 8 )
  {
    v29 = 0LL;
    v124 = 0LL;
    goto LABEL_41;
  }
  v30 = 8LL * (unsigned int)NumAllocations;
  if ( !is_mul_ok((unsigned int)NumAllocations, 8uLL) )
    v30 = -1LL;
  v31 = __CFADD__(v30, 8LL);
  v32 = v30 + 8;
  if ( v31 )
    v32 = -1LL;
  v33 = (char *)operator new[](v32, 0x4B677844u, PagedPool);
  if ( v33 )
  {
    *(_QWORD *)v33 = (unsigned int)NumAllocations;
    v29 = v33 + 8;
    v124 = (struct DXGALLOCATIONREFERENCE *)(v33 + 8);
    `vector constructor iterator'(
      v33 + 8,
      8LL,
      (unsigned int)NumAllocations,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
LABEL_39:
    v143 = v29;
    goto LABEL_40;
  }
  v29 = 0LL;
  v124 = 0LL;
  v143 = 0LL;
LABEL_40:
  v145 = NumAllocations;
  LODWORD(NumAllocations) = v19->NumAllocations;
LABEL_41:
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    PoolWithTag = v141;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations < 8 )
    {
      PoolWithTag = 0LL;
LABEL_48:
      v121 = PoolWithTag;
      goto LABEL_49;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)NumAllocations, 0x4B677844u);
  }
  P = PoolWithTag;
  v121 = PoolWithTag;
  v142 = NumAllocations;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * (unsigned int)NumAllocations);
    PoolWithTag = P;
    goto LABEL_48;
  }
LABEL_49:
  if ( v29 && PoolWithTag )
  {
    AllocationList = (unsigned int *)v19->AllocationList;
    v130 = &AllocationList[v19->NumAllocations];
    v118 = (struct DXGALLOCATION **)v29;
    v36 = (ULONG_PTR *)PoolWithTag;
    v37 = *((_QWORD *)v26 + 2);
    v128 = v37;
    v126 = v37;
    v38 = *(struct _KEVENT **)(v37 + 16);
    Blink = v38->Header.WaitListHead.Blink;
    if ( SLODWORD(Blink[131].Blink) >= 0x2000 || BYTE4(Blink[149].Blink) )
    {
      v40 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v38) + 223);
      v127 = v40;
      v38 = *(struct _KEVENT **)(v37 + 16);
      v41 = v40;
      v42 = v40;
      v43 = v40;
    }
    else
    {
      v127 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
    }
    if ( *(_DWORD *)(v37 + 328) == 2 )
    {
      v44 = v38 + 4;
      if ( !KeReadStateEvent(v38 + 4) )
      {
        KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
        v41 = v42;
      }
    }
    else
    {
      v48 = v38 + 3;
      v41 = v40;
      if ( !KeReadStateEvent(v38 + 3) )
      {
        KeWaitForSingleObject(v48, Executive, 0, 0, 0LL);
        v41 = v43;
      }
    }
    KeEnterCriticalRegion();
    if ( v41 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v37 + 112, 0LL) )
        goto LABEL_71;
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 96LL));
      v46 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v37 + 112));
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 104), 0) )
        goto LABEL_71;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 96LL));
      v46 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v47, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v37 + 104), 1u);
    }
    if ( v46 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v37 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
LABEL_71:
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v133, v37, 0, v45, 0);
    if ( v136 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50);
      v51[3] = 275LL;
      v51[4] = 4LL;
      v51[5] = v134;
      v51[6] = 0LL;
      v51[7] = 0LL;
      WdLogEvent5_WdCriticalError(v51);
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v135 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v135 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v52, &EventBlockThread, v53, 72);
        KeWaitForSingleObject((char *)v135 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v135);
    }
    v136 = 1;
    if ( *((_DWORD *)v137[4] + 106) != 1 )
      goto LABEL_84;
    if ( v138 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v137);
      if ( *((_DWORD *)v137[2] + 44) != 1 )
      {
        COREACCESS::Release(v137);
LABEL_84:
        COREACCESS::Release(v134);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v143);
        DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v54, &EventProfilerExit, v55, v115);
        return 3221226166LL;
      }
    }
    v56 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
    v57 = *(_BYTE *)(v56 + 185);
    v58 = PsGetCurrentProcess(v56, v49);
    v59 = PsGetProcessDxgProcess(v58);
    v60 = (struct _KTHREAD **)v59;
    if ( v59 )
    {
      if ( (*(_BYTE *)(v59 + 323) & 4) != 0 )
      {
        v61 = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v62 = v61;
        if ( v61 )
        {
          ObfDereferenceObject(v61);
          v60 = *v62;
        }
      }
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v132, v60);
LABEL_93:
    v63 = v118;
    while ( AllocationList != v130 )
    {
      if ( a2 )
      {
        v64 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v64 = (unsigned int *)MmUserProbeAddress;
        v65 = *v64;
        v129 = *v64;
      }
      else
      {
        v65 = *AllocationList;
      }
      DXGPROCESS::GetAllocationUnsafe((__int64)v60, (DXGALLOCATIONREFERENCE *)&v117, v65);
      if ( !v117 )
      {
        v69 = WdLogNewEntry5_WdError(v67);
        *(_QWORD *)(v69 + 24) = v117;
LABEL_102:
        WdLogEvent5_WdError(v69);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v117);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v126);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
        PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v143);
        DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
        goto LABEL_11;
      }
      if ( v117[1].Count != v37 )
      {
        v69 = WdLogNewEntry5_WdError(v67);
        *(_QWORD *)(v69 + 24) = v37;
        *(struct _EX_RUNDOWN_REF *)(v69 + 32) = v117[1];
        goto LABEL_102;
      }
      if ( !v57 )
      {
        Count = v117[3].Count;
        if ( !Count )
        {
          v71 = WdLogNewEntry5_WdWarning(v67, v66, v68);
          *(_QWORD *)(v71 + 24) = v117;
          WdLogEvent5_WdWarning(v71);
        }
        *v36++ = Count;
        v63 = v118;
      }
      DXGALLOCATIONREFERENCE::MoveAssign(v63++, (struct DXGALLOCATION **)&v117);
      v118 = v63;
      ++AllocationList;
      v72 = (struct DXGALLOCATION *)v117;
      if ( v117 )
        ExReleaseRundownProtection(v117 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v72) + 223) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !CurrentThread )
        {
          v75 = WdLogNewEntry5_WdAssertion(v73);
          *(_QWORD *)(v75 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v75);
        }
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v73);
        if ( !CurrentProcessSessionId )
          goto LABEL_93;
        v77 = (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId;
        v63 = v118;
        if ( v77 )
        {
          v78 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v78 = *ThreadWin32Thread;
          }
          v81 = v78 ? *(_QWORD *)(v78 + 80) : 0LL;
          v63 = v118;
          if ( v81 )
          {
            v82 = KeGetCurrentThread();
            if ( !v82 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v79);
              *(_QWORD *)(v83 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v83);
            }
            v85 = PsGetCurrentProcessSessionId(v79);
            if ( !v85 || (unsigned int)PsGetThreadSessionId(v82) != v85 )
              goto LABEL_132;
            v86 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v87 = (__int64 *)PsGetThreadWin32Thread(v82);
              if ( v87 )
                v86 = *v87;
            }
            if ( v86 )
              v88 = *(_QWORD *)(v86 + 80);
            else
LABEL_132:
              v88 = 0LL;
            if ( *(_DWORD *)(v88 + 136) )
            {
              v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v84);
              v89[3] = 275LL;
              v89[4] = 38LL;
              v89[5] = *(int *)(v88 + 136);
              v89[6] = 0LL;
              v89[7] = 0LL;
              WdLogEvent5_WdCriticalError(v89);
            }
            goto LABEL_93;
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v132);
    if ( v57 )
    {
      v103 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 16LL);
      v104 = *((_DWORD *)v122 + 7);
      v96 = v120;
      p_PagingFenceValue = &v120->PagingFenceValue;
      p_NumBytesToTrim = &v120->NumBytesToTrim;
      HostProcess = DXGPROCESS::GetHostProcess(v123);
      Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v103 + 4080),
                   HostProcess,
                   0,
                   v104,
                   v96->Flags,
                   v96->NumAllocations,
                   v124,
                   p_PagingFenceValue,
                   p_NumBytesToTrim);
    }
    else
    {
      v92 = v122;
      v93 = *((_QWORD *)v122 + 2);
      if ( !*(_BYTE *)(v93 + 1711)
        && (*(_DWORD *)(v93 + 328) != 2
         || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v93 + 16) + 16LL)) < 2000) )
      {
        v94 = WdLogNewEntry5_WdError(v90);
        *(_QWORD *)(v94 + 24) = v92;
        WdLogEvent5_WdError(v94);
        Resident = -1073741637;
        v96 = v120;
        v97 = a2;
        goto LABEL_152;
      }
      v96 = v120;
      v98 = v120->Flags.Value & 1 | 2;
      if ( (v120->Flags.Value & 2) == 0 )
        v98 = v120->Flags.Value & 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0ppqq(
          *(_QWORD *)(*((_QWORD *)v92 + 5) + 32LL),
          &EventMakeResidentBegin,
          v91,
          v92,
          *(_QWORD *)(*((_QWORD *)v92 + 5) + 32LL),
          v120->NumAllocations,
          v120->Flags.Value);
      p_PagingFenceValue = &v96->PagingFenceValue;
      Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v93 + 16) + 544LL) + 8LL) + 768LL))(
                   *(_QWORD *)(*(_QWORD *)(v93 + 16) + 552LL),
                   *((_QWORD *)v92 + 4),
                   v121,
                   v96->NumAllocations,
                   v98,
                   &v96->PagingFenceValue,
                   &v96->NumBytesToTrim);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0qxx(v101, v100, v102, Resident, v96->NumBytesToTrim, *p_PagingFenceValue);
    }
    v97 = a2;
    if ( Resident >= 0 && a2 )
    {
      v107 = v125;
      v108 = &v125->PagingFenceValue;
      if ( (unsigned __int64)&v125->PagingFenceValue >= MmUserProbeAddress )
        v108 = (_QWORD *)MmUserProbeAddress;
      *v108 = *p_PagingFenceValue;
      goto LABEL_153;
    }
LABEL_152:
    v107 = v125;
LABEL_153:
    if ( v97 )
    {
      v109 = &v107->NumBytesToTrim;
      if ( (unsigned __int64)&v107->NumBytesToTrim >= MmUserProbeAddress )
        v109 = (_QWORD *)MmUserProbeAddress;
      *v109 = v96->NumBytesToTrim;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v133);
    if ( v127 )
      ExReleasePushLockSharedEx(v126 + 112, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v126 + 104));
    KeLeaveCriticalRegion();
    if ( P != v141 && P )
      ExFreePoolWithTag(P, 0);
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v143);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v110, &EventProfilerExit, v111, v115);
    return (unsigned int)Resident;
  }
  v112 = WdLogNewEntry5_WdLowResource(PoolWithTag);
  *(_QWORD *)(v112 + 24) = 535LL;
  WdLogEvent5_WdLowResource(v112);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v143);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v119);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v115);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v113, &EventProfilerExit, v114, v115);
  return 3221225495LL;
}

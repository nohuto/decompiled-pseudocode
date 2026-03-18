/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C00C8360
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0180050 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C000B9A0 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01839B0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  bool v5; // si
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r15
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v11; // rbx
  __int64 v12; // rax
  D3DDDI_MAPGPUVIRTUALADDRESS *v13; // r14
  D3DDDI_MAPGPUVIRTUALADDRESS *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 Value; // rax
  __int64 v20; // rsi
  struct _KEVENT *v21; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v23; // eax
  int v24; // ebx
  int v25; // r12d
  struct _KEVENT *v26; // rdi
  unsigned int v27; // r12d
  __int64 v28; // r9
  unsigned __int8 v29; // bl
  __int64 v30; // r8
  struct _KEVENT *v31; // rdi
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGALLOCATION *v39; // rbx
  __int64 v40; // r10
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v45; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v47; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v49; // rax
  struct _KTHREAD *v50; // rdi
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rbx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  struct _EX_RUNDOWN_REF *v58; // r9
  _BYTE *Count; // r13
  bool v60; // r8
  int v61; // eax
  ULONG64 v62; // rcx
  unsigned int v63; // edi
  unsigned int HostProcess; // eax
  unsigned int v65; // r15d
  ULONG64 v66; // r8
  _QWORD *v67; // rdx
  _QWORD *v68; // rdx
  __int64 v69; // rcx
  struct _KTHREAD *v70; // rdi
  __int64 v71; // rax
  int v72; // ebx
  __int64 v73; // rbx
  __int64 v74; // rcx
  __int64 *v75; // rax
  __int64 v76; // rax
  struct _KTHREAD *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // ebx
  __int64 v81; // rbx
  __int64 *v82; // rax
  __int64 v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // r8
  int Timeout; // [rsp+20h] [rbp-1A8h]
  bool v90; // [rsp+40h] [rbp-188h]
  int v91; // [rsp+48h] [rbp-180h] BYREF
  __int64 v92; // [rsp+50h] [rbp-178h]
  char v93[8]; // [rsp+58h] [rbp-170h] BYREF
  struct DXGALLOCATION *v94; // [rsp+60h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v95; // [rsp+68h] [rbp-160h] BYREF
  __int64 v96; // [rsp+70h] [rbp-158h] BYREF
  int v97; // [rsp+78h] [rbp-150h]
  struct _EX_RUNDOWN_REF *v98; // [rsp+80h] [rbp-148h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS *v99; // [rsp+88h] [rbp-140h]
  struct DXGPROCESS *v100; // [rsp+90h] [rbp-138h]
  ULONG64 v101; // [rsp+98h] [rbp-130h]
  char v102[8]; // [rsp+A0h] [rbp-128h] BYREF
  struct _KTHREAD **v103[2]; // [rsp+A8h] [rbp-120h] BYREF
  DXGADAPTER *v104; // [rsp+B8h] [rbp-110h]
  char v105; // [rsp+C0h] [rbp-108h]
  struct _KTHREAD **v106[5]; // [rsp+C8h] [rbp-100h] BYREF
  char v107; // [rsp+F0h] [rbp-D8h]
  D3DDDI_MAPGPUVIRTUALADDRESS v108; // [rsp+120h] [rbp-A8h] BYREF

  v101 = a1;
  v4 = 0;
  v92 = 0LL;
  v91 = 2100;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2100);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v91, 2100);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v90 = v5;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  v100 = v9;
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_145:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v87, &EventProfilerExit, v88, v91);
    return 3221225485LL;
  }
  if ( v5 )
  {
    v13 = &v108;
    v99 = &v108;
    v14 = (D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v14 = (D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v108 = *v14;
  }
  else
  {
    v13 = (D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
    v99 = (D3DDDI_MAPGPUVIRTUALADDRESS *)a1;
  }
  v95 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v93, v13->hPagingQueue, v9, &v95);
  if ( !v95 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v13->hPagingQueue;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
LABEL_143:
    WdLogEvent5_WdWarning(v18);
    goto LABEL_144;
  }
  Value = v13->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    goto LABEL_143;
  }
  v20 = *((_QWORD *)v95 + 2);
  v96 = v20;
  v21 = *(struct _KEVENT **)(v20 + 16);
  Blink = v21->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[131].Blink) >= 0x2000 || BYTE4(Blink[149].Blink) )
  {
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v21) + 223);
    v97 = v23;
    v21 = *(struct _KEVENT **)(v20 + 16);
    v24 = v23;
    v25 = v23;
    v4 = v23;
  }
  else
  {
    v97 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
  }
  if ( *(_DWORD *)(v20 + 328) == 2 )
  {
    v26 = v21 + 4;
    if ( !KeReadStateEvent(v21 + 4) )
    {
      KeWaitForSingleObject(v26, Executive, 0, 0, 0LL);
      v24 = v25;
    }
    goto LABEL_26;
  }
  v31 = v21 + 3;
  v24 = v23;
  if ( KeReadStateEvent(v21 + 3) )
  {
LABEL_26:
    v27 = 0;
    goto LABEL_27;
  }
  v27 = 0;
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
  v24 = v4;
LABEL_27:
  KeEnterCriticalRegion();
  if ( v24 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v20 + 112, 0LL) )
      goto LABEL_40;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 0) )
      goto LABEL_40;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v30, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 1u);
  }
  if ( v29 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_40:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, v20, 0, v28, 0);
  if ( v105 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32);
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[5] = v103;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v104 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v104 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v34, &EventBlockThread, v35, 72);
      KeWaitForSingleObject((char *)v104 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v104);
  }
  v105 = 1;
  if ( *((_DWORD *)v106[4] + 106) != 1 )
    goto LABEL_53;
  if ( v107 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v106);
    if ( *((_DWORD *)v106[2] + 44) != 1 )
    {
      COREACCESS::Release(v106);
LABEL_53:
      COREACCESS::Release(v103);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v102);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v96);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v93);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v36, &EventProfilerExit, v37, v91);
      return 3221226166LL;
    }
  }
  v39 = 0LL;
  v94 = 0LL;
  v40 = 0LL;
  if ( (*(_BYTE *)&v13->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v9,
                                                (DXGALLOCATIONREFERENCE *)&v98,
                                                v13->hAllocation);
    DXGALLOCATIONREFERENCE::MoveAssign(&v94, AllocationSafe);
    v42 = (__int64)v98;
    if ( v98 )
      ExReleaseRundownProtection(v98 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v42) + 223) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v45 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v45 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v45);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v43);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v47 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v47 = *ThreadWin32Thread;
        }
        if ( v47 )
          v49 = *(_QWORD *)(v47 + 80);
        else
          v49 = 0LL;
        if ( v49 )
        {
          v50 = KeGetCurrentThread();
          if ( !v50 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v43);
            *(_QWORD *)(v51 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v51);
          }
          v52 = PsGetCurrentProcessSessionId(v43);
          if ( !v52 || (unsigned int)PsGetThreadSessionId(v50) != v52 )
            goto LABEL_81;
          v53 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v54 = (__int64 *)PsGetThreadWin32Thread(v50);
            if ( v54 )
              v53 = *v54;
          }
          if ( v53 )
            v55 = *(_QWORD *)(v53 + 80);
          else
LABEL_81:
            v55 = 0LL;
          if ( *(_DWORD *)(v55 + 136) )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43);
            v56[3] = 275LL;
            v56[4] = 38LL;
            v56[5] = *(int *)(v55 + 136);
            v56[6] = 0LL;
            v56[7] = 0LL;
            WdLogEvent5_WdCriticalError(v56);
          }
        }
      }
    }
    v39 = v94;
    if ( !v94 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v57[3] = -1073741811LL;
      v57[4] = v13->hAllocation;
      v57[5] = v9;
LABEL_86:
      WdLogEvent5_WdError(v57);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v94);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v102);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v96);
LABEL_144:
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v93);
      goto LABEL_145;
    }
    v40 = *((_QWORD *)v94 + 3);
    if ( !v40 && (*(_BYTE *)(v20 + 1709) & 1) == 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v57[3] = -1073741811LL;
      v57[4] = v39;
      goto LABEL_86;
    }
    if ( *((_QWORD *)v94 + 1) != v20 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v43);
      v57[3] = -1073741811LL;
      v57[4] = v39;
      v57[5] = v95;
      goto LABEL_86;
    }
  }
  v58 = *(struct _EX_RUNDOWN_REF **)(v20 + 16);
  Count = (_BYTE *)v58[2].Count;
  v98 = v58;
  if ( Count[185] )
  {
    if ( v39 )
      v27 = *((_DWORD *)v39 + 24);
    v63 = *((_DWORD *)v95 + 7);
    HostProcess = DXGPROCESS::GetHostProcess(v9);
    v61 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(Count + 4080),
            HostProcess,
            0LL,
            v63,
            v27,
            v13);
  }
  else
  {
    v60 = *(_BYTE *)(v20 + 1711)
       || *(_DWORD *)(v20 + 328) == 2 && (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)Count) >= 2000;
    LOBYTE(Timeout) = v60;
    v61 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v58[68].Count + 8) + 792LL))(
            v58[69].Count,
            *((_QWORD *)v95 + 4),
            v40,
            v13,
            Timeout,
            -2);
  }
  v65 = v61;
  if ( v61 >= 0 && v90 )
  {
    v66 = v101;
    v67 = (_QWORD *)(v101 + 88);
    if ( v101 + 88 >= MmUserProbeAddress )
      v67 = (_QWORD *)MmUserProbeAddress;
    *v67 = v13->VirtualAddress;
    v68 = (_QWORD *)(v66 + 96);
    v62 = MmUserProbeAddress;
    if ( v66 + 96 >= MmUserProbeAddress )
      v68 = (_QWORD *)MmUserProbeAddress;
    *v68 = v13->PagingFenceValue;
  }
  if ( v39 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v39 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v62) + 223) )
  {
    v70 = KeGetCurrentThread();
    if ( !v70 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v69);
      *(_QWORD *)(v71 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v71);
    }
    v72 = PsGetCurrentProcessSessionId(v69);
    if ( v72 && (unsigned int)PsGetThreadSessionId(v70) == v72 )
    {
      v73 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v75 = (__int64 *)PsGetThreadWin32Thread(v70);
        if ( v75 )
          v73 = *v75;
      }
      if ( v73 )
        v76 = *(_QWORD *)(v73 + 80);
      else
        v76 = 0LL;
      if ( v76 )
      {
        v77 = KeGetCurrentThread();
        if ( !v77 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v74);
          *(_QWORD *)(v78 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v78);
        }
        v80 = PsGetCurrentProcessSessionId(v74);
        if ( !v80 || (unsigned int)PsGetThreadSessionId(v77) != v80 )
          goto LABEL_132;
        v81 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v82 = (__int64 *)PsGetThreadWin32Thread(v77);
          if ( v82 )
            v81 = *v82;
        }
        if ( v81 )
          v83 = *(_QWORD *)(v81 + 80);
        else
LABEL_132:
          v83 = 0LL;
        if ( *(_DWORD *)(v83 + 136) )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v79);
          v84[3] = 275LL;
          v84[4] = 38LL;
          v84[5] = *(int *)(v83 + 136);
          v84[6] = 0LL;
          v84[7] = 0LL;
          WdLogEvent5_WdCriticalError(v84);
        }
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v102);
  if ( v97 )
    ExReleasePushLockSharedEx(v20 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v20 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v93);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v91);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v85, &EventProfilerExit, v86, v91);
  return v65;
}

/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C00EBAF0
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193E30 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0008920 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0014DC8 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C019706C (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r12
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // r14
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v17; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 Value; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  int v26; // ebx
  struct _KEVENT *v27; // rdi
  struct _KEVENT *v28; // rcx
  __int64 v29; // r9
  unsigned __int8 v30; // bl
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  struct _EX_RUNDOWN_REF *v41; // rbx
  ULONG_PTR Count; // r10
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v47; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v49; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v51; // rax
  struct _KTHREAD *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // ebx
  __int64 v56; // r8
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rbx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  struct _EX_RUNDOWN_REF *v62; // r9
  _BYTE *v63; // r13
  bool v64; // r8
  int v65; // eax
  ULONG64 v66; // rcx
  unsigned int v67; // r12d
  unsigned int v68; // edi
  unsigned int HostProcess; // eax
  unsigned int v70; // r14d
  _QWORD *v71; // rdx
  _QWORD *v72; // rdx
  __int64 v73; // rcx
  struct _KTHREAD *v74; // rdi
  __int64 v75; // rax
  int v76; // ebx
  __int64 v77; // rbx
  __int64 v78; // rcx
  __int64 *v79; // rax
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
  int Timeout; // [rsp+20h] [rbp-198h]
  bool v94; // [rsp+40h] [rbp-178h]
  char v95[8]; // [rsp+48h] [rbp-170h] BYREF
  struct _EX_RUNDOWN_REF *v96; // [rsp+50h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v97; // [rsp+58h] [rbp-160h] BYREF
  __int64 v98; // [rsp+60h] [rbp-158h] BYREF
  int v99; // [rsp+68h] [rbp-150h]
  struct _EX_RUNDOWN_REF *v100; // [rsp+70h] [rbp-148h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v101; // [rsp+78h] [rbp-140h]
  struct DXGPROCESS *v102; // [rsp+80h] [rbp-138h]
  ULONG64 v103; // [rsp+88h] [rbp-130h]
  char v104[8]; // [rsp+90h] [rbp-128h] BYREF
  _BYTE v105[16]; // [rsp+98h] [rbp-120h] BYREF
  DXGADAPTER *v106; // [rsp+A8h] [rbp-110h]
  char v107; // [rsp+B0h] [rbp-108h]
  _BYTE v108[16]; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-F0h]
  __int64 v110; // [rsp+D8h] [rbp-E0h]
  char v111; // [rsp+E0h] [rbp-D8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v112; // [rsp+110h] [rbp-A8h] BYREF

  v3 = a1;
  v103 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2100);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v94 = v4;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v8);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v13 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v13;
      }
    }
  }
  v102 = v11;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_146:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, 2100);
    return 3221225485LL;
  }
  if ( v4 )
  {
    v17 = &v112;
    v101 = &v112;
    v18 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    if ( v3 >= MmUserProbeAddress )
      v18 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v112 = *v18;
  }
  else
  {
    v17 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    v101 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
  }
  v97 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v95, v17->hPagingQueue, v11, &v97);
  if ( !v97 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = v17->hPagingQueue;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
LABEL_144:
    WdLogEvent5_WdWarning(v22);
    goto LABEL_145;
  }
  Value = v17->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    goto LABEL_144;
  }
  v24 = *((_QWORD *)v97 + 2);
  v98 = v24;
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
  if ( *(int *)(v25 + 1968) >= 0x2000 || *(_BYTE *)(v25 + 2252) )
    v26 = *((_DWORD *)DXGGLOBAL::GetGlobal(v25) + 203);
  else
    v26 = 0;
  v99 = v26;
  v27 = *(struct _KEVENT **)(v24 + 16);
  if ( *(_DWORD *)(v24 + 328) == 2 )
  {
    if ( KeReadStateEvent(v27 + 4) )
      goto LABEL_29;
    v28 = v27 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v27 + 3) )
      goto LABEL_29;
    v28 = v27 + 3;
  }
  KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
LABEL_29:
  KeEnterCriticalRegion();
  if ( v26 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v24 + 112, 0LL) )
      goto LABEL_40;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL));
    v30 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v24 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 104), 0) )
      goto LABEL_40;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL));
    v30 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v31, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 104), 1u);
  }
  if ( v30 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_40:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, v24, 0, v29, 0);
  if ( v107 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v105;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v106 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v106 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v36, &EventBlockThread, v37, 72);
      KeWaitForSingleObject((char *)v106 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v106);
  }
  v107 = 1;
  if ( *(_DWORD *)(v110 + 408) != 1 )
    goto LABEL_53;
  if ( v111 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v108);
    if ( *(_DWORD *)(v109 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v108);
LABEL_53:
      COREACCESS::Release((COREACCESS *)v105);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v98);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v95);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, 2100);
      return 3221226166LL;
    }
  }
  v41 = 0LL;
  v96 = 0LL;
  Count = 0LL;
  if ( (*(_BYTE *)&v17->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v11,
                                                (DXGALLOCATIONREFERENCE *)&v100,
                                                v17->hAllocation);
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v96, AllocationSafe);
    v44 = (__int64)v100;
    if ( v100 )
      ExReleaseRundownProtection(v100 + 11);
    v45 = *((unsigned int *)DXGGLOBAL::GetGlobal(v44) + 203);
    if ( (_DWORD)v45 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v47 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v47 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v47);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v45);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v49 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v49 = *ThreadWin32Thread;
        }
        if ( v49 )
          v51 = *(_QWORD *)(v49 + 80);
        else
          v51 = 0LL;
        if ( v51 )
        {
          v52 = KeGetCurrentThread();
          if ( !v52 )
          {
            v53 = WdLogNewEntry5_WdAssertion(v45);
            *(_QWORD *)(v53 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v53);
          }
          v55 = PsGetCurrentProcessSessionId(v45);
          if ( !v55 || (unsigned int)PsGetThreadSessionId(v52) != v55 )
            goto LABEL_81;
          v57 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v58 = (__int64 *)PsGetThreadWin32Thread(v52);
            if ( v58 )
              v57 = *v58;
          }
          if ( v57 )
            v59 = *(_QWORD *)(v57 + 80);
          else
LABEL_81:
            v59 = 0LL;
          if ( *(_DWORD *)(v59 + 136) )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v54, v56);
            v60[3] = 275LL;
            v60[4] = 25LL;
            v60[5] = *(int *)(v59 + 136);
            v60[6] = 0LL;
            v60[7] = 0LL;
            WdLogEvent5_WdCriticalError(v60);
          }
        }
      }
    }
    v41 = v96;
    if ( !v96 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v61[3] = -1073741811LL;
      v61[4] = v17->hAllocation;
      v61[5] = v11;
LABEL_86:
      WdLogEvent5_WdError(v61);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v96);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v98);
LABEL_145:
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v95);
      goto LABEL_146;
    }
    Count = v96[3].Count;
    if ( !Count && !*(_BYTE *)(v24 + 1693) )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v61[3] = -1073741811LL;
      v61[4] = v41;
      goto LABEL_86;
    }
    if ( v96[1].Count != v24 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v61[3] = -1073741811LL;
      v61[4] = v41;
      v61[5] = v97;
      goto LABEL_86;
    }
  }
  v62 = *(struct _EX_RUNDOWN_REF **)(v24 + 16);
  v63 = (_BYTE *)v62[2].Count;
  v100 = v62;
  if ( v63[185] )
  {
    if ( v41 )
      v67 = v41[12].Count;
    else
      v67 = 0;
    v68 = *((_DWORD *)v97 + 7);
    HostProcess = DXGPROCESS::GetHostProcess(v11);
    v65 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v63 + 3888),
            HostProcess,
            0LL,
            v68,
            v67,
            v17);
    v3 = v103;
  }
  else
  {
    v64 = *(_BYTE *)(v24 + 1695)
       || *(_DWORD *)(v24 + 328) == 2 && (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)v63) >= 2000;
    LOBYTE(Timeout) = v64;
    v65 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, ULONG_PTR, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v62[66].Count + 8) + 792LL))(
            v62[67].Count,
            *((_QWORD *)v97 + 4),
            Count,
            v17,
            Timeout,
            -2);
  }
  v70 = v65;
  if ( v65 >= 0 && v94 )
  {
    v71 = (_QWORD *)(v3 + 88);
    if ( v3 + 88 >= MmUserProbeAddress )
      v71 = (_QWORD *)MmUserProbeAddress;
    *v71 = v17->VirtualAddress;
    v72 = (_QWORD *)(v3 + 96);
    v66 = MmUserProbeAddress;
    if ( v3 + 96 >= MmUserProbeAddress )
      v72 = (_QWORD *)MmUserProbeAddress;
    *v72 = v17->PagingFenceValue;
  }
  if ( v41 )
    ExReleaseRundownProtection(v41 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v66) + 203) )
  {
    v74 = KeGetCurrentThread();
    if ( !v74 )
    {
      v75 = WdLogNewEntry5_WdAssertion(v73);
      *(_QWORD *)(v75 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v75);
    }
    v76 = PsGetCurrentProcessSessionId(v73);
    if ( v76 && (unsigned int)PsGetThreadSessionId(v74) == v76 )
    {
      v77 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v79 = (__int64 *)PsGetThreadWin32Thread(v74);
        if ( v79 )
          v77 = *v79;
      }
      if ( v77 )
        v80 = *(_QWORD *)(v77 + 80);
      else
        v80 = 0LL;
      if ( v80 )
      {
        v81 = KeGetCurrentThread();
        if ( !v81 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v78);
          *(_QWORD *)(v82 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v82);
        }
        v85 = PsGetCurrentProcessSessionId(v78);
        if ( !v85 || (unsigned int)PsGetThreadSessionId(v81) != v85 )
          goto LABEL_133;
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
LABEL_133:
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
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104);
  if ( v99 )
    ExReleasePushLockSharedEx(v24 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v24 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v95);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v91, &EventProfilerExit, v92, 2100);
  return v70;
}

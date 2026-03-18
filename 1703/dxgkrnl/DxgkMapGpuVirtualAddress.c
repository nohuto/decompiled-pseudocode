/*
 * XREFs of DxgkMapGpuVirtualAddress @ 0x1C0092C50
 * Callers:
 *     ?VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DE60 (-VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0002BF8 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0030B80 (-VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRES.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkMapGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r12
  bool v4; // bl
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r14
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v11; // r15
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 Value; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // ebx
  struct _KEVENT *v21; // rdi
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGALLOCATION *v28; // rbx
  __int64 v29; // r8
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _EX_RUNDOWN_REF *v34; // rcx
  _DWORD *v35; // rax
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // ebx
  __int64 v38; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  struct _KTHREAD *v43; // rdi
  int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 *v47; // rax
  __int64 v48; // rbx
  struct _EX_RUNDOWN_REF *v49; // r9
  DXGADAPTER *Count; // r13
  bool v51; // r10
  int v52; // eax
  ULONG64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // r14d
  _QWORD *v58; // rcx
  _DWORD *v59; // rax
  struct _KTHREAD *v60; // rdi
  int v61; // ebx
  __int64 v62; // rbx
  __int64 *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  struct _KTHREAD *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // ebx
  __int64 v73; // r8
  __int64 v74; // rbx
  __int64 *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r8
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  struct _KEVENT *v95; // rcx
  unsigned __int8 v96; // bl
  __int64 v97; // r8
  unsigned __int8 v98; // bl
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  unsigned int v109; // r12d
  int v110; // edi
  int HostProcess; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  int Timeout; // [rsp+20h] [rbp-198h]
  bool v121; // [rsp+40h] [rbp-178h]
  char v122[8]; // [rsp+48h] [rbp-170h] BYREF
  struct DXGALLOCATION *v123; // [rsp+50h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v124; // [rsp+58h] [rbp-160h] BYREF
  __int64 v125; // [rsp+60h] [rbp-158h] BYREF
  int v126; // [rsp+68h] [rbp-150h]
  struct _EX_RUNDOWN_REF *v127; // [rsp+70h] [rbp-148h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v128; // [rsp+78h] [rbp-140h]
  struct DXGPROCESS *v129; // [rsp+80h] [rbp-138h]
  ULONG64 v130; // [rsp+88h] [rbp-130h]
  char v131[8]; // [rsp+90h] [rbp-128h] BYREF
  _BYTE v132[16]; // [rsp+98h] [rbp-120h] BYREF
  DXGADAPTER *v133; // [rsp+A8h] [rbp-110h]
  char v134; // [rsp+B0h] [rbp-108h]
  _BYTE v135[16]; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v136; // [rsp+C8h] [rbp-F0h]
  __int64 v137; // [rsp+D8h] [rbp-E0h]
  char v138; // [rsp+E0h] [rbp-D8h]
  struct D3DDDI_MAPGPUVIRTUALADDRESS v139; // [rsp+110h] [rbp-A8h] BYREF

  v3 = a1;
  v130 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2100);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v121 = v4;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  v129 = v10;
  if ( !v10 )
  {
    v84 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v84 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v84);
LABEL_100:
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_148;
  }
  if ( v4 )
  {
    v11 = &v139;
    v128 = &v139;
    v12 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    if ( v3 >= MmUserProbeAddress )
      v12 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v139 = *v12;
  }
  else
  {
    v11 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
    v128 = (struct D3DDDI_MAPGPUVIRTUALADDRESS *)v3;
  }
  v124 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v122, v11->hPagingQueue, v10, &v124);
  if ( !v124 )
  {
    v91 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v91 + 24) = v11->hPagingQueue;
    *(_QWORD *)(v91 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v91);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v122, v92, v93, v94);
    goto LABEL_100;
  }
  Value = v11->Protection.Value;
  if ( (Value & 0x10) != 0 || Value >= 0x20 )
  {
    v116 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v116 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v116);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v122, v117, v118, v119);
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_148:
    Template_q(v85, &EventProfilerExit, v86, 2100);
    return 3221225485LL;
  }
  v18 = *((_QWORD *)v124 + 2);
  v125 = v18;
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
  if ( *(int *)(v19 + 1944) >= 0x2000 || *(_BYTE *)(v19 + 2228) )
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
  else
    v20 = 0;
  v126 = v20;
  v21 = *(struct _KEVENT **)(v18 + 16);
  if ( *(_DWORD *)(v18 + 328) == 2 )
  {
    if ( KeReadStateEvent(v21 + 4) )
      goto LABEL_16;
    v95 = v21 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v21 + 3) )
      goto LABEL_16;
    v95 = v21 + 3;
  }
  KeWaitForSingleObject(v95, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( v20 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v18 + 112, 0LL) )
      goto LABEL_18;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL));
    v98 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 112));
    if ( !v98 )
      goto LABEL_119;
    goto LABEL_118;
  }
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 0) )
    goto LABEL_18;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL));
  v96 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v97, 40);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 1u);
  if ( v96 )
LABEL_118:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
LABEL_119:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v131, v18, 0LL, v22, 0);
  if ( v134 )
  {
    v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
    v99[3] = 275LL;
    v99[4] = 4LL;
    v99[5] = v132;
    v99[6] = 0LL;
    v99[7] = 0LL;
    WdLogEvent5_WdCriticalError(v99);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v133 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v133 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v133 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v133);
  }
  v134 = 1;
  if ( *(_DWORD *)(v137 + 408) != 1 )
    goto LABEL_126;
  if ( v138 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v135);
    if ( *(_DWORD *)(v136 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v135);
LABEL_126:
      COREACCESS::Release((COREACCESS *)v132);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v131);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v122, v100, v101, v102);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v103, &EventProfilerExit, v104, 2100);
      return 3221226166LL;
    }
  }
  v28 = 0LL;
  v123 = 0LL;
  v29 = 0LL;
  if ( (*(_BYTE *)&v11->Protection.0 & 0xC) == 0 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                (__int64)v10,
                                                (DXGALLOCATIONREFERENCE *)&v127,
                                                v11->hAllocation);
    DXGALLOCATIONREFERENCE::MoveAssign(&v123, AllocationSafe);
    v34 = v127;
    if ( v127 )
      ExReleaseRundownProtection(v127 + 11);
    v35 = DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v105 = WdLogNewEntry5_WdAssertion(v34, v31, v32, v33);
      *(_QWORD *)(v105 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v105);
      v35 = DXGGLOBAL::m_pGlobal;
    }
    if ( v35[203] )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v106 = WdLogNewEntry5_WdAssertion(v34, v31, v32, v33);
        *(_QWORD *)(v106 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v106);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v38 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v38 = *ThreadWin32Thread;
        if ( v38 )
          v42 = *(_QWORD *)(v38 + 80);
        else
          v42 = 0LL;
        if ( v42 )
        {
          v43 = KeGetCurrentThread();
          if ( !v43 )
          {
            v107 = WdLogNewEntry5_WdAssertion(v34, v31, v40, v41);
            *(_QWORD *)(v107 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v107);
          }
          v44 = PsGetCurrentProcessSessionId();
          if ( !v44 || (unsigned int)PsGetThreadSessionId(v43) != v44 )
            goto LABEL_131;
          v46 = 0LL;
          v47 = (__int64 *)PsGetThreadWin32Thread(v43);
          if ( v47 )
            v46 = *v47;
          if ( v46 )
            v48 = *(_QWORD *)(v46 + 80);
          else
LABEL_131:
            v48 = 0LL;
          if ( *(_DWORD *)(v48 + 136) )
          {
            v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v31, v45);
            v108[3] = 275LL;
            v108[4] = 25LL;
            v108[5] = *(int *)(v48 + 136);
            v108[6] = 0LL;
            v108[7] = 0LL;
            WdLogEvent5_WdCriticalError(v108);
          }
        }
      }
    }
    v28 = v123;
    if ( !v123 )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdError(v34, v31);
      v87[3] = -1073741811LL;
      v87[4] = v11->hAllocation;
      v87[5] = v10;
LABEL_99:
      WdLogEvent5_WdError(v87);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v123);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v131);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v125);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v122, v88, v89, v90);
      goto LABEL_100;
    }
    v29 = *((_QWORD *)v123 + 3);
    if ( !v29 && !*(_BYTE *)(v18 + 1821) )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdError(v34, v31);
      v87[3] = -1073741811LL;
      v87[4] = v28;
      goto LABEL_99;
    }
    if ( *((_QWORD *)v123 + 1) != v18 )
    {
      v87 = (_QWORD *)WdLogNewEntry5_WdError(v34, v31);
      v87[3] = -1073741811LL;
      v87[4] = v28;
      v87[5] = v124;
      goto LABEL_99;
    }
  }
  v49 = *(struct _EX_RUNDOWN_REF **)(v18 + 16);
  Count = (DXGADAPTER *)v49[2].Count;
  v127 = v49;
  if ( *((_BYTE *)Count + 186) )
  {
    if ( v28 )
      v109 = *((_DWORD *)v28 + 24);
    else
      v109 = 0;
    v110 = *((_DWORD *)v124 + 7);
    HostProcess = DXGPROCESS::GetHostProcess(v10);
    v52 = DXGADAPTER::VmBusSendMapGpuVirtualAddress(Count, HostProcess, 0LL, v110, v109, v11);
    v3 = v130;
  }
  else
  {
    v51 = *(_BYTE *)(v18 + 1823) || *(_DWORD *)(v18 + 328) == 2 && (int)DXGADAPTER::GetDriverVersion(Count) >= 2000;
    LOBYTE(Timeout) = v51;
    v52 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v49[54].Count + 8) + 792LL))(
            v49[55].Count,
            *((_QWORD *)v124 + 4),
            v29,
            v11,
            Timeout,
            -2);
  }
  v57 = v52;
  if ( v52 >= 0 && v121 )
  {
    v58 = (_QWORD *)(v3 + 88);
    if ( v3 + 88 >= MmUserProbeAddress )
      v58 = (_QWORD *)MmUserProbeAddress;
    *v58 = v11->VirtualAddress;
    v54 = (_QWORD *)(v3 + 96);
    v53 = MmUserProbeAddress;
    if ( v3 + 96 >= MmUserProbeAddress )
      v54 = (_QWORD *)MmUserProbeAddress;
    *v54 = v11->PagingFenceValue;
  }
  if ( v28 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v28 + 11);
  v59 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v112 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
    *(_QWORD *)(v112 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v112);
    v59 = DXGGLOBAL::m_pGlobal;
  }
  if ( v59[203] )
  {
    v60 = KeGetCurrentThread();
    if ( !v60 )
    {
      v113 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
      *(_QWORD *)(v113 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v113);
    }
    v61 = PsGetCurrentProcessSessionId();
    if ( v61 && (unsigned int)PsGetThreadSessionId(v60) == v61 )
    {
      v62 = 0LL;
      v63 = (__int64 *)PsGetThreadWin32Thread(v60);
      if ( v63 )
        v62 = *v63;
      if ( v62 )
        v68 = *(_QWORD *)(v62 + 80);
      else
        v68 = 0LL;
      if ( v68 )
      {
        v69 = KeGetCurrentThread();
        if ( !v69 )
        {
          v114 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
          *(_QWORD *)(v114 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v114);
        }
        v72 = PsGetCurrentProcessSessionId();
        if ( !v72 || (unsigned int)PsGetThreadSessionId(v69) != v72 )
          goto LABEL_92;
        v74 = 0LL;
        v75 = (__int64 *)PsGetThreadWin32Thread(v69);
        if ( v75 )
          v74 = *v75;
        if ( v74 )
          v76 = *(_QWORD *)(v74 + 80);
        else
LABEL_92:
          v76 = 0LL;
        if ( *(_DWORD *)(v76 + 136) )
        {
          v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v71, v70, v73);
          v115[3] = 275LL;
          v115[4] = 25LL;
          v115[5] = *(int *)(v76 + 136);
          v115[6] = 0LL;
          v115[7] = 0LL;
          WdLogEvent5_WdCriticalError(v115);
        }
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v131);
  if ( v126 )
    ExReleasePushLockSharedEx(v18 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v18 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v122, v77, v78, v79);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v80, &EventProfilerExit, v81, 2100);
  return v57;
}

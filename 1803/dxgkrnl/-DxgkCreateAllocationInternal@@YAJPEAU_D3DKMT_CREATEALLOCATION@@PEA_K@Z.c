/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00E5230
 * Callers:
 *     DxgkCreateAllocation @ 0x1C00E31D0 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D240 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E2EC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00FA1A0 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C016B13C (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C016BAC4 (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(struct _D3DKMT_CREATEALLOCATION *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGDEVICE *v8; // r13
  __int64 v9; // rcx
  unsigned __int8 v10; // r12
  _D3DKMT_CREATEALLOCATION *v11; // rcx
  __int64 hDevice; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v16; // rsi
  __int64 NumAllocations; // rdi
  char Flags; // bl
  int v19; // r15d
  __int64 v20; // rcx
  int v21; // ebx
  struct _KEVENT *v22; // rdi
  volatile signed __int64 *v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  SIZE_T v29; // rax
  __int64 v30; // rcx
  struct DXGDEVICE *v31; // r12
  __int64 v32; // rax
  OUTPUTDUPL_MGR *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  DXGSESSIONMGR *v38; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v41; // rax
  OUTPUTDUPL_MGR *v42; // rcx
  DXGGLOBAL *Global; // rax
  void *v44; // rdi
  unsigned int v45; // eax
  unsigned __int8 v46; // r15
  unsigned int v47; // esi
  __int64 v48; // rdx
  _DWORD *v49; // rcx
  _DWORD *v50; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *v51; // rcx
  struct DXGADAPTER *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int8 v56; // bl
  __int64 v57; // r8
  struct DXGDEVICE **ThreadProperty; // rax
  struct DXGDEVICE **v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  struct DXGDEVICE *v65; // rax
  _QWORD *v66; // rax
  int v67; // r12d
  __int64 v68; // rcx
  __int64 v69; // r8
  struct _KEVENT *v70; // rcx
  unsigned __int8 v71; // bl
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v85; // edx
  __int64 v86; // rcx
  __int64 v87; // rax
  int StandardAllocationDriverData; // edi
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rdx
  struct DXGDEVICE *v92; // [rsp+88h] [rbp-1D0h] BYREF
  unsigned __int8 v93; // [rsp+90h] [rbp-1C8h]
  int v94; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 *v96; // [rsp+A8h] [rbp-1B0h]
  void *v97; // [rsp+B0h] [rbp-1A8h]
  struct DXGDEVICE *v98[2]; // [rsp+B8h] [rbp-1A0h] BYREF
  struct DXGALLOCATION **v99; // [rsp+C8h] [rbp-190h]
  unsigned int v100; // [rsp+D0h] [rbp-188h] BYREF
  unsigned int v101[2]; // [rsp+D8h] [rbp-180h]
  void *v102; // [rsp+E0h] [rbp-178h] BYREF
  struct DXGDEVICE *v103; // [rsp+E8h] [rbp-170h] BYREF
  int v104; // [rsp+F0h] [rbp-168h]
  _D3DKMT_CREATEALLOCATION v105; // [rsp+100h] [rbp-158h] BYREF
  __int64 v106; // [rsp+150h] [rbp-108h] BYREF
  struct DXGADAPTER *v107; // [rsp+158h] [rbp-100h]
  char v108; // [rsp+160h] [rbp-F8h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v109; // [rsp+168h] [rbp-F0h] BYREF
  char v110[8]; // [rsp+180h] [rbp-D8h] BYREF
  struct _KTHREAD **v111[2]; // [rsp+188h] [rbp-D0h] BYREF
  DXGADAPTER *v112; // [rsp+198h] [rbp-C0h]
  char v113; // [rsp+1A0h] [rbp-B8h]
  struct _KTHREAD **v114[5]; // [rsp+1A8h] [rbp-B0h] BYREF
  char v115; // [rsp+1D0h] [rbp-88h]
  __int64 v116[3]; // [rsp+1E0h] [rbp-78h] BYREF
  int Size; // [rsp+210h] [rbp-48h] BYREF
  __int64 v118; // [rsp+214h] [rbp-44h]
  int v119; // [rsp+21Ch] [rbp-3Ch]
  __int64 v120; // [rsp+220h] [rbp-38h]

  v96 = a2;
  *(_QWORD *)v101 = a1;
  v95 = 0LL;
  v94 = 2003;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2003);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v94, 2003);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGDEVICE **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v59 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v59;
      }
    }
  }
  v98[1] = v8;
  v10 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v93 = v10;
  if ( !v8 )
  {
    v60 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v60 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v60);
    goto LABEL_88;
  }
  memset(&v109, 0, sizeof(v109));
  if ( v10 )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v105 = *v11;
  }
  else
  {
    v105 = *a1;
  }
  hDevice = v105.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v92, v105.hDevice, (struct _KTHREAD **)v8, v98);
  v16 = v98[0];
  if ( !v98[0] )
  {
    v63 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v63 + 24) = hDevice;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
    goto LABEL_95;
  }
  NumAllocations = v105.NumAllocations;
  if ( v105.NumAllocations > 0x682AA )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v66[3] = v16;
    v66[4] = NumAllocations;
    v66[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v66);
LABEL_95:
    v65 = v92;
    if ( v92 )
      goto LABEL_96;
    goto LABEL_88;
  }
  Flags = (char)v105.Flags;
  if ( (*((_BYTE *)v8 + 323) & 8) == 0
    && ((*(_BYTE *)&v105.Flags & 8) != 0
     || (*(_WORD *)&v105.Flags & 0x100) != 0
     || (*(_WORD *)&v105.Flags & 0x1000) != 0
     || (*(_WORD *)&v105.Flags & 0x200) != 0)
    || (*(_BYTE *)&v105.Flags & 0x20) != 0 && (*(_DWORD *)&v105.Flags & 0x10000) == 0 && (*((_BYTE *)v8 + 323) & 8) == 0
    || (*(_DWORD *)&v105.Flags & 0x20000) != 0 && (*(_DWORD *)&v105.Flags & 0x10000) == 0 )
  {
    goto LABEL_94;
  }
  v19 = HIWORD(*(_DWORD *)&v105.Flags) & 1;
  if ( v19 )
  {
    v67 = ValidateStandardAllocationParams(&v105, &v109, v10);
    if ( v67 < 0 )
    {
      if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v68, &EventProfilerExit, v69, v94);
      return (unsigned int)v67;
    }
  }
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 || !v105.hResource && !(_DWORD)NumAllocations )
  {
LABEL_94:
    v64 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v64 + 24) = v16;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v64);
    goto LABEL_95;
  }
  v103 = v16;
  v20 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  if ( *(int *)(v20 + 2104) >= 0x2000 || *(_BYTE *)(v20 + 2396) )
    v21 = *((_DWORD *)DXGGLOBAL::GetGlobal(v20) + 223);
  else
    v21 = 0;
  v104 = v21;
  v22 = (struct _KEVENT *)*((_QWORD *)v16 + 2);
  if ( *((_DWORD *)v16 + 82) == 2 )
  {
    if ( KeReadStateEvent(v22 + 4) )
      goto LABEL_26;
    v70 = v22 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v22 + 3) )
      goto LABEL_26;
    v70 = v22 + 3;
  }
  KeWaitForSingleObject(v70, Executive, 0, 0, 0LL);
LABEL_26:
  KeEnterCriticalRegion();
  if ( v21 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v16 + 112, 0LL) )
      goto LABEL_28;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 96LL));
    v71 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v16 + 112));
    if ( !v71 )
      goto LABEL_81;
    goto LABEL_117;
  }
  if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 13), 0) )
    goto LABEL_28;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 96LL));
  v56 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v57, 40);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v16 + 13), 1u);
  if ( v56 )
LABEL_117:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
LABEL_81:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_28:
  v23 = *(volatile signed __int64 **)(*((_QWORD *)v16 + 2) + 16LL);
  v107 = (struct DXGADAPTER *)v23;
  _InterlockedIncrement64(v23 + 3);
  v106 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v23 + 15, 0LL);
  v108 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, (__int64)v98[0], 2, v24, 0);
  if ( v113 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25);
    v72[3] = 275LL;
    v72[4] = 4LL;
    v72[5] = v111;
    v72[6] = 0LL;
    v72[7] = 0LL;
    WdLogEvent5_WdCriticalError(v72);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v112 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v112 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v112 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v112);
  }
  v113 = 1;
  if ( *((_DWORD *)v114[4] + 106) != 1 )
    goto LABEL_124;
  if ( v115 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v114);
    if ( *((_DWORD *)v114[2] + 44) != 1 )
    {
      COREACCESS::Release(v114);
LABEL_124:
      COREACCESS::Release(v111);
      v76 = WdLogNewEntry5_WdWarning(v74, v73, v75);
      *(struct DXGDEVICE **)(v76 + 24) = v98[0];
      *(_QWORD *)(v76 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v76);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v103);
      if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v77, &EventProfilerExit, v78, v94);
      return 3221226166LL;
    }
  }
  v28 = v105.NumAllocations;
  v29 = 8LL * v105.NumAllocations;
  if ( !is_mul_ok(v105.NumAllocations, 8uLL) )
    v29 = -1LL;
  v97 = operator new[](v29, 0x4B677844u, PagedPool);
  if ( v97 )
  {
    v31 = v98[0];
    v32 = *((_QWORD *)v98[0] + 211);
    if ( v32 )
    {
      v99 = *(struct DXGALLOCATION ***)(v32 + 2456);
      v33 = v99[13];
      if ( v33 )
      {
        if ( *(_QWORD *)v33 )
        {
          v34 = *(_QWORD *)(*(_QWORD *)v33 + 16LL);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v34 + 160)
            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 144)) )
          {
            v82 = WdLogNewEntry5_WdAssertion(v35);
            *(_QWORD *)(v82 + 24) = 1474LL;
            WdLogEvent5_WdAssertion(v82);
          }
          v31 = v98[0];
        }
        if ( !*((_DWORD *)v31 + 18) )
          ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v31 + 13));
        OUTPUTDUPL_MGR::ProcessPendingDestroy(v33, v31, 0);
        v38 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v36) + 74);
        if ( v38 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v37);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v38,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
        {
          v41 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
          if ( v41 )
          {
            v42 = *(OUTPUTDUPL_MGR **)(v41 + 40);
            if ( v42 )
              OUTPUTDUPL_MGR::ProcessPendingDestroy(v42, v31, 0);
          }
          else
          {
            v84 = WdLogNewEntry5_WdError(v37);
            *(_QWORD *)(v84 + 24) = 3666LL;
            WdLogEvent5_WdError(v84);
          }
        }
        else
        {
          v83 = WdLogNewEntry5_WdError(v37);
          *(_QWORD *)(v83 + 24) = 3659LL;
          WdLogEvent5_WdError(v83);
        }
      }
      v116[0] = *(_QWORD *)((char *)v99[2] + 268);
      v116[1] = (__int64)lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_;
      v116[2] = (__int64)v31;
      Global = DXGGLOBAL::GetGlobal(v116[0]);
      DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        Global,
        lambda_de3a9c4ca82130b89abd09a8dda67964_::_lambda_invoker_cdecl_,
        v116);
    }
    v105.hGlobalShare = 0;
    v105.hDevice = 0;
    v44 = 0LL;
    v102 = 0LL;
    v45 = 0;
    v100 = 0;
    if ( !v19 )
      goto LABEL_55;
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL)) < 2000 )
    {
      v87 = WdLogNewEntry5_WdError(v86);
      *(_QWORD *)(v87 + 24) = v31;
      *(_QWORD *)(v87 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v87);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v103);
      v65 = v92;
      if ( v92 )
      {
LABEL_96:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      }
LABEL_88:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v61, &EventProfilerExit, v62, v94);
      return 3221225485LL;
    }
    v120 = 0LL;
    Size = v109.ExistingHeapData.Size;
    v118 = 1LL;
    v119 = 7;
    StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v31, v85, &Size, &v100, &v102);
    if ( StandardAllocationDriverData >= 0 )
    {
      v44 = v102;
      v45 = v100;
LABEL_55:
      v46 = v93;
      v47 = DXGDEVICE::CreateAllocation(
              v31,
              &v105,
              v93,
              0,
              0LL,
              0LL,
              (struct COREDEVICEACCESS *)v110,
              0,
              0LL,
              0LL,
              0LL,
              v96,
              &v109,
              v44,
              v45);
      if ( v46 )
      {
        v48 = *(_QWORD *)v101;
        v49 = (_DWORD *)(*(_QWORD *)v101 + 4LL);
        if ( *(_QWORD *)v101 + 4LL >= MmUserProbeAddress )
          v49 = (_DWORD *)MmUserProbeAddress;
        *v49 = v105.hResource;
        v50 = (_DWORD *)(v48 + 8);
        if ( v48 + 8 >= MmUserProbeAddress )
          v50 = (_DWORD *)MmUserProbeAddress;
        *v50 = v105.hGlobalShare;
        v51 = (D3DKMT_CREATEALLOCATIONFLAGS *)(v48 + 56);
        if ( v48 + 56 >= MmUserProbeAddress )
          v51 = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
        *v51 = v105.Flags;
      }
      else
      {
        v91 = *(_QWORD *)v101;
        *(_DWORD *)(*(_QWORD *)v101 + 4LL) = v105.hResource;
        *(_DWORD *)(v91 + 8) = v105.hGlobalShare;
        *(D3DKMT_CREATEALLOCATIONFLAGS *)(v91 + 56) = v105.Flags;
      }
      operator delete[](v97);
      operator delete[](v44);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
      v52 = v107;
      ExReleasePushLockSharedEx((char *)v107 + 120, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v107 + 2), v107);
      if ( v104 )
        ExReleasePushLockSharedEx((char *)v98[0] + 112, 0LL);
      else
        ExReleaseResourceLite(*((PERESOURCE *)v98[0] + 13));
      KeLeaveCriticalRegion();
      if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v53, &EventProfilerExit, v54, v94);
      return v47;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v103);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v89, &EventProfilerExit, v90, v94);
    return (unsigned int)StandardAllocationDriverData;
  }
  else
  {
    v79 = WdLogNewEntry5_WdLowResource(v30);
    *(struct DXGDEVICE **)(v79 + 24) = v98[0];
    *(_QWORD *)(v79 + 32) = v28;
    *(_QWORD *)(v79 + 40) = -1073741801LL;
    WdLogEvent5_WdLowResource(v79);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v106);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v103);
    if ( v92 && _InterlockedExchangeAdd64((volatile signed __int64 *)v92 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v92 + 2), v92);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v80, &EventProfilerExit, v81, v94);
    return 3221225495LL;
  }
}

/*
 * XREFs of DxgkUnlock2 @ 0x1C00BEED0
 * Callers:
 *     ?VmBusUnlock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00335E0 (-VmBusUnlock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C000E1F0 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016B4B8 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock2(unsigned int *a1)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r14
  struct _KTHREAD ***ThreadProperty; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  struct _KEVENT *v23; // r12
  struct _KEVENT *v24; // rcx
  __int64 v25; // r9
  unsigned __int8 v26; // bl
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // [rsp+30h] [rbp-A8h] BYREF
  struct DXGDEVICE *v52; // [rsp+38h] [rbp-A0h] BYREF
  int v53; // [rsp+40h] [rbp-98h]
  _BYTE v54[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v55[16]; // [rsp+58h] [rbp-80h] BYREF
  DXGADAPTER *v56; // [rsp+68h] [rbp-70h]
  char v57; // [rsp+70h] [rbp-68h]
  _BYTE v58[16]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v59; // [rsp+88h] [rbp-50h]
  __int64 v60; // [rsp+98h] [rbp-40h]
  char v61; // [rsp+A0h] [rbp-38h]
  struct DXGALLOCATION *v62; // [rsp+E8h] [rbp+10h] BYREF
  char v63; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGDEVICE *v64; // [rsp+F8h] [rbp+20h] BYREF

  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v4, 2104);
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  if ( !v10 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_10:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v14, 2104);
    return 3221225485LL;
  }
  v16 = (unsigned int *)&v51;
  if ( v3 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (unsigned int *)MmUserProbeAddress;
    v51 = *(_QWORD *)a1;
  }
  else
  {
    v16 = a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63, *v16, v10, &v64);
  v19 = v64;
  if ( !v64 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = *v16;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63);
    goto LABEL_10;
  }
  v52 = v64;
  v21 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
  if ( *(int *)(v21 + 1944) >= 0x2000 || *(_BYTE *)(v21 + 2228) )
    v22 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
  else
    v22 = 0;
  v53 = v22;
  v23 = (struct _KEVENT *)*((_QWORD *)v19 + 2);
  if ( *((_DWORD *)v19 + 82) == 2 )
  {
    if ( KeReadStateEvent(v23 + 4) )
      goto LABEL_31;
    v24 = v23 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v23 + 3) )
      goto LABEL_31;
    v24 = v23 + 3;
  }
  KeWaitForSingleObject(v24, Executive, 0, 0, 0LL);
LABEL_31:
  KeEnterCriticalRegion();
  if ( v22 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v19 + 112, 0LL) )
      goto LABEL_42;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL));
    v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v19 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 13), 0) )
      goto LABEL_42;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL));
    v26 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v27, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v19 + 13), 1u);
  }
  if ( v26 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v19 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_42:
  v28 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  if ( *(_BYTE *)(v28 + 186) )
  {
    LODWORD(v29) = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened((struct VMBCHANNEL__ *)v28);
    goto LABEL_44;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v19, 0LL, v25, 0);
  if ( v57 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v34);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v55;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v56 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v56 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v36, &EventBlockThread, v37, 72);
      KeWaitForSingleObject((char *)v56 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v56);
  }
  v57 = 1;
  if ( *(_DWORD *)(v60 + 408) != 1 )
    goto LABEL_61;
  if ( v61 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v58);
    if ( *(_DWORD *)(v59 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v58);
LABEL_61:
      COREACCESS::Release((COREACCESS *)v55);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v52);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v38, &EventProfilerExit, v39, 2104);
      return 3221226166LL;
    }
  }
  DXGPROCESS::GetAllocationSafe((__int64)v10, (DXGALLOCATIONREFERENCE *)&v62, v16[1]);
  if ( !v62 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, 0LL, v41, v42);
    v43[3] = v16[1];
LABEL_67:
    WdLogEvent5_WdWarning(v43);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v52);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63);
    goto LABEL_10;
  }
  v44 = *(_QWORD *)(*((_QWORD *)v62 + 1) + 16LL);
  if ( *(_QWORD *)(v44 + 16) != *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v62, v41, v42);
    v43[3] = v64;
    v43[4] = v62;
    v43[5] = -1073741811LL;
    goto LABEL_67;
  }
  if ( !*((_QWORD *)v62 + 3) )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v62, v41, v42);
    v43[3] = v16[1];
    v43[4] = v62;
    goto LABEL_67;
  }
  v45 = DXGDEVICE::Unlock2(v64, v62, 1);
  v29 = v45;
  if ( v45 < 0 )
  {
    v48 = WdLogNewEntry5_WdError(v47, v46);
    *(_QWORD *)(v48 + 24) = v62;
    *(_QWORD *)(v48 + 32) = v29;
    WdLogEvent5_WdError(v48);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_44:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v52);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v30, &EventProfilerExit, v31, 2104);
    return (unsigned int)v29;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v62);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v52);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v63);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v49, &EventProfilerExit, v50, 2104);
  return 0LL;
}

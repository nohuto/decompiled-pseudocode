/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C00C7C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C000B9A0 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00EAA80 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rbx
  struct _D3DKMT_RECLAIMALLOCATIONS2 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // edi
  struct _KEVENT *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KEVENT *v31; // rcx
  unsigned __int8 v32; // di
  __int64 v33; // r8
  unsigned __int8 v34; // di
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-D0h]
  __int64 v44; // [rsp+40h] [rbp-C8h] BYREF
  int v45; // [rsp+48h] [rbp-C0h]
  struct _D3DKMT_RECLAIMALLOCATIONS2 v46; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v47[8]; // [rsp+80h] [rbp-88h] BYREF
  struct _KTHREAD **v48[2]; // [rsp+88h] [rbp-80h] BYREF
  DXGADAPTER *v49; // [rsp+98h] [rbp-70h]
  char v50; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD **v51[5]; // [rsp+A8h] [rbp-60h] BYREF
  char v52; // [rsp+D0h] [rbp-38h]
  struct DXGPAGINGQUEUE *v53; // [rsp+118h] [rbp+10h] BYREF
  char v54; // [rsp+120h] [rbp+18h] BYREF
  __int64 v55; // [rsp+128h] [rbp+20h]

  v43 = 0LL;
  v42 = 2071;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v26 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v26;
      }
    }
  }
  if ( !v7 )
  {
    v27 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    goto LABEL_35;
  }
  v8 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v46 = *v8;
  v53 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54, v46.hPagingQueue, v7, &v53);
  if ( !v53 )
  {
    v28 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v28 + 24) = v46.hPagingQueue;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54);
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v42);
    return 3221225485LL;
  }
  v12 = *((_QWORD *)v53 + 2);
  v55 = v12;
  v44 = v12;
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL);
  if ( *(int *)(v13 + 2104) >= 0x2000 || *(_BYTE *)(v13 + 2396) )
  {
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 223);
    v45 = v14;
  }
  else
  {
    v14 = 0;
    v45 = 0;
  }
  v15 = *(struct _KEVENT **)(v12 + 16);
  if ( *(_DWORD *)(v12 + 328) == 2 )
  {
    if ( KeReadStateEvent(v15 + 4) )
      goto LABEL_12;
    v31 = v15 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v15 + 3) )
      goto LABEL_12;
    v31 = v15 + 3;
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !v14 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 104), 0) )
      goto LABEL_14;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 96LL));
    v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v33, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v12 + 104), 1u);
    if ( v32 )
      goto LABEL_52;
    goto LABEL_53;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 96LL));
    v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 112));
    if ( v34 )
LABEL_52:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v12 + 16) + 16LL));
LABEL_53:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v12, 0, v16, 0);
  if ( v50 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v35[3] = 275LL;
    v35[4] = 4LL;
    v35[5] = v48;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v49 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v49 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, 72);
      KeWaitForSingleObject((char *)v49 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v49);
  }
  v50 = 1;
  if ( *((_DWORD *)v51[4] + 106) != 1 )
    goto LABEL_60;
  if ( v52 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v51);
    if ( *((_DWORD *)v51[2] + 44) != 1 )
    {
      COREACCESS::Release(v51);
LABEL_60:
      COREACCESS::Release(v48);
      v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v39 + 24) = v12;
      *(_QWORD *)(v39 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v39);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v44);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v40, &EventProfilerExit, v41, v42);
      return 3221226166LL;
    }
  }
  v20 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v12, v53, &v46);
  if ( v20 >= 0 )
  {
    v21 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v21 = (_QWORD *)MmUserProbeAddress;
    *v21 = v46.PagingFenceValue;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  if ( v45 )
    ExReleasePushLockSharedEx(v12 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v42);
  return (unsigned int)v20;
}

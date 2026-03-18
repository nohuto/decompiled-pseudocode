/*
 * XREFs of DxgkReclaimAllocations @ 0x1C009A850
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00EAA80 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  struct _KEVENT *v13; // rsi
  __int64 v14; // r9
  struct DXGDEVICE *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  struct _KEVENT *v26; // rcx
  unsigned __int8 v27; // bl
  __int64 v28; // r8
  unsigned __int8 v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-E0h]
  struct DXGDEVICE *v38; // [rsp+40h] [rbp-D8h] BYREF
  int v39; // [rsp+48h] [rbp-D0h]
  unsigned int v40[4]; // [rsp+50h] [rbp-C8h]
  __int128 v41; // [rsp+60h] [rbp-B8h]
  __int64 v42; // [rsp+70h] [rbp-A8h]
  _D3DKMT_RECLAIMALLOCATIONS2 v43; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE v44[8]; // [rsp+A0h] [rbp-78h] BYREF
  struct _KTHREAD **v45[4]; // [rsp+A8h] [rbp-70h] BYREF
  struct _KTHREAD **v46[5]; // [rsp+C8h] [rbp-50h] BYREF
  char v47; // [rsp+F0h] [rbp-28h]
  struct DXGDEVICE *v48; // [rsp+128h] [rbp+10h] BYREF
  struct DXGDEVICE *v49; // [rsp+130h] [rbp+18h] BYREF

  v3 = a1;
  v37 = 0LL;
  v36 = 2071;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v21 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v21;
      }
    }
  }
  if ( !v7 )
  {
    v22 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_29:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v36);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v40 = *(_OWORD *)v3;
  v41 = *(_OWORD *)(v3 + 16);
  v42 = *(_QWORD *)(v3 + 32);
  v43.hPagingQueue = 0;
  v43.NumAllocations = v42;
  v43.pResources = *(D3DKMT_HANDLE **)&v40[2];
  *(_OWORD *)&v43.HandleList = v41;
  v43.PagingFenceValue = 0LL;
  v8 = v40[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v40[0], v7, &v49);
  v10 = v49;
  if ( !v49 )
  {
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = v8;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_29;
  }
  v38 = v49;
  v11 = *(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL);
  if ( *(int *)(v11 + 2104) >= 0x2000 || *(_BYTE *)(v11 + 2396) )
    v12 = *((_DWORD *)DXGGLOBAL::GetGlobal(v11) + 223);
  else
    v12 = 0;
  v39 = v12;
  v13 = (struct _KEVENT *)*((_QWORD *)v10 + 2);
  if ( *((_DWORD *)v10 + 82) == 2 )
  {
    if ( KeReadStateEvent(v13 + 4) )
      goto LABEL_13;
    v26 = v13 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v13 + 3) )
      goto LABEL_13;
    v26 = v13 + 3;
  }
  KeWaitForSingleObject(v26, Executive, 0, 0, 0LL);
LABEL_13:
  KeEnterCriticalRegion();
  if ( v12 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v10 + 112, 0LL) )
      goto LABEL_15;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
    v29 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v10 + 112));
    if ( !v29 )
    {
LABEL_49:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_15;
    }
LABEL_48:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    goto LABEL_49;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 13), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v28, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v10 + 13), 1u);
    if ( !v27 )
      goto LABEL_49;
    goto LABEL_48;
  }
LABEL_15:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v10, 0, v14, 0);
  COREACCESS::AcquireShared((DXGADAPTER **)v45);
  if ( *((_DWORD *)v46[4] + 106) != 1 )
    goto LABEL_52;
  if ( v47 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v46);
    if ( *((_DWORD *)v46[2] + 44) != 1 )
    {
      COREACCESS::Release(v46);
LABEL_52:
      COREACCESS::Release(v45);
      v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v33 + 24) = v49;
      *(_QWORD *)(v33 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v38);
      if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v34, &EventProfilerExit, v35, v36);
      return 3221226166LL;
    }
  }
  v15 = v49;
  v16 = DXGDEVICE::ReclaimAllocations(v49, 0LL, &v43);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
  if ( v39 )
    ExReleasePushLockSharedEx((char *)v15 + 112, 0LL);
  else
    ExReleaseResourceLite(*((PERESOURCE *)v15 + 13));
  KeLeaveCriticalRegion();
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v36);
  return v16;
}

/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00E5B10
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00D6F60 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D9CCC (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1C00E3170 (DxgkDestroySynchronizationObject.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F0F0 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C01ABE50 (DxgkOpenSyncObjectFromNtHandle.c)
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rdi
  DXGDEVICESYNCOBJECT *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 *ThreadProperty; // rax
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int hSyncObject; // edi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rcx
  DXGGLOBAL *Global; // rax
  struct _KEVENT *v36; // rax
  struct _KEVENT *v37; // r12
  __int64 v38; // r9
  __int64 v39; // r8
  unsigned __int8 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-F0h]
  __int64 v52; // [rsp+40h] [rbp-E8h] BYREF
  int v53; // [rsp+48h] [rbp-E0h]
  _BYTE v54[24]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v55[24]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v56[32]; // [rsp+80h] [rbp-A8h] BYREF
  char v57[8]; // [rsp+A0h] [rbp-88h] BYREF
  DXGADAPTER *v58; // [rsp+A8h] [rbp-80h] BYREF
  DXGADAPTER *v59; // [rsp+C8h] [rbp-60h] BYREF
  char v60; // [rsp+F0h] [rbp-38h]
  unsigned int v61; // [rsp+140h] [rbp+18h]
  __int64 v62; // [rsp+148h] [rbp+20h] BYREF

  v4 = a1;
  v5 = 0LL;
  v51 = 0LL;
  v50 = 2042;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2042);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2042);
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v13 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v13;
      }
    }
  }
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v50);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v61 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v61 = hSyncObject;
  }
  v19 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54, (struct _KTHREAD **)v11);
  v22 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v22 < *(_DWORD *)(v11 + 248)
    && (v21 = *(_QWORD *)(v11 + 232),
        v20 = *(unsigned int *)(v21 + 16LL * v22 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v22 + 8) & 0x60))
    && (v20 & 0x2000) == 0
    && (v20 & 0x1F) != 0
    && (*(_BYTE *)(v21 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
  {
    v23 = *(_QWORD *)(v21 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF));
  }
  else
  {
    v23 = 0LL;
  }
  if ( v23 )
  {
    if ( (*(_BYTE *)(v23 + 84) & 2) == 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v23, v20, v21);
      *(_QWORD *)(v24 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v24);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v50);
      return 3221225506LL;
    }
    v19 = *(_QWORD *)(v23 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v19 + 64));
    hSyncObject = v61;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
  if ( v19 )
  {
    v62 = v19;
    v52 = v19;
    v36 = *(struct _KEVENT **)(v19 + 16);
    v37 = v36 + 4;
    if ( *(_DWORD *)(v19 + 328) != 2 )
      v37 = v36 + 3;
    if ( !KeReadStateEvent(v37) )
      KeWaitForSingleObject(v37, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
      v40 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v39, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 1u);
      if ( v40 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v53 = 1;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, v19, 2, v38, 0);
    COREACCESS::AcquireShared(&v58);
    if ( v60 )
      COREACCESS::AcquireShared(&v59);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v56,
      (struct _KTHREAD **)v11);
    v43 = *(unsigned int *)(v11 + 248);
    if ( v22 < (unsigned int)v43 )
    {
      v44 = *(_QWORD *)(v11 + 232);
      v41 = *(unsigned int *)(v44 + 16LL * v22 + 8);
      v42 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v44 + 16LL * v22 + 8) & 0x60)
        && (v41 & 0x2000) == 0
        && (v41 & 0x1F) != 0 )
      {
        v42 = 2LL * ((hSyncObject >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v44 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
          v5 = *(DXGDEVICESYNCOBJECT **)(v44 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF));
      }
    }
    if ( v5 )
    {
      if ( v22 < (unsigned int)v43 )
      {
        v46 = *(_QWORD *)(v11 + 232);
        v47 = *(_DWORD *)(v46 + 16LL * v22 + 8);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v46 + 16LL * v22 + 8) & 0x60)
          && (v47 & 0x2000) == 0
          && (v47 & 0x1F) != 0 )
        {
          *(_DWORD *)(v46 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v5);
      ExFreePoolWithTag(v5, 0);
    }
    else
    {
      v45 = WdLogNewEntry5_WdWarning(v42, v41, v43);
      *(_QWORD *)(v45 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v45);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v56);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v62);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v55,
      (struct _KTHREAD **)v11);
    v29 = *(unsigned int *)(v11 + 248);
    if ( v22 < (unsigned int)v29 )
    {
      v30 = *(_QWORD *)(v11 + 232);
      v27 = *(unsigned int *)(v30 + 16LL * v22 + 8);
      v28 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v22 + 8) & 0x60)
        && (v27 & 0x2000) == 0
        && (v27 & 0x1F) != 0 )
      {
        v28 = 2LL * ((hSyncObject >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v30 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 8 )
          v5 = *(DXGDEVICESYNCOBJECT **)(v30 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF));
      }
    }
    if ( !v5 )
    {
      v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v31 + 24) = hSyncObject;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
      goto LABEL_10;
    }
    if ( v22 < (unsigned int)v29 )
    {
      v32 = *(_QWORD *)(v11 + 232);
      v33 = *(_DWORD *)(v32 + 16LL * v22 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v32 + 16LL * v22 + 8) & 0x60)
        && (v33 & 0x2000) == 0
        && (v33 & 0x1F) != 0 )
      {
        *(_DWORD *)(v32 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
    Global = DXGGLOBAL::GetGlobal(v34);
    DXGGLOBAL::DestroySyncObject(Global, v5, hSyncObject);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v48, &EventProfilerExit, v49, v50);
  return 0LL;
}

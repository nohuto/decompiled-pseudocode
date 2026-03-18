/*
 * XREFs of ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00A1CA0
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1C00A3050 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00F38C0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192FE0 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C01AFB30 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C01AFF10 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00B03EC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectInternal(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // esi
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int hSyncObject; // ebx
  DXGDEVICESYNCOBJECT *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rcx
  PERESOURCE *Global; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _KEVENT *v37; // r12
  struct _KEVENT *v38; // r12
  __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int8 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // edx
  __int64 v49; // [rsp+30h] [rbp-E8h] BYREF
  int v50; // [rsp+38h] [rbp-E0h]
  _BYTE v51[24]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v53[32]; // [rsp+70h] [rbp-A8h] BYREF
  char v54[8]; // [rsp+90h] [rbp-88h] BYREF
  char v55[32]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v56[96]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v57; // [rsp+130h] [rbp+18h]
  __int64 v58; // [rsp+138h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2042);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_10:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, 2042);
    return 3221225485LL;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v57 = hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v57 = hSyncObject;
  }
  v17 = 0LL;
  v18 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v51, (struct DXGPROCESS *)v9);
  v21 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v21 < *(_DWORD *)(v9 + 240)
    && (v20 = *(_QWORD *)(v9 + 224),
        v19 = *(unsigned int *)(v20 + 16LL * v21 + 8),
        ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v21 + 8) & 0x60))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) != 0
    && (*(_BYTE *)(v20 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
  {
    v22 = *(_QWORD *)(v20 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF));
  }
  else
  {
    v22 = 0LL;
  }
  if ( v22 )
  {
    if ( (*(_BYTE *)(v22 + 84) & 2) == 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v22, v19, v20);
      *(_QWORD *)(v23 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v23);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v24, &EventProfilerExit, v25, 2042);
      return 3221225506LL;
    }
    v18 = *(_QWORD *)(v22 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v18 + 64));
    hSyncObject = v57;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
  if ( v18 )
  {
    v58 = v18;
    v49 = v18;
    v37 = *(struct _KEVENT **)(v18 + 16);
    if ( *(_DWORD *)(v18 + 328) == 2 )
      v38 = v37 + 4;
    else
      v38 = v37 + 3;
    if ( !KeReadStateEvent(v38) )
      KeWaitForSingleObject(v38, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL));
      v41 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v40, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 104), 1u);
      if ( v41 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v50 = 1;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, v18, 2, v39, 0);
    COREACCESS::AcquireShared((COREACCESS *)v55);
    if ( v56[40] )
      COREACCESS::AcquireShared((COREACCESS *)v56);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v53,
      (struct DXGPROCESS *)v9);
    v44 = *(unsigned int *)(v9 + 240);
    if ( v21 < (unsigned int)v44 )
    {
      v45 = *(_QWORD *)(v9 + 224);
      v42 = *(unsigned int *)(v45 + 16LL * v21 + 8);
      v43 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v45 + 16LL * v21 + 8) & 0x60)
        && (v42 & 0x2000) == 0
        && (v42 & 0x1F) != 0 )
      {
        v43 = 2LL * ((hSyncObject >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v45 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
          v17 = *(DXGDEVICESYNCOBJECT **)(v45 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF));
      }
    }
    if ( v17 )
    {
      if ( v21 < (unsigned int)v44 )
      {
        v47 = *(_QWORD *)(v9 + 224);
        v48 = *(_DWORD *)(v47 + 16LL * v21 + 8);
        if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v47 + 16LL * v21 + 8) & 0x60)
          && (v48 & 0x2000) == 0
          && (v48 & 0x1F) != 0 )
        {
          *(_DWORD *)(v47 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v17);
      ExFreePoolWithTag(v17, 0);
    }
    else
    {
      v46 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v46 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v46);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v49);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v58);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v52,
      (struct DXGPROCESS *)v9);
    v28 = *(unsigned int *)(v9 + 240);
    if ( v21 < (unsigned int)v28 )
    {
      v29 = *(_QWORD *)(v9 + 224);
      v26 = *(unsigned int *)(v29 + 16LL * v21 + 8);
      v27 = (hSyncObject >> 25) & 0x60;
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v21 + 8) & 0x60)
        && (v26 & 0x2000) == 0
        && (v26 & 0x1F) != 0 )
      {
        v27 = 2LL * ((hSyncObject >> 6) & 0xFFFFFF);
        if ( (*(_BYTE *)(v29 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 8 )
          v17 = *(DXGDEVICESYNCOBJECT **)(v29 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF));
      }
    }
    if ( !v17 )
    {
      v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v30 + 24) = hSyncObject;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
      goto LABEL_10;
    }
    if ( v21 < (unsigned int)v28 )
    {
      v31 = *(_QWORD *)(v9 + 224);
      v32 = *(_DWORD *)(v31 + 16LL * v21 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v21 + 8) & 0x60)
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        *(_DWORD *)(v31 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v33);
    DXGGLOBAL::DestroySyncObject(Global, v17, hSyncObject);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, 2042);
  return 0LL;
}

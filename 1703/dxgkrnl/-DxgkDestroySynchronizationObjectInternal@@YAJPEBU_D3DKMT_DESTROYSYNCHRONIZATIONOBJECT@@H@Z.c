/*
 * XREFs of ?DxgkDestroySynchronizationObjectInternal@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00D73B0
 * Callers:
 *     ?VmBusDestroySyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D250 (-VmBusDestroySyncObject@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C009F850 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1C00D7980 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00077CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00FF678 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectInternal(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 *ThreadProperty; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int hSyncObject; // r14d
  DXGDEVICESYNCOBJECT *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r15d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  DXGGLOBAL *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  struct _KEVENT *v45; // r12
  struct _KEVENT *v46; // r12
  __int64 v47; // r9
  __int64 v48; // r8
  unsigned __int8 v49; // r12
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // edx
  __int64 v59; // [rsp+30h] [rbp-E8h] BYREF
  int v60; // [rsp+38h] [rbp-E0h]
  _BYTE v61[24]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v62[24]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v63[32]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v64[8]; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v65[32]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v66[96]; // [rsp+B8h] [rbp-60h] BYREF
  D3DKMT_HANDLE v67; // [rsp+130h] [rbp+18h]
  __int64 v68; // [rsp+138h] [rbp+20h] BYREF

  v4 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2042);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v12 = *ThreadProperty;
    }
  }
  if ( !v12 )
  {
    v14 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_10:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v15, &EventProfilerExit, v16, 2042);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    hSyncObject = v4->hSyncObject;
    v67 = v4->hSyncObject;
  }
  else
  {
    hSyncObject = v4->hSyncObject;
    v67 = v4->hSyncObject;
  }
  v19 = 0LL;
  v20 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)v61,
    (struct DXGPROCESS *)v12,
    v10,
    v11);
  v24 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v24 < *(_DWORD *)(v12 + 208)
    && (v22 = *(_QWORD *)(v12 + 192),
        v21 = *(unsigned int *)(v22 + 16LL * v24 + 8),
        ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v24 + 8) & 0x30))
    && (v21 & 0x1000) == 0
    && (v21 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * v24 + 8) & 0xF) == 0xB )
  {
    v25 = *(_QWORD *)(v22 + 16LL * v24);
  }
  else
  {
    v25 = 0LL;
  }
  if ( v25 )
  {
    if ( (*(_BYTE *)(v25 + 84) & 2) == 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v25, v21, v22, v23);
      *(_QWORD *)(v26 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v26);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v27, &EventProfilerExit, v28, 2042);
      return 3221225506LL;
    }
    v20 = *(_QWORD *)(v25 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v20 + 64));
    hSyncObject = v67;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
  if ( v20 )
  {
    v68 = v20;
    v59 = v20;
    v45 = *(struct _KEVENT **)(v20 + 16);
    if ( *(_DWORD *)(v20 + 328) == 2 )
      v46 = v45 + 4;
    else
      v46 = v45 + 3;
    if ( !KeReadStateEvent(v46) )
      KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
      v49 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v48, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 1u);
      if ( v49 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v60 = 1;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, v20, 2LL, v47, 0);
    COREACCESS::AcquireShared((COREACCESS *)v65);
    if ( v66[40] )
      COREACCESS::AcquireShared((COREACCESS *)v66);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v63,
      (struct DXGPROCESS *)v12,
      v50,
      v51);
    if ( v24 < *(_DWORD *)(v12 + 208) )
    {
      v54 = *(_QWORD *)(v12 + 192);
      v52 = *(unsigned int *)(v54 + 16LL * v24 + 8);
      v53 = (hSyncObject >> 26) & 0x30;
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v54 + 16LL * v24 + 8) & 0x30)
        && (v52 & 0x1000) == 0
        && (v52 & 0xF) != 0 )
      {
        v53 = 2LL * v24;
        if ( (*(_BYTE *)(v54 + 16LL * v24 + 8) & 0xF) == 0xB )
          v19 = *(DXGDEVICESYNCOBJECT **)(v54 + 16LL * v24);
      }
    }
    if ( v19 )
    {
      if ( v24 < *(_DWORD *)(v12 + 208) )
      {
        v57 = *(_QWORD *)(v12 + 192);
        v58 = *(_DWORD *)(v57 + 16LL * v24 + 8);
        if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v57 + 16LL * v24 + 8) & 0x30)
          && (v58 & 0x1000) == 0
          && (v58 & 0xF) != 0 )
        {
          *(_DWORD *)(v57 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
      DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(v19);
      ExFreePoolWithTag(v19, 0);
    }
    else
    {
      v56 = WdLogNewEntry5_WdWarning(v53, v52, v54, v55);
      *(_QWORD *)(v56 + 24) = hSyncObject;
      WdLogEvent5_WdWarning(v56);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v59);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v68);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v62,
      (struct DXGPROCESS *)v12,
      v29,
      v30);
    if ( v24 < *(_DWORD *)(v12 + 208) )
    {
      v33 = *(_QWORD *)(v12 + 192);
      v31 = *(unsigned int *)(v33 + 16LL * v24 + 8);
      v32 = (hSyncObject >> 26) & 0x30;
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v33 + 16LL * v24 + 8) & 0x30)
        && (v31 & 0x1000) == 0
        && (v31 & 0xF) != 0 )
      {
        v32 = 2LL * v24;
        if ( (*(_BYTE *)(v33 + 16LL * v24 + 8) & 0xF) == 8 )
          v19 = *(DXGDEVICESYNCOBJECT **)(v33 + 16LL * v24);
      }
    }
    if ( !v19 )
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      *(_QWORD *)(v35 + 24) = hSyncObject;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v35);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
      goto LABEL_10;
    }
    if ( v24 < *(_DWORD *)(v12 + 208) )
    {
      v36 = *(_QWORD *)(v12 + 192);
      v37 = *(_DWORD *)(v36 + 16LL * v24 + 8);
      if ( ((hSyncObject >> 26) & 0x30) == (*(_BYTE *)(v36 + 16LL * v24 + 8) & 0x30)
        && (v37 & 0x1000) == 0
        && (v37 & 0xF) != 0 )
      {
        *(_DWORD *)(v36 + 16LL * ((hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
    v41 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v42 = WdLogNewEntry5_WdAssertion(0LL, v38, v39, v40);
      *(_QWORD *)(v42 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v42);
      v41 = (DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
    }
    DXGGLOBAL::DestroySyncObject(v41, v19, hSyncObject);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v43, &EventProfilerExit, v44, 2042);
  return 0LL;
}

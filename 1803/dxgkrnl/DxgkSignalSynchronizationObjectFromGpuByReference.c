/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00DFE10
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K@Z @ 0x1C0014110 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x1C004B240 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186AE0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00349D4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0184A8C (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01C08B8 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // r14
  __int64 v20; // rdx
  struct _KEVENT *v21; // rdi
  struct _KEVENT *v22; // rdi
  volatile signed __int64 *v23; // rcx
  volatile signed __int64 *v24; // rcx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  PERESOURCE *v29; // rdi
  __int64 v30; // rcx
  unsigned int *v31; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v33; // rcx
  struct ADAPTER_RENDER *v34; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned int v40; // esi
  DXGFASTMUTEX *v41; // rdi
  int v42; // eax
  int v43; // eax
  struct DXGADAPTER *v44; // rcx
  DXGADAPTER *v45; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v48; // rdi
  __int64 v49; // rax
  int v50; // r9d
  _QWORD *v51; // rax
  unsigned __int8 v52; // di
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // r9
  DXGFASTMUTEX *v69; // [rsp+50h] [rbp-B0h] BYREF
  char v70; // [rsp+58h] [rbp-A8h]
  PERESOURCE *v71; // [rsp+60h] [rbp-A0h] BYREF
  char v72; // [rsp+68h] [rbp-98h]
  struct _KTHREAD **v73[2]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v74; // [rsp+98h] [rbp-68h]
  char v75; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD **v76[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGADAPTER *v77; // [rsp+B8h] [rbp-48h]
  char v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  char v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v82; // [rsp+E8h] [rbp-18h] BYREF
  char v83[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v84; // [rsp+F8h] [rbp-8h]
  char v85; // [rsp+100h] [rbp+0h]
  _QWORD v86[3]; // [rsp+108h] [rbp+8h] BYREF
  char v87[8]; // [rsp+120h] [rbp+20h] BYREF
  char v88[32]; // [rsp+128h] [rbp+28h] BYREF
  char v89[56]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v90; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v91; // [rsp+1D8h] [rbp+D8h] BYREF

  v90 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v48 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v48;
      }
    }
  }
  if ( v8 != -208 && *(struct _KTHREAD **)(v8 + 216) == KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v49 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v49);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v50 = *(_DWORD *)(v8 + 224);
      if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v10, v50);
    }
    ExAcquirePushLockSharedEx(v8 + 208, 0LL);
  }
  v11 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 248) )
    goto LABEL_90;
  v12 = *(_QWORD *)(v8 + 232);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60) || (v13 & 0x2000) != 0 || (v13 & 0x1F) != 7 )
    goto LABEL_90;
  v14 = *(_QWORD *)(v12 + 16LL * (unsigned int)v11);
  if ( !v14 )
    goto LABEL_14;
  _m_prefetchw((const void *)(v14 + 32));
  v15 = *(_QWORD *)(v14 + 32);
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 32), v15 + 1, v15);
      if ( v16 == v15 )
        break;
      if ( !v15 )
        goto LABEL_90;
    }
  }
  else
  {
LABEL_90:
    v14 = 0LL;
  }
LABEL_14:
  ExReleasePushLockSharedEx(v8 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v51[3] = v8;
    v40 = -1073741811;
    v51[5] = -1073741811LL;
    v51[4] = 0LL;
    WdLogEvent5_WdError(v51);
    return v40;
  }
  v18 = 0;
  v19 = *(_QWORD *)(v14 + 16);
  v20 = v19;
  if ( v19 )
  {
    v21 = *(struct _KEVENT **)(v19 + 16);
    if ( *(_DWORD *)(v19 + 328) == 2 )
    {
      v22 = v21 + 4;
      if ( KeReadStateEvent(v22) )
        goto LABEL_18;
    }
    else
    {
      v22 = v21 + 3;
      if ( KeReadStateEvent(v22) )
      {
LABEL_18:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL));
          v52 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v53, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 104), 1u);
          if ( v52 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v20 = *(_QWORD *)(v14 + 16);
        v18 = 1;
        goto LABEL_20;
      }
    }
    KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
    goto LABEL_18;
  }
LABEL_20:
  v23 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
  v74 = (DXGADAPTER *)v23;
  v75 = 0;
  if ( v23 )
  {
    _InterlockedIncrement64(v23 + 3);
    v73[1] = (struct _KTHREAD **)-1LL;
  }
  v24 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
  v77 = (struct DXGADAPTER *)v24;
  v78 = 0;
  if ( v24 )
  {
    _InterlockedIncrement64(v24 + 3);
    v76[1] = (struct _KTHREAD **)-1LL;
  }
  v79 = v20;
  v80 = 0;
  COREACCESS::AcquireShared((DXGADAPTER **)v73);
  v25 = *(unsigned int *)(v79 + 424);
  if ( (_DWORD)v25 != 1 )
    goto LABEL_102;
  if ( !v80 || (COREACCESS::AcquireShared((DXGADAPTER **)v76), v25 = *((unsigned int *)v77 + 44), (_DWORD)v25 == 1) )
  {
    Global = DXGGLOBAL::GetGlobal(v25);
    v71 = (PERESOURCE *)Global;
    v72 = 0;
    if ( !Global )
    {
      v54 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v54 + 24) = 2138LL;
      WdLogEvent5_WdAssertion(v54);
      Global = (struct DXGGLOBAL *)v71;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
    {
      v55 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v55 + 24) = 2143LL;
      WdLogEvent5_WdAssertion(v55);
    }
    if ( v72 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
      v56[5] = &v71;
      v56[3] = 275LL;
      v56[4] = 4LL;
      v56[6] = 0LL;
      v56[7] = 0LL;
      WdLogEvent5_WdCriticalError(v56);
    }
    v29 = v71;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v29[43], 1u);
    v72 = 1;
    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 144)) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v57 + 24) = 1270LL;
      WdLogEvent5_WdAssertion(v57);
    }
    if ( (*(_BYTE *)(v8 + 323) & 0xC) != 0 )
    {
      v31 = a1;
    }
    else
    {
      v31 = *(unsigned int **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 249LL) )
      {
        v40 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL) + 4080LL),
                (struct DXGPROCESS *)v8,
                (struct DXGCONTEXT *)v14,
                a1[2],
                v90);
LABEL_64:
        if ( v72 )
        {
          v72 = 0;
          ExReleaseResourceLite(v71[43]);
          KeLeaveCriticalRegion();
        }
        goto LABEL_66;
      }
    }
    v70 = 0;
    v69 = (DXGFASTMUTEX *)(v31 + 8);
    if ( v31 == (unsigned int *)-32LL )
    {
      v58 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v58 + 24) = 508LL;
      WdLogEvent5_WdAssertion(v58);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v69 + 1) == CurrentThread )
    {
      v59 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v59 + 24) = 515LL;
      WdLogEvent5_WdAssertion(v59);
    }
    if ( v70 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v60[5] = &v69;
      v60[3] = 275LL;
      v60[4] = 4LL;
      v60[6] = 0LL;
      v60[7] = 0LL;
      WdLogEvent5_WdCriticalError(v60);
    }
    DXGFASTMUTEX::Acquire(v69);
    v70 = 1;
    v34 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 16LL);
    if ( (v31[43] & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v31, v34);
    }
    else
    {
      if ( v34 && *((struct ADAPTER_RENDER **)v31 + 35) != v34 )
        goto LABEL_106;
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v31 + 66);
    }
    if ( DxgAdapterSyncObject )
    {
      if ( (v31[43] & 4) != 0 )
        v36 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                            (DXGSYNCOBJECTCA *)v31,
                            *(struct ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 16LL))
              + 4);
      else
        v36 = *((_QWORD *)v31 + 37);
      v91 = v36;
      if ( v36 )
      {
        if ( (*(_DWORD *)(v14 + 364) & 0x10) != 0 )
        {
          v81 = *(_QWORD *)(v14 + 264);
          v37 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 520LL) + 8LL) + 656LL))(
                  1LL,
                  &v81,
                  1LL,
                  &v91,
                  0,
                  &v90);
        }
        else
        {
          v82 = *(_QWORD *)(v14 + 232);
          v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, int, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 520LL) + 8LL) + 648LL))(
                  0LL,
                  0LL,
                  1LL,
                  &v82,
                  1,
                  &v91,
                  0,
                  &v90);
        }
        v39 = v37;
        if ( v37 < 0 )
        {
          v63 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v63 + 24) = 1359LL;
          WdLogEvent5_WdAssertion(v63);
        }
        v40 = v39;
      }
      else
      {
        v62 = WdLogNewEntry5_WdError(v33);
        *(_QWORD *)(v62 + 24) = v31;
        WdLogEvent5_WdError(v62);
        v40 = -1073741811;
      }
      goto LABEL_56;
    }
LABEL_106:
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v61[3] = v8;
    v40 = -1073741811;
    v61[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 16LL);
    v61[5] = -1073741811LL;
    WdLogEvent5_WdError(v61);
LABEL_56:
    if ( v70 )
    {
      v41 = v69;
      v70 = 0;
      if ( *((struct _KTHREAD **)v69 + 1) != KeGetCurrentThread() )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38);
        v64[3] = 275LL;
        v64[4] = 4LL;
        v64[5] = v41;
        v64[6] = 0LL;
        v64[7] = 0LL;
        WdLogEvent5_WdCriticalError(v64);
      }
      v42 = *((_DWORD *)v41 + 6);
      if ( v42 <= 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v65 + 24) = 450LL;
        WdLogEvent5_WdAssertion(v65);
        v42 = *((_DWORD *)v41 + 6);
      }
      v43 = v42 - 1;
      *((_DWORD *)v41 + 6) = v43;
      if ( !v43 )
      {
        *((_QWORD *)v41 + 1) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v41 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_64;
  }
  COREACCESS::Release(v76);
LABEL_102:
  COREACCESS::Release(v73);
  v40 = -1073741130;
LABEL_66:
  v44 = v77;
  if ( v77 )
  {
    if ( v78 )
    {
      COREACCESS::Release(v76);
      v44 = v77;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v44 + 2), v44);
  }
  v45 = v74;
  if ( v74 )
  {
    if ( v75 )
    {
      v75 = 0;
      v45 = v74;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v74 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource(v74);
        v45 = v74;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v45 + 2), v45);
  }
  if ( v19 && v18 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v19 + 104));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v66 = *(_QWORD *)(v14 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v86,
      (struct DXGDEVICE *)v66);
    v67 = *(_QWORD *)(v14 + 16);
    v85 = 0;
    v84 = *(_QWORD *)(*(_QWORD *)(v67 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v87, v66, 2, v68, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v87);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v66, (struct DXGCONTEXT *)v14, (struct COREDEVICEACCESS *)v87);
    COREACCESS::~COREACCESS((COREACCESS *)v89);
    COREACCESS::~COREACCESS((COREACCESS *)v88);
    if ( v85 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v83);
    if ( v86[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v86);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v66 + 16), (struct DXGDEVICE *)v66);
  }
  return v40;
}

/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00AF600
 * Callers:
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199D40 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1C0197E20 (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01BF7D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        unsigned int *a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // r14
  struct _KEVENT *v21; // rdi
  struct _KEVENT *v22; // rdi
  __int64 v23; // rdx
  volatile signed __int64 *v24; // rcx
  volatile signed __int64 *v25; // rcx
  __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  PERESOURCE *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int *v36; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  struct ADAPTER_RENDER *v40; // rdx
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // r8
  unsigned int v48; // esi
  DXGFASTMUTEX *v49; // rdi
  struct DXGADAPTER *v51; // rcx
  DXGADAPTER *v52; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v55; // rdi
  __int64 v56; // rax
  int v57; // r9d
  _QWORD *v58; // rax
  unsigned __int8 v59; // di
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // r9
  DXGFASTMUTEX *v76; // [rsp+40h] [rbp-C0h] BYREF
  char v77; // [rsp+48h] [rbp-B8h]
  PERESOURCE *v78; // [rsp+50h] [rbp-B0h] BYREF
  char v79; // [rsp+58h] [rbp-A8h]
  char v80[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h]
  DXGADAPTER *v82; // [rsp+88h] [rbp-78h]
  char v83; // [rsp+90h] [rbp-70h]
  char v84[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v85; // [rsp+A0h] [rbp-60h]
  struct DXGADAPTER *v86; // [rsp+A8h] [rbp-58h]
  char v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  char v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+D0h] [rbp-30h] BYREF
  char v91[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v92; // [rsp+E0h] [rbp-20h]
  char v93; // [rsp+E8h] [rbp-18h]
  _QWORD v94[2]; // [rsp+F0h] [rbp-10h] BYREF
  char v95[8]; // [rsp+100h] [rbp+0h] BYREF
  char v96[32]; // [rsp+108h] [rbp+8h] BYREF
  char v97[56]; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v98; // [rsp+1A8h] [rbp+A8h] BYREF
  int v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h] BYREF

  v98 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v55 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v55;
      }
    }
  }
  if ( v9 != -200 && *(struct _KTHREAD **)(v9 + 208) == KeGetCurrentThread() )
  {
    v56 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v56 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v56);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9 + 200, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v57 = *(_DWORD *)(v9 + 216);
      if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v10, &EventBlockThread, v11, v57);
    }
    ExAcquirePushLockSharedEx(v9 + 200, 0LL);
  }
  v12 = (a3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 240) )
    goto LABEL_91;
  v13 = *(_QWORD *)(v9 + 224);
  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0
    || (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x1F) != 7 )
  {
    goto LABEL_91;
  }
  v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
  if ( !v15 )
    goto LABEL_15;
  _m_prefetchw((const void *)(v15 + 32));
  v16 = *(_QWORD *)(v15 + 32);
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 32), v16 + 1, v16);
      if ( v17 == v16 )
        break;
      if ( !v16 )
        goto LABEL_91;
    }
  }
  else
  {
LABEL_91:
    v15 = 0LL;
  }
LABEL_15:
  ExReleasePushLockSharedEx(v9 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v58[3] = v9;
    v48 = -1073741811;
    v58[5] = -1073741811LL;
    v58[4] = 0LL;
    WdLogEvent5_WdError(v58);
    return v48;
  }
  v19 = 0;
  v20 = *(_QWORD *)(v15 + 16);
  if ( v20 )
  {
    v21 = *(struct _KEVENT **)(v20 + 16);
    if ( *(_DWORD *)(v20 + 328) == 2 )
    {
      v22 = v21 + 4;
      if ( KeReadStateEvent(v22) )
        goto LABEL_19;
    }
    else
    {
      v22 = v21 + 3;
      if ( KeReadStateEvent(v22) )
      {
LABEL_19:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
          v59 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v60, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 104), 1u);
          if ( v59 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v19 = 1;
        goto LABEL_21;
      }
    }
    KeWaitForSingleObject(v22, Executive, 0, 0, 0LL);
    goto LABEL_19;
  }
LABEL_21:
  v23 = *(_QWORD *)(v15 + 16);
  v24 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v82 = (DXGADAPTER *)v24;
  v83 = 0;
  if ( v24 )
  {
    _InterlockedIncrement64(v24 + 3);
    v81 = -1LL;
  }
  v25 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 16) + 16LL);
  v86 = (struct DXGADAPTER *)v25;
  v87 = 0;
  if ( v25 )
  {
    _InterlockedIncrement64(v25 + 3);
    v85 = -1LL;
  }
  v88 = v23;
  v89 = 0;
  COREACCESS::AcquireShared((COREACCESS *)v80);
  v26 = *(unsigned int *)(v88 + 408);
  if ( (_DWORD)v26 != 1 )
    goto LABEL_103;
  if ( !v89 || (COREACCESS::AcquireShared((COREACCESS *)v84), v26 = *((unsigned int *)v86 + 44), (_DWORD)v26 == 1) )
  {
    Global = DXGGLOBAL::GetGlobal(v26);
    v78 = (PERESOURCE *)Global;
    v79 = 0;
    if ( !Global )
    {
      v61 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v61 + 24) = 1946LL;
      WdLogEvent5_WdAssertion(v61);
      Global = (struct DXGGLOBAL *)v78;
    }
    if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 42)) )
    {
      v62 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v62 + 24) = 1951LL;
      WdLogEvent5_WdAssertion(v62);
    }
    if ( v79 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
      v63[5] = &v78;
      v63[3] = 275LL;
      v63[4] = 4LL;
      v63[6] = 0LL;
      v63[7] = 0LL;
      WdLogEvent5_WdCriticalError(v63);
    }
    v32 = v78;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v32[42], 1u);
    v79 = 1;
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v35 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 144)) )
    {
      v64 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v64 + 24) = 1172LL;
      WdLogEvent5_WdAssertion(v64);
    }
    if ( (*(_BYTE *)(v9 + 307) & 8) != 0 )
    {
      v36 = a1;
    }
    else
    {
      v36 = *(unsigned int **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 241LL) )
      {
        v48 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 3888LL),
                (struct DXGPROCESS *)v9,
                (struct DXGCONTEXT *)v15,
                a1[2],
                v98);
LABEL_65:
        if ( v79 )
        {
          v79 = 0;
          ExReleaseResourceLite(v78[42]);
          KeLeaveCriticalRegion();
        }
        goto LABEL_67;
      }
    }
    v77 = 0;
    v76 = (DXGFASTMUTEX *)(v36 + 8);
    if ( v36 == (unsigned int *)-32LL )
    {
      v65 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v65 + 24) = 464LL;
      WdLogEvent5_WdAssertion(v65);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v76 + 1) == CurrentThread )
    {
      v66 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v66 + 24) = 471LL;
      WdLogEvent5_WdAssertion(v66);
    }
    if ( v77 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v33, v34);
      v67[5] = &v76;
      v67[3] = 275LL;
      v67[4] = 4LL;
      v67[6] = 0LL;
      v67[7] = 0LL;
      WdLogEvent5_WdCriticalError(v67);
    }
    DXGFASTMUTEX::Acquire(v76);
    v77 = 1;
    if ( (*(_DWORD *)(v15 + 364) & 0x10) != 0 )
      v39 = *(_QWORD *)(v15 + 256);
    else
      v39 = *(_QWORD *)(v15 + 232);
    v90 = v39;
    v40 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 16LL);
    if ( (v36[41] & 4) != 0 )
    {
      DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v36, v40);
    }
    else
    {
      if ( v40 && *((struct ADAPTER_RENDER **)v36 + 33) != v40 )
        goto LABEL_108;
      DxgAdapterSyncObject = (struct DXGADAPTERSYNCOBJECT *)(v36 + 62);
    }
    if ( DxgAdapterSyncObject )
    {
      if ( (v36[41] & 4) != 0 )
        v42 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                            (DXGSYNCOBJECTCA *)v36,
                            *(struct ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 16LL))
              + 4);
      else
        v42 = *((_QWORD *)v36 + 35);
      v100 = v42;
      if ( v42 )
      {
        v43 = *(_QWORD *)(v15 + 16);
        v99 = 0;
        v46 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, _DWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 504LL) + 8LL) + 544LL))(
                1LL,
                &v90,
                1LL,
                &v100,
                0,
                &v98);
        if ( v46 < 0 )
        {
          v70 = WdLogNewEntry5_WdAssertion(v45);
          *(_QWORD *)(v70 + 24) = 1240LL;
          WdLogEvent5_WdAssertion(v70);
        }
        v48 = v46;
      }
      else
      {
        v69 = WdLogNewEntry5_WdError(v38);
        *(_QWORD *)(v69 + 24) = v36;
        WdLogEvent5_WdError(v69);
        v48 = -1073741811;
      }
      goto LABEL_57;
    }
LABEL_108:
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    v68[3] = v9;
    v48 = -1073741811;
    v68[4] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL);
    v68[5] = -1073741811LL;
    WdLogEvent5_WdError(v68);
LABEL_57:
    if ( v77 )
    {
      v49 = v76;
      v77 = 0;
      if ( *((struct _KTHREAD **)v76 + 1) != KeGetCurrentThread() )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v44, v47);
        v71[3] = 275LL;
        v71[4] = 4LL;
        v71[5] = v49;
        v71[6] = 0LL;
        v71[7] = 0LL;
        WdLogEvent5_WdCriticalError(v71);
      }
      if ( *((int *)v49 + 6) <= 0 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v72 + 24) = 406LL;
        WdLogEvent5_WdAssertion(v72);
      }
      if ( (*((_DWORD *)v49 + 6))-- == 1 )
      {
        *((_QWORD *)v49 + 1) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v49 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_65;
  }
  COREACCESS::Release((COREACCESS *)v84);
LABEL_103:
  COREACCESS::Release((COREACCESS *)v80);
  v48 = -1073741130;
LABEL_67:
  v51 = v86;
  if ( v86 )
  {
    if ( v87 )
    {
      COREACCESS::Release((COREACCESS *)v84);
      v51 = v86;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v51 + 2), v51);
  }
  v52 = v82;
  if ( v82 )
  {
    if ( v83 )
    {
      v83 = 0;
      v52 = v82;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v82 + 20) )
      {
        DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v82);
        v52 = v82;
      }
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
  }
  if ( v20 && v19 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v20 + 104));
    KeLeaveCriticalRegion();
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v73 = *(_QWORD *)(v15 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v94,
      (struct DXGDEVICE *)v73);
    v74 = *(_QWORD *)(v15 + 16);
    v93 = 0;
    v92 = *(_QWORD *)(*(_QWORD *)(v74 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v95, v73, 2, v75, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v95);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 16) + 16LL) + 176LL) != 4 )
      DXGDEVICE::DestroyContext((PERESOURCE *)v73, (struct DXGCONTEXT *)v15, (struct COREDEVICEACCESS *)v95);
    COREACCESS::~COREACCESS((COREACCESS *)v97);
    COREACCESS::~COREACCESS((COREACCESS *)v96);
    if ( v93 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
    if ( v94[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v94);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v73 + 16), (struct DXGDEVICE *)v73);
  }
  return v48;
}

/*
 * XREFs of DxgkUnlock @ 0x1C00CE6A0
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186F80 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00158C0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  unsigned __int8 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  struct _KEVENT *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 v23; // bl
  __int64 v24; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  struct _KEVENT *v31; // rcx
  unsigned __int8 v32; // bl
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37; // [rsp+38h] [rbp-60h]
  _D3DKMT_UNLOCK v38; // [rsp+40h] [rbp-58h] BYREF
  struct DXGDEVICE *v39; // [rsp+50h] [rbp-48h] BYREF
  int v40; // [rsp+58h] [rbp-40h]
  _BYTE v41[16]; // [rsp+60h] [rbp-38h] BYREF
  DXGADAPTER *v42; // [rsp+70h] [rbp-28h]
  char v43; // [rsp+78h] [rbp-20h]
  struct DXGDEVICE *v44; // [rsp+A8h] [rbp+10h] BYREF
  struct DXGDEVICE *v45; // [rsp+B0h] [rbp+18h] BYREF

  v3 = (__int128 *)a1;
  v37 = 0LL;
  v36 = 2012;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2012);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2012);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v26 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v26;
      }
    }
  }
  if ( v8 )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (__int128 *)MmUserProbeAddress;
      v9 = *v3;
    }
    else
    {
      v9 = *v3;
    }
    v38 = (_D3DKMT_UNLOCK)v9;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v9, v8, &v45);
    v11 = v45;
    if ( v45 )
    {
      v39 = v45;
      v12 = *(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL);
      if ( *(int *)(v12 + 2104) >= 0x2000 || *(_BYTE *)(v12 + 2396) )
        v13 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12) + 223);
      else
        v13 = 0;
      v40 = v13;
      v14 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
      if ( *((_DWORD *)v11 + 82) == 2 )
      {
        if ( KeReadStateEvent(v14 + 4) )
          goto LABEL_15;
        v31 = v14 + 4;
      }
      else
      {
        if ( KeReadStateEvent(v14 + 3) )
          goto LABEL_15;
        v31 = v14 + 3;
      }
      KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_15:
      KeEnterCriticalRegion();
      if ( v13 )
      {
        if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 112, 0LL) )
        {
LABEL_17:
          COREACCESS::COREACCESS((COREACCESS *)v41, *(struct DXGADAPTER *const *)(*((_QWORD *)v11 + 2) + 16LL));
          if ( v43 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
            v33[3] = 275LL;
            v33[4] = 4LL;
            v33[5] = v41;
            v33[6] = 0LL;
            v33[7] = 0LL;
            WdLogEvent5_WdCriticalError(v33);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v42 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v42 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v16, &EventBlockThread, v17, 72);
              KeWaitForSingleObject((char *)v42 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v42);
          }
          v43 = 1;
          if ( *((_DWORD *)v45 + 106) == 4 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v41);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v39);
            if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v34, &EventProfilerExit, v35, v36);
            return 0LL;
          }
          else
          {
            v38.hDevice = 0;
            v18 = v45;
            v19 = DXGDEVICE::Unlock(v45, &v38, v4);
            COREACCESS::~COREACCESS((COREACCESS *)v41);
            if ( v40 )
              ExReleasePushLockSharedEx((char *)v18 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v18 + 13));
            KeLeaveCriticalRegion();
            if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v20, &EventProfilerExit, v21, v36);
            return v19;
          }
        }
        KeLeaveCriticalRegion();
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
        v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
        DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 112));
        if ( v32 )
          goto LABEL_56;
      }
      else
      {
        if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 0) )
          goto LABEL_17;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
        v23 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v24, 40);
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 1u);
        if ( v23 )
LABEL_56:
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      }
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
    v30 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v30 + 24) = (unsigned int)v9;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v36);
  return 3221225485LL;
}

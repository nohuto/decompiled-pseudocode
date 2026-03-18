/*
 * XREFs of DxgkUnlock @ 0x1C0091F80
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A1A0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00144E0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  unsigned __int8 v4; // r14
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rcx
  int v14; // ebx
  struct _KEVENT *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  struct _KEVENT *v32; // rcx
  unsigned __int8 v33; // bl
  __int64 v34; // r8
  unsigned __int8 v35; // bl
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _D3DKMT_UNLOCK v39; // [rsp+30h] [rbp-58h] BYREF
  struct DXGDEVICE *v40; // [rsp+40h] [rbp-48h] BYREF
  int v41; // [rsp+48h] [rbp-40h]
  _BYTE v42[16]; // [rsp+50h] [rbp-38h] BYREF
  DXGADAPTER *v43; // [rsp+60h] [rbp-28h]
  char v44; // [rsp+68h] [rbp-20h]
  struct DXGDEVICE *v45; // [rsp+98h] [rbp+10h] BYREF
  struct DXGDEVICE *v46; // [rsp+A0h] [rbp+18h] BYREF

  v3 = (__int128 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2012);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v27 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v27;
      }
    }
  }
  if ( v9 )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (__int128 *)MmUserProbeAddress;
      v10 = *v3;
    }
    else
    {
      v10 = *v3;
    }
    v39 = (struct _D3DKMT_UNLOCK)v10;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v10, v9, &v46);
    v12 = v46;
    if ( v46 )
    {
      v40 = v46;
      v13 = *(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL);
      if ( *(int *)(v13 + 1968) >= 0x2000 || *(_BYTE *)(v13 + 2252) )
        v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 203);
      else
        v14 = 0;
      v41 = v14;
      v15 = (struct _KEVENT *)*((_QWORD *)v12 + 2);
      if ( *((_DWORD *)v12 + 82) == 2 )
      {
        if ( KeReadStateEvent(v15 + 4) )
          goto LABEL_15;
        v32 = v15 + 4;
      }
      else
      {
        if ( KeReadStateEvent(v15 + 3) )
          goto LABEL_15;
        v32 = v15 + 3;
      }
      KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
LABEL_15:
      KeEnterCriticalRegion();
      if ( v14 )
      {
        if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 112, 0LL) )
        {
LABEL_17:
          COREACCESS::COREACCESS((COREACCESS *)v42, *(struct DXGADAPTER *const *)(*((_QWORD *)v12 + 2) + 16LL));
          if ( v44 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
            v36[3] = 275LL;
            v36[4] = 4LL;
            v36[5] = v42;
            v36[6] = 0LL;
            v36[7] = 0LL;
            WdLogEvent5_WdCriticalError(v36);
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v43 + 20) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v43 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v19, &EventBlockThread, v20, 72);
              KeWaitForSingleObject((char *)v43 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v43);
          }
          v44 = 1;
          if ( *((_DWORD *)v46 + 102) == 4 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v42);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v40);
            if ( v45 )
            {
              v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v37 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v37, &EventProfilerExit, v38, 2012);
            return 0LL;
          }
          else
          {
            v39.hDevice = 0;
            v21 = v46;
            v22 = DXGDEVICE::Unlock(v46, &v39, v4);
            COREACCESS::~COREACCESS((COREACCESS *)v42);
            if ( v41 )
              ExReleasePushLockSharedEx((char *)v21 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v21 + 13));
            KeLeaveCriticalRegion();
            if ( v45 )
            {
              v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v23 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v23, &EventProfilerExit, v24, 2012);
            return v22;
          }
        }
        KeLeaveCriticalRegion();
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
        v35 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
        DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v12 + 112));
        if ( v35 )
          goto LABEL_55;
      }
      else
      {
        if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 0) )
          goto LABEL_17;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
        v33 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v34, 40);
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 1u);
        if ( v33 )
LABEL_55:
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
      }
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
    v31 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v31 + 24) = (unsigned int)v10;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    if ( v45 )
    {
      v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v29 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, 2012);
  return 3221225485LL;
}

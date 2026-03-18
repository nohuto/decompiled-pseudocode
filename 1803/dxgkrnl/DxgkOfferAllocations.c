/*
 * XREFs of DxgkOfferAllocations @ 0x1C00C7F60
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
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00EB330 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  _OWORD *v8; // rcx
  struct _KTHREAD **v9; // r8
  __int64 hDevice; // rbx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rcx
  int v14; // ebx
  struct _KEVENT *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  UINT *v21; // rcx
  unsigned __int64 Value; // rbx
  struct DXGDEVICE *v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  struct _KEVENT *v35; // rcx
  unsigned __int8 v36; // al
  __int64 v37; // r8
  unsigned __int8 v38; // bl
  unsigned __int8 v39; // bl
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+38h] [rbp-C0h]
  struct DXGDEVICE *v51; // [rsp+40h] [rbp-B8h] BYREF
  int v52; // [rsp+48h] [rbp-B0h]
  _D3DKMT_OFFERALLOCATIONS v53; // [rsp+50h] [rbp-A8h] BYREF
  char v54[8]; // [rsp+80h] [rbp-78h] BYREF
  struct _KTHREAD **v55[2]; // [rsp+88h] [rbp-70h] BYREF
  DXGADAPTER *v56; // [rsp+98h] [rbp-60h]
  char v57; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD **v58[5]; // [rsp+A8h] [rbp-50h] BYREF
  char v59; // [rsp+D0h] [rbp-28h]
  struct DXGDEVICE *v60; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v61; // [rsp+110h] [rbp+18h] BYREF

  v50 = 0LL;
  v49 = 2070;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2070);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2070);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v29;
      }
    }
  }
  if ( v7 )
  {
    memset(&v53, 0, sizeof(v53));
    v8 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v53.hDevice = *v8;
    *(_OWORD *)&v53.HandleList = v8[1];
    v9 = v7;
    hDevice = v53.hDevice;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60, v53.hDevice, v9, &v61);
    v12 = v61;
    if ( !v61 )
    {
      v33 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v33 + 24) = hDevice;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v33);
LABEL_49:
      if ( v60 && _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
      goto LABEL_43;
    }
    v51 = v61;
    v13 = *(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL);
    if ( *(int *)(v13 + 2104) >= 0x2000 || *(_BYTE *)(v13 + 2396) )
      v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13) + 223);
    else
      v14 = 0;
    v52 = v14;
    v15 = (struct _KEVENT *)*((_QWORD *)v12 + 2);
    if ( *((_DWORD *)v12 + 82) == 2 )
    {
      if ( KeReadStateEvent(v15 + 4) )
        goto LABEL_12;
      v35 = v15 + 4;
    }
    else
    {
      if ( KeReadStateEvent(v15 + 3) )
        goto LABEL_12;
      v35 = v15 + 3;
    }
    KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
LABEL_12:
    KeEnterCriticalRegion();
    if ( v14 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 112, 0LL) )
      {
LABEL_14:
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v12, 0, v16, 0);
        if ( v57 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
          v40[3] = 275LL;
          v40[4] = 4LL;
          v40[5] = v55;
          v40[6] = 0LL;
          v40[7] = 0LL;
          WdLogEvent5_WdCriticalError(v40);
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v56 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v56 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v19, &EventBlockThread, v20, 72);
            KeWaitForSingleObject((char *)v56 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v56);
        }
        v57 = 1;
        if ( *((_DWORD *)v58[4] + 106) != 1 )
          goto LABEL_70;
        if ( v59 )
        {
          COREACCESS::AcquireShared((DXGADAPTER **)v58);
          if ( *((_DWORD *)v58[2] + 44) != 1 )
          {
            COREACCESS::Release(v58);
LABEL_70:
            COREACCESS::Release(v55);
            v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
            *(_QWORD *)(v44 + 24) = v61;
            *(_QWORD *)(v44 + 32) = -1073741130LL;
            WdLogEvent5_WdWarning(v44);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
            if ( v60 && _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v45, &EventProfilerExit, v46, v49);
            return 3221226166LL;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 1664LL) < 0x5010u )
          goto LABEL_88;
        v21 = (UINT *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v21 = (UINT *)MmUserProbeAddress;
        v53.Flags.Value = *v21;
        Value = v53.Flags.Value;
        if ( v53.Flags.Value < 4 )
        {
LABEL_88:
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 185LL) )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
            if ( v60 && _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v47, &EventProfilerExit, v48, v49);
            return 0LL;
          }
          else
          {
            v23 = v61;
            v24 = DXGDEVICE::OfferAllocations(v61, &v53);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
            if ( v52 )
              ExReleasePushLockSharedEx((char *)v23 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 13));
            KeLeaveCriticalRegion();
            if ( v60 && _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v25, &EventProfilerExit, v26, v49);
            return v24;
          }
        }
        v34 = WdLogNewEntry5_WdWarning(v21, MmUserProbeAddress, v18);
        *(_QWORD *)(v34 + 24) = Value >> 2;
        WdLogEvent5_WdWarning(v34);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v51);
        goto LABEL_49;
      }
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
      v39 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v12 + 112));
      if ( v39 )
        goto LABEL_62;
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 0) )
        goto LABEL_14;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL));
      v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
      v38 = v36;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 13), 1u);
      if ( v38 )
LABEL_62:
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    }
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_14;
  }
  v30 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v30 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v30);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v49);
  return 3221225485LL;
}

/*
 * XREFs of DxgkOfferAllocations @ 0x1C00EA4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C0097180 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  _OWORD *v9; // rcx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  struct _KEVENT *v14; // r14
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  UINT *v21; // rcx
  struct DXGDEVICE *v22; // rbx
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  struct _KTHREAD ***v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  unsigned __int8 v35; // bl
  __int64 v36; // r8
  unsigned __int8 v37; // bl
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGDEVICE *v47; // [rsp+30h] [rbp-B8h] BYREF
  int v48; // [rsp+38h] [rbp-B0h]
  _D3DKMT_OFFERALLOCATIONS v49; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v50[8]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v51[16]; // [rsp+78h] [rbp-70h] BYREF
  DXGADAPTER *v52; // [rsp+88h] [rbp-60h]
  char v53; // [rsp+90h] [rbp-58h]
  _BYTE v54[16]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-40h]
  __int64 v56; // [rsp+B8h] [rbp-30h]
  char v57; // [rsp+C0h] [rbp-28h]
  struct DXGDEVICE *v58; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v59; // [rsp+100h] [rbp+18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2070);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v28 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v28;
      }
    }
  }
  if ( v8 )
  {
    memset(&v49, 0, sizeof(v49));
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v49.hDevice = *v9;
    *(_OWORD *)&v49.HandleList = v9[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v49.hDevice, v8, &v59);
    v11 = v59;
    if ( !v59 )
    {
      v32 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v32 + 24) = v49.hDevice;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
LABEL_44:
      if ( v58 )
      {
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v30 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
      }
      goto LABEL_38;
    }
    v47 = v59;
    v12 = *(_QWORD *)(*((_QWORD *)v59 + 2) + 16LL);
    if ( *(int *)(v12 + 1968) >= 0x2000 || *(_BYTE *)(v12 + 2252) )
      v13 = *((_DWORD *)DXGGLOBAL::GetGlobal(v12) + 203);
    else
      v13 = 0;
    v48 = v13;
    v14 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
    if ( *((_DWORD *)v11 + 82) == 2 )
    {
      if ( KeReadStateEvent(v14 + 4) )
        goto LABEL_12;
      v34 = v14 + 4;
    }
    else
    {
      if ( KeReadStateEvent(v14 + 3) )
        goto LABEL_12;
      v34 = v14 + 3;
    }
    KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
LABEL_12:
    KeEnterCriticalRegion();
    if ( v13 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 112, 0LL) )
      {
LABEL_14:
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v11, 0, v15, 0);
        if ( v53 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
          v38[3] = 275LL;
          v38[4] = 4LL;
          v38[5] = v51;
          v38[6] = 0LL;
          v38[7] = 0LL;
          WdLogEvent5_WdCriticalError(v38);
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v52 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v19, &EventBlockThread, v20, 72);
            KeWaitForSingleObject((char *)v52 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v52);
        }
        v53 = 1;
        if ( *(_DWORD *)(v56 + 408) != 1 )
          goto LABEL_68;
        if ( v57 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v54);
          if ( *(_DWORD *)(v55 + 176) != 1 )
          {
            COREACCESS::Release((COREACCESS *)v54);
LABEL_68:
            COREACCESS::Release((COREACCESS *)v51);
            v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
            *(_QWORD *)(v42 + 24) = v59;
            *(_QWORD *)(v42 + 32) = -1073741130LL;
            WdLogEvent5_WdWarning(v42);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
            if ( v58 )
            {
              v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v43 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v43, &EventProfilerExit, v44, 2070);
            return 3221226166LL;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 1528LL) < 0x5010u )
          goto LABEL_87;
        v21 = (UINT *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v21 = (UINT *)MmUserProbeAddress;
        v49.Flags.Value = *v21;
        if ( v49.Flags.Value < 4 )
        {
LABEL_87:
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 185LL) )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
            if ( v58 )
            {
              v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v45 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v45, &EventProfilerExit, v46, 2070);
            return 0LL;
          }
          else
          {
            v22 = v59;
            v23 = DXGDEVICE::OfferAllocations(v59, &v49);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
            if ( v48 )
              ExReleasePushLockSharedEx((char *)v22 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v22 + 13));
            KeLeaveCriticalRegion();
            if ( v58 )
            {
              v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v24 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
            }
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v24, &EventProfilerExit, v25, 2070);
            return v23;
          }
        }
        v33 = WdLogNewEntry5_WdWarning(v21, MmUserProbeAddress, v18);
        *(_QWORD *)(v33 + 24) = (unsigned __int64)v49.Flags.Value >> 2;
        WdLogEvent5_WdWarning(v33);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
        goto LABEL_44;
      }
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
      v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 112));
      if ( v37 )
        goto LABEL_60;
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 0) )
        goto LABEL_14;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL));
      v35 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v36, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 13), 1u);
      if ( v35 )
LABEL_60:
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    }
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_14;
  }
  v29 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v29 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v29);
LABEL_38:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, 2070);
  return 3221225485LL;
}

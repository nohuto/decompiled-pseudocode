/*
 * XREFs of DxgkOfferAllocations @ 0x1C0091F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00C3A10 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rdi
  __int64 v14; // rcx
  int v15; // ebx
  struct _KEVENT *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  UINT *v24; // rcx
  struct DXGDEVICE *v25; // rbx
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KTHREAD ***ThreadProperty; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  struct _KEVENT *v36; // rcx
  unsigned __int8 v37; // bl
  __int64 v38; // r8
  unsigned __int8 v39; // bl
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGDEVICE *v50; // [rsp+30h] [rbp-B8h] BYREF
  int v51; // [rsp+38h] [rbp-B0h]
  _D3DKMT_OFFERALLOCATIONS v52; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v53[8]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v54[16]; // [rsp+78h] [rbp-70h] BYREF
  DXGADAPTER *v55; // [rsp+88h] [rbp-60h]
  char v56; // [rsp+90h] [rbp-58h]
  _BYTE v57[16]; // [rsp+98h] [rbp-50h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-40h]
  __int64 v59; // [rsp+B8h] [rbp-30h]
  char v60; // [rsp+C0h] [rbp-28h]
  struct DXGDEVICE *v61; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v62; // [rsp+100h] [rbp+18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2070);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v9 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v9 = *ThreadProperty;
    }
  }
  if ( v9 )
  {
    memset(&v52, 0, sizeof(v52));
    v10 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v52.hDevice = *v10;
    *(_OWORD *)&v52.HandleList = v10[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v61, v52.hDevice, v9, &v62);
    v13 = v62;
    if ( !v62 )
    {
      v34 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v34 + 24) = v52.hDevice;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
LABEL_44:
      if ( v61 )
      {
        v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v32 == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
      }
      goto LABEL_38;
    }
    v50 = v62;
    v14 = *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL);
    if ( *(int *)(v14 + 1944) >= 0x2000 || *(_BYTE *)(v14 + 2228) )
      v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
    else
      v15 = 0;
    v51 = v15;
    v16 = (struct _KEVENT *)*((_QWORD *)v13 + 2);
    if ( *((_DWORD *)v13 + 82) == 2 )
    {
      if ( KeReadStateEvent(v16 + 4) )
        goto LABEL_12;
      v36 = v16 + 4;
    }
    else
    {
      if ( KeReadStateEvent(v16 + 3) )
        goto LABEL_12;
      v36 = v16 + 3;
    }
    KeWaitForSingleObject(v36, Executive, 0, 0, 0LL);
LABEL_12:
    KeEnterCriticalRegion();
    if ( v15 )
    {
      if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v13 + 112, 0LL) )
      {
LABEL_14:
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v13, 0LL, v17, 0);
        if ( v56 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
          v40[3] = 275LL;
          v40[4] = 4LL;
          v40[5] = v54;
          v40[6] = 0LL;
          v40[7] = 0LL;
          WdLogEvent5_WdCriticalError(v40);
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v55 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v55 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v22, &EventBlockThread, v23, 72);
            KeWaitForSingleObject((char *)v55 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v55);
        }
        v56 = 1;
        if ( *(_DWORD *)(v59 + 408) != 1 )
          goto LABEL_68;
        if ( v60 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v57);
          if ( *(_DWORD *)(v58 + 176) != 1 )
          {
            COREACCESS::Release((COREACCESS *)v57);
LABEL_68:
            COREACCESS::Release((COREACCESS *)v54);
            v45 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
            *(_QWORD *)(v45 + 24) = v62;
            *(_QWORD *)(v45 + 32) = -1073741130LL;
            WdLogEvent5_WdWarning(v45);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v50);
            if ( v61 )
            {
              v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v46 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
            }
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v46, &EventProfilerExit, v47, 2070);
            return 3221226166LL;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 1504LL) < 0x5010u )
          goto LABEL_87;
        v24 = (UINT *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v24 = (UINT *)MmUserProbeAddress;
        v52.Flags.Value = *v24;
        if ( (v52.Flags.Value & 0xFFFFFFFC) == 0 )
        {
LABEL_87:
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 186LL) )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v50);
            if ( v61 )
            {
              v48 = _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v48 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
            }
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v48, &EventProfilerExit, v49, 2070);
            return 0LL;
          }
          else
          {
            v25 = v62;
            v26 = DXGDEVICE::OfferAllocations(v62, &v52);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
            if ( v51 )
              ExReleasePushLockSharedEx((char *)v25 + 112, 0LL);
            else
              ExReleaseResourceLite(*((PERESOURCE *)v25 + 13));
            KeLeaveCriticalRegion();
            if ( v61 )
            {
              v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 8, 0xFFFFFFFFFFFFFFFFuLL);
              if ( v27 == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v61 + 2), v61);
            }
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v27, &EventProfilerExit, v28, 2070);
            return v26;
          }
        }
        v35 = WdLogNewEntry5_WdWarning(v24, MmUserProbeAddress, v20, v21);
        *(_QWORD *)(v35 + 24) = (unsigned __int64)v52.Flags.Value >> 2;
        WdLogEvent5_WdWarning(v35);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v50);
        goto LABEL_44;
      }
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 96LL));
      v39 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v13 + 112));
      if ( v39 )
        goto LABEL_60;
    }
    else
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 13), 0) )
        goto LABEL_14;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 96LL));
      v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v38, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v13 + 13), 1u);
      if ( v37 )
LABEL_60:
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL));
    }
    ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_14;
  }
  v31 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v31 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v31);
LABEL_38:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 2070);
  return 3221225485LL;
}

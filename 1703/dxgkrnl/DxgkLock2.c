/*
 * XREFs of DxgkLock2 @ 0x1C00CA6A0
 * Callers:
 *     ?VmBusLock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D9A0 (-VmBusLock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0013AA0 (-VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C003056C (-VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016B4B8 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkLock2(ULONG64 a1)
{
  __int64 v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // r14
  struct _KTHREAD ***ThreadProperty; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _D3DKMT_LOCK2 *v16; // r15
  struct _D3DKMT_LOCK2 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGDEVICE *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // ebx
  struct _KEVENT *v24; // r12
  struct _KEVENT *v25; // rcx
  __int64 v26; // r9
  unsigned __int8 v27; // bl
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct DXGALLOCATION *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v47; // rax
  struct DXGDEVICE *hAllocation; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  struct DXGDEVICE *v51; // rsi
  int v52; // eax
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  _BYTE v55[8]; // [rsp+40h] [rbp-E8h] BYREF
  struct DXGDEVICE *v56; // [rsp+48h] [rbp-E0h] BYREF
  struct DXGDEVICE *v57; // [rsp+50h] [rbp-D8h] BYREF
  int v58; // [rsp+58h] [rbp-D0h]
  __int64 v59; // [rsp+60h] [rbp-C8h]
  _BYTE v60[8]; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v61[16]; // [rsp+78h] [rbp-B0h] BYREF
  DXGADAPTER *v62; // [rsp+88h] [rbp-A0h]
  char v63; // [rsp+90h] [rbp-98h]
  _BYTE v64[16]; // [rsp+98h] [rbp-90h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-80h]
  __int64 v66; // [rsp+B8h] [rbp-70h]
  char v67; // [rsp+C0h] [rbp-68h]
  struct _D3DKMT_LOCK2 v68; // [rsp+D0h] [rbp-58h] BYREF
  bool v70; // [rsp+138h] [rbp+10h]
  struct DXGALLOCATION *v71; // [rsp+148h] [rbp+20h] BYREF

  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v70 = v3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v4, 2103);
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct _KTHREAD ***)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  if ( !v10 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    v13 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_84:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2103);
    return v13;
  }
  v16 = &v68;
  if ( v3 )
  {
    v17 = (struct _D3DKMT_LOCK2 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v17 = (struct _D3DKMT_LOCK2 *)MmUserProbeAddress;
    v68 = *v17;
  }
  else
  {
    v16 = (struct _D3DKMT_LOCK2 *)a1;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v55, v16->hDevice, v10, &v56);
  v20 = v56;
  if ( !v56 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = v16->hDevice;
    v13 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
LABEL_83:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v55);
    goto LABEL_84;
  }
  v22 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  v59 = v22;
  v57 = v56;
  if ( *(int *)(v22 + 1944) >= 0x2000 || *(_BYTE *)(v22 + 2228) )
    v23 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
  else
    v23 = 0;
  v58 = v23;
  v24 = (struct _KEVENT *)*((_QWORD *)v20 + 2);
  if ( *((_DWORD *)v20 + 82) == 2 )
  {
    if ( KeReadStateEvent(v24 + 4) )
      goto LABEL_27;
    v25 = v24 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v24 + 3) )
      goto LABEL_27;
    v25 = v24 + 3;
  }
  KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
LABEL_27:
  KeEnterCriticalRegion();
  if ( v23 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v20 + 112, 0LL) )
      goto LABEL_38;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v20 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 13), 0) )
      goto LABEL_38;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL));
    v27 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v28, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v20 + 13), 1u);
  }
  if ( v27 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v20 + 2) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_38:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)v20, 0LL, v26, 0);
  if ( v63 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v32[3] = 275LL;
    v32[4] = 4LL;
    v32[5] = v61;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v62 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v62 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v33, &EventBlockThread, v34, 72);
      KeWaitForSingleObject((char *)v62 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v62);
  }
  v63 = 1;
  if ( *(_DWORD *)(v66 + 408) != 1 )
    goto LABEL_51;
  if ( !v67 || (COREACCESS::AcquireShared((COREACCESS *)v64), *(_DWORD *)(v65 + 176) == 1) )
  {
    DXGPROCESS::GetAllocationSafe((__int64)v10, (DXGALLOCATIONREFERENCE *)&v71, v16->hAllocation);
    v42 = v71;
    if ( !v71 )
    {
      v43 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      *(_QWORD *)(v43 + 24) = v16->hAllocation;
      v13 = -1073741811;
      *(_QWORD *)(v43 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v43);
LABEL_82:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v57);
      goto LABEL_83;
    }
    v44 = *(_QWORD *)(*((_QWORD *)v71 + 1) + 16LL);
    v45 = *(_QWORD *)(v44 + 16);
    v46 = *((_QWORD *)v20 + 2);
    if ( v45 == *(_QWORD *)(v46 + 16) )
    {
      v45 = *(unsigned __int8 *)(v22 + 186);
      if ( !(_BYTE)v45 && !*((_QWORD *)v71 + 3) )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v45, v46, v41);
        hAllocation = (struct DXGDEVICE *)v16->hAllocation;
        goto LABEL_59;
      }
      v44 = *(unsigned int *)(*((_QWORD *)v71 + 6) + 4LL);
      if ( (v44 & 2) != 0
        || (v49 = *((_QWORD *)v71 + 5)) == 0
        || (v44 = *(unsigned int *)(v49 + 4), (v44 & 1) == 0)
        || (v44 & 2) != 0
        || (v50 = *(_QWORD *)(v46 + 16), v44 = *(unsigned int *)(v50 + 300), (v44 & 0x10) != 0)
        || (v44 & 8) != 0
        || (v44 = *(unsigned int *)(v50 + 1676), (v44 & 0x80u) != 0LL) )
      {
        v51 = v56;
        if ( (_BYTE)v45 )
        {
          v52 = DXGADAPTER::VmBusSendLock2((DXGADAPTER *)v22, (struct DXGPROCESS *)v10, v56, v16, 0);
        }
        else
        {
          if ( !*((_DWORD *)v56 + 18) )
            ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v56 + 13));
          if ( *((struct DXGDEVICE **)v42 + 1) != v51 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v45, v46, v41);
            v53[3] = v42;
            v53[4] = v51;
            v53[5] = *((_QWORD *)v42 + 1);
            v13 = -1073741811;
            v53[6] = -1073741811LL;
            WdLogEvent5_WdWarning(v53);
            goto LABEL_82;
          }
          v52 = VIDMM_EXPORT::VidMmLock(
                  *(VIDMM_EXPORT **)(*((_QWORD *)v20 + 2) + 432LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v20 + 2) + 440LL),
                  *((struct _VIDMM_MULTI_ALLOC **)v42 + 3),
                  v41,
                  &v16->pData);
        }
        v13 = v52;
        if ( v52 >= 0 && v70 )
        {
          v54 = (_QWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v54 = (_QWORD *)MmUserProbeAddress;
          *v54 = v16->pData;
        }
        goto LABEL_82;
      }
    }
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v45, v46, v41);
    hAllocation = v56;
LABEL_59:
    v47[3] = hAllocation;
    v47[4] = v71;
    v13 = -1073741811;
    v47[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v47);
    goto LABEL_82;
  }
  COREACCESS::Release((COREACCESS *)v64);
LABEL_51:
  COREACCESS::Release((COREACCESS *)v61);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v57);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v55);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 2103);
  return 3221226166LL;
}

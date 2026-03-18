/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C00EA1E0
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
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0008920 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0014DC8 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00968D0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rbx
  _D3DKMT_RECLAIMALLOCATIONS2 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // edi
  struct _KEVENT *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // edi
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  unsigned __int8 v35; // di
  __int64 v36; // r8
  unsigned __int8 v37; // di
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // [rsp+30h] [rbp-C8h] BYREF
  int v46; // [rsp+38h] [rbp-C0h]
  _BYTE v47[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v48[16]; // [rsp+48h] [rbp-B0h] BYREF
  DXGADAPTER *v49; // [rsp+58h] [rbp-A0h]
  char v50; // [rsp+60h] [rbp-98h]
  _BYTE v51[16]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-70h]
  char v54; // [rsp+90h] [rbp-68h]
  _D3DKMT_RECLAIMALLOCATIONS2 v55; // [rsp+A0h] [rbp-58h] BYREF
  struct DXGPAGINGQUEUE *v56; // [rsp+108h] [rbp+10h] BYREF
  char v57; // [rsp+110h] [rbp+18h] BYREF
  __int64 v58; // [rsp+118h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2071);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v29;
      }
    }
  }
  if ( !v8 )
  {
    v30 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_35;
  }
  v9 = (_D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (_D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v55 = *v9;
  v56 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v57, v55.hPagingQueue, v8, &v56);
  if ( !v56 )
  {
    v33 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v33 + 24) = v55.hPagingQueue;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v57);
LABEL_35:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, 2071);
    return 3221225485LL;
  }
  v13 = *((_QWORD *)v56 + 2);
  v58 = v13;
  v45 = v13;
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL);
  if ( *(int *)(v14 + 1968) >= 0x2000 || *(_BYTE *)(v14 + 2252) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal(v14) + 203);
    v46 = v15;
  }
  else
  {
    v15 = 0;
    v46 = 0;
  }
  v16 = *(struct _KEVENT **)(v13 + 16);
  if ( *(_DWORD *)(v13 + 328) == 2 )
  {
    if ( KeReadStateEvent(v16 + 4) )
      goto LABEL_12;
    v34 = v16 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v16 + 3) )
      goto LABEL_12;
    v34 = v16 + 3;
  }
  KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !v15 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 104), 0) )
      goto LABEL_14;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 96LL));
    v35 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v36, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 104), 1u);
    if ( v35 )
      goto LABEL_52;
    goto LABEL_53;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 96LL));
    v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 112));
    if ( v37 )
LABEL_52:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v13 + 16) + 16LL));
LABEL_53:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, v13, 0, v17, 0);
  if ( v50 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
    v38[3] = 275LL;
    v38[4] = 4LL;
    v38[5] = v48;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v49 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v49 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v21, &EventBlockThread, v22, 72);
      KeWaitForSingleObject((char *)v49 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v49);
  }
  v50 = 1;
  if ( *(_DWORD *)(v53 + 408) != 1 )
    goto LABEL_60;
  if ( v54 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v51);
    if ( *(_DWORD *)(v52 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v51);
LABEL_60:
      COREACCESS::Release((COREACCESS *)v48);
      v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      *(_QWORD *)(v42 + 24) = v13;
      *(_QWORD *)(v42 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v42);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v45);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v57);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v43, &EventProfilerExit, v44, 2071);
      return 3221226166LL;
    }
  }
  v23 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v13, v56, &v55);
  if ( v23 >= 0 )
  {
    v24 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v24 = (_QWORD *)MmUserProbeAddress;
    *v24 = v55.PagingFenceValue;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  if ( v46 )
    ExReleasePushLockSharedEx(v13 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v57);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, 2071);
  return (unsigned int)v23;
}

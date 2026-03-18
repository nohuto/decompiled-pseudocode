/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C0091C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0002BF8 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00C3140 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  _D3DKMT_RECLAIMALLOCATIONS2 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // edi
  struct _KEVENT *v18; // r14
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // edi
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KEVENT *v41; // rcx
  unsigned __int8 v42; // di
  __int64 v43; // r8
  unsigned __int8 v44; // di
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // [rsp+30h] [rbp-C8h] BYREF
  int v57; // [rsp+38h] [rbp-C0h]
  _BYTE v58[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v59[16]; // [rsp+48h] [rbp-B0h] BYREF
  DXGADAPTER *v60; // [rsp+58h] [rbp-A0h]
  char v61; // [rsp+60h] [rbp-98h]
  _BYTE v62[16]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v63; // [rsp+78h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-70h]
  char v65; // [rsp+90h] [rbp-68h]
  _D3DKMT_RECLAIMALLOCATIONS2 v66; // [rsp+A0h] [rbp-58h] BYREF
  struct DXGPAGINGQUEUE *v67; // [rsp+108h] [rbp+10h] BYREF
  char v68; // [rsp+110h] [rbp+18h] BYREF
  __int64 v69; // [rsp+118h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2071);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v9 = *ThreadProperty;
    }
  }
  if ( !v9 )
  {
    v34 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_35;
  }
  v10 = (_D3DKMT_RECLAIMALLOCATIONS2 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
  v66 = *v10;
  v67 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v68, v66.hPagingQueue, v9, &v67);
  if ( !v67 )
  {
    v37 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v37 + 24) = v66.hPagingQueue;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v68, v38, v39, v40);
LABEL_35:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v35, &EventProfilerExit, v36, 2071);
    return 3221225485LL;
  }
  v15 = *((_QWORD *)v67 + 2);
  v69 = v15;
  v56 = v15;
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( *(int *)(v16 + 1944) >= 0x2000 || *(_BYTE *)(v16 + 2228) )
  {
    v17 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
    v57 = v17;
  }
  else
  {
    v17 = 0;
    v57 = 0;
  }
  v18 = *(struct _KEVENT **)(v15 + 16);
  if ( *(_DWORD *)(v15 + 328) == 2 )
  {
    if ( KeReadStateEvent(v18 + 4) )
      goto LABEL_12;
    v41 = v18 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v18 + 3) )
      goto LABEL_12;
    v41 = v18 + 3;
  }
  KeWaitForSingleObject(v41, Executive, 0, 0, 0LL);
LABEL_12:
  KeEnterCriticalRegion();
  if ( !v17 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 104), 0) )
      goto LABEL_14;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 104), 1u);
    if ( v42 )
      goto LABEL_52;
    goto LABEL_53;
  }
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 112, 0LL) )
  {
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL));
    v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 112));
    if ( v44 )
LABEL_52:
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
LABEL_53:
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, v15, 0LL, v19, 0);
  if ( v61 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
    v45[3] = 275LL;
    v45[4] = 4LL;
    v45[5] = v59;
    v45[6] = 0LL;
    v45[7] = 0LL;
    WdLogEvent5_WdCriticalError(v45);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v60 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v60 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v23, &EventBlockThread, v24, 72);
      KeWaitForSingleObject((char *)v60 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v60);
  }
  v61 = 1;
  if ( *(_DWORD *)(v64 + 408) != 1 )
    goto LABEL_60;
  if ( v65 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v62);
    if ( *(_DWORD *)(v63 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v62);
LABEL_60:
      COREACCESS::Release((COREACCESS *)v59);
      v50 = WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
      *(_QWORD *)(v50 + 24) = v15;
      *(_QWORD *)(v50 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v50);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v56);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v68, v51, v52, v53);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v54, &EventProfilerExit, v55, 2071);
      return 3221226166LL;
    }
  }
  v25 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v15, v67, &v66);
  if ( v25 >= 0 )
  {
    v26 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v26 = (_QWORD *)MmUserProbeAddress;
    *v26 = v66.PagingFenceValue;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
  if ( v57 )
    ExReleasePushLockSharedEx(v15 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v15 + 104));
  KeLeaveCriticalRegion();
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)&v68, v27, v28, v29);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 2071);
  return (unsigned int)v25;
}

/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C008AD40
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E9D0 (-VmBusQueryVideoMemoryInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXGADAPTER@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0031464 (-VmBusSendQueryVideoMemoryInfo@DXGADAPTER@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C008B43C (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  bool v3; // bl
  __int64 v4; // r8
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r14
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  int PairingAdapters; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGADAPTER *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  UINT *v24; // rdx
  int VideoMemoryInfo; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  bool v36; // zf
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // ebx
  int HostProcess; // eax
  bool v53; // [rsp+30h] [rbp-138h]
  DXGADAPTER *v54; // [rsp+38h] [rbp-130h] BYREF
  struct DXGADAPTER *v55; // [rsp+48h] [rbp-120h] BYREF
  struct DXGADAPTER *v56; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-110h] BYREF
  _BYTE v58[80]; // [rsp+60h] [rbp-108h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v59; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v60[80]; // [rsp+F0h] [rbp-78h] BYREF

  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v53 = v3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v4, 2119);
  memset(&v59, 0, sizeof(v59));
  v5 = &v59;
  if ( v3 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v59.hProcess = *v6;
    *(_OWORD *)&v59.Budget = v6[1];
    *(_OWORD *)&v59.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v33 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    v35 = qword_1C006E790;
    v36 = (qword_1C006E790 & 2) == 0;
LABEL_32:
    if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v35, &EventProfilerExit, v34, 2119);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v37 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v60, 1);
    v42 = v37;
    if ( v37 < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      *(_QWORD *)(v43 + 24) = v5->hProcess;
      *(_QWORD *)(v43 + 32) = v42;
      WdLogEvent5_WdWarning(v43);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v44, &EventProfilerExit, v45, 2119);
      return (unsigned int)v42;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v60);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v54, v5->hAdapter, Current, &v56);
  v13 = v56;
  if ( !v56 )
  {
    v46 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v46 + 24) = Current;
    *(_QWORD *)(v46 + 32) = v5->hAdapter;
    WdLogEvent5_WdError(v46);
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60);
    v36 = (qword_1C006E790 & 2) == 0;
    goto LABEL_32;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v56, 0, &v55, &v57, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v47 = WdLogNewEntry5_WdWarning(v15, v14, v17, v18);
    *(_QWORD *)(v47 + 24) = v13;
    WdLogEvent5_WdWarning(v47);
  }
  else
  {
    v19 = v55;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v58, v55, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58);
    DXGADAPTER::ReleaseReference(v19);
    if ( PairingAdapters < 0 )
    {
      v48 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      *(_QWORD *)(v48 + 24) = v19;
    }
    else
    {
      if ( v53 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
      {
        v24 = (UINT *)(a1 + 3);
        if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
          v24 = (UINT *)MmUserProbeAddress;
        v5->PhysicalAdapterIndex = *v24;
        v19 = v55;
      }
      if ( *((_BYTE *)v19 + 186) )
      {
        v51 = *((_DWORD *)v19 + 972);
        HostProcess = DXGPROCESS::GetHostProcess(Process);
        VideoMemoryInfo = DXGADAPTER::VmBusSendQueryVideoMemoryInfo(v19, HostProcess, v51, v5);
      }
      else
      {
        VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v19 + 286), Process, v5);
      }
      PairingAdapters = VideoMemoryInfo;
      if ( VideoMemoryInfo >= 0 )
      {
        if ( v53 )
        {
          if ( (unsigned __int64)a1 >= MmUserProbeAddress )
            a1 = (_OWORD *)MmUserProbeAddress;
          *a1 = *(_OWORD *)&v5->hProcess;
          a1[1] = *(_OWORD *)&v5->Budget;
          a1[2] = *(_OWORD *)&v5->CurrentReservation;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
        if ( v54 )
          DXGADAPTER::ReleaseReference(v54);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v30, &EventProfilerExit, v31, 2119);
        return 0LL;
      }
      v48 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v48 + 24) = PairingAdapters;
    }
    WdLogEvent5_WdWarning(v48);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
  }
  if ( v54 )
    DXGADAPTER::ReleaseReference(v54);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v49, &EventProfilerExit, v50, 2119);
  return (unsigned int)PairingAdapters;
}

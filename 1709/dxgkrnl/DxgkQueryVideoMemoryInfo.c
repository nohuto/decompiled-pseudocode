/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C007CCE0
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194EF0 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C007D3A0 (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0197A6C (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  bool v3; // bl
  __int64 v4; // r8
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r15
  _OWORD *v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int PairingAdapters; // ebx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  UINT *v20; // rdx
  int VideoMemoryInfo; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  bool v31; // zf
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // ebx
  unsigned int HostProcess; // eax
  bool v47; // [rsp+30h] [rbp-138h]
  DXGADAPTER *v48; // [rsp+38h] [rbp-130h] BYREF
  struct DXGADAPTER *v49; // [rsp+48h] [rbp-120h] BYREF
  struct DXGADAPTER *v50; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-110h] BYREF
  _BYTE v52[80]; // [rsp+60h] [rbp-108h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v53; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v54[80]; // [rsp+F0h] [rbp-78h] BYREF

  v3 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v47 = v3;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v4, 2119);
  memset(&v53, 0, sizeof(v53));
  v5 = &v53;
  if ( v3 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v53.hProcess = *v6;
    *(_OWORD *)&v53.Budget = v6[1];
    *(_OWORD *)&v53.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v28 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    v30 = qword_1C005F010;
    v31 = (qword_1C005F010 & 2) == 0;
LABEL_32:
    if ( !v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v29, 2119);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v32 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v54, 1);
    v36 = v32;
    if ( v32 < 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v37 + 24) = v5->hProcess;
      *(_QWORD *)(v37 + 32) = v36;
      WdLogEvent5_WdWarning(v37);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, 2119);
      return (unsigned int)v36;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v54);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, v5->hAdapter, Current, &v50);
  v11 = v50;
  if ( !v50 )
  {
    v40 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v40 + 24) = Current;
    *(_QWORD *)(v40 + 32) = v5->hAdapter;
    WdLogEvent5_WdError(v40);
    if ( v48 )
      DXGADAPTER::ReleaseReferenceNoTracking(v48);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
    v31 = (qword_1C005F010 & 2) == 0;
    goto LABEL_32;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v50, 0, &v49, &v51, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v13, v12, v15);
    *(_QWORD *)(v41 + 24) = v11;
    WdLogEvent5_WdWarning(v41);
  }
  else
  {
    v16 = v49;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v49, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52);
    DXGADAPTER::ReleaseReferenceNoTracking(v16);
    if ( PairingAdapters < 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v42 + 24) = v16;
    }
    else
    {
      if ( v47 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
      {
        v20 = (UINT *)(a1 + 3);
        if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
          v20 = (UINT *)MmUserProbeAddress;
        v5->PhysicalAdapterIndex = *v20;
        v16 = v49;
      }
      if ( *((_BYTE *)v16 + 185) )
      {
        v45 = *((_DWORD *)v16 + 978);
        HostProcess = DXGPROCESS::GetHostProcess(Process);
        VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                            (struct DXGADAPTER *)((char *)v16 + 3888),
                            HostProcess,
                            v45,
                            v5);
      }
      else
      {
        VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v16 + 289), Process, v5);
      }
      PairingAdapters = VideoMemoryInfo;
      if ( VideoMemoryInfo >= 0 )
      {
        if ( v47 )
        {
          if ( (unsigned __int64)a1 >= MmUserProbeAddress )
            a1 = (_OWORD *)MmUserProbeAddress;
          *a1 = *(_OWORD *)&v5->hProcess;
          a1[1] = *(_OWORD *)&v5->Budget;
          a1[2] = *(_OWORD *)&v5->CurrentReservation;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
        if ( v48 )
          DXGADAPTER::ReleaseReferenceNoTracking(v48);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v25, &EventProfilerExit, v26, 2119);
        return 0LL;
      }
      v42 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v42 + 24) = PairingAdapters;
    }
    WdLogEvent5_WdWarning(v42);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
  }
  if ( v48 )
    DXGADAPTER::ReleaseReferenceNoTracking(v48);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v43, &EventProfilerExit, v44, 2119);
  return (unsigned int)PairingAdapters;
}

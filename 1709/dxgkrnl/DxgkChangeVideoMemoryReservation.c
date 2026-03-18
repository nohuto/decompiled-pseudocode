/*
 * XREFs of DxgkChangeVideoMemoryReservation @ 0x1C01839B0
 * Callers:
 *     <none>
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0176E90 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservation(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG64 v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  HANDLE hProcess; // r15
  struct DXGPROCESS *Process; // r12
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER *v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int PairingAdapters; // r14d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGADAPTER *v39; // rsi
  ADAPTER_RENDER *v40; // r9
  UINT *v41; // rdx
  DXGADAPTER *v42; // [rsp+30h] [rbp-118h] BYREF
  struct DXGADAPTER *v43; // [rsp+40h] [rbp-108h] BYREF
  struct DXGADAPTER *v44; // [rsp+48h] [rbp-100h] BYREF
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v45; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v47[80]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v48[80]; // [rsp+D0h] [rbp-78h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2120);
  memset(&v45, 0, sizeof(v45));
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)&v45.hProcess = *(_OWORD *)v5;
  v45.Reservation = *(_QWORD *)(v5 + 16);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_8:
    v11 = qword_1C005F010;
    v12 = (qword_1C005F010 & 2) == 0;
LABEL_9:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v10, 2120);
    return (unsigned int)v9;
  }
  hProcess = v45.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v48, v45.hProcess, 512);
  Process = (struct DXGPROCESS *)Current;
  if ( hProcess )
  {
    v16 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v48, 1);
    v9 = v16;
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = hProcess;
      *(_QWORD *)(v20 + 32) = v9;
      WdLogEvent5_WdWarning(v20);
LABEL_16:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v48, v21, v22);
      goto LABEL_8;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v48);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v42, v45.hAdapter, Current, &v43);
  v26 = v43;
  if ( !v43 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    LODWORD(v9) = -1073741811;
    v27[3] = -1073741811LL;
    v27[4] = Current;
    v27[5] = v45.hAdapter;
    WdLogEvent5_WdWarning(v27);
    if ( v42 )
      DXGADAPTER::ReleaseReferenceNoTracking(v42);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v48, v28, v29);
    v12 = (qword_1C005F010 & 2) == 0;
    goto LABEL_9;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v43, 0, &v44, &v46, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    v39 = v44;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v44, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
    DXGADAPTER::ReleaseReferenceNoTracking(v39);
    if ( PairingAdapters >= 0 )
    {
      v40 = (ADAPTER_RENDER *)*((_QWORD *)v39 + 289);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
      {
        v41 = (UINT *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v41 = (UINT *)MmUserProbeAddress;
        v45.PhysicalAdapterIndex = *v41;
      }
      LODWORD(v9) = ADAPTER_RENDER::ChangeVideoMemoryReservation(v40, Process, &v45);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v42 )
        DXGADAPTER::ReleaseReferenceNoTracking(v42);
      goto LABEL_16;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  }
  else
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v34 + 24) = v26;
    WdLogEvent5_WdWarning(v34);
  }
  if ( v42 )
    DXGADAPTER::ReleaseReferenceNoTracking(v42);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v48, v35, v36);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, 2120);
  return (unsigned int)PairingAdapters;
}

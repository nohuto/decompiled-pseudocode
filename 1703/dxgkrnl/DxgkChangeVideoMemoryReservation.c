/*
 * XREFs of DxgkChangeVideoMemoryReservation @ 0x1C017F8F0
 * Callers:
 *     <none>
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
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C017349C (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservation(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  __int64 v5; // rdx
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
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGADAPTER *v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int PairingAdapters; // r14d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGADAPTER *v45; // rsi
  ADAPTER_RENDER *v46; // r9
  UINT *v47; // rdx
  DXGADAPTER *v48; // [rsp+30h] [rbp-118h] BYREF
  struct DXGADAPTER *v49; // [rsp+40h] [rbp-108h] BYREF
  struct DXGADAPTER *v50; // [rsp+48h] [rbp-100h] BYREF
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v51; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v52; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v53[80]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v54[80]; // [rsp+D0h] [rbp-78h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2120);
  memset(&v51, 0, sizeof(v51));
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v51.hProcess = *(_OWORD *)v4;
  v51.Reservation = *(_QWORD *)(v4 + 16);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_8:
    v11 = qword_1C006E790;
    v12 = (qword_1C006E790 & 2) == 0;
LABEL_9:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2120);
    return (unsigned int)v9;
  }
  hProcess = v51.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v51.hProcess, 512);
  Process = (struct DXGPROCESS *)Current;
  if ( hProcess )
  {
    v16 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v54, 1);
    v9 = v16;
    if ( v16 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = hProcess;
      *(_QWORD *)(v21 + 32) = v9;
      WdLogEvent5_WdWarning(v21);
LABEL_16:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v22, v23, v24);
      goto LABEL_8;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v54);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, v51.hAdapter, Current, &v49);
  v29 = v49;
  if ( !v49 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    LODWORD(v9) = -1073741811;
    v30[3] = -1073741811LL;
    v30[4] = Current;
    v30[5] = v51.hAdapter;
    WdLogEvent5_WdWarning(v30);
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v31, v32, v33);
    v12 = (qword_1C006E790 & 2) == 0;
    goto LABEL_9;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v49, 0LL, &v50, &v52, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    v45 = v50;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v50, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53);
    DXGADAPTER::ReleaseReference(v45);
    if ( PairingAdapters >= 0 )
    {
      v46 = (ADAPTER_RENDER *)*((_QWORD *)v45 + 286);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
      {
        v47 = (UINT *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v47 = (UINT *)MmUserProbeAddress;
        v51.PhysicalAdapterIndex = *v47;
      }
      LODWORD(v9) = ADAPTER_RENDER::ChangeVideoMemoryReservation(v46, Process, &v51);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
      if ( v48 )
        DXGADAPTER::ReleaseReference(v48);
      goto LABEL_16;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
  }
  else
  {
    v39 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
    *(_QWORD *)(v39 + 24) = v29;
    WdLogEvent5_WdWarning(v39);
  }
  if ( v48 )
    DXGADAPTER::ReleaseReference(v48);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v40, v41, v42);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v43, &EventProfilerExit, v44, 2120);
  return (unsigned int)PairingAdapters;
}

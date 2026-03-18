/*
 * XREFs of DxgkSetStablePowerState @ 0x1C01A32E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173460 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173E9C (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  DXGADAPTER *v8; // rcx
  __int64 v9; // r8
  bool v10; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int PairingAdapters; // r15d
  __int64 v21; // rax
  __int64 v22; // r8
  DXGADAPTER *v23; // rcx
  DXGADAPTER *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGADAPTER *v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r8
  DXGADAPTER *v46; // rcx
  unsigned __int64 v47; // [rsp+30h] [rbp-98h] BYREF
  DXGADAPTER *v48; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v49[120]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v50; // [rsp+D8h] [rbp+10h]
  struct DXGADAPTER *v51; // [rsp+E0h] [rbp+18h] BYREF
  struct DXGADAPTER *v52; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2124);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 3083LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_7:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v8, &EventProfilerExit, v9, 2124);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v50 = *v3;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v48,
    (unsigned int)*v3,
    (struct _KTHREAD **)Current,
    &v52);
  v14 = v52;
  if ( !v52 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = (unsigned int)v50;
    WdLogEvent5_WdError(v15);
    v8 = v48;
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v52, 0LL, &v51, &v47, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdWarning(v21);
LABEL_18:
    v23 = v48;
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v23, &EventProfilerExit, v22, 2124);
    return (unsigned int)PairingAdapters;
  }
  v24 = v51;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v51, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49);
  DXGADAPTER::ReleaseReference(v24);
  if ( PairingAdapters < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
    *(_QWORD *)(v29 + 24) = v24;
    WdLogEvent5_WdWarning(v29);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    goto LABEL_18;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 136, 0LL);
  *((_QWORD *)Current + 18) = KeGetCurrentThread();
  v33 = v51;
  v34 = *((unsigned int *)v51 + 50);
  v35 = *(_QWORD *)(*((_QWORD *)Current + 5) + 8 * v34);
  if ( !v35 )
  {
    v36 = WdLogNewEntry5_WdWarning(v34, v30, v31, v32);
    *(_QWORD *)(v36 + 24) = v33;
    *(_QWORD *)(v36 + 32) = Current;
    WdLogEvent5_WdWarning(v36);
    *((_QWORD *)Current + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 136, 0LL);
    KeLeaveCriticalRegion();
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    v8 = v48;
    if ( v48 )
      DXGADAPTER::ReleaseReference(v48);
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
  v37 = *((_QWORD *)v51 + 286);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v37 + 1112, 0LL);
  *(_QWORD *)(v37 + 1120) = KeGetCurrentThread();
  if ( HIDWORD(v50) )
  {
    if ( !*(_DWORD *)(v35 + 28) )
      ADAPTER_RENDER::AddStablePowerReference(*((ADAPTER_RENDER **)v33 + 286));
    ++*(_DWORD *)(v35 + 28);
  }
  else
  {
    v42 = *(_DWORD *)(v35 + 28);
    if ( v42 )
    {
      v44 = v42 - 1;
      *(_DWORD *)(v35 + 28) = v44;
      if ( !v44 )
        ADAPTER_RENDER::ReleaseStablePowerReference(*((ADAPTER_RENDER **)v33 + 286));
    }
    else
    {
      v43 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      *(_QWORD *)(v43 + 24) = Current;
      *(_QWORD *)(v43 + 32) = v51;
      WdLogEvent5_WdWarning(v43);
    }
  }
  *(_QWORD *)(v37 + 1120) = 0LL;
  ExReleasePushLockExclusiveEx(v37 + 1112, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 136, 0LL);
  KeLeaveCriticalRegion();
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
  v46 = v48;
  if ( v48 )
    DXGADAPTER::ReleaseReference(v48);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v46, &EventProfilerExit, v45, 2124);
  return 0LL;
}

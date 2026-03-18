/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C017D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C00236BC (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  DXGADAPTER *v8; // rcx
  __int64 v9; // r8
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  DXGADAPTER *v23; // rcx
  struct DXGADAPTER *v24; // rsi
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  DXGADAPTER *v32; // rcx
  ADAPTER_RENDER *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // r8
  DXGADAPTER *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  DXGADAPTER *v45; // rcx
  struct DXGADAPTER *v46; // [rsp+30h] [rbp-A8h] BYREF
  DXGADAPTER *v47; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v49[80]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v50[2]; // [rsp+A0h] [rbp-38h] BYREF
  int v51; // [rsp+C0h] [rbp-18h]

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2125);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 7330LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v8, &EventProfilerExit, v9, 2125);
    return 3221225485LL;
  }
  v11 = v3;
  if ( v3 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v50[0] = *(_OWORD *)v11;
  v50[1] = *(_OWORD *)(v11 + 16);
  v51 = *(_DWORD *)(v11 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v47, LODWORD(v50[0]), Current, &v46);
  v14 = v46;
  if ( !v46 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = LODWORD(v50[0]);
    WdLogEvent5_WdError(v15);
    v8 = v47;
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    goto LABEL_6;
  }
  LODWORD(v18) = DxgkpGetPairingAdapters(v46, 0LL, &v46, &v48, 0LL, 0LL);
  if ( (int)v18 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v17, v16, v19, v20);
    *(_QWORD *)(v21 + 24) = v14;
    WdLogEvent5_WdWarning(v21);
LABEL_17:
    v23 = v47;
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v23, &EventProfilerExit, v22, 2125);
    return (unsigned int)v18;
  }
  v24 = v46;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v46, 0LL);
  v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v49);
  DXGADAPTER::ReleaseReference(v24);
  if ( v25 >= 0 )
  {
    v33 = (ADAPTER_RENDER *)*((_QWORD *)v24 + 286);
    v34 = *((_QWORD *)v33 + 2);
    if ( *(_QWORD *)(v34 + 784) && *(int *)(v34 + 1944) >= 0x2000 )
    {
      v35 = ADAPTER_RENDER::DdiCalibrateGpuClock(
              v33,
              DWORD1(v50[0]),
              DWORD2(v50[0]),
              (struct _DXGK_GPUCLOCKDATA *)((char *)v50 + 12));
      v18 = v35;
      if ( v35 < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
        v40[3] = v18;
        v40[4] = DWORD1(v50[0]);
        v40[5] = DWORD2(v50[0]);
        WdLogEvent5_WdWarning(v40);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
        goto LABEL_17;
      }
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = v50[0];
      *(_OWORD *)(v3 + 16) = v50[1];
      *(_DWORD *)(v3 + 32) = v51;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
      v42 = v47;
      if ( v47 )
        DXGADAPTER::ReleaseReference(v47);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v42, &EventProfilerExit, v41, 2125);
      return 0LL;
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v33, v26);
      *(_QWORD *)(v43 + 24) = 7392LL;
      WdLogEvent5_WdError(v43);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
      v45 = v47;
      if ( v47 )
        DXGADAPTER::ReleaseReference(v47);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v45, &EventProfilerExit, v44, 2125);
      return 3221225473LL;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = v24;
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v49);
    v32 = v47;
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v32, &EventProfilerExit, v31, 2125);
    return (unsigned int)v25;
  }
}

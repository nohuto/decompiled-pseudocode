/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C0180C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0021A58 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r15
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  ULONG64 v10; // rax
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  DXGADAPTER *v20; // rcx
  struct DXGADAPTER *v21; // rsi
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  DXGADAPTER *v28; // rcx
  ADAPTER_RENDER *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  DXGADAPTER *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  DXGADAPTER *v40; // rcx
  struct DXGADAPTER *v41; // [rsp+30h] [rbp-A8h] BYREF
  DXGADAPTER *v42; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v44[80]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v45[2]; // [rsp+A0h] [rbp-38h] BYREF
  int v46; // [rsp+C0h] [rbp-18h]

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2125);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 7638LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v7, &EventProfilerExit, v8, 2125);
    return 3221225485LL;
  }
  v10 = v3;
  if ( v3 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v45[0] = *(_OWORD *)v10;
  v45[1] = *(_OWORD *)(v10 + 16);
  v46 = *(_DWORD *)(v10 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v42, v45[0], Current, &v41);
  v12 = v41;
  if ( !v41 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = Current;
    *(_QWORD *)(v13 + 32) = LODWORD(v45[0]);
    WdLogEvent5_WdError(v13);
    v7 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReferenceNoTracking(v42);
    goto LABEL_6;
  }
  LODWORD(v16) = DxgkpGetPairingAdapters(v41, 0, &v41, &v43, 0LL, 0LL);
  if ( (int)v16 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v17);
    *(_QWORD *)(v18 + 24) = v12;
    WdLogEvent5_WdWarning(v18);
LABEL_17:
    v20 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReferenceNoTracking(v42);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v20, &EventProfilerExit, v19, 2125);
    return (unsigned int)v16;
  }
  v21 = v41;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v41, 0LL);
  v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44);
  DXGADAPTER::ReleaseReferenceNoTracking(v21);
  if ( v22 >= 0 )
  {
    v29 = (ADAPTER_RENDER *)*((_QWORD *)v21 + 289);
    v30 = *((_QWORD *)v29 + 2);
    if ( *(_QWORD *)(v30 + 784) && *(int *)(v30 + 1968) >= 0x2000 )
    {
      v31 = ADAPTER_RENDER::DdiCalibrateGpuClock(
              v29,
              DWORD1(v45[0]),
              DWORD2(v45[0]),
              (struct _DXGK_GPUCLOCKDATA *)((char *)v45 + 12));
      v16 = v31;
      if ( v31 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
        v35[3] = v16;
        v35[4] = DWORD1(v45[0]);
        v35[5] = DWORD2(v45[0]);
        WdLogEvent5_WdWarning(v35);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
        goto LABEL_17;
      }
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = v45[0];
      *(_OWORD *)(v3 + 16) = v45[1];
      *(_DWORD *)(v3 + 32) = v46;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      v37 = v42;
      if ( v42 )
        DXGADAPTER::ReleaseReferenceNoTracking(v42);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v37, &EventProfilerExit, v36, 2125);
      return 0LL;
    }
    else
    {
      v38 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v38 + 24) = 7700LL;
      WdLogEvent5_WdError(v38);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      v40 = v42;
      if ( v42 )
        DXGADAPTER::ReleaseReferenceNoTracking(v42);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v40, &EventProfilerExit, v39, 2125);
      return 3221225473LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v21;
    WdLogEvent5_WdWarning(v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    v28 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReferenceNoTracking(v42);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v28, &EventProfilerExit, v27, 2125);
    return (unsigned int)v22;
  }
}

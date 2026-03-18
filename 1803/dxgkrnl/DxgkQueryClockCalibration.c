/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C0168630
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0029214 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v12; // rax
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int PairingAdapters; // esi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGADAPTER *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-B0h]
  struct DXGADAPTER *v45; // [rsp+40h] [rbp-A8h] BYREF
  DXGADAPTER *v46; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v48[80]; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v49[2]; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-18h]

  v3 = a1;
  v44 = 0LL;
  v43 = 2125;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2125);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2125);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 8379LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v43);
    return 3221225485LL;
  }
  v12 = v3;
  if ( v3 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v49[0] = *(_OWORD *)v12;
  v49[1] = *(_OWORD *)(v12 + 16);
  v50 = *(_QWORD *)(v12 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v46, v49[0], Current, &v45);
  v14 = v45;
  if ( !v45 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = LODWORD(v49[0]);
    WdLogEvent5_WdError(v15);
    if ( v46 )
      DXGADAPTER::ReleaseReferenceNoTracking(v46);
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v45, 0, &v45, &v47, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v20 + 24) = v14;
    WdLogEvent5_WdWarning(v20);
LABEL_17:
    if ( v46 )
      DXGADAPTER::ReleaseReferenceNoTracking(v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v43);
    return (unsigned int)PairingAdapters;
  }
  v23 = v45;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v45, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48);
  DXGADAPTER::ReleaseReferenceNoTracking(v23);
  if ( PairingAdapters < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = v23;
    WdLogEvent5_WdWarning(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
    goto LABEL_17;
  }
  v28 = (ADAPTER_RENDER *)*((_QWORD *)v23 + 308);
  v29 = *((_QWORD *)v28 + 2);
  if ( *(_QWORD *)(v29 + 784) && *(int *)(v29 + 2104) >= 0x2000 )
  {
    v30 = ADAPTER_RENDER::DdiCalibrateGpuClock(
            v28,
            DWORD1(v49[0]),
            DWORD2(v49[0]),
            (struct _DXGK_GPUCLOCKDATA *)((char *)v49 + 12));
    v34 = v30;
    if ( v30 >= 0 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = v49[0];
      *(_OWORD *)(v3 + 16) = v49[1];
      *(_QWORD *)(v3 + 32) = v50;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      if ( v46 )
        DXGADAPTER::ReleaseReferenceNoTracking(v46);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, v43);
      return 0LL;
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v35[3] = v34;
      v35[4] = DWORD1(v49[0]);
      v35[5] = DWORD2(v49[0]);
      WdLogEvent5_WdWarning(v35);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      if ( v46 )
        DXGADAPTER::ReleaseReferenceNoTracking(v46);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v36, &EventProfilerExit, v37, v43);
      return (unsigned int)v34;
    }
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v40 + 24) = 8441LL;
    WdLogEvent5_WdError(v40);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
    if ( v46 )
      DXGADAPTER::ReleaseReferenceNoTracking(v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v41, &EventProfilerExit, v42, v43);
    return 3221225473LL;
  }
}

/*
 * XREFs of DxgkSetStablePowerState @ 0x1C01B9C10
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
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0158B94 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015B91C (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int PairingAdapters; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_RENDER **v23; // r14
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  ADAPTER_RENDER *v31; // rbx
  struct DXGADAPTER *v32; // r12
  __int64 v33; // rbx
  ADAPTER_RENDER *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // [rsp+30h] [rbp-B8h] BYREF
  int v49; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-A8h]
  DXGADAPTER *v51; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v52[136]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v53; // [rsp+F8h] [rbp+10h]
  struct DXGADAPTER *v54; // [rsp+100h] [rbp+18h] BYREF
  struct DXGADAPTER *v55; // [rsp+108h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  v50 = 0LL;
  v49 = 2124;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2124);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2124);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 3441LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    v11 = (qword_1C0079010 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v49);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v53 = *v3;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v51, *v3, (struct _KTHREAD **)Current, &v55);
  v14 = v55;
  if ( !v55 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = (unsigned int)v53;
    WdLogEvent5_WdError(v15);
    if ( v51 )
      DXGADAPTER::ReleaseReferenceNoTracking(v51);
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v55, 0, &v54, &v48, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 168, 0LL);
    *((_QWORD *)Current + 22) = KeGetCurrentThread();
    v23 = (ADAPTER_RENDER **)v54;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v54, 0LL);
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v23);
    if ( v24 >= 0 )
    {
      v31 = v23[308];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v31 + 56, 0LL);
      *((_QWORD *)v31 + 8) = KeGetCurrentThread();
      v32 = v54;
      v33 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v54 + 50));
      v34 = v23[308];
      if ( !v33 )
      {
        *((_QWORD *)v34 + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v34 + 56, 0LL);
        KeLeaveCriticalRegion();
        v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
        *(_QWORD *)(v38 + 24) = v32;
        *(_QWORD *)(v38 + 32) = Current;
        WdLogEvent5_WdWarning(v38);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
        *((_QWORD *)Current + 22) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
        KeLeaveCriticalRegion();
        if ( v51 )
          DXGADAPTER::ReleaseReferenceNoTracking(v51);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
        v11 = (qword_1C0079010 & 2) == 0;
        goto LABEL_7;
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v34 + 1480, 0LL);
      *((_QWORD *)v34 + 186) = KeGetCurrentThread();
      v42 = *(_DWORD *)(v33 + 28);
      if ( HIDWORD(v53) )
      {
        if ( !v42 )
        {
          ADAPTER_RENDER::AddStablePowerReference(v23[308]);
          v42 = *(_DWORD *)(v33 + 28);
        }
        *(_DWORD *)(v33 + 28) = v42 + 1;
      }
      else if ( v42 )
      {
        v44 = v42 - 1;
        *(_DWORD *)(v33 + 28) = v44;
        if ( !v44 )
          ADAPTER_RENDER::ReleaseStablePowerReference(v23[308]);
      }
      else
      {
        v43 = WdLogNewEntry5_WdWarning(v40, v39, v41);
        *(_QWORD *)(v43 + 24) = Current;
        *(_QWORD *)(v43 + 32) = v54;
        WdLogEvent5_WdWarning(v43);
      }
      *((_QWORD *)v34 + 186) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v34 + 1480, 0LL);
      KeLeaveCriticalRegion();
      v45 = (__int64)v23[308] + 56;
      *(_QWORD *)(v45 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v45, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( v51 )
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v46, &EventProfilerExit, v47, v49);
      return 0LL;
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = v23;
      WdLogEvent5_WdWarning(v28);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
      *((_QWORD *)Current + 22) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( v51 )
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v29, &EventProfilerExit, v30, v49);
      return (unsigned int)v24;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v20 + 24) = v14;
    WdLogEvent5_WdWarning(v20);
    if ( v51 )
      DXGADAPTER::ReleaseReferenceNoTracking(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v49);
    return (unsigned int)PairingAdapters;
  }
}

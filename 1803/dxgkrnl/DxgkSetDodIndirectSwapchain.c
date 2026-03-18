/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C01692E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0153C84 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0153E30 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  ADAPTER_DISPLAY *v36; // rcx
  unsigned int v37; // eax
  unsigned int v38; // edi
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  int v42; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-B0h]
  DXGADAPTER *v44; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v45[4]; // [rsp+50h] [rbp-98h]
  void *v46[2]; // [rsp+60h] [rbp-88h]
  _BYTE v47[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGDEVICE *v48; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v49; // [rsp+100h] [rbp+18h] BYREF
  struct DXGADAPTER *v50; // [rsp+108h] [rbp+20h] BYREF

  v3 = (_OWORD *)a1;
  v43 = 0LL;
  v42 = 2114;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2114);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 8037LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v42);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v45 = *v3;
  *(_OWORD *)v46 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v45[1], Current, &v49);
  v15 = v49;
  if ( !v49 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v45[1];
    WdLogEvent5_WdWarning(v16);
LABEL_14:
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_6;
  }
  v17 = v45[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v45[0], Current, &v50);
  v21 = v50;
  if ( !v50 )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = v17;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_19;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v50, 0LL);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
  if ( v26 >= 0 )
  {
    if ( *((_QWORD *)v21 + 308) || (*((_DWORD *)v21 + 75) & 0x100) == 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v41 + 24) = v17;
      WdLogEvent5_WdWarning(v41);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
LABEL_19:
      if ( v44 )
        DXGADAPTER::ReleaseReferenceNoTracking(v44);
      goto LABEL_14;
    }
    v29 = v45[2];
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v21 + 307), v15, v45[2]) )
    {
      v36 = (ADAPTER_DISPLAY *)*((_QWORD *)v21 + 307);
      if ( LODWORD(v46[1]) )
        v37 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v36, (unsigned int)v29, v32);
      else
        v37 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v36, (unsigned int)v29, v46[0]);
      v38 = v37;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v44 )
        DXGADAPTER::ReleaseReferenceNoTracking(v44);
      if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v42);
      return v38;
    }
    else
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      v33[3] = v15;
      v33[4] = v21;
      v33[5] = v29;
      WdLogEvent5_WdWarning(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v44 )
        DXGADAPTER::ReleaseReferenceNoTracking(v44);
      if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v34, &EventProfilerExit, v35, v42);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    if ( v44 )
      DXGADAPTER::ReleaseReferenceNoTracking(v44);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v42);
    return (unsigned int)v26;
  }
}

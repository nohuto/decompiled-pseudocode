/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C0169730
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // r8
  unsigned int v37; // r9d
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40[4]; // [rsp+30h] [rbp-88h]
  int v41; // [rsp+40h] [rbp-78h] BYREF
  __int64 v42; // [rsp+48h] [rbp-70h]
  DXGADAPTER *v43; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v44[10]; // [rsp+60h] [rbp-58h] BYREF
  struct DXGADAPTER *v45; // [rsp+C8h] [rbp+10h] BYREF

  v3 = a1;
  v42 = 0LL;
  v41 = 2130;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2130);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 9206LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v41);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v40 = *(_QWORD *)v3;
  v12 = *(_DWORD *)(v3 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v43, *(_QWORD *)v3, Current, &v45);
  v16 = v45;
  if ( !v45 )
  {
    v17 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v17 + 24) = Current;
    *(_QWORD *)(v17 + 32) = v40[0];
    WdLogEvent5_WdError(v17);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)v45 + 307) )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v18 + 24) = v16;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v45, 0LL);
  v19 = COREADAPTERACCESS::AcquireExclusive(v44);
  v23 = v19;
  if ( v19 >= 0 )
  {
    if ( v40[1] >= *(_DWORD *)(*((_QWORD *)v16 + 307) + 80LL) )
    {
      v27 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v27 + 24) = v40[1];
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
LABEL_14:
      if ( v43 )
        DXGADAPTER::ReleaseReferenceNoTracking(v43);
      goto LABEL_6;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent(v21, v20) + 322) )
    {
      *(_BYTE *)(3760LL * v40[1] + *(_QWORD *)(*((_QWORD *)v16 + 307) + 112LL) + 1112) = v12 != 0;
      v34 = *((_QWORD *)v16 + 307);
      if ( v12 )
      {
        *(_BYTE *)(v34 + 276) = 1;
      }
      else
      {
        *(_BYTE *)(v34 + 276) = 0;
        v35 = 0;
        v36 = *((_QWORD *)v16 + 307);
        v37 = *(_DWORD *)(v36 + 80);
        if ( v37 )
        {
          while ( !*(_BYTE *)(3760LL * v35 + *(_QWORD *)(v36 + 112) + 1112) )
          {
            if ( ++v35 >= v37 )
              goto LABEL_41;
          }
          *(_BYTE *)(v36 + 276) = 1;
        }
      }
LABEL_41:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      if ( v43 )
        DXGADAPTER::ReleaseReferenceNoTracking(v43);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, v41);
      return 0LL;
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v31 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v31);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      if ( v43 )
        DXGADAPTER::ReleaseReferenceNoTracking(v43);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v32, &EventProfilerExit, v33, v41);
      return 3221225506LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    if ( v43 )
      DXGADAPTER::ReleaseReferenceNoTracking(v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v41);
    return (unsigned int)v23;
  }
}

/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C01672D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+30h] [rbp-19h] BYREF
  __int64 v24; // [rsp+38h] [rbp-11h]
  DXGADAPTER *v25; // [rsp+40h] [rbp-9h] BYREF
  __int64 v26; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v27[32]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v28[40]; // [rsp+78h] [rbp+2Fh] BYREF
  struct DXGADAPTER *v29; // [rsp+B8h] [rbp+6Fh] BYREF

  v24 = 0LL;
  v3 = (unsigned int)a1;
  v23 = 2189;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2189);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2189);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    goto LABEL_20;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v25, v3, Current, &v29);
  v13 = v29;
  if ( !v29 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    v9 = -1073741811;
    *(_QWORD *)(v14 + 24) = v3;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    goto LABEL_18;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v26, v29, 0LL);
  v15 = COREADAPTERACCESS::AcquireExclusive(&v26);
  if ( v15 == -1073741130 )
  {
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  if ( v15 >= 0 )
  {
    v18 = *((_QWORD *)v13 + 308);
    if ( v18 )
    {
      if ( !*((_BYTE *)v13 + 185) )
        ADAPTER_RENDER::FlushScheduler(v18, 1, 0xFFFFFFFF, 0);
      v9 = 0;
      goto LABEL_17;
    }
    v19 = WdLogNewEntry5_WdWarning(0LL, v16, v17);
    *(_QWORD *)(v19 + 24) = v3;
    *(_QWORD *)(v19 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_12;
  }
LABEL_13:
  v9 = v15;
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
LABEL_18:
  if ( v25 )
    DXGADAPTER::ReleaseReferenceNoTracking(v25);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v9;
}

/*
 * XREFs of DxgkSubmitCommandToHwQueue @ 0x1C01A5850
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C01A3484 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  DXGHWQUEUE *v15; // rsi
  _QWORD *v16; // rax
  __int64 hHwQueue; // rcx
  struct DXGDEVICE *v18; // rbx
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-E0h]
  _BYTE v25[16]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v26[8]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-C0h]
  char v28; // [rsp+60h] [rbp-B8h]
  _BYTE v29[16]; // [rsp+68h] [rbp-B0h] BYREF
  _D3DKMT_SUBMITCOMMANDTOHWQUEUE v30; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE v31[96]; // [rsp+B0h] [rbp-68h] BYREF
  struct DXGHWQUEUE *v32; // [rsp+128h] [rbp+10h] BYREF

  v3 = (_D3DKMT_SUBMITCOMMANDTOHWQUEUE *)a1;
  v24 = 0LL;
  v23 = 2160;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2160);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2160);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v32 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = PsGetCurrentProcess(v10, v9);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v23);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
  v30 = *v3;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v25, v30.hHwQueue, (struct _KTHREAD **)Current, &v32, 0);
  v15 = v32;
  if ( !v32 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = Current;
    hHwQueue = v30.hHwQueue;
    v16[5] = -1073741811LL;
LABEL_14:
    v16[4] = hHwQueue;
    WdLogEvent5_WdError(v16);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v25);
    goto LABEL_6;
  }
  if ( v30.NumPrimaries > 0x10 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = v15;
    hHwQueue = v30.NumPrimaries;
    v16[5] = 16LL;
    v16[6] = -1073741811LL;
    goto LABEL_14;
  }
  v18 = *(struct DXGDEVICE **)(*((_QWORD *)v32 + 2) + 16LL);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29,
    v18);
  v27 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  v28 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v18, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
  if ( v20 >= 0 )
    v20 = DXGHWQUEUE::SubmitCommand(v15, &v30);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  if ( v28 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v23);
  return (unsigned int)v20;
}

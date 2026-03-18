/*
 * XREFs of DxgkWaitForIdle @ 0x1C018EE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

__int64 __fastcall DxgkWaitForIdle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-B0h]
  _BYTE v23[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-A0h]
  char v25; // [rsp+50h] [rbp-98h]
  _QWORD v26[2]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v27[24]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v28[104]; // [rsp+80h] [rbp-68h] BYREF
  struct DXGDEVICE *v29; // [rsp+100h] [rbp+18h] BYREF
  struct DXGDEVICE *v30; // [rsp+108h] [rbp+20h] BYREF

  v3 = (unsigned int *)a1;
  v22 = 0LL;
  v21 = 2045;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2045);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2045);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned int *)MmUserProbeAddress;
    v9 = *v3;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v9, Current, &v30);
    v14 = v30;
    if ( v30 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v30);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (struct _KTHREAD **)v14 + 14);
      v24 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      v25 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v14, 0, v16, 0);
      v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28);
      v9 = v17;
      if ( v17 < 0 )
      {
        v20 = WdLogNewEntry5_WdEvent(v19, v18);
        *(_QWORD *)(v20 + 24) = v9;
        *(_QWORD *)(v20 + 32) = v14;
        WdLogEvent5_WdEvent(v20);
      }
      else
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v28);
        DXGDEVICE::FlushScheduler(v14, 1u);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
      if ( v25 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
      if ( v26[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v9;
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
    }
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v21);
  return (unsigned int)v9;
}

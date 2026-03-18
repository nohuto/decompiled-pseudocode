/*
 * XREFs of ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00A0DF8
 * Callers:
 *     DxgkDestroyContextInternal @ 0x1C009E7F8 (DxgkDestroyContextInternal.c)
 *     DxgkDestroyContext @ 0x1C00A0DE0 (DxgkDestroyContext.c)
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017ED90 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0016D90 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01A2618 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_DESTROYCONTEXT *v4; // rdi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hContext; // esi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  _QWORD v25[3]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-20h] BYREF

  v4 = a1;
  v24 = 0LL;
  v23 = 2040;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2040);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2040);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (const struct _D3DKMT_DESTROYCONTEXT *)MmUserProbeAddress;
      hContext = v4->hContext;
    }
    else
    {
      hContext = v4->hContext;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v25,
      (struct _KTHREAD **)Current);
    v10 = (hContext >> 6) & 0xFFFFFF;
    v11 = *((_DWORD *)Current + 62);
    if ( (unsigned int)v10 < v11
      && (v12 = *((_QWORD *)Current + 29),
          v9 = *(unsigned int *)(v12 + 16LL * (unsigned int)v10 + 8),
          v8 = (hContext >> 25) & 0x60,
          ((hContext >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * (unsigned int)v10 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0
      && (*(_BYTE *)(v12 + 16 * (((unsigned __int64)hContext >> 6) & 0xFFFFFF) + 8) & 0x1F) == 7 )
    {
      v13 = *(_QWORD *)(v12 + 16 * (((unsigned __int64)hContext >> 6) & 0xFFFFFF));
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      if ( (unsigned int)v10 < v11 )
      {
        v14 = *((_QWORD *)Current + 29);
        v15 = *(_DWORD *)(v14 + 16LL * (unsigned int)v10 + 8);
        if ( ((hContext >> 25) & 0x60) == (v15 & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
          *(_DWORD *)(v14 + 16 * (((unsigned __int64)hContext >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
      if ( (*(_DWORD *)(v13 + 364) & 0x10) != 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v25,
          *(struct DXGDEVICE **)(v13 + 16));
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v26,
          (struct _KTHREAD **)(*(_QWORD *)(v13 + 16) + 112LL));
        DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
        if ( v25[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
      }
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v13);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v23);
      return 0LL;
    }
    v20 = WdLogNewEntry5_WdWarning(v8, v10, v9);
    *(_QWORD *)(v20 + 24) = hContext;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v23);
  return 3221225485LL;
}

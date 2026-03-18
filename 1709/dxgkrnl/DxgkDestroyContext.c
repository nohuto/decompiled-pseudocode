/*
 * XREFs of DxgkDestroyContext @ 0x1C0090B10
 * Callers:
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192C50 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0008E44 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01ACABC (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  bool v4; // si
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int v7; // esi
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
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  _QWORD v24[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-20h] BYREF

  v3 = (unsigned int *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2040);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      v7 = *v3;
    }
    else
    {
      v7 = *v3;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, Current);
    v10 = (v7 >> 6) & 0xFFFFFF;
    v11 = *((_DWORD *)Current + 60);
    if ( (unsigned int)v10 < v11
      && (v12 = *((_QWORD *)Current + 28),
          v9 = *(unsigned int *)(v12 + 16LL * (unsigned int)v10 + 8),
          v8 = (v7 >> 25) & 0x60,
          ((v7 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * (unsigned int)v10 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0
      && (*(_BYTE *)(v12 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 7 )
    {
      v13 = *(_QWORD *)(v12 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF));
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      if ( (unsigned int)v10 < v11 )
      {
        v14 = *((_QWORD *)Current + 28);
        v15 = *(_DWORD *)(v14 + 16LL * (unsigned int)v10 + 8);
        if ( ((v7 >> 25) & 0x60) == (v15 & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
          *(_DWORD *)(v14 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
      if ( (*(_DWORD *)(v13 + 364) & 0x10) != 0 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v24,
          *(struct DXGDEVICE **)(v13 + 16));
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
          (struct _KTHREAD **)(*(_QWORD *)(v13 + 16) + 112LL));
        DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v13, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
        if ( v24[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
      }
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v13);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, 2040);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdWarning(v8, v10, v9);
    *(_QWORD *)(v23 + 24) = v7;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    v22 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v21 = qword_1C005F010;
    v22 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v20, 2040);
  return 3221225485LL;
}

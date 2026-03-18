/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C00D9750
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F820 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C01830D0 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // di
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  unsigned int *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  DXGADAPTER *v12; // r14
  int PairingAdapters; // ebx
  int v14; // eax
  DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // ebx
  unsigned int HostProcess; // eax
  int v27; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-B0h]
  struct DXGADAPTER *v29; // [rsp+40h] [rbp-A8h] BYREF
  DXGADAPTER *v30; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-90h] BYREF
  _BYTE v32[80]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-28h]

  v3 = a1;
  v28 = 0LL;
  v27 = 2099;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2099);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2099);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v5);
    PairingAdapters = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_17;
  }
  if ( v4 )
  {
    v7 = (unsigned int *)&v33;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v33 = *(_OWORD *)v3;
    v34 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v7 = (unsigned int *)v3;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v30, *v7, Current, &v29);
  v11 = v29;
  if ( !v29 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    PairingAdapters = -1073741811;
    v20[3] = -1073741811LL;
    v20[4] = Current;
    v20[5] = *v7;
    WdLogEvent5_WdWarning(v20);
    v15 = v30;
    if ( !v30 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v12 = 0LL;
  if ( !*((_QWORD *)v29 + 308) )
  {
    PairingAdapters = DxgkpGetPairingAdapters(v29, 0, &v29, &v31, 0LL, 0LL);
    if ( PairingAdapters < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = v29;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_15;
    }
    v11 = v29;
    v12 = v29;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v11, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
  if ( PairingAdapters >= 0 )
  {
    if ( *((_BYTE *)v11 + 185) )
    {
      v25 = *((_DWORD *)v11 + 1034);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v11 + 4080),
              HostProcess,
              v25,
              *((_QWORD *)v7 + 1),
              *((_QWORD *)v7 + 2));
    }
    else
    {
      v14 = _guard_dispatch_icall_fptr();
    }
    PairingAdapters = v14;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  if ( v12 )
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
LABEL_15:
  v15 = v30;
  if ( v30 )
LABEL_16:
    DXGADAPTER::ReleaseReferenceNoTracking(v15);
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v27);
  return (unsigned int)PairingAdapters;
}

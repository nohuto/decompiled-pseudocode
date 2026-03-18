/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C00F6EE0
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01936B0 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C019688C (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r13
  unsigned int *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  DXGADAPTER *v14; // r15
  int PairingAdapters; // ebx
  int v16; // eax
  __int64 v17; // r8
  DXGADAPTER *v18; // rcx
  bool v19; // zf
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned int HostProcess; // eax
  struct DXGADAPTER *v29; // [rsp+30h] [rbp-A8h] BYREF
  DXGADAPTER *v30; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v32[80]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-28h]

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2099);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v21 = WdLogNewEntry5_WdError(v7);
    PairingAdapters = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v18 = (DXGADAPTER *)qword_1C005F010;
    v19 = (qword_1C005F010 & 2) == 0;
    goto LABEL_18;
  }
  if ( v4 )
  {
    v9 = (unsigned int *)&v33;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v33 = *(_OWORD *)v3;
    v34 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v9 = (unsigned int *)v3;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v30, *v9, Current, &v29);
  v13 = v29;
  if ( v29 )
  {
    v14 = 0LL;
    if ( !*((_QWORD *)v29 + 289) )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v29, 0, &v29, &v31, 0LL, 0LL);
      if ( PairingAdapters < 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
        *(_QWORD *)(v26 + 24) = v29;
        WdLogEvent5_WdWarning(v26);
LABEL_15:
        v18 = v30;
        if ( v30 )
          DXGADAPTER::ReleaseReferenceNoTracking(v30);
        v19 = (qword_1C005F010 & 2) == 0;
        goto LABEL_18;
      }
      v13 = v29;
      v14 = v29;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v13, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
    if ( PairingAdapters >= 0 )
    {
      if ( *((_BYTE *)v13 + 185) )
      {
        v27 = *((_DWORD *)v13 + 978);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
        v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
                (struct DXGADAPTER *)((char *)v13 + 3888),
                HostProcess,
                v27,
                *((_QWORD *)v9 + 1),
                *((_QWORD *)v9 + 2));
      }
      else
      {
        v16 = _guard_dispatch_icall_fptr();
      }
      PairingAdapters = v16;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    if ( v14 )
      DXGADAPTER::ReleaseReferenceNoTracking(v14);
    goto LABEL_15;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
  PairingAdapters = -1073741811;
  v22[3] = -1073741811LL;
  v22[4] = Current;
  v22[5] = *v9;
  WdLogEvent5_WdWarning(v22);
  v18 = v30;
  if ( v30 )
    DXGADAPTER::ReleaseReferenceNoTracking(v30);
  v19 = (qword_1C005F010 & 2) == 0;
LABEL_18:
  if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v18, &EventProfilerExit, v17, 2099);
  return (unsigned int)PairingAdapters;
}

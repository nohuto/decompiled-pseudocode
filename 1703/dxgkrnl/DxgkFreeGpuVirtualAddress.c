/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C00A48A0
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D8A0 (-VmBusFreeGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXGADAPTER@@QEAAJII_K0@Z @ 0x1C00303F4 (-VmBusSendFreeGpuVirtualAddress@DXGADAPTER@@QEAAJII_K0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r12
  unsigned int *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // r14
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r8
  __int64 v18; // rax
  DXGADAPTER *v19; // rcx
  bool v20; // zf
  _QWORD *v21; // rax
  int v22; // ebx
  int HostProcess; // eax
  DXGADAPTER *v24; // [rsp+30h] [rbp-A8h] BYREF
  struct DXGADAPTER *v25; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v26[80]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-28h]

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2099);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 )
    {
      v8 = (unsigned int *)&v27;
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      v27 = *(_OWORD *)v3;
      v28 = *(_QWORD *)(v3 + 16);
    }
    else
    {
      v8 = (unsigned int *)v3;
    }
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v24, *v8, Current, &v25);
    v13 = v25;
    if ( v25 )
    {
      if ( *((_QWORD *)v25 + 286) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v25, 0LL);
        v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
        if ( v14 >= 0 )
        {
          if ( *((_BYTE *)v13 + 186) )
          {
            v22 = *((_DWORD *)v13 + 972);
            HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
            v15 = DXGADAPTER::VmBusSendFreeGpuVirtualAddress(
                    v13,
                    HostProcess,
                    v22,
                    *((struct _MDL **)v8 + 1),
                    *((_QWORD *)v8 + 2));
          }
          else
          {
            v15 = _guard_dispatch_icall_fptr();
          }
          v14 = v15;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
        if ( v24 )
          DXGADAPTER::ReleaseReference(v24);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(qword_1C006E790, &EventProfilerExit, v16, 2099);
        return (unsigned int)v14;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      v21[3] = -1073741811LL;
      v21[4] = Current;
      v21[5] = *v8;
      WdLogEvent5_WdWarning(v21);
    }
    v19 = v24;
    if ( v24 )
      DXGADAPTER::ReleaseReference(v24);
    v20 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    v19 = (DXGADAPTER *)qword_1C006E790;
    v20 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v19, &EventProfilerExit, v11, 2099);
  return 3221225485LL;
}

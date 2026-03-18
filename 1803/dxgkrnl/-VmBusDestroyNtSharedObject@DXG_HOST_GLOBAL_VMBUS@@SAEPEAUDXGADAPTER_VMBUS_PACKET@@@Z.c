/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8670 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct _KTHREAD ***a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned int v4; // edx
  struct _KTHREAD **v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *v7; // rsi
  int v8; // r8d
  int *v9; // rsi
  __int64 v10; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v2 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v12, a1[7]);
    v4 = *(_DWORD *)(v2 + 24);
    v5 = a1[7];
    v6 = (v4 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v6 < *((_DWORD *)v5 + 62)
      && (v7 = v5[29],
          v3 = (v4 >> 25) & 0x60,
          v8 = *((_DWORD *)v7 + 4 * v6 + 2),
          ((v4 >> 25) & 0x60) == (*((_BYTE *)v7 + 16 * v6 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) == 0xD
      && (v9 = (int *)*((_QWORD *)v7 + 2 * (unsigned int)v6)) != 0LL )
    {
      HMGRTABLE::FreeHandle((HMGRTABLE *)(v5 + 29), v4);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      KeStackAttachProcess(a1[7][7], &ApcState);
      DXGSHAREDVMOBJECT::ReleaseReference(v9);
      KeUnstackDetachProcess(&ApcState);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v10 + 24) = *(unsigned int *)(v2 + 24);
      WdLogEvent5_WdError(v10);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    }
  }
  return 0;
}

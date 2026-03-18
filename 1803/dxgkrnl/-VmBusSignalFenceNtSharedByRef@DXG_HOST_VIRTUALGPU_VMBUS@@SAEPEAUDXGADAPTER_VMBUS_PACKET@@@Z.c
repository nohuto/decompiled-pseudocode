/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00DFE10 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017A2FC (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD **v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int **v8; // rbx
  __int64 v9; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct _KTHREAD **)*((_QWORD *)a1 + 7);
    v12 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v11, v4);
    v5 = *((_QWORD *)a1 + 7);
    v6 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 248)
      && (v7 = *(_QWORD *)(v5 + 232),
          v5 = *(unsigned int *)(v7 + 16 * v6 + 8),
          ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60))
      && (v5 & 0x2000) == 0
      && (v5 & 0x1F) != 0
      && (v5 &= 0x1Fu, (_BYTE)v5 == 13)
      && (v8 = *(unsigned int ***)(v7 + 16LL * (unsigned int)v6)) != 0LL
      && (*(_DWORD *)v8 == 11 || *(_DWORD *)v8 == 8) )
    {
      DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v8);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
      v12 = DxgkSignalSynchronizationObjectFromGpuByReference(v8[1], *(_QWORD *)(v3 + 32), *(_DWORD *)(v3 + 28));
      DXGSHAREDVMOBJECT::ReleaseReference((int *)v8);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = *(unsigned int *)(v3 + 24);
      WdLogEvent5_WdError(v9);
      v12 = -1073741811;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v12, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

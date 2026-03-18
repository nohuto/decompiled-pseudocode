/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F870
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D2F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00E5AE0 (DxgkGetDeviceState.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int DeviceState; // eax
  struct VMBPACKETCOMPLETION__ *v5; // rcx
  _OWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v7, 0, sizeof(v7));
    v7[0] = *(_OWORD *)(v3 + 24);
    v7[1] = *(_OWORD *)(v3 + 40);
    v7[2] = *(_OWORD *)(v3 + 56);
    *(_QWORD *)&v7[3] = *(_QWORD *)(v3 + 72);
    DeviceState = DxgkGetDeviceState((ULONG64)v7);
    v5 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    DWORD2(v7[3]) = DeviceState;
    VmBusCompletePacket(v5, v7, 0x40u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

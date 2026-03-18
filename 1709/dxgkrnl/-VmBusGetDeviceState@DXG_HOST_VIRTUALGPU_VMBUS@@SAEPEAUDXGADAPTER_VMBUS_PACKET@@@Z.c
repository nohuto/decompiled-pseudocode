/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01936F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00B3B20 (DxgkGetDeviceState.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int DeviceState; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *((_QWORD *)a1 + 9);
  v8[0] = *(_OWORD *)(v2 + 24);
  v8[1] = *(_OWORD *)(v2 + 40);
  v8[2] = *(_OWORD *)(v2 + 56);
  *(_QWORD *)&v8[3] = *(_QWORD *)(v2 + 72);
  DeviceState = DxgkGetDeviceState((ULONG64)v8, v3, v4);
  v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  DWORD2(v8[3]) = DeviceState;
  VmBusCompletePacket(v6, v8, 0x40u);
  return 1;
}

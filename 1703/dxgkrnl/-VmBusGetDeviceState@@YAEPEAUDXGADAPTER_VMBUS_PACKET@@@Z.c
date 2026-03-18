/*
 * XREFs of ?VmBusGetDeviceState@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D8E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C008F710 (DxgkGetDeviceState.c)
 */

unsigned __int8 __fastcall VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  int DeviceState; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  _OWORD v6[4]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = *((_QWORD *)a1 + 9);
  v6[0] = *(_OWORD *)(v2 + 16);
  v6[1] = *(_OWORD *)(v2 + 32);
  v6[2] = *(_OWORD *)(v2 + 48);
  *(_QWORD *)&v6[3] = *(_QWORD *)(v2 + 64);
  DeviceState = DxgkGetDeviceState(v6);
  v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  DWORD2(v6[3]) = DeviceState;
  VmBusCompletePacket(v4, v6, 0x40u);
  return 1;
}

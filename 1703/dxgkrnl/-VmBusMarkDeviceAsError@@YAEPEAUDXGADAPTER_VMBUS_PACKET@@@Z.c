/*
 * XREFs of ?VmBusMarkDeviceAsError@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C008B7C0 (DxgkMarkDeviceAsError.c)
 */

unsigned __int8 __fastcall VmBusMarkDeviceAsError(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  int v2; // eax
  struct VMBPACKETCOMPLETION__ *v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = DxgkMarkDeviceAsError(*((_QWORD *)a1 + 9) + 16LL);
  v3 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v5 = v2;
  VmBusCompletePacket(v3, &v5, 4u);
  return 1;
}

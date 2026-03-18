/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033650
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 */

unsigned __int8 __fastcall VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int updated; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  memset(v6, 0, 0x38uLL);
  v6[5] = *(_QWORD *)(v1 + 16);
  LODWORD(v6[6]) = *(_DWORD *)(v1 + 40);
  v6[0] = *(_QWORD *)(v1 + 24);
  v6[1] = *(_QWORD *)(v1 + 32);
  v6[2] = v1 + 48;
  updated = DxgkUpdateGpuVirtualAddress(v6);
  v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v7 = updated;
  VmBusCompletePacket(v4, &v7, 4u);
  return 1;
}

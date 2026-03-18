/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193770
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  struct VMBPACKETCOMPLETION__ *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = *((_QWORD *)a1 + 5);
  v2 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  LODWORD(v4) = *(_DWORD *)(*(_QWORD *)(v1 + 16) + 300LL);
  VmBusCompletePacket(v2, &v4, 8u);
  return 1;
}

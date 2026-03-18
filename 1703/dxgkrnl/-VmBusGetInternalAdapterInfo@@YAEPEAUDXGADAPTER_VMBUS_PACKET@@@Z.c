/*
 * XREFs of ?VmBusGetInternalAdapterInfo@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D960
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  struct VMBPACKETCOMPLETION__ *v2; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v4 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 300LL);
  VmBusCompletePacket(v2, &v4, 8u);
  return 1;
}

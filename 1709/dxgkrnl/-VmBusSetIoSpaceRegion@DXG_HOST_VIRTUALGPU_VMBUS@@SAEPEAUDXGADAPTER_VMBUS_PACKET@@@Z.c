/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01999A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v7 = 0;
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_QWORD *)(v1 + 32);
  if ( v4 == *(_QWORD *)(v3 + 184) )
  {
    v5 = *(_QWORD *)(v3 + 192);
    if ( !*(_QWORD *)(v5 + 496) )
    {
      *(_QWORD *)(v5 + 496) = *(_QWORD *)(v1 + 24);
      *(_QWORD *)(v5 + 504) = v4;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v7, 4u);
  return 1;
}

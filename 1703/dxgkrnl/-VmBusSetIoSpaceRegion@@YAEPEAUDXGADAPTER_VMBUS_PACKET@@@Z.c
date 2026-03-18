/*
 * XREFs of ?VmBusSetIoSpaceRegion@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032D40
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v4 = 0;
  if ( *(_DWORD *)(v1 + 24) == 0x10000000 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( !*(_QWORD *)(v2 + 448) )
    {
      *(_QWORD *)(v2 + 448) = *(_QWORD *)(v1 + 16);
      *(_DWORD *)(v2 + 456) = 0x10000000;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v4, 4u);
  return 1;
}

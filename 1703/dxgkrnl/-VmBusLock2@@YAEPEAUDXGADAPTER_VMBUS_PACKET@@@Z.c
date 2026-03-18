/*
 * XREFs of ?VmBusLock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D9A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock @ 0x1C009DBE0 (DxgkLock.c)
 *     DxgkLock2 @ 0x1C00CA6A0 (DxgkLock2.c)
 */

unsigned __int8 __fastcall VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int v3; // ecx
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h]
  _QWORD v7[6]; // [rsp+30h] [rbp-30h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v5 = 0LL;
  v6 = 0LL;
  if ( *(_BYTE *)(v1 + 40) )
  {
    memset(v7, 0, sizeof(v7));
    v7[0] = *(_QWORD *)(v1 + 16);
    LODWORD(v7[4]) = *(_DWORD *)(v1 + 44);
    LODWORD(v7[1]) = *(_DWORD *)(v1 + 48);
    v3 = DxgkLock(v7);
    v6 = v7[3];
  }
  else
  {
    v3 = DxgkLock2(v1 + 16);
    v6 = *(_QWORD *)(v1 + 32);
  }
  LODWORD(v5) = v3;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v5, 0x10u);
  return 1;
}

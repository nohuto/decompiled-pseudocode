/*
 * XREFs of ?VmBusUnlock2@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00335E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUnlock @ 0x1C009F070 (DxgkUnlock.c)
 *     DxgkUnlock2 @ 0x1C00BEED0 (DxgkUnlock2.c)
 */

unsigned __int8 __fastcall VmBusUnlock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  if ( *(_BYTE *)(v1 + 24) )
  {
    v6[0] = 0LL;
    LODWORD(v6[0]) = *(_DWORD *)(v1 + 16);
    v6[1] = v1 + 20;
    HIDWORD(v6[0]) = 1;
    v3 = DxgkUnlock(v6);
  }
  else
  {
    v3 = DxgkUnlock2(v1 + 16);
  }
  v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v7 = v3;
  VmBusCompletePacket(v4, &v7, 4u);
  return 1;
}

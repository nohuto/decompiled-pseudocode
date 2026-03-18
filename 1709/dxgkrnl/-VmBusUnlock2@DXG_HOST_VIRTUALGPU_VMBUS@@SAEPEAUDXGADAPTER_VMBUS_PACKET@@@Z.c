/*
 * XREFs of ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUnlock @ 0x1C0091F80 (DxgkUnlock.c)
 *     DxgkUnlock2 @ 0x1C00A1620 (DxgkUnlock2.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUnlock2(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v5; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 9);
  if ( *(_BYTE *)(v3 + 32) )
  {
    v8[0] = 0LL;
    LODWORD(v8[0]) = *(_DWORD *)(v3 + 24);
    v8[1] = v3 + 28;
    HIDWORD(v8[0]) = 1;
    v5 = DxgkUnlock((__int64)v8, a2, a3);
  }
  else
  {
    v5 = DxgkUnlock2((struct _D3DKMT_UNLOCK2 *)(v3 + 24));
  }
  v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v9 = v5;
  VmBusCompletePacket(v6, &v9, 4u);
  return 1;
}

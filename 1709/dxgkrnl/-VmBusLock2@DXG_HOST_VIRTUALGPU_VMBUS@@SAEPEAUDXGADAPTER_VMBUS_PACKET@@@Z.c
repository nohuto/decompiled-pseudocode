/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193960
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock @ 0x1C0092200 (DxgkLock.c)
 *     DxgkLock2 @ 0x1C009E500 (DxgkLock2.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  void *pData; // [rsp+28h] [rbp-38h]
  struct _D3DKMT_LOCK v9; // [rsp+30h] [rbp-30h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v7 = 0LL;
  pData = 0LL;
  if ( *(_BYTE *)(v1 + 48) )
  {
    memset(&v9, 0, sizeof(v9));
    v9.hAllocation = *(_DWORD *)(v1 + 28);
    v9.hDevice = *(_DWORD *)(v1 + 24);
    v9.Flags.Value = *(_DWORD *)(v1 + 52);
    v9.PrivateDriverData = *(_DWORD *)(v1 + 56);
    v3 = DxgkLock(&v9, v4, v5);
    pData = v9.pData;
  }
  else
  {
    v3 = DxgkLock2(v1 + 24);
    pData = *(void **)(v1 + 40);
  }
  LODWORD(v7) = v3;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v7, 0x10u);
  return 1;
}

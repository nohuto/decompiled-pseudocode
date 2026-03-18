/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A210
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01854C0 (DxgkUpdateGpuVirtualAddress.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD v9[8]; // [rsp+20h] [rbp-40h] BYREF
  int updated; // [rsp+70h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  memset(v9, 0, 0x38uLL);
  v9[5] = *(_QWORD *)(v1 + 24);
  LODWORD(v9[6]) = *(_DWORD *)(v1 + 48);
  v9[0] = *(_QWORD *)(v1 + 32);
  v9[1] = *(_QWORD *)(v1 + 40);
  v9[2] = v1 + 56;
  v5 = *(_DWORD *)(v1 + 44);
  if ( v5 && (v3 = (unsigned int)(v5 - 1), v6 = ((unsigned __int64)*((unsigned int *)a1 + 20) - 120) >> 6, v6 >= v3) )
  {
    updated = DxgkUpdateGpuVirtualAddress((__int64)v9, v6, v4);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v7 + 24) = *(unsigned int *)(v1 + 44);
    WdLogEvent5_WdError(v7);
    updated = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &updated, 4u);
  return 1;
}

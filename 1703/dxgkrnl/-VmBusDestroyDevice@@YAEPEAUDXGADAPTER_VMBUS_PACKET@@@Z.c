/*
 * XREFs of ?VmBusDestroyDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CF90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 */

unsigned __int8 __fastcall VmBusDestroyDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 16LL);
  DxgkDestroyDevice(&v2);
  return 0;
}

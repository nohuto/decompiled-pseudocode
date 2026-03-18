/*
 * XREFs of ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192C80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyDevice @ 0x1C00F2970 (DxgkDestroyDevice.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 24LL);
  DxgkDestroyDevice(&v2);
  return 0;
}

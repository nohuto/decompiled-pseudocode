/*
 * XREFs of ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192C50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyContext @ 0x1C0090B10 (DxgkDestroyContext.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 24LL);
  DxgkDestroyContext((__int64)&v4, a2, a3);
  return 0;
}

/*
 * XREFs of ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00F309C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyPagingQueue(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  D3DDDI_DESTROYPAGINGQUEUE v4; // [rsp+30h] [rbp+8h] BYREF

  v4.hPagingQueue = *(_DWORD *)(*((_QWORD *)a1 + 9) + 24LL);
  DxgkDestroyPagingQueueInternal(&v4, 0LL, a3);
  return 0;
}

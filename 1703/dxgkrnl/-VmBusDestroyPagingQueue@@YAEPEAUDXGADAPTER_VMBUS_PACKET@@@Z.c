/*
 * XREFs of ?VmBusDestroyPagingQueue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C009FF30 (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 */

unsigned __int8 __fastcall VmBusDestroyPagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  D3DDDI_DESTROYPAGINGQUEUE v2; // [rsp+30h] [rbp+8h] BYREF

  v2.hPagingQueue = *(_DWORD *)(*((_QWORD *)a1 + 9) + 16LL);
  DxgkDestroyPagingQueueInternal(&v2, 0);
  return 0;
}

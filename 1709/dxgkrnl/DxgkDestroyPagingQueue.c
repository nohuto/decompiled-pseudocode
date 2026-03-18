/*
 * XREFs of DxgkDestroyPagingQueue @ 0x1C00F3080
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00F309C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 */

__int64 __fastcall DxgkDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1)
{
  return DxgkDestroyPagingQueueInternal(a1, 1);
}

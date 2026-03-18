/*
 * XREFs of DxgkDestroyPagingQueue @ 0x1C009FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1)
{
  return DxgkDestroyPagingQueueInternal(a1, 1);
}

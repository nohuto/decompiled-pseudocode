/*
 * XREFs of ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C009FF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1)
{
  return DxgkDestroyPagingQueueInternal(a1, 0);
}

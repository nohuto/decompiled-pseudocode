/*
 * XREFs of ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00FAD00
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C009177C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

__int64 __fastcall DxgkCddCreatePagingQueue(struct _D3DKMT_CREATEPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkCreatePagingQueueInternal(a1, 0, a3);
}

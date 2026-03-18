/*
 * XREFs of DxgkCreatePagingQueue @ 0x1C0091760
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C009177C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

__int64 __fastcall DxgkCreatePagingQueue(struct _D3DKMT_CREATEPAGINGQUEUE *a1)
{
  return DxgkCreatePagingQueueInternal(a1, 1);
}

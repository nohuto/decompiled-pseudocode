/*
 * XREFs of ?Release@CHwBitmapColorSource@@WHA@EAAKXZ @ 0x1800DE540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwBitmapColorSource::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CHolographicInteropTaskQueue *)(a1 - 112));
}

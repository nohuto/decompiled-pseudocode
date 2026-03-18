/*
 * XREFs of ?Release@CHwBitmapColorSource@@WHA@EAAKXZ @ 0x1800C6DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CMILRefCountBase *)(a1 - 112));
}

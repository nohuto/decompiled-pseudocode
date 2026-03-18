/*
 * XREFs of ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800C6230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicExclusivePresentData::Release(__int64 a1)
{
  return CRenderTargetImageSource::Release((CRenderTargetImageSource *)(a1 - 8));
}

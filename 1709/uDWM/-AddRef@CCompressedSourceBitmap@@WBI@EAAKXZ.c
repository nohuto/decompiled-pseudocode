/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180046850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 24));
}

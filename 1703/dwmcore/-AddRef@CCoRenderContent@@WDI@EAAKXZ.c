/*
 * XREFs of ?AddRef@CCoRenderContent@@WDI@EAAKXZ @ 0x1800D66C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderContent::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 56));
}

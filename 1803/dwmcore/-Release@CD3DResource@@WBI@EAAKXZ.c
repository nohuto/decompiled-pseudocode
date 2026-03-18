/*
 * XREFs of ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800DE4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DResource::Release(__int64 a1)
{
  return CD3DLockableTexture::Release((CD3DLockableTexture *)(a1 - 24));
}

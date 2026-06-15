/*
 * XREFs of ?AddRef@CAudioStream@@WBA@EAAKXZ @ 0x180065A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(__int64 a1)
{
  return CAudioStream::AddRef((CAudioStream *)(a1 - 16));
}

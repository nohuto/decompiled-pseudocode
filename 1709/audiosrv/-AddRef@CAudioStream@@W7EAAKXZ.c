/*
 * XREFs of ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180036E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(__int64 a1)
{
  return CAudioStream::AddRef((CAudioStream *)(a1 - 8));
}

/*
 * XREFs of KeUpdateThreadHeteroPolicy @ 0x140418980
 * Callers:
 *     PopUpdateSingleThreadHeteroPolicies @ 0x1406CF490 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 */

unsigned __int8 __fastcall KeUpdateThreadHeteroPolicy(__int64 a1)
{
  unsigned __int8 result; // al

  result = *(_BYTE *)(a1 + 126);
  if ( result < 0x80u )
  {
    result &= ~0x80u;
    if ( result == 8 )
      return KiSetHeteroPolicyThread(a1, 8u, 1, 1);
  }
  return result;
}

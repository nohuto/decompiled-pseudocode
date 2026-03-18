/*
 * XREFs of PopUpdateSingleThreadHeteroPolicies @ 0x14076B0D0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall PopUpdateSingleThreadHeteroPolicies(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 126);
  if ( v2 >= 0 && (v2 & 0x7F) == 8 )
    KiSetHeteroPolicyThread(a2, 8u, 1, 1);
  return 0LL;
}

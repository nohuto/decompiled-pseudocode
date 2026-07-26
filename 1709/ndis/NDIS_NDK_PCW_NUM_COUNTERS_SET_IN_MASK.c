/*
 * XREFs of NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C00EDAB8
 * Callers:
 *     ndisNdkPcwAddCounter @ 0x1C0067818 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwRemoveCounter @ 0x1C00EE4D0 (ndisNdkPcwRemoveCounter.c)
 * Callees:
 *     <none>
 */

char __fastcall NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(unsigned __int64 a1)
{
  char result; // al
  __int64 v2; // r8
  char v3; // dl

  result = 0;
  v2 = 30LL;
  do
  {
    v3 = a1;
    a1 >>= 1;
    result += v3 & 1;
    --v2;
  }
  while ( v2 );
  return result;
}

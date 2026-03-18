/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1405C8E28
 * Callers:
 *     PfSnInitializePrefetcher @ 0x14081DD1C (PfSnInitializePrefetcher.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(_QWORD *a1)
{
  memset(a1, 0, 0x90uLL);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[3] = a1 + 2;
  a1[2] = a1 + 2;
  a1[4] = 0LL;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 5));
}

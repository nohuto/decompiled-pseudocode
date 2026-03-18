/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x1405DCDC8
 * Callers:
 *     PfSnInitializePrefetcher @ 0x14084F17C (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
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

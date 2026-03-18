/*
 * XREFs of PnpFindBestConfiguration @ 0x14055B06C
 * Callers:
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1406D2B30 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1406D4C1C (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x14055B0C4 (PnpFindBestConfigurationWorker.c)
 */

__int64 __fastcall PnpFindBestConfiguration(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 2; ++i )
  {
    result = PnpFindBestConfigurationWorker(a1, a2, a3, i);
    if ( (int)result >= 0 )
      break;
  }
  return result;
}

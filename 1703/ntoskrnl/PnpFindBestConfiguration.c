/*
 * XREFs of PnpFindBestConfiguration @ 0x1405B0ABC
 * Callers:
 *     PnpAllocateResources @ 0x14055A118 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1406A7E70 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x1405B0B14 (PnpFindBestConfigurationWorker.c)
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

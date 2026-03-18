/*
 * XREFs of PnpFindBestConfiguration @ 0x140615BD0
 * Callers:
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14073A6C4 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14073E380 (PnpRebalance.c)
 * Callees:
 *     PnpFindBestConfigurationWorker @ 0x140615C28 (PnpFindBestConfigurationWorker.c)
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

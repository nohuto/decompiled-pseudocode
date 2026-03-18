/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x14014FA48
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14014F920 (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     <none>
 */

__int64 HvlGetEncryptedDataDomains()
{
  if ( VslVsmEnabled )
    return (unsigned int)((HvlpFlags & 2) != 0) + 1;
  else
    return 0LL;
}

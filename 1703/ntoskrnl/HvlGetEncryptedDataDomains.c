/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x1401686D0
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14014B238 (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
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

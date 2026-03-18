/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x140187330
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14016E3B0 (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
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

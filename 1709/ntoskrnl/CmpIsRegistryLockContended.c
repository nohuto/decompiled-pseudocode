/*
 * XREFs of CmpIsRegistryLockContended @ 0x1401E3C0C
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExGetExclusiveWaiterCount @ 0x1402859D0 (ExGetExclusiveWaiterCount.c)
 *     ExGetSharedWaiterCount @ 0x140285A10 (ExGetSharedWaiterCount.c)
 */

char CmpIsRegistryLockContended()
{
  char v0; // bl

  v0 = 0;
  if ( ExGetSharedWaiterCount((PERESOURCE)&CmpRegistryLock) || ExGetExclusiveWaiterCount((PERESOURCE)&CmpRegistryLock) )
    return 1;
  return v0;
}

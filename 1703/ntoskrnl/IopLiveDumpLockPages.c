/*
 * XREFs of IopLiveDumpLockPages @ 0x14068F398
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140416250 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

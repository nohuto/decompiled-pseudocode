/*
 * XREFs of IopLiveDumpUnLockPages @ 0x1401F6508
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140417138 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

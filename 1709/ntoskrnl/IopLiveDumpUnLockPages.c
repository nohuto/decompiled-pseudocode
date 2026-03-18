/*
 * XREFs of IopLiveDumpUnLockPages @ 0x1401FC348
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x14042C168 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0);
}

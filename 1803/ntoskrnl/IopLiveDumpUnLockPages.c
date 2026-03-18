/*
 * XREFs of IopLiveDumpUnLockPages @ 0x140239024
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140482C98 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

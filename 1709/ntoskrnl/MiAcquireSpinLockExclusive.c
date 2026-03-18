/*
 * XREFs of MiAcquireSpinLockExclusive @ 0x140210828
 * Callers:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall MiAcquireSpinLockExclusive(volatile LONG *a1)
{
  return ExAcquireSpinLockExclusive(a1);
}

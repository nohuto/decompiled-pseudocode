/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x140747B50
 * Callers:
 *     <none>
 * Callees:
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(PVOID *a1)
{
  ObMakeTemporaryObject(*a1);
  return ObfDereferenceObjectWithTag(*a1, 0x7254624Fu);
}

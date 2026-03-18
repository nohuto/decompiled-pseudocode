/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x1407F6850
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 */

LONG_PTR __fastcall ObpDirectoryTeardownCallback(PVOID *a1)
{
  ObMakeTemporaryObject(*a1);
  return ObfDereferenceObjectWithTag(*a1, 0x7254624Fu);
}

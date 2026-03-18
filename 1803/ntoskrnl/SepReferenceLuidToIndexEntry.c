/*
 * XREFs of SepReferenceLuidToIndexEntry @ 0x14005C2EC
 * Callers:
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404F0B3C (SepRefDerefLuidToIndexEntryIfNecessary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepReferenceLuidToIndexEntry(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}

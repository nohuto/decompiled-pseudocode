/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404F0B3C
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x1404F0948 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 * Callees:
 *     SepReferenceLuidToIndexEntry @ 0x14005C2EC (SepReferenceLuidToIndexEntry.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1400E2C60 (SepDereferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}

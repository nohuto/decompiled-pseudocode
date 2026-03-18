/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14048CF60
 * Callers:
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SepSetProcessUniqueAttribute @ 0x14048CE74 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x14001EFC4 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x140089BF4 (SepReferenceLuidToIndexEntry.c)
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

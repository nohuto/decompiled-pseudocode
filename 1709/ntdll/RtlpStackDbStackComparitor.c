/*
 * XREFs of RtlpStackDbStackComparitor @ 0x18010E3EC
 * Callers:
 *     RtlStackDbStackAdd @ 0x18010D254 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x18010DB2C (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}

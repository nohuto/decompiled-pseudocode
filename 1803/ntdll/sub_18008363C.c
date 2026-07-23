/*
 * XREFs of sub_18008363C @ 0x18008363C
 * Callers:
 *     sub_18004334C @ 0x18004334C (sub_18004334C.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 */

LONG __fastcall sub_18008363C(__int64 a1, __int64 a2)
{
  LONG result; // eax

  result = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 264);
  if ( !result )
    return RtlCompareUnicodeStrings(
             *(PCWCH *)(a2 - 144),
             (unsigned __int64)*(unsigned __int16 *)(a2 - 152) >> 1,
             *(PCWCH *)(a1 + 80),
             (unsigned __int64)*(unsigned __int16 *)(a1 + 72) >> 1,
             1u);
  return result;
}

/*
 * XREFs of RtlpValidCompoundAce @ 0x1406E9458
 * Callers:
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al
  __int64 v4; // r8
  unsigned __int8 v5; // al

  result = a1
        && (v2 = *(unsigned __int16 *)(a1 + 2), ((v2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v2)
        && (unsigned int)v2 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && (v3 = *(_BYTE *)(a1 + 13), v3 <= 0xFu)
        && (v4 = v3, v2 >= 4 * (unsigned __int64)v3 + 32)
        && *(_BYTE *)(a1 + 4LL * v3 + 20) == 1
        && (v5 = *(_BYTE *)(a1 + 4LL * v3 + 21), v5 <= 0xFu)
        && v2 >= 4 * v4 + 28 + 4 * (unsigned __int64)v5;
  return result;
}

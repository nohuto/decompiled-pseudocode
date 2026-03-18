/*
 * XREFs of PsIsProtectedProcess @ 0x1400852A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1738) & 7) != 0;
}

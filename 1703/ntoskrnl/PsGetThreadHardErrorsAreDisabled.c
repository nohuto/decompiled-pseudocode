/*
 * XREFs of PsGetThreadHardErrorsAreDisabled @ 0x140167630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 1736) >> 4) & 1;
}

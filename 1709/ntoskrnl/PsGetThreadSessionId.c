/*
 * XREFs of PsGetThreadSessionId @ 0x1404D25D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}

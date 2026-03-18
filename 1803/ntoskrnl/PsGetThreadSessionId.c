/*
 * XREFs of PsGetThreadSessionId @ 0x1404B7B50
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}

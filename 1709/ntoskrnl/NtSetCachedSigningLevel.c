/*
 * XREFs of NtSetCachedSigningLevel @ 0x1405E4000
 * Callers:
 *     <none>
 * Callees:
 *     NtSetCachedSigningLevel2 @ 0x1405E4024 (NtSetCachedSigningLevel2.c)
 */

__int64 __fastcall NtSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  return NtSetCachedSigningLevel2(a1, a2);
}

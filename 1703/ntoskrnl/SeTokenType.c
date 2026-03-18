/*
 * XREFs of SeTokenType @ 0x14044FB50
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 * Callees:
 *     <none>
 */

TOKEN_TYPE __stdcall SeTokenType(PACCESS_TOKEN Token)
{
  return *((_DWORD *)Token + 48);
}

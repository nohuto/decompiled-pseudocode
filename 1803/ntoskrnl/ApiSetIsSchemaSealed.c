/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1402C0920
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1407CC630 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}

/*
 * XREFs of ApiSetIsSchemaSealed @ 0x140261650
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x140724E80 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}

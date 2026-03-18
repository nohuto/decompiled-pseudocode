/*
 * XREFs of ApiSetIsSchemaSealed @ 0x14028B228
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x140764950 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}

/*
 * XREFs of ApiSetReleaseSchema @ 0x1402C0614
 * Callers:
 *     PspSiloLoadApiSets @ 0x140779D80 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1407CC630 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}

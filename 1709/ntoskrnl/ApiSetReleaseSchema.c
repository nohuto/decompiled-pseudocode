/*
 * XREFs of ApiSetReleaseSchema @ 0x14028AF1C
 * Callers:
 *     PspSiloLoadApiSets @ 0x140715BEC (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140764950 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}

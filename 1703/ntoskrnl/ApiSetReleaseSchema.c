/*
 * XREFs of ApiSetReleaseSchema @ 0x140261344
 * Callers:
 *     PspSiloLoadApiSets @ 0x1406DF778 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140724E80 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}

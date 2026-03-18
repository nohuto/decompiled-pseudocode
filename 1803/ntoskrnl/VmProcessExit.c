/*
 * XREFs of VmProcessExit @ 0x140511170
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall VmProcessExit(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 1864);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}

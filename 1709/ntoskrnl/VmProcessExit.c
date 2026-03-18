/*
 * XREFs of VmProcessExit @ 0x1404FC998
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall VmProcessExit(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 1864);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}

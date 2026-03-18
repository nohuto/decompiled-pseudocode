/*
 * XREFs of VmProcessExit @ 0x140498B54
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

void __fastcall VmProcessExit(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 1840);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}

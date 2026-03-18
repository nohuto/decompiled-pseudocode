/*
 * XREFs of VerifierExFreePool @ 0x1408135E0
 * Callers:
 *     VerifierExFreePoolEx @ 0x140813610 (VerifierExFreePoolEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x140813630 (VerifierExFreePoolWithTag.c)
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag((ULONG_PTR)a1, 0);
}

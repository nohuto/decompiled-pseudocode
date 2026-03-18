/*
 * XREFs of VerifierExFreePool @ 0x1407A6490
 * Callers:
 *     VerifierExFreePoolEx @ 0x1407A64C0 (VerifierExFreePoolEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1407A64E0 (VerifierExFreePoolWithTag.c)
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag((ULONG_PTR)a1, 0);
}

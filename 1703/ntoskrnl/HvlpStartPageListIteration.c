/*
 * XREFs of HvlpStartPageListIteration @ 0x1401EC59C
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401E9A90 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x1401EA520 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EAB9C (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x1401EC488 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x1401EC518 (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  int *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = HvlpInvokeGetPageListHypercall((__int64)v1, 0LL);
  return (char)v1;
}

/*
 * XREFs of HvlpStartPageListIteration @ 0x14022EF18
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14022C410 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x14022C6F0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14022CD7C (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x14022EE04 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14022EE94 (HvlpSetupPageListIteration.c)
 */

char __fastcall HvlpStartPageListIteration(int a1)
{
  int *v1; // rax

  v1 = HvlpSetupPageListIteration(a1, 0);
  if ( v1 )
    LOBYTE(v1) = HvlpInvokeGetPageListHypercall((__int64)v1, 0LL);
  return (char)v1;
}

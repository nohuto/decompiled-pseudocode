/*
 * XREFs of PpmPerfReApplyStates @ 0x1405EA8BC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14014CB34 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14014CE8C (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}

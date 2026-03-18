/*
 * XREFs of PpmPerfReApplyStates @ 0x140577A88
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  __int64 i; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    *(_BYTE *)(i + 486) = 1;
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}

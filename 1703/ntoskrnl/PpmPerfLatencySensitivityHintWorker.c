/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x140132020
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 */

__int64 PpmPerfLatencySensitivityHintWorker()
{
  __int64 i; // rax

  PpmPerfLatencyBoostQueued = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    *(_BYTE *)(i + 486) = 1;
  return PpmCheckCustomRun(3LL);
}

/*
 * XREFs of CreateTlgAggregateSession @ 0x1C01BD750
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1C01BD5F0 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

char *__fastcall CreateTlgAggregateSession(char a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  __int64 Timer; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x1B0uLL, 0x47417254u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x1B0uLL);
  *((_QWORD *)v3 + 41) = 0LL;
  *((_DWORD *)v3 + 84) = 0;
  KeInitializeEvent((PRKEVENT)(v3 + 296), NotificationEvent, 0);
  *((_QWORD *)v3 + 36) = v3;
  *((_QWORD *)v3 + 35) = FlushWorkItemRoutineKernelMode;
  *((_QWORD *)v3 + 33) = 0LL;
  *((_WORD *)v3 + 160) = 0;
  if ( a1 )
  {
    Timer = ExAllocateTimer(FlushTimerCallbackKernelMode, v3 + 264, 8LL);
    *((_QWORD *)v3 + 52) = Timer;
    if ( !Timer )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}

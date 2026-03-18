/*
 * XREFs of CreateTlgAggregateSession @ 0x1405CE0C8
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1405CDEF8 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExAllocateTimer @ 0x140147D60 (ExAllocateTimer.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char *__fastcall CreateTlgAggregateSession(char a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  __int64 Timer; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1B0uLL, 0x47417254u);
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
    Timer = ExAllocateTimer((__int64)FlushTimerCallbackKernelMode, (__int64)(v3 + 264), 8u);
    *((_QWORD *)v3 + 52) = Timer;
    if ( !Timer )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}

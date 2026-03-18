/*
 * XREFs of PfTAccessTracingInitialize @ 0x140428D4C
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 12) = 3;
  }
  *(_DWORD *)(a2 + 40) = 0;
  if ( a3 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 8), 0LL);
  }
  else
  {
    ExInitializePushLock((PKSPIN_LOCK)(a2 + 8));
    InitializeSListHead((PSLIST_HEADER)(a2 + 64));
    KeInitializeEvent((PRKEVENT)(a2 + 16), NotificationEvent, 0);
  }
}

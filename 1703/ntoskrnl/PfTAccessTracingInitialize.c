/*
 * XREFs of PfTAccessTracingInitialize @ 0x14040EBB0
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
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

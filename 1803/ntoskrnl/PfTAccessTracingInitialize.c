/*
 * XREFs of PfTAccessTracingInitialize @ 0x1404781D8
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, __int64 a2, int a3)
{
  volatile __int64 *v4; // rcx

  if ( !a3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 12) = 3;
  }
  *(_DWORD *)(a2 + 40) = 0;
  v4 = (volatile __int64 *)(a2 + 8);
  if ( a3 )
  {
    _InterlockedExchange64(v4, 0LL);
  }
  else
  {
    ExInitializePushLock((PKSPIN_LOCK)v4);
    InitializeSListHead((PSLIST_HEADER)(a2 + 64));
    KeInitializeEvent((PRKEVENT)(a2 + 16), NotificationEvent, 0);
  }
}

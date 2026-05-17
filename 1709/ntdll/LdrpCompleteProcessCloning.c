/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1800D6910
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D78C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpCreateLoaderEvents @ 0x180009F28 (LdrpCreateLoaderEvents.c)
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015F298 = 0LL;
    qword_18015F290 = (__int64)UniqueThread;
    dword_18015F28C = 1;
    dword_18015F288 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180159600 = 0LL;
    qword_1801595F8 = (__int64)v2;
    dword_1801595F0 = -2;
    dword_1801595F4 = 1;
    if ( (int)LdrpCreateLoaderEvents() < 0 )
      ZwTerminateProcess();
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v3, 13, 0);
  return LdrpDropLastInProgressCount();
}

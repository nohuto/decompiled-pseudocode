/*
 * XREFs of sub_1800D0858 @ 0x1800D0858
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D1950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_18005CE48 @ 0x18005CE48 (sub_18005CE48.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 */

NTSTATUS __fastcall sub_1800D0858(int a1)
{
  HANDLE UniqueThread; // rcx
  HANDLE v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015C240.LockSemaphore = 0LL;
    stru_18015C240.OwningThread = UniqueThread;
    stru_18015C240.RecursionCount = 1;
    stru_18015C240.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    stru_1801565B0.LockSemaphore = 0LL;
    stru_1801565B0.OwningThread = v2;
    stru_1801565B0.LockCount = -2;
    stru_1801565B0.RecursionCount = 1;
    v3 = sub_18005CE48();
    if ( v3 < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
    Work = 0LL;
  }
  RtlLeaveCriticalSection(&stru_18015C240);
  sub_180046F60(v4, 13, 0);
  return sub_180047B2C();
}

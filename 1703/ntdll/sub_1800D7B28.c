/*
 * XREFs of sub_1800D7B28 @ 0x1800D7B28
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D89C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     sub_18000BBA8 @ 0x18000BBA8 (sub_18000BBA8.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 */

NTSTATUS __fastcall sub_1800D7B28(int a1)
{
  HANDLE UniqueThread; // rcx
  HANDLE v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015B220.LockSemaphore = 0LL;
    stru_18015B220.OwningThread = UniqueThread;
    stru_18015B220.RecursionCount = 1;
    stru_18015B220.LockCount = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    stru_1801555A8.LockSemaphore = 0LL;
    stru_1801555A8.OwningThread = v2;
    stru_1801555A8.LockCount = -2;
    stru_1801555A8.RecursionCount = 1;
    v3 = sub_18000BBA8();
    if ( v3 < 0 )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3);
    Work = 0LL;
  }
  RtlLeaveCriticalSection(&stru_18015B220);
  sub_18001A028(v4, 13, 0);
  return sub_18001A338();
}

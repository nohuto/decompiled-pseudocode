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

__int64 __fastcall sub_1800D7B28(int a1)
{
  HANDLE UniqueThread; // rcx
  HANDLE v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015B238 = 0LL;
    qword_18015B230 = (__int64)UniqueThread;
    dword_18015B22C = 1;
    dword_18015B228 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801555C0 = 0LL;
    qword_1801555B8 = (__int64)v2;
    dword_1801555B0 = -2;
    dword_1801555B4 = 1;
    if ( (int)sub_18000BBA8() < 0 )
      ZwTerminateProcess();
    qword_18015B1D0 = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&unk_18015B220);
  sub_18001A028(v3, 13, 0);
  return sub_18001A338();
}

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

__int64 __fastcall sub_1800D0858(int a1)
{
  HANDLE UniqueThread; // rcx
  HANDLE v2; // rcx
  __int64 v3; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015C258 = 0LL;
    qword_18015C250 = (__int64)UniqueThread;
    dword_18015C24C = 1;
    dword_18015C248 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801565C8 = 0LL;
    qword_1801565C0 = (__int64)v2;
    dword_1801565B8 = -2;
    dword_1801565BC = 1;
    if ( (int)sub_18005CE48() < 0 )
      ZwTerminateProcess();
    qword_18015C1F0 = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&unk_18015C240);
  sub_180046F60(v3, 13, 0);
  return sub_180047B2C();
}

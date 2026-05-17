/*
 * XREFs of RtlExitUserProcess @ 0x18006F940
 * Callers:
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 * Callees:
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 *     sub_180070388 @ 0x180070388 (sub_180070388.c)
 *     sub_1800860E0 @ 0x1800860E0 (sub_1800860E0.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE UniqueThread; // rdx
  __int64 v11; // rcx

  sub_1800860E0();
  sub_18001AE14((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  sub_180019FC0(v3, v2, v4, v5);
  RtlEnterCriticalSection((__int64)&unk_18015AE60);
  RtlLockHeap((__int64)NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap((__int64)NtCurrentPeb()->ProcessHeap, v6, v7, v8);
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    sub_18001A028(v11, 18, 0);
    return ZwTerminateThread(-2LL, a1);
  }
  else
  {
    sub_180070388();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015AE78 = 0LL;
    qword_18015AE70 = (__int64)UniqueThread;
    dword_18015AE68 = -2;
    dword_18015AE6C = 1;
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}

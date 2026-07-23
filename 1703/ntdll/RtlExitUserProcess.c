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

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  HANDLE UniqueThread; // rdx
  __int64 v3; // rcx

  sub_1800860E0();
  sub_18001AE14((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  sub_180019FC0();
  RtlEnterCriticalSection(&stru_18015AE60);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    sub_180070388();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015AE60.LockSemaphore = 0LL;
    stru_18015AE60.OwningThread = UniqueThread;
    stru_18015AE60.LockCount = -2;
    stru_18015AE60.RecursionCount = 1;
    RtlLeaveCriticalSection(&stru_18015AE60);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&stru_18015AE60);
  sub_18001A028(v3, 18, 0);
  ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}

/*
 * XREFs of RtlExitUserProcess @ 0x180047D70
 * Callers:
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 * Callees:
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 *     sub_180048388 @ 0x180048388 (sub_180048388.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  HANDLE UniqueThread; // r8
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v12[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( qword_18015A420 )
  {
    memset(v12, 0, sizeof(v12));
    LODWORD(v12[0]) = 176;
    v4 = 0;
    v5 = 0LL;
    HIDWORD(v12[5]) = 0x20000;
    while ( 1 )
    {
      v6 = v4 & 0xFFFF7FFF;
      LODWORD(v11) = v4 & 0xFFFF7FFF;
      if ( qword_18015A420 )
      {
        if ( v6 < 0x40 )
          goto LABEL_9;
        if ( !(unsigned int)sub_180106D70(v4, &v11) )
          break;
      }
LABEL_13:
      ++v4;
      ++v5;
      if ( v4 >= 0x40 )
        goto LABEL_2;
    }
    v6 = v11;
LABEL_9:
    _InterlockedIncrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v6 + 8));
    if ( (*(_BYTE *)(qword_18015A420 + 16LL * v6) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v6 + 8));
    }
    else
    {
      v7 = *(_QWORD *)(qword_18015A420 + 16LL * v6);
      v8 = *(unsigned int *)(v7 + 324);
      v9 = 2LL * *(unsigned int *)(v7 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(v7 + 20) + 8));
      if ( (v8 & 0x400) == 0 )
      {
        v12[1] = v5;
        sub_18000469C(v9, v8, v3, (__int64)v12);
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  sub_1800435B4((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  sub_180046FBC();
  RtlEnterCriticalSection(&stru_18015BE80);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    sub_180048388();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015BE80.LockSemaphore = 0LL;
    stru_18015BE80.OwningThread = UniqueThread;
    stru_18015BE80.LockCount = -2;
    stru_18015BE80.RecursionCount = 1;
    RtlLeaveCriticalSection(&stru_18015BE80);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&stru_18015BE80);
  sub_180046F60(v10, 18, 0);
  ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}

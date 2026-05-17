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

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  HANDLE UniqueThread; // r8
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v13[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( qword_18015A420 )
  {
    memset(v13, 0, sizeof(v13));
    LODWORD(v13[0]) = 176;
    v5 = 0;
    v6 = 0LL;
    HIDWORD(v13[5]) = 0x20000;
    while ( 1 )
    {
      v7 = v5 & 0xFFFF7FFF;
      LODWORD(v12) = v5 & 0xFFFF7FFF;
      if ( qword_18015A420 )
      {
        if ( v7 < 0x40 )
          goto LABEL_9;
        if ( !(unsigned int)sub_180106D70(v5, &v12) )
          break;
      }
LABEL_13:
      ++v5;
      ++v6;
      if ( v5 >= 0x40 )
        goto LABEL_2;
    }
    v7 = v12;
LABEL_9:
    _InterlockedIncrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v7 + 8));
    if ( (*(_BYTE *)(qword_18015A420 + 16LL * v7) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v7 + 8));
    }
    else
    {
      v8 = *(_QWORD *)(qword_18015A420 + 16LL * v7);
      v9 = *(unsigned int *)(v8 + 324);
      v10 = 2LL * *(unsigned int *)(v8 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(v8 + 20) + 8));
      if ( (v9 & 0x400) == 0 )
      {
        v13[1] = v6;
        sub_18000469C(v10, v9, v4, (__int64)v13);
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  sub_1800435B4((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  sub_180046FBC();
  RtlEnterCriticalSection((__int64)&unk_18015BE80);
  RtlLockHeap((__int64)NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap((__int64)NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    sub_180046F60(v11, 18, 0);
    return ZwTerminateThread(-2LL, a1);
  }
  else
  {
    sub_180048388();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015BE98 = 0LL;
    qword_18015BE90 = (__int64)UniqueThread;
    dword_18015BE88 = -2;
    dword_18015BE8C = 1;
    RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}

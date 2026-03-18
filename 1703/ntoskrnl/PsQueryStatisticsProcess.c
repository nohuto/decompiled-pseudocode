/*
 * XREFs of PsQueryStatisticsProcess @ 0x140479C70
 * Callers:
 *     PspQueryProcessAccountingInformationCallback @ 0x140475080 (PspQueryProcessAccountingInformationCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x1404798A0 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x140479910 (ExpCopyProcessInfo.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     KeQueryValuesThread @ 0x14003F770 (KeQueryValuesThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  signed __int64 *v4; // r13
  _QWORD *v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+64h] [rbp+Ch]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  v5 = (_QWORD *)(a1 + 1160);
  v6 = *(_DWORD *)(a1 + 620);
  v7 = *(_DWORD *)(a1 + 624);
  v8 = *(_DWORD *)(a1 + 628);
  a2[3] = *(_QWORD *)(a1 + 592);
  a2[4] = *(_QWORD *)(a1 + 600);
  a2[5] = *(_QWORD *)(a1 + 1208);
  a2[6] = *(_QWORD *)(a1 + 1216);
  a2[7] = *(_QWORD *)(a1 + 1224);
  a2[8] = *(_QWORD *)(a1 + 1232);
  a2[9] = *(_QWORD *)(a1 + 1240);
  a2[10] = *(_QWORD *)(a1 + 1248);
  v9 = *(_QWORD **)(a1 + 1160);
  if ( v9 != (_QWORD *)(a1 + 1160) )
  {
    do
    {
      v6 += *((_DWORD *)v9 - 261);
      v10 = v9 - 212;
      v7 += *((_DWORD *)v9 - 241);
      v8 += *((_DWORD *)v9 - 391);
      KeQueryValuesThread((__int64)(v9 - 212), (__int64)&v13);
      if ( v14 == 1 )
        v8 = MEMORY[0xFFFFF78000000320] + v8 - v13;
      a2[3] += v10[9];
      a2[4] += *((unsigned int *)v10 + 85);
      a2[5] += v10[181];
      a2[6] += v10[182];
      a2[7] += v10[183];
      a2[8] += v10[184];
      a2[9] += v10[185];
      a2[10] += v10[186];
      v9 = (_QWORD *)*v9;
    }
    while ( v9 != v5 );
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v11 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v6;
  a2[1] = v11 * v7;
  result = v11 * v8;
  a2[2] = result;
  return result;
}

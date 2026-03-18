/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x1404FD958
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(signed __int64 *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = a1 + 91;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 91), 0LL);
  a2[2] = a1[237];
  a2[3] = a1[224];
  do
  {
    v6 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v6 != MEMORY[0xFFFFF780000003B0] );
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v7 = a2[3];
  result = *a2 - v6;
  a2[1] = result;
  if ( v7 )
  {
    result -= v7;
    a2[2] += result;
  }
  return result;
}

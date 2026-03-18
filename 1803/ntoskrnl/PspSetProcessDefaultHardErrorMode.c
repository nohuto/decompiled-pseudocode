/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1404E8250
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetAutoAlignmentProcess @ 0x1404E89D4 (KeSetAutoAlignmentProcess.c)
 */

_QWORD *__fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v11; // al

  --*(_WORD *)(a2 + 484);
  v6 = (volatile signed __int64 *)(a1 + 728);
  ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
  if ( *(_DWORD *)(a1 + 1184) != a3 )
  {
    *(_DWORD *)(a1 + 1184) = a3;
    v11 = (a3 & 4) != 0;
    if ( *(_QWORD *)(a1 + 1064) )
      v11 = 1;
    KeSetAutoAlignmentProcess(a1, v11);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2);
}

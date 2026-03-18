/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1404A420C
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x1404A42C0 (KeSetAutoAlignmentProcess.c)
 */

__int64 __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v6; // rdi
  unsigned int v8; // esi

  --*(_WORD *)(a2 + 484);
  v6 = (volatile signed __int64 *)(a1 + 728);
  ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
  if ( *(_DWORD *)(a1 + 1184) != a3 )
  {
    *(_DWORD *)(a1 + 1184) = a3;
    v8 = (a3 >> 2) & 1;
    if ( *(_QWORD *)(a1 + 1064) )
      v8 = 1;
    KeSetAutoAlignmentProcess(a1, v8);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2);
}

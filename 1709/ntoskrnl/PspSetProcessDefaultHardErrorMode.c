/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x1404D9270
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x1404D932C (KeSetAutoAlignmentProcess.c)
 */

_QWORD *__fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rdi
  bool v8; // al

  --*(_WORD *)(a2 + 484);
  v6 = (volatile signed __int64 *)(a1 + 728);
  ExAcquirePushLockExclusiveEx(a1 + 728, 0LL);
  if ( *(_DWORD *)(a1 + 1184) != a3 )
  {
    *(_DWORD *)(a1 + 1184) = a3;
    v8 = (a3 & 4) != 0;
    if ( *(_QWORD *)(a1 + 1064) )
      v8 = 1;
    KeSetAutoAlignmentProcess(a1, v8);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return KeLeaveCriticalRegionThread(a2);
}

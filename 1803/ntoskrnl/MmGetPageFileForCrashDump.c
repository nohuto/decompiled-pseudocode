/*
 * XREFs of MmGetPageFileForCrashDump @ 0x14074EEB0
 * Callers:
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_1403CE340, 0LL);
  if ( Count )
  {
    v6 = qword_1403CFA20;
    v4 = Count;
    do
    {
      v3 = *v6;
      if ( (*(_BYTE *)(*v6 + 204) & 0x50) == 0 && *(_QWORD *)(v3 + 16) > v2 )
      {
        v1 = *(_QWORD *)(v3 + 224);
        v2 = *(_QWORD *)(v3 + 16);
      }
      ++v6;
      --v4;
    }
    while ( v4 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403CE340, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_1403CE340, v3, v4, v5);
  KeAbPostRelease((ULONG_PTR)qword_1403CE340);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}

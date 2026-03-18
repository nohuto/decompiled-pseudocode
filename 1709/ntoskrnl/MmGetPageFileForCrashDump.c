/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1406E4A94
 * Callers:
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

__int64 MmGetPageFileForCrashDump()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  unsigned __int64 v2; // rbp
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_14038A4C0, 0LL);
  if ( Count )
  {
    v3 = (char *)&unk_14038B760;
    v4 = Count;
    do
    {
      v5 = *(_QWORD *)v3;
      if ( (*(_BYTE *)(*(_QWORD *)v3 + 204LL) & 0x50) == 0 && *(_QWORD *)(v5 + 16) > v2 )
      {
        v1 = *(_QWORD *)(v5 + 224);
        v2 = *(_QWORD *)(v5 + 16);
      }
      v3 += 8;
      --v4;
    }
    while ( v4 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14038A4C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_14038A4C0);
  KeAbPostRelease((ULONG_PTR)qword_14038A4C0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}

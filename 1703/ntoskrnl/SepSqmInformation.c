/*
 * XREFs of SepSqmInformation @ 0x1406F9138
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     SepSetSqmObjectName @ 0x1406F9050 (SepSetSqmObjectName.c)
 */

NTSTATUS __fastcall SepSqmInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( qword_14038C468 )
    return SepSetSqmObjectName(a1, a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038C460, 0LL);
  if ( qword_14038C468 || EtwRegister(&stru_1402BCD88, 0LL, 0LL, &qword_14038C468) >= 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038C460, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038C460);
    KeAbPostRelease((ULONG_PTR)&qword_14038C460);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return SepSetSqmObjectName(a1, a1);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038C460, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038C460);
  KeAbPostRelease((ULONG_PTR)&qword_14038C460);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

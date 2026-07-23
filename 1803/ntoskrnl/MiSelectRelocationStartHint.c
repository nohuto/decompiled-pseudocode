/*
 * XREFs of MiSelectRelocationStartHint @ 0x1404F1D2C
 * Callers:
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x1404F1C44 (MiObtainRelocationBits.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlMergeBitMaps @ 0x1400B6478 (RtlMergeBitMaps.c)
 *     RtlCopyBitMap @ 0x1400BD530 (RtlCopyBitMap.c)
 *     RtlFindClearBits @ 0x1400E6360 (RtlFindClearBits.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rdx
  ULONG ClearBits; // esi
  __int64 v12; // r8
  __int64 v13; // r9

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB428, 0LL);
  }
  RtlCopyBitMap(*(PRTL_BITMAP *)a1, &Destination, 0);
  RtlMergeBitMaps((__int64)&Destination, *(unsigned int **)(a1 + 8));
  ClearBits = RtlFindClearBits(&Destination, a2, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB428, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB428, v10, v12, v13);
    KeAbPostRelease((ULONG_PTR)&qword_1403CB428);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}

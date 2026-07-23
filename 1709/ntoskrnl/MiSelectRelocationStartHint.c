/*
 * XREFs of MiSelectRelocationStartHint @ 0x140504844
 * Callers:
 *     MiSelectImageBase @ 0x140504474 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14050475C (MiObtainRelocationBits.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlFindClearBits @ 0x1400A1B90 (RtlFindClearBits.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlCopyBitMap @ 0x1400D4E00 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x140116B14 (RtlMergeBitMaps.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG ClearBits; // esi

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388288, 0LL);
  }
  RtlCopyBitMap(*(PRTL_BITMAP *)a1, &Destination, 0);
  RtlMergeBitMaps(&Destination.SizeOfBitMap, *(_QWORD *)(a1 + 8));
  ClearBits = RtlFindClearBits(&Destination, a2, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388288, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388288);
    KeAbPostRelease((ULONG_PTR)&qword_140388288);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}

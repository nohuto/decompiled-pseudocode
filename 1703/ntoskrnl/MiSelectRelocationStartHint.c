/*
 * XREFs of MiSelectRelocationStartHint @ 0x1404960A4
 * Callers:
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x140495FBC (MiObtainRelocationBits.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14001E390 (RtlCopyBitMap.c)
 *     RtlMergeBitMaps @ 0x14006DC7C (RtlMergeBitMaps.c)
 *     RtlFindClearBits @ 0x14009B310 (RtlFindClearBits.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

ULONG __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG ClearBits; // edi

  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBits(*(PRTL_BITMAP *)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BF68, 0LL);
  RtlCopyBitMap(*(PRTL_BITMAP *)a1, &Destination, 0);
  RtlMergeBitMaps((__int64)&Destination, *(unsigned int **)(a1 + 8));
  ClearBits = RtlFindClearBits(&Destination, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BF68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BF68);
  KeAbPostRelease((ULONG_PTR)&qword_14036BF68);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return ClearBits;
}

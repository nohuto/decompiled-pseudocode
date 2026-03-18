/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EBD4
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x1406BD988 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a2 + 24;
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 24);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}

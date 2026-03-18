/*
 * XREFs of ExSaAllocate @ 0x14015A8E0
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14015A650 (ExpAllocateFannedOutPushLock.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(unsigned int a1, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  v3 = ExSaNonPagedSlotAllocator;
  if ( (a2 & 1) != 0 )
    v3 = ExSaPagedSlotAllocator;
  v4 = -1LL;
  if ( a1 <= 0x1000 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v4 = ExpSaAllocatorAllocate(v3);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v4;
}

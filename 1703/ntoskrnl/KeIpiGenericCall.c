/*
 * XREFs of KeIpiGenericCall @ 0x140147FF0
 * Callers:
 *     KeAdjustInterruptTime @ 0x14013DE70 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x140201D7C (KeStartProfile.c)
 *     KeStopProfile @ 0x140201E90 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x140412370 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140418F04 (KiUpdateNumberProcessors.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiSendPacket @ 0x140120534 (KiIpiSendPacket.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

ULONG_PTR __stdcall KeIpiGenericCall(PKIPI_BROADCAST_WORKER BroadcastFunction, ULONG_PTR Context)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG v5; // ebp
  ULONG_PTR v6; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG ActiveProcessorCount; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xCu )
  {
    KeGetCurrentIrql();
    __writecr8(0xCuLL);
  }
  v10 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = ActiveProcessorCount - 1;
  KxAcquireSpinLock(&KiReverseStallIpiLock);
  if ( v5 )
    KiIpiSendPacket(
      1,
      0,
      (__int64)KiIpiGenericCallTarget,
      (__int64)BroadcastFunction,
      Context,
      (__int64)&ActiveProcessorCount);
  while ( ActiveProcessorCount != 1 )
    KeYieldProcessorEx(&v10);
  KeGetCurrentIrql();
  __writecr8(0xEuLL);
  ActiveProcessorCount = 0;
  v6 = ((__int64 (__fastcall *)(ULONG_PTR))BroadcastFunction)(Context);
  if ( v5 )
  {
    if ( CurrentIrql <= 0xCu )
      __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  KxReleaseSpinLock(&KiReverseStallIpiLock);
  __writecr8(CurrentIrql);
  return v6;
}

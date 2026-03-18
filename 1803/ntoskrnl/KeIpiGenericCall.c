/*
 * XREFs of KeIpiGenericCall @ 0x14016C6C0
 * Callers:
 *     KeAdjustInterruptTime @ 0x140156098 (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x140245F7C (KeStartProfile.c)
 *     KeStopProfile @ 0x140246090 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x14047C5A8 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140484964 (KiUpdateNumberProcessors.c)
 *     KiUpdateSavedSupervisorState @ 0x140484AE4 (KiUpdateSavedSupervisorState.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiSendPacket @ 0x1400A4018 (KiIpiSendPacket.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
      1u,
      0LL,
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

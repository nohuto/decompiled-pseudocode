/*
 * XREFs of KeIpiGenericCall @ 0x140143640
 * Callers:
 *     KeAdjustInterruptTime @ 0x14020358C (KeAdjustInterruptTime.c)
 *     KeStartProfile @ 0x14020834C (KeStartProfile.c)
 *     KeStopProfile @ 0x140208460 (KeStopProfile.c)
 *     KeRestoreMtrrBroadcast @ 0x140426B74 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x14042E7A4 (KiUpdateNumberProcessors.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KiIpiSendPacket @ 0x1400D3118 (KiIpiSendPacket.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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

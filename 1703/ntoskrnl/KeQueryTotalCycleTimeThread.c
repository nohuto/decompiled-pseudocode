/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x140007340
 * Callers:
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 * Callees:
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400073B0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x140120534 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  unsigned __int8 CurrentIrql; // r14
  volatile unsigned int NextProcessor; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  volatile unsigned __int64 CycleTime; // rdx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v11; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v12[44]; // [rsp+50h] [rbp-B0h] BYREF

  if ( Thread == KeGetCurrentThread() )
    return KeUpdateTotalCyclesCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9);
    while ( Thread->ThreadLock );
  }
  if ( (unsigned __int8)KiAcquireThreadStateLock(Thread, &v10, &v11) == 2 )
  {
    NextProcessor = Thread->NextProcessor;
    if ( v10 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
    if ( v11 )
      _InterlockedAnd64(v11, 0LL);
    Thread->ThreadLock = 0LL;
    v12[0] = 1310721;
    memset(&v12[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v12, NextProcessor);
    KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (unsigned int)v12, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    *CycleTimeStamp = __rdtsc();
    CycleTime = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
      KeFlushProcessWriteBuffers(1LL);
    *CycleTimeStamp = __rdtsc();
    CycleTime = Thread->CycleTime;
    if ( v10 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
    if ( v11 )
      _InterlockedAnd64(v11, 0LL);
    Thread->ThreadLock = 0LL;
  }
  __writecr8(CurrentIrql);
  return CycleTime;
}

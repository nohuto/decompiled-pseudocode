/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x14008D6A0
 * Callers:
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140003620 (PpmPerfGetCurrentFrequency.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14008C950 (KiAcquireThreadStateLock.c)
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x1400D3118 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiBeginCounterAccumulation @ 0x14020852C (KiBeginCounterAccumulation.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  __int64 CurrentRunTime; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // r10
  unsigned int CurrentFrequency; // edx
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 *v16; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v19; // rcx
  volatile unsigned int NextProcessor; // ebp
  struct _KPRCB *v21; // rcx
  volatile unsigned __int64 CycleTime; // rdx
  int v23; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-F0h] BYREF
  volatile signed __int64 *v25; // [rsp+40h] [rbp-E8h] BYREF
  _DWORD v26[44]; // [rsp+50h] [rbp-D8h] BYREF

  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->NestingLevel = 1;
    v5 = __rdtsc();
    v6 = v5 - CurrentPrcb->StartCycles;
    CurrentRunTime = Thread->CurrentRunTime;
    v8 = v6 + Thread->CycleTime;
    Thread->CycleTime = v8;
    v9 = v6 + CurrentRunTime;
    v10 = 0xFFFFFFFFLL;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    CurrentPrcb->StartCycles = v5;
    v11 = (Thread->Header.Size & 0x3E) == 0;
    Thread->CurrentRunTime = v9;
    if ( !v11 )
      KiEndThreadAccountingPeriod(CurrentPrcb, Thread);
    if ( CycleTimeStamp )
      *CycleTimeStamp = v5;
    v12 = __rdtsc();
    CurrentPrcb->CycleTime += v12 - CurrentPrcb->StartCycles;
    if ( (Thread->Header.Size & 0x20) != 0 )
    {
      CurrentFrequency = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb, 0);
      if ( CurrentFrequency < 0x4B )
        v15 = CurrentFrequency / 0x19;
      else
        v15 = 3;
      v16 = (__int64 *)&CurrentPrcb->Cycles[v15][CurrentPrcb->PowerState.EfficiencyClass];
      v10 = v14 + *v16;
      *v16 = v10;
    }
    CurrentPrcb->StartCycles = v12;
    if ( (Thread->Header.Size & 0x10) != 0 )
      CurrentPrcb->TaggedCyclesStart = v12;
    if ( (Thread->Header.Size & 2) != 0 )
      KiBeginCounterAccumulation(Thread, 0LL);
    v11 = CurrentPrcb->InterruptRequest == 0;
    CurrentPrcb->NestingLevel = 0;
    if ( !v11 )
    {
      LOBYTE(v10) = 2;
      CurrentPrcb->InterruptRequest = 0;
      HalRequestSoftwareInterrupt(v10);
    }
    _enable();
    return v8;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( Thread->ThreadLock );
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)Thread, &v24, (volatile signed __int32 **)&v25) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      if ( v24 )
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 48), 0LL);
      if ( v25 )
        _InterlockedAnd64(v25, 0LL);
      Thread->ThreadLock = 0LL;
      v26[0] = 1310721;
      memset(&v26[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v26, NextProcessor);
      KeGetCurrentIrql();
      __writecr8(0xCuLL);
      KiIpiSendPacket(0, (unsigned int)v26, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
      v21 = KeGetCurrentPrcb();
      while ( v21->PacketBarrier )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
      {
        LOBYTE(v19) = 1;
        KeFlushProcessWriteBuffers(v19);
      }
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
      if ( v24 )
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 48), 0LL);
      if ( v25 )
        _InterlockedAnd64(v25, 0LL);
      Thread->ThreadLock = 0LL;
    }
    __writecr8(CurrentIrql);
    return CycleTime;
  }
}

/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x1400607C0
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     PpmPerfGetCurrentFrequency @ 0x140060A30 (PpmPerfGetCurrentFrequency.c)
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x1400A4018 (KiIpiSendPacket.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1400EDBF0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1400EDDA0 (KiAcquireThreadStateLock.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  PULONG64 v2; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // r11
  __int64 Size; // rcx
  unsigned int CurrentFrequency; // edx
  __int64 v13; // r9
  unsigned int v14; // edx
  UCHAR v15; // al
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *v18; // rbx
  __int64 v19; // rcx
  volatile unsigned int NextProcessor; // ebx
  struct _KPRCB *v21; // rcx
  volatile unsigned __int64 CycleTime; // rbx
  int v23; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-E8h] BYREF
  _DWORD v26[44]; // [rsp+50h] [rbp-D8h] BYREF

  v2 = CycleTimeStamp;
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->NestingLevel = 1;
    v5 = __rdtsc();
    v6 = v5 - CurrentPrcb->StartCycles;
    v7 = v6 + Thread->CycleTime;
    Thread->CycleTime = v7;
    v8 = v6 + Thread->CurrentRunTime;
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = -1;
    CurrentPrcb->StartCycles = v5;
    v9 = (Thread->Header.Size & 0x3E) == 0;
    Thread->CurrentRunTime = v8;
    if ( !v9 )
      KiEndThreadAccountingPeriod(CurrentPrcb, Thread);
    if ( v2 )
      *v2 = v5;
    v10 = __rdtsc();
    CurrentPrcb->CycleTime += v10 - CurrentPrcb->StartCycles;
    Size = Thread->Header.Size;
    if ( (Size & 0x20) != 0 )
    {
      CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb, 0LL);
      if ( CurrentFrequency < 0x4B )
        v14 = CurrentFrequency / 0x19;
      else
        v14 = 3;
      CurrentPrcb->Cycles[v14][CurrentPrcb->PowerState.EfficiencyClass] += v13;
      Size = Thread->Header.Size;
    }
    if ( (Size & 0x40) != 0 )
      KiSetVpThreadSystemWork(CurrentPrcb, 0LL);
    CurrentPrcb->StartCycles = v10;
    v15 = Thread->Header.Size;
    if ( (v15 & 0x10) != 0 )
    {
      CurrentPrcb->TaggedCyclesStart = v10;
      v15 = Thread->Header.Size;
    }
    if ( (v15 & 2) != 0 )
      KiBeginCounterAccumulation(Thread, 0LL);
    v9 = CurrentPrcb->InterruptRequest == 0;
    CurrentPrcb->NestingLevel = 0;
    if ( !v9 )
    {
      LOBYTE(Size) = 2;
      CurrentPrcb->InterruptRequest = 0;
      HalRequestSoftwareInterrupt(Size);
    }
    _enable();
    return v7;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v18 = KeGetCurrentPrcb();
    v23 = 0;
    while ( 1 )
    {
      LOBYTE(CycleTimeStamp) = 1;
      KiSetVpThreadSpinLockCount(v18, CycleTimeStamp);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v18, 0LL);
      do
        KeYieldProcessorEx(&v23);
      while ( Thread->ThreadLock );
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock(Thread, &v25, &v24) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      KiReleaseThreadStateLock(v19, v25, v24);
      KiReleaseThreadLockSafe((__int64)Thread);
      v26[0] = 1310721;
      memset(&v26[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v26, NextProcessor);
      KeGetCurrentIrql();
      __writecr8(0xCuLL);
      KiIpiSendPacket(0, (unsigned int)v26, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
      v21 = KeGetCurrentPrcb();
      while ( v21->PacketBarrier )
        _mm_pause();
      *v2 = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
      {
        LOBYTE(v19) = 1;
        KeFlushProcessWriteBuffers(v19);
      }
      *v2 = __rdtsc();
      CycleTime = Thread->CycleTime;
      KiReleaseThreadStateLock(v19, v25, v24);
      KiReleaseThreadLockSafe((__int64)Thread);
    }
    __writecr8(CurrentIrql);
    return CycleTime;
  }
}

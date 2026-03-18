/*
 * XREFs of KeFreezeExecution @ 0x1402093B0
 * Callers:
 *     ExpWaitForBootDevices @ 0x1402842A0 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140796C6C (KdEnterDebugger.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KxTryToAcquireSpinLock @ 0x1402050F8 (KxTryToAcquireSpinLock.c)
 *     KiSendFreeze @ 0x140209BCC (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x140209E18 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140209E70 (KiStartDebugAccumulation.c)
 *     RtlWriteTryAcquireTickLock @ 0x140256F34 (RtlWriteTryAcquireTickLock.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // bp
  bool v1; // bp
  unsigned __int8 CurrentIrql; // r14
  int v3; // edi
  char v4; // si
  unsigned int v5; // edi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-108h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int16 *v16[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+40h] [rbp-E8h]
  unsigned __int16 v18; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int16 *v19; // [rsp+58h] [rbp-D0h]
  int v20; // [rsp+120h] [rbp-8h]

  v0 = v20;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_2:
    v3 = 500000;
    do
    {
      v4 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
      if ( v4 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_2;
      KeStallExecutionProcessor(4u);
      --v3;
    }
    while ( v3 );
    v5 = v4 != 0 ? 4 * (500000 - v3) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v4 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v4;
    else
      KiFreezeFlag |= 8u;
    if ( v5 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v7) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140353478[0])(v7, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v8 = 20000;
      else
        v8 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      KeCopyAffinityEx((__int64)&v18, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v18, CurrentPrcb->Number);
      LOBYTE(v9) = (KiBugCheckActive & 3) != 3;
      KiSendFreeze(&v18, v9);
      v16[1] = v19;
      v16[0] = &v18;
      v17 = 0;
LABEL_19:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v16) )
      {
        v10 = KiProcessorBlock[v14];
        while ( *(_DWORD *)(v10 + 11656) != 2 )
        {
          if ( !v8 )
          {
            KiFreezeFlag |= 2u;
            goto LABEL_19;
          }
          KeStallExecutionProcessor(0x32u);
          --v8;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled && (unsigned __int8)RtlWriteTryAcquireTickLock() )
    {
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v12 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v11.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v12);
      MEMORY[0xFFFFF78000000008] = v12;
      if ( KeMaximumIncrement )
      {
        KiTickOffset = KeMaximumIncrement * (v12 / KeMaximumIncrement + 1) - v12;
        MEMORY[0xFFFFF78000000328] = (v12 / KeMaximumIncrement) >> 32;
        MEMORY[0xFFFFF78000000320] = v12 / KeMaximumIncrement;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v1;
}

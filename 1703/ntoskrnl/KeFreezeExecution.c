/*
 * XREFs of KeFreezeExecution @ 0x1402030B4
 * Callers:
 *     ExpWaitForBootDevices @ 0x14025AB50 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140789A24 (KdEnterDebugger.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x140031B1C (KxTryToAcquireSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiSendFreeze @ 0x1402038C8 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x140203B14 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140203B6C (KiStartDebugAccumulation.c)
 *     RtlWriteTryAcquireTickLock @ 0x140240BEC (RtlWriteTryAcquireTickLock.c)
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
  char v8; // al
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdi
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-108h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int16 *v17[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+40h] [rbp-E8h]
  unsigned __int16 v19; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int16 *v20; // [rsp+58h] [rbp-D0h]
  int v21; // [rsp+120h] [rbp-8h]

  v0 = v21;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) == 4 )
    return v1;
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
  ((void (__fastcall *)(__int64, _QWORD))off_14033B448[0])(v7, 0LL);
  KiClockLatencyMeasurementEnabled = 0;
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    goto LABEL_25;
  v8 = PoAllProcIntrDisabled;
  if ( !PoAllProcIntrDisabled )
  {
    KiFreezeOwner = (__int64)CurrentPrcb;
    CurrentPrcb->IpiFrozen = 4;
    KiSetDebuggerOwner(CurrentPrcb);
    if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
      v9 = 20000;
    else
      v9 = 20000 * KiFreezeTimeout;
    CurrentPrcb->ClockKeepAlive = 1;
    KeCopyAffinityEx((__int64)&v19, (unsigned __int16 *)KeActiveProcessors);
    KeRemoveProcessorAffinityEx(&v19, CurrentPrcb->Number);
    LOBYTE(v10) = (KiBugCheckActive & 3) != 3;
    KiSendFreeze(&v19, v10);
    v17[1] = v20;
    v17[0] = &v19;
    v18 = 0;
LABEL_19:
    while ( !(unsigned int)KeEnumerateNextProcessor(&v15, v17) )
    {
      v11 = KiProcessorBlock[v15];
      while ( *(_DWORD *)(v11 + 11656) != 2 )
      {
        if ( !v9 )
        {
          KiFreezeFlag |= 2u;
          goto LABEL_19;
        }
        KeStallExecutionProcessor(0x32u);
        --v9;
      }
    }
LABEL_25:
    v8 = PoAllProcIntrDisabled;
  }
  KiOldIrql = CurrentIrql;
  if ( !v8 && (unsigned __int8)RtlWriteTryAcquireTickLock() )
  {
    v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v13 = MEMORY[0xFFFFF78000000008]
        + 10000000 * (v12.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
    MEMORY[0xFFFFF78000000010] = HIDWORD(v13);
    MEMORY[0xFFFFF78000000008] = v13;
    if ( KeMaximumIncrement )
    {
      KiTickOffset = KeMaximumIncrement * (v13 / KeMaximumIncrement + 1) - v13;
      MEMORY[0xFFFFF78000000328] = (v13 / KeMaximumIncrement) >> 32;
      MEMORY[0xFFFFF78000000320] = v13 / KeMaximumIncrement;
    }
    ++MEMORY[0xFFFFF78000000340];
  }
  return v1;
}

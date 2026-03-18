/*
 * XREFs of KeFreezeExecution @ 0x140246F28
 * Callers:
 *     ExpWaitForBootDevices @ 0x1402B88C0 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140803C74 (KdEnterDebugger.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KxTryToAcquireSpinLock @ 0x1400B8074 (KxTryToAcquireSpinLock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiSendFreeze @ 0x140247800 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x140247A48 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140247AA0 (KiStartDebugAccumulation.c)
 *     RtlWriteTryAcquireTickLock @ 0x14028F270 (RtlWriteTryAcquireTickLock.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // bp
  bool v1; // bp
  unsigned __int8 CurrentIrql; // r14
  __int64 IpiFrozen; // rdx
  int v4; // edi
  char v5; // si
  unsigned int v6; // edi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v8; // rcx
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
  IpiFrozen = KeGetCurrentPrcb()->IpiFrozen;
  LOBYTE(IpiFrozen) = IpiFrozen & 0xF;
  if ( (_BYTE)IpiFrozen != 4 )
  {
LABEL_2:
    v4 = 500000;
    do
    {
      v5 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock, IpiFrozen);
      if ( v5 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_2;
      KeStallExecutionProcessor(4u);
      --v4;
    }
    while ( v4 );
    v6 = v5 != 0 ? 4 * (500000 - v4) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v5 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v5;
    else
      KiFreezeFlag |= 8u;
    if ( v6 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v6;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v8) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140398818[0])(v8, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !PoAllProcIntrDisabled )
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
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled && (unsigned __int8)RtlWriteTryAcquireTickLock() )
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
  }
  return v1;
}

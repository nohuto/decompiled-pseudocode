/*
 * XREFs of PopHandleNextState @ 0x1404063E0
 * Callers:
 *     PopIssueNextState @ 0x14040633C (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140406380 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x140007450 (KeSaveExtendedAndSupervisorState.c)
 *     KiLoadDirectoryTableBase @ 0x140023270 (KiLoadDirectoryTableBase.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140030B9C (KeRestoreExtendedAndSupervisorState.c)
 *     KeSuspendClockTimer @ 0x140136FA4 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140137D68 (KeRestoreProcessorSpecificFeatures.c)
 *     KeResumeClockTimer @ 0x140137EF4 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x140137FDC (PpmResetPerfEngineForProcessor.c)
 *     KeFlushCurrentTbImmediately @ 0x14017BB00 (KeFlushCurrentTbImmediately.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     KdPowerTransition @ 0x1401FBA80 (KdPowerTransition.c)
 *     PopRestoreHiberContext @ 0x140407064 (PopRestoreHiberContext.c)
 */

__int64 __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r14
  char v3; // bp
  int v4; // ebx
  int v7; // eax
  __int64 result; // rax
  _KPROCESS *Process; // rcx
  __int64 *v10; // rdx
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // rdx
  int v13; // ebx
  __int16 v14; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait();
  }
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v7;
  result = (unsigned int)(v7 - 2);
  switch ( (int)result )
  {
    case 0:
      *(_BYTE *)(a2 + 6) = 0;
      if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        if ( (int)KeSaveExtendedAndSupervisorState(
                    (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                    (PVOID *)(a2 + 8)) >= 0 )
          v3 = 1;
        *(_BYTE *)(a2 + 6) = v3;
      }
      result = (__int64)KeGetPcr();
      *(_QWORD *)(a2 + 72) = result;
      break;
    case 1:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      *(_BYTE *)(a2 + 5) = CurrentIrql;
      _disable();
      *(_BYTE *)(a2 + 4) = (v14 & 0x200) != 0;
      result = KeSuspendClockTimer();
      break;
    case 2:
      result = KiLoadDirectoryTableBase((__int64)PsInitialSystemProcess, PsInitialSystemProcess->DirectoryTableBase);
      break;
    case 3:
      if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
      {
        v13 = 0;
        PoResumeFromHibernate = 1;
      }
      else
      {
        if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
          KdPowerTransition(4LL, 0x140000000LL);
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                   *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                   *(_QWORD *)(a1 + 8),
                   *(_QWORD *)(a1 + 16),
                   *(unsigned int *)(a1 + 48),
                   a1 + 60);
        v13 = result;
        if ( !CurrentPrcb->Number )
        {
          if ( !PoResumeFromHibernate )
            result = KdPowerTransition(1LL, v12);
          if ( !CurrentPrcb->Number )
          {
            result = __rdtsc();
            qword_14034B6C0 = result;
          }
        }
      }
      *(_DWORD *)(a2 + 64) = v13;
      break;
    case 4:
      result = KeRestoreProcessorSpecificFeatures();
      break;
    case 5:
      result = PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
      break;
    case 6:
      result = KeFlushCurrentTbImmediately();
      __wbinvd();
      break;
    case 7:
      Process = KeGetCurrentThread()->ApcState.Process;
      result = KiLoadDirectoryTableBase((__int64)Process, Process->DirectoryTableBase);
      break;
    case 8:
      v10 = *(__int64 **)(a1 + 32);
      result = *v10;
      if ( *v10 )
        result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))result)(
                   *(unsigned int *)(a1 + 40),
                   v10[1],
                   *(unsigned __int8 *)(a1 + 44));
      break;
    case 9:
      KeResumeClockTimer();
      if ( *(_BYTE *)(a2 + 4) )
        _enable();
      result = *(unsigned __int8 *)(a2 + 5);
      __writecr8(result);
      break;
    case 10:
      if ( *(_BYTE *)(a2 + 6) )
        KeRestoreExtendedAndSupervisorState(a2 + 8);
      result = PpmResetPerfEngineForProcessor((__int64)CurrentPrcb);
      break;
    default:
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  return result;
}

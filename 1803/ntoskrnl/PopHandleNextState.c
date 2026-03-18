/*
 * XREFs of PopHandleNextState @ 0x140473200
 * Callers:
 *     PopIssueNextState @ 0x140473154 (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1404731A0 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KiLoadDirectoryTableBase @ 0x1400ADCA0 (KiLoadDirectoryTableBase.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1400B5FF4 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x1400C5810 (KeSaveExtendedAndSupervisorState.c)
 *     PopFxNotifySystemStateTransition @ 0x14014E8D4 (PopFxNotifySystemStateTransition.c)
 *     KeResumeClockTimer @ 0x14014E8F4 (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x14014E9D4 (PpmResetPerfEngineForProcessor.c)
 *     KeSuspendClockTimer @ 0x14014EAE4 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14014EB48 (KeRestoreProcessorSpecificFeatures.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KeFlushCurrentTbImmediately @ 0x14016A1A0 (KeFlushCurrentTbImmediately.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x14023E870 (KdPowerTransition.c)
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  int v3; // r14d
  int v4; // ebx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // al
  int v10; // eax
  __int64 v11; // rdx
  unsigned int Number; // ecx
  _KPROCESS *Process; // rcx
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
  if ( v7 == 11 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)v8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v8)(
        *(unsigned int *)(a1 + 40),
        *(_QWORD *)(v8 + 8),
        *(unsigned __int8 *)(a1 + 44));
  }
  else if ( v7 == 9 )
  {
    KeFlushCurrentTbImmediately();
    __wbinvd();
  }
  else
  {
    switch ( v7 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_1403AA080);
        break;
      case 3:
        *(_BYTE *)(a2 + 6) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 6) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      (PVOID *)(a2 + 8)) >= 0;
        *(_QWORD *)(a2 + 72) = KeGetPcr();
        break;
      case 4:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        *(_BYTE *)(a2 + 5) = CurrentIrql;
        _disable();
        *(_BYTE *)(a2 + 4) = (v14 & 0x200) != 0;
        KeSuspendClockTimer();
        break;
      case 5:
        KiLoadDirectoryTableBase((__int64)PsInitialSystemProcess, PsInitialSystemProcess->DirectoryTableBase);
        break;
      case 6:
        if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          PoResumeFromHibernate = 1;
        }
        else
        {
          if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4LL, a2);
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                  *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(unsigned int *)(a1 + 48),
                  a1 + 60);
          Number = CurrentPrcb->Number;
          v3 = v10;
          if ( !Number )
          {
            if ( !PoResumeFromHibernate )
            {
              KdPowerTransition(1LL, v11);
              Number = CurrentPrcb->Number;
            }
            if ( !Number )
              qword_1403AA5E0 = __rdtsc();
          }
        }
        *(_DWORD *)(a2 + 64) = v3;
        break;
      case 7:
        KeRestoreProcessorSpecificFeatures();
        break;
      case 8:
        PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
        break;
      case 10:
        Process = KeGetCurrentThread()->ApcState.Process;
        KiLoadDirectoryTableBase((__int64)Process, Process->DirectoryTableBase);
        break;
      case 12:
        KeResumeClockTimer();
        if ( *(_BYTE *)(a2 + 4) )
          _enable();
        __writecr8(*(unsigned __int8 *)(a2 + 5));
        break;
      case 13:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_1403AA080);
        break;
      case 14:
        if ( *(_BYTE *)(a2 + 6) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb);
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}

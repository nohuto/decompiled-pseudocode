/*
 * XREFs of PopHandleNextState @ 0x140439818
 * Callers:
 *     PopInvokeStateHandlerTargetProcessor @ 0x140439A90 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopIssueNextState @ 0x14043A2A8 (PopIssueNextState.c)
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x14000A790 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x14000B274 (KeRestoreExtendedAndSupervisorState.c)
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiLoadDirectoryTableBase @ 0x14011AD8C (KiLoadDirectoryTableBase.c)
 *     KeFlushCurrentTbImmediately @ 0x14017B290 (KeFlushCurrentTbImmediately.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KdPowerTransition @ 0x140201790 (KdPowerTransition.c)
 *     KeResumeClockTimer @ 0x140203264 (KeResumeClockTimer.c)
 *     KeSuspendClockTimer @ 0x1402032B4 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140203D30 (KeRestoreProcessorSpecificFeatures.c)
 *     PopFxNotifySystemStateTransition @ 0x14023E57C (PopFxNotifySystemStateTransition.c)
 *     PpmResetPerfEngineForProcessor @ 0x140240AEC (PpmResetPerfEngineForProcessor.c)
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentPrcb; // rsi
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ebp
  __int64 v13; // rdx
  _KPROCESS *CurrentProcess; // rcx
  unsigned __int64 DirectoryTableBase; // rdx
  unsigned __int8 CurrentIrql; // al
  char v17; // dl
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int16 v24; // [rsp+40h] [rbp-8h]
  int v25; // [rsp+50h] [rbp+8h] BYREF

  CurrentPrcb = (LARGE_INTEGER *)KeGetCurrentPrcb();
  v25 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
    KeYieldProcessorEx(&v25);
  v6 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v6;
  if ( v6 > 8 )
  {
    v18 = v6 - 9;
    if ( !v18 )
    {
      KeFlushCurrentTbImmediately();
      __wbinvd();
      goto LABEL_50;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      CurrentProcess = PsGetCurrentProcess();
      DirectoryTableBase = CurrentProcess->DirectoryTableBase;
      goto LABEL_25;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v23 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)v23 )
      {
        LOBYTE(a3) = *(_BYTE *)(a1 + 44);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))v23)(*(unsigned int *)(a1 + 40), *(_QWORD *)(v23 + 8), a3);
      }
      goto LABEL_50;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      KeResumeClockTimer();
      if ( *(_BYTE *)(a2 + 4) )
        _enable();
      __writecr8(*(unsigned __int8 *)(a2 + 5));
      goto LABEL_50;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        if ( *(_BYTE *)(a2 + 6) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        PpmResetPerfEngineForProcessor(CurrentPrcb);
      }
      goto LABEL_50;
    }
    v17 = 0;
LABEL_31:
    PopFxNotifySystemStateTransition((__int64)CurrentPrcb, v17, dword_140365800);
    goto LABEL_50;
  }
  if ( v6 == 8 )
  {
    PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
    goto LABEL_50;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v17 = 1;
    goto LABEL_31;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      *(_BYTE *)(a2 + 5) = CurrentIrql;
      _disable();
      *(_BYTE *)(a2 + 4) = (v24 & 0x200) != 0;
      KeSuspendClockTimer();
      goto LABEL_50;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          KeRestoreProcessorSpecificFeatures();
      }
      else
      {
        if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          v12 = 0;
          PoResumeFromHibernate = 1;
        }
        else
        {
          if ( !CurrentPrcb[4].HighPart && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4LL, a2);
          v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                  *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(unsigned int *)(a1 + 48),
                  a1 + 60);
          if ( !CurrentPrcb[4].HighPart )
          {
            if ( !PoResumeFromHibernate )
              KdPowerTransition(1LL, v13);
            if ( !CurrentPrcb[4].HighPart )
              qword_140365D40 = __rdtsc();
          }
        }
        *(_DWORD *)(a2 + 64) = v12;
      }
      goto LABEL_50;
    }
    CurrentProcess = PsInitialSystemProcess;
    DirectoryTableBase = PsInitialSystemProcess->DirectoryTableBase;
LABEL_25:
    KiLoadDirectoryTableBase((__int64)CurrentProcess, DirectoryTableBase);
    goto LABEL_50;
  }
  *(_BYTE *)(a2 + 6) = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    *(_BYTE *)(a2 + 6) = (int)KeSaveExtendedAndSupervisorState(
                                (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                (PVOID *)(a2 + 8)) >= 0;
  *(_QWORD *)(a2 + 72) = KeGetPcr();
LABEL_50:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}

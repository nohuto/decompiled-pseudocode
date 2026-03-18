/*
 * XREFs of KiFreezeTargetExecution @ 0x1402475A0
 * Callers:
 *     KiCheckForFreezeExecution @ 0x14024167C (KiCheckForFreezeExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x1401AB150 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1401AB220 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x1401B2CF0 (RtlCaptureContext.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeRestoreSupervisorState @ 0x1402454C0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1402454FC (KeSaveSupervisorState.c)
 *     KiCheckStall @ 0x140247470 (KiCheckStall.c)
 *     KiEndDebugAccumulation @ 0x1402474FC (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x140247A48 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140247AA0 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x14024BD80 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x14024BE90 (KiSaveProcessorState.c)
 *     KdpReportExceptionStateChange @ 0x1408047DC (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x140823710 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140823798 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // bp
  bool v6; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  int v10; // edx
  _BYTE *SchedulerAssist; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD v16[20]; // [rsp+20h] [rbp-E8h] BYREF
  int v17; // [rsp+100h] [rbp-8h]

  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = v17;
    _disable();
    v6 = (v5 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KeSaveSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0]);
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140398818[0])(v9, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v10);
    }
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[28] = 1;
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v16, 0, 0x98uLL);
        LODWORD(v16[0]) = -2147483641;
        v16[1] = v16;
        v16[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v16, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
      v13[28] = 0;
    LOBYTE(v12) = KiResumeForReboot;
    ((void (__fastcall *)(_QWORD, __int64))off_140398818[0])(0LL, v12);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    v14 = __readcr4();
    if ( (v14 & 0x20080) != 0 )
    {
      __writecr4(v14 ^ 0x80);
      __writecr4(v14);
    }
    else
    {
      v15 = __readcr3();
      __writecr3(v15);
    }
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    KeRestoreSupervisorState((__int64)CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0]);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}

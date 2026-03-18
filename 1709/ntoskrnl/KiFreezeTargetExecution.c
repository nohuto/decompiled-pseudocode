/*
 * XREFs of KiFreezeTargetExecution @ 0x1402099CC
 * Callers:
 *     KiCheckForFreezeExecution @ 0x140203DC0 (KiCheckForFreezeExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x14017B290 (KeFlushCurrentTbImmediately.c)
 *     KiRestoreProcessorControlState @ 0x140181510 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1401815E0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140189090 (RtlCaptureContext.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiCheckStall @ 0x1402098AC (KiCheckStall.c)
 *     KiEndDebugAccumulation @ 0x140209938 (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x140209E18 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140209E70 (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x14020DB78 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x14020DC90 (KiSaveProcessorState.c)
 *     KdpReportExceptionStateChange @ 0x140797730 (KdpReportExceptionStateChange.c)
 *     VfStartBranchTracing @ 0x1407B5A1C (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x1407B5AA4 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // si
  bool v6; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rdx
  _QWORD v12[20]; // [rsp+20h] [rbp-D8h] BYREF
  int v13; // [rsp+F0h] [rbp-8h]

  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = v13;
    _disable();
    v6 = (v5 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_140353478[0])(v9, 0LL);
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v10);
    }
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v12, 0, 0x98uLL);
        LODWORD(v12[0]) = -2147483641;
        v12[1] = v12;
        v12[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v12, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    LOBYTE(v11) = KiResumeForReboot;
    ((void (__fastcall *)(_QWORD, __int64))off_140353478[0])(0LL, v11);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KeFlushCurrentTbImmediately();
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}

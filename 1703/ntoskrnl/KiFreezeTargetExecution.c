/*
 * XREFs of KiFreezeTargetExecution @ 0x1402036D4
 * Callers:
 *     KiCheckForFreezeExecution @ 0x1401FDC10 (KiCheckForFreezeExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x14017BB00 (KeFlushCurrentTbImmediately.c)
 *     KiRestoreProcessorControlState @ 0x140181B10 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140181BD0 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x140189590 (RtlCaptureContext.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiCheckStall @ 0x1402035B4 (KiCheckStall.c)
 *     KiEndDebugAccumulation @ 0x140203640 (KiEndDebugAccumulation.c)
 *     KiSetDebuggerOwner @ 0x140203B14 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x140203B6C (KiStartDebugAccumulation.c)
 *     KiRestoreProcessorState @ 0x1402071E8 (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x140207300 (KiSaveProcessorState.c)
 *     VfStartBranchTracing @ 0x140773C60 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140773CE8 (VfStopBranchTracing.c)
 *     KdpReportExceptionStateChange @ 0x14078A4FC (KdpReportExceptionStateChange.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[20]; // [rsp+20h] [rbp-D8h] BYREF
  int v16; // [rsp+F0h] [rbp-8h]

  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v5 = v16;
    _disable();
    v6 = (v5 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    CurrentPrcb->IpiFrozen = 2;
    LOBYTE(v9) = 1;
    ((void (__fastcall *)(__int64, _QWORD))off_14033B448[0])(v9, 0LL);
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
        memset(v15, 0, 0x98uLL);
        LODWORD(v15[0]) = -2147483641;
        v15[1] = v15;
        v15[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KdpReportExceptionStateChange(v15, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    LOBYTE(v11) = KiResumeForReboot;
    ((void (__fastcall *)(_QWORD, __int64))off_14033B448[0])(0LL, v11);
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KeFlushCurrentTbImmediately();
    CurrentPrcb->IpiFrozen = 0;
    KiEndDebugAccumulation((__int64)CurrentPrcb, v12, v13, v14);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v6 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}

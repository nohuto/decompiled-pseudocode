/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1400E7800
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140024760 (KeCheckStackAndTargetAddress.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400E6D30 (RtlpIsFrameInBoundsEx.c)
 *     RtlpGetStackLimits @ 0x1400E77D0 (RtlpGetStackLimits.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14010F550 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     PnprGetStackLimits @ 0x1401FA2B8 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x140256F38 (EtwpTraceStackWalk.c)
 *     VerifierCaptureViolationKernelStack @ 0x14076F050 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14077A004 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeGetCurrentStackPointer @ 0x140181EE0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // r8
  struct _KTHREAD *CurrentThread; // rax
  void *volatile StackLimit; // r10
  void *StackBase; // rdx
  bool result; // al
  char *v11; // rdx
  char *v12; // r9
  char *IsrStack; // rax
  char *v14; // rcx

  if ( (KiBugCheckActive & 3) != 0 )
  {
    *a1 = 0;
    *a3 = -1LL;
    *a2 = 0xFFFF800000000000uLL;
    return 1;
  }
  CurrentStackPointer = KeGetCurrentStackPointer();
  if ( KeGetCurrentIrql() >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v14 = IsrStack - 24576;
    if ( (unsigned __int64)(IsrStack - 24576) <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)IsrStack )
    {
      *a1 = 6;
      *a3 = (unsigned __int64)IsrStack;
      result = 1;
      *a2 = (unsigned __int64)v14;
      return result;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v11 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v12 = &v11[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v12 <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)v11 )
      {
        *a1 = 1;
        result = 1;
        *a3 = (unsigned __int64)v11;
        *a2 = (unsigned __int64)v12;
        return result;
      }
      if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
      {
        *a1 = 7;
        result = 1;
        *a3 = -1LL;
        *a2 = 0xFFFF800000000000uLL;
        return result;
      }
    }
    if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
      *a1 = 2;
    else
      *a1 = (CurrentThread->CallbackNestingLevel != 0) + 3;
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    *a3 = (unsigned __int64)StackBase;
    *a2 = (unsigned __int64)StackLimit;
    return *a2 <= CurrentStackPointer && CurrentStackPointer < *a3;
  }
  else
  {
    *a1 = 5;
    result = 1;
    *a3 = -1LL;
    *a2 = 0xFFFF800000000000uLL;
  }
  return result;
}

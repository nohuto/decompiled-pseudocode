/*
 * XREFs of KeQueryCurrentStackInformation @ 0x140130810
 * Callers:
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 *     RtlpIsFrameInBoundsEx @ 0x14012D4D8 (RtlpIsFrameInBoundsEx.c)
 *     KeCheckStackAndTargetAddress @ 0x14012F7E0 (KeCheckStackAndTargetAddress.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14012F950 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x1401307E0 (RtlpGetStackLimits.c)
 *     PnprGetStackLimits @ 0x14023CDE4 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1402B4EE0 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     VerifierCaptureViolationKernelStack @ 0x14081DF70 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1408292B4 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeGetCurrentStackPointer @ 0x1401AB5B0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // r8
  struct _KTHREAD *CurrentThread; // rax
  char *StackLimit; // rcx
  char *StackBase; // rdx
  bool result; // al
  char *IsrStack; // rax
  char *v12; // rcx
  char *v13; // rdx
  char *v14; // r9

  if ( (KiBugCheckActive & 3) != 0 )
  {
    *a1 = 0;
    *a3 = -1LL;
    *a2 = (char *)0xFFFF800000000000LL;
    return 1;
  }
  CurrentStackPointer = KeGetCurrentStackPointer();
  if ( KeGetCurrentIrql() >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v12 = IsrStack - 24576;
    if ( (unsigned __int64)(IsrStack - 24576) <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)IsrStack )
    {
      *a1 = 6;
      *a3 = (unsigned __int64)IsrStack;
      result = 1;
      *a2 = v12;
      return result;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
  {
    if ( KeGetCurrentIrql() < 2u )
      goto LABEL_5;
    v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    v14 = &v13[-(unsigned int)KeKernelStackSize];
    if ( (unsigned __int64)v14 <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)v13 )
    {
      *a1 = 1;
      result = 1;
      *a3 = (unsigned __int64)v13;
      *a2 = v14;
      return result;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
    {
      *a1 = 7;
      result = 1;
      *a3 = -1LL;
      *a2 = (char *)0xFFFF800000000000LL;
    }
    else
    {
LABEL_5:
      if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
      {
        *a1 = 2;
      }
      else if ( CurrentThread->CallbackNestingLevel )
      {
        *a1 = 4;
      }
      else
      {
        *a1 = 3;
      }
      StackLimit = (char *)CurrentThread->StackLimit;
      StackBase = (char *)CurrentThread->StackBase;
      if ( StackLimit >= StackBase )
      {
        StackLimit = (char *)CurrentThread->StackLimit;
        StackBase = (char *)CurrentThread->StackBase;
      }
      *a3 = (unsigned __int64)StackBase;
      *a2 = StackLimit;
      return (unsigned __int64)StackLimit <= CurrentStackPointer && CurrentStackPointer < *a3;
    }
  }
  else
  {
    *a1 = 5;
    result = 1;
    *a3 = -1LL;
    *a2 = (char *)0xFFFF800000000000LL;
  }
  return result;
}

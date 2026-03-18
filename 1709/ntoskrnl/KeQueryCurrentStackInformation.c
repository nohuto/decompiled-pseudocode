/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1400D9080
 * Callers:
 *     RtlpIsFrameInBoundsEx @ 0x1400D85C0 (RtlpIsFrameInBoundsEx.c)
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     KeCheckStackAndTargetAddress @ 0x1400D9B10 (KeCheckStackAndTargetAddress.c)
 *     PnprGetStackLimits @ 0x140200000 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 *     VerifierCaptureViolationKernelStack @ 0x1407B0DD0 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x1407BBF00 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeGetCurrentStackPointer @ 0x140181960 (KeGetCurrentStackPointer.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // r8
  struct _KTHREAD *CurrentThread; // rax
  void *volatile StackLimit; // r10
  void *StackBase; // rdx
  bool result; // al
  char *IsrStack; // rax
  char *v12; // rcx
  char *v13; // rdx
  char *v14; // r9

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
    v12 = IsrStack - 24576;
    if ( (unsigned __int64)(IsrStack - 24576) <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)IsrStack )
    {
      *a1 = 6;
      *a3 = (unsigned __int64)IsrStack;
      result = 1;
      *a2 = (unsigned __int64)v12;
      return result;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v13 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v14 = &v13[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v14 <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)v13 )
      {
        *a1 = 1;
        result = 1;
        *a3 = (unsigned __int64)v13;
        *a2 = (unsigned __int64)v14;
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

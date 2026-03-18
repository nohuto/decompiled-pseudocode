/*
 * XREFs of ViIrpCheckKernelAddressForIrp @ 0x1407B0D0C
 * Callers:
 *     VfBeforeCallDriver @ 0x1407B0514 (VfBeforeCallDriver.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1407B6C28 (VfTargetDriversIsEnabled.c)
 */

struct _KTHREAD *__fastcall ViIrpCheckKernelAddressForIrp(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *result; // rax
  struct _KPROCESS *Process; // r9

  result = (struct _KTHREAD *)(BugCheckParameter3 - 1);
  if ( BugCheckParameter3 - 1 <= 0x7FFFFFFEFFFDLL )
  {
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
    {
      if ( !a3 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                    0xC4u,
                                    0xE2uLL,
                                    BugCheckParameter2,
                                    BugCheckParameter3,
                                    0LL);
      result = (struct _KTHREAD *)VfTargetDriversIsEnabled(*(_QWORD *)(a3 + 176));
      if ( (_DWORD)result )
      {
        if ( (MmVerifierData & 0x800) != 0 )
          return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(
                                      0xC4u,
                                      0xE2uLL,
                                      BugCheckParameter2,
                                      BugCheckParameter3,
                                      0LL);
      }
    }
  }
  return result;
}

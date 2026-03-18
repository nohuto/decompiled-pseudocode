/*
 * XREFs of ViIrpCheckKernelAddressForIrp @ 0x14076EEEC
 * Callers:
 *     VfBeforeCallDriver @ 0x14076E700 (VfBeforeCallDriver.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140774E6C (VfTargetDriversIsEnabled.c)
 */

struct _KTHREAD *__fastcall ViIrpCheckKernelAddressForIrp(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *result; // rax
  struct _KPROCESS *Process; // r9

  result = (struct _KTHREAD *)(a2 - 1);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFEFFFDLL )
  {
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
    {
      if ( !a3 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(0xC4u, 0LL);
      result = (struct _KTHREAD *)VfTargetDriversIsEnabled(*(_QWORD *)(a3 + 176));
      if ( (_DWORD)result )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(0xC4u, 0LL);
    }
  }
  return result;
}

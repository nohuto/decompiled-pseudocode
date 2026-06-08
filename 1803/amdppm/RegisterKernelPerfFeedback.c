/*
 * XREFs of RegisterKernelPerfFeedback @ 0x1C001E8E0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C001E52C (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterKernelPerfFeedback(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}

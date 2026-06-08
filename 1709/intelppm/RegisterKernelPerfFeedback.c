/*
 * XREFs of RegisterKernelPerfFeedback @ 0x1C0030F00
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterKernelPerfFeedback(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}

/*
 * XREFs of PsGetProcessSilo @ 0x1400CF620
 * Callers:
 *     PsIsProcessInAppSilo @ 0x14057FCA0 (PsIsProcessInAppSilo.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400CF63C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 944));
}

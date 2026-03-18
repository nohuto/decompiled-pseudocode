/*
 * XREFs of PsGetProcessSilo @ 0x14003A228
 * Callers:
 *     PsIsProcessInAppSilo @ 0x14045AE30 (PsIsProcessInAppSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 944));
}

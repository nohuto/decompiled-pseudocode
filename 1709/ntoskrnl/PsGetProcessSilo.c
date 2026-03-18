/*
 * XREFs of PsGetProcessSilo @ 0x14012CF90
 * Callers:
 *     PsIsProcessInAppSilo @ 0x140596270 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x14012CFAC (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 944));
}

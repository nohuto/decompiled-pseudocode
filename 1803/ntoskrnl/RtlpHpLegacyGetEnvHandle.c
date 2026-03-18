/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x1400D2610
 * Callers:
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall RtlpHpLegacyGetEnvHandle(_OWORD *a1)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = RtlpHpLegacyEnvHandle;
  return result;
}

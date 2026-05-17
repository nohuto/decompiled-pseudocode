/*
 * XREFs of RtlGetCurrentPeb @ 0x1800905B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}

/*
 * XREFs of RtlGetCurrentPeb @ 0x1800F2520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}

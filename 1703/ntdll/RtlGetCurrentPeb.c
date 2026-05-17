/*
 * XREFs of RtlGetCurrentPeb @ 0x180090530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}

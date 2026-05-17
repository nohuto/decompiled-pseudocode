/*
 * XREFs of RtlPopFrame @ 0x18006F9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_TEB_ACTIVE_FRAME *__fastcall RtlPopFrame(__int64 a1)
{
  _TEB_ACTIVE_FRAME *result; // rax

  result = *(_TEB_ACTIVE_FRAME **)(a1 + 8);
  NtCurrentTeb()->ActiveFrame = result;
  return result;
}

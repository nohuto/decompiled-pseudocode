/*
 * XREFs of ?Release@ControllerProcessor@@W7EAAKXZ @ 0x180017A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 8));
}

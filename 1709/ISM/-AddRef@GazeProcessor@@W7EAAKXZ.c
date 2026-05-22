/*
 * XREFs of ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x180005720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return PTPProcessor::AddRef((PTPProcessor *)(a1 - 8));
}

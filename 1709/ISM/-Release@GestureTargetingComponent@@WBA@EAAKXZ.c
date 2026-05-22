/*
 * XREFs of ?Release@GestureTargetingComponent@@WBA@EAAKXZ @ 0x180005700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureTargetingComponent::Release(__int64 a1)
{
  return GazeProcessor::Release((GazeProcessor *)(a1 - 16));
}

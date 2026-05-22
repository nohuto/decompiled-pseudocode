/*
 * XREFs of ?Release@PTPProcessor@@WLI@EAAKXZ @ 0x18006F600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::Release(__int64 a1)
{
  return GazeProcessor::Release((GazeProcessor *)(a1 - 184));
}

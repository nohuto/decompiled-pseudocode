/*
 * XREFs of ?Release@PTPProcessor@@WMA@EAAKXZ @ 0x18006F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::Release(__int64 a1)
{
  return GazeProcessor::Release((GazeProcessor *)(a1 - 192));
}

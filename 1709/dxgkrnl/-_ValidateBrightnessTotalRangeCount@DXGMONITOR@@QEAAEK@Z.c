/*
 * XREFs of ?_ValidateBrightnessTotalRangeCount@DXGMONITOR@@QEAAEK@Z @ 0x1C010AA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_ValidateBrightnessTotalRangeCount(DXGMONITOR *this, unsigned int a2)
{
  return a2 <= 0x10;
}

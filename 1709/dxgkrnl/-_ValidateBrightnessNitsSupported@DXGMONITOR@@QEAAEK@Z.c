/*
 * XREFs of ?_ValidateBrightnessNitsSupported@DXGMONITOR@@QEAAEK@Z @ 0x1C010AA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_ValidateBrightnessNitsSupported(DXGMONITOR *this, int a2)
{
  return a2 == 1 || a2 == 0;
}

/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1402486D0
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x14070B9C0 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}

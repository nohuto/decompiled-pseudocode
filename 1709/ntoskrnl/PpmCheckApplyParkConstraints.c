/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x140137E00
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14070C8F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14070C9C8 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}

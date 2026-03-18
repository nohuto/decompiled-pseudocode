/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14017F420
 * Callers:
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14076FDB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14076FE88 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14014CB34 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}

/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14015FC60
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1406D6688 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406D675C (PpmParkClearForcedMask.c)
 * Callees:
 *     <none>
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}

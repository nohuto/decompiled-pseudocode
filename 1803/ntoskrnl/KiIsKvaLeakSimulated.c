/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1401761F0
 * Callers:
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}

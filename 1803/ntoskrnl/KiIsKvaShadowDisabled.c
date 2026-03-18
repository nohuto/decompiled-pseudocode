/*
 * XREFs of KiIsKvaShadowDisabled @ 0x140176204
 * Callers:
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}

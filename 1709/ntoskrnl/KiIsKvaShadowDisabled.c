/*
 * XREFs of KiIsKvaShadowDisabled @ 0x14017BA4C
 * Callers:
 *     KiEnableKvaShadowing @ 0x140423770 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}

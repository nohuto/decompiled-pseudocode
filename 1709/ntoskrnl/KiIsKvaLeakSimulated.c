/*
 * XREFs of KiIsKvaLeakSimulated @ 0x14017BA38
 * Callers:
 *     KiEnableKvaShadowing @ 0x140423770 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}

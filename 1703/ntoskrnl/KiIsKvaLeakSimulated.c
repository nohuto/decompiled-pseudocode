/*
 * XREFs of KiIsKvaLeakSimulated @ 0x14017C32C
 * Callers:
 *     KiEnableKvaShadowing @ 0x140403784 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaLeakSimulated()
{
  return ((unsigned __int8)KiFeatureSimulations >> 4) & 1;
}

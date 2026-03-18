/*
 * XREFs of KiIsKvaShadowDisabled @ 0x14017C340
 * Callers:
 *     KiEnableKvaShadowing @ 0x140403784 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaShadowDisabled()
{
  return ((unsigned __int8)KiFeatureSettings >> 1) & 1;
}

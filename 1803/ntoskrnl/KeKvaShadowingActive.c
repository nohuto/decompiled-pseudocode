/*
 * XREFs of KeKvaShadowingActive @ 0x140040C88
 * Callers:
 *     sub_1401A13EC @ 0x1401A13EC (sub_1401A13EC.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     KeQueryKvaShadowInformation @ 0x1407426C4 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x1407427EC (KeQuerySpeculationControlInformation.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}

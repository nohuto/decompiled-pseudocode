/*
 * XREFs of KeKvaShadowingActive @ 0x14017BC94
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14041CDB0 (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x14041CED8 (KeQuerySpeculationControlInformation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404F8A10 (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}

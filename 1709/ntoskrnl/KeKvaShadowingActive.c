/*
 * XREFs of KeKvaShadowingActive @ 0x14017B418
 * Callers:
 *     sub_140176C50 @ 0x140176C50 (sub_140176C50.c)
 *     KeQueryKvaShadowInformation @ 0x14043C7EC (KeQueryKvaShadowInformation.c)
 *     KeQuerySpeculationControlInformation @ 0x14043C914 (KeQuerySpeculationControlInformation.c)
 *     PspDisablePrimaryTokenExchange @ 0x14053F3DC (PspDisablePrimaryTokenExchange.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

__int64 KeKvaShadowingActive()
{
  return (unsigned int)KiKvaShadowMode;
}

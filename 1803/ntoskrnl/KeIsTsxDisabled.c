/*
 * XREFs of KeIsTsxDisabled @ 0x1401A5A58
 * Callers:
 *     VslpIumPhase0Initialize @ 0x1408DE2A4 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsTsxDisabled()
{
  return KiDisableTsx != 0;
}

/*
 * XREFs of KeIsTsxDisabled @ 0x14017B274
 * Callers:
 *     VslpIumPhase0Initialize @ 0x140869934 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsTsxDisabled()
{
  return KiDisableTsx != 0;
}

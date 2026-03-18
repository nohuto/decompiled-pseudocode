/*
 * XREFs of KeIsTsxDisabled @ 0x14017BAE0
 * Callers:
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsTsxDisabled()
{
  return KiDisableTsx != 0;
}

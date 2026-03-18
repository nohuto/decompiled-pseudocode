/*
 * XREFs of IopApcHardError @ 0x140688790
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 */

void __fastcall IopApcHardError(PIRP *a1)
{
  IopRaiseHardError(a1[4]);
  ExFreePoolWithTag(a1, 0);
}

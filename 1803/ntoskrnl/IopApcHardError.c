/*
 * XREFs of IopApcHardError @ 0x1407193A0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopRaiseHardError @ 0x14071A3D0 (IopRaiseHardError.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}

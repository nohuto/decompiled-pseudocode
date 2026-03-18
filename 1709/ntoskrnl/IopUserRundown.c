/*
 * XREFs of IopUserRundown @ 0x140597990
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}

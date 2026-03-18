/*
 * XREFs of IopUserRundown @ 0x140581B70
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}

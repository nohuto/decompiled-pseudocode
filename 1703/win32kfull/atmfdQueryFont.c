/*
 * XREFs of atmfdQueryFont @ 0x1C028C2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 atmfdQueryFont()
{
  return ((__int64 (*)(void))pAtmfdQueryFont)();
}

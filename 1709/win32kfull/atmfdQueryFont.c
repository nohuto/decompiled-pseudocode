/*
 * XREFs of atmfdQueryFont @ 0x1C0288DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 atmfdQueryFont()
{
  return ((__int64 (*)(void))pAtmfdQueryFont)();
}

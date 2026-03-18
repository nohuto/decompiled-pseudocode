/*
 * XREFs of atmfdFree @ 0x1C0288CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 atmfdFree()
{
  return ((__int64 (*)(void))pAtmfdFree)();
}

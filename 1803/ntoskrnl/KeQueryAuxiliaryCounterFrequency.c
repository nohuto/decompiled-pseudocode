/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x140240D40
 * Callers:
 *     NtQueryAuxiliaryCounterFrequency @ 0x1407C7CD4 (NtQueryAuxiliaryCounterFrequency.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140398A10[0]();
}

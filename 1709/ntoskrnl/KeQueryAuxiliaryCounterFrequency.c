/*
 * XREFs of KeQueryAuxiliaryCounterFrequency @ 0x140203960
 * Callers:
 *     NtQueryAuxiliaryCounterFrequency @ 0x1407609D8 (NtQueryAuxiliaryCounterFrequency.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 KeQueryAuxiliaryCounterFrequency()
{
  return off_140353670[0]();
}

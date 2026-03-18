/*
 * XREFs of HvlpAllocateEarlyPages @ 0x1401EF5E0
 * Callers:
 *     HvlPhase0Initialize @ 0x1405ABC98 (HvlPhase0Initialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 HvlpAllocateEarlyPages()
{
  return ((__int64 (*)(void))qword_140353458)();
}

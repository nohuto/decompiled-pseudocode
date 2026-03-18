/*
 * XREFs of HvlpAllocateEarlyPages @ 0x1401EA3FC
 * Callers:
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 HvlpAllocateEarlyPages()
{
  return ((__int64 (*)(void))qword_14033B428)();
}

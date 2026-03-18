/*
 * XREFs of HvlpAllocateEarlyPages @ 0x14022DE80
 * Callers:
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 HvlpAllocateEarlyPages()
{
  return ((__int64 (*)(void))qword_1403987F8)();
}

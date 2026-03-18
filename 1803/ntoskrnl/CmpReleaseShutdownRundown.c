/*
 * XREFs of CmpReleaseShutdownRundown @ 0x1404A674C
 * Callers:
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

_QWORD *CmpReleaseShutdownRundown()
{
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

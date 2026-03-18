/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1400EAB34
 * Callers:
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiUpdateRunTime @ 0x1401099B0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 24912) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 24896);
}

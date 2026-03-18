/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x140025C4C
 * Callers:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 25168) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 25152);
}

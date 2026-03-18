/*
 * XREFs of MiEnumerateKernelLeafPtes @ 0x14042F008
 * Callers:
 *     MmMarkHiberPhase @ 0x140430420 (MmMarkHiberPhase.c)
 *     MmUpdateHiberMappings @ 0x1404306AC (MmUpdateHiberMappings.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 */

unsigned __int64 __fastcall MiEnumerateKernelLeafPtes(
        __int64 (__fastcall *a1)(__int64, unsigned __int64, unsigned __int64),
        __int64 a2)
{
  return MiEnumerateLeafPtes(0xFFFF800000000000uLL, 0xFFFFFFFFFFFFFFFFuLL, a1, a2, 10);
}

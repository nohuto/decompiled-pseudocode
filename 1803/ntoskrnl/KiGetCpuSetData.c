/*
 * XREFs of KiGetCpuSetData @ 0x1400D2CCC
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14064D9F0 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}

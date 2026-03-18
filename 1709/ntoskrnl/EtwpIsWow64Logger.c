/*
 * XREFs of EtwpIsWow64Logger @ 0x140578ADC
 * Callers:
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x14057866C (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}

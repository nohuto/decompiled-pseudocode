/*
 * XREFs of ExpGetSystemProcessorInformation @ 0x1400FC794
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemProcessorInformation(__int64 a1)
{
  *(_WORD *)a1 = KeProcessorArchitecture;
  *(_WORD *)(a1 + 2) = KeProcessorLevel;
  *(_WORD *)(a1 + 4) = KeProcessorRevision;
  *(_WORD *)(a1 + 6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 8) = KeFeatureBits;
  return 0LL;
}

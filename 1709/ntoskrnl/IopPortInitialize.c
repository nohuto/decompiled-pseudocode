/*
 * XREFs of IopPortInitialize @ 0x1405CE61C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405CECAC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopPortInitialize(__int64 a1, int a2)
{
  qword_140383BF8 = (__int64)&IopPortFindSuitableRange;
  qword_140383C00 = (__int64)IopPortAddAllocation;
  qword_140383C08 = (__int64)IopPortBacktrackAllocation;
  qword_140383B78 = (__int64)&IopGenericUnpackRequirement;
  qword_140383B80 = (__int64)IopGenericPackResource;
  qword_140383B88 = (__int64)IopGenericUnpackResource;
  qword_140383B90 = (__int64)IopGenericScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootPortArbiter, a2, 1, (unsigned int)L"RootPort");
}

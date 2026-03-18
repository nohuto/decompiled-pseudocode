/*
 * XREFs of IopIrqInitialize @ 0x1405CE80C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbInitializeArbiterInstance @ 0x1405CECAC (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall IopIrqInitialize(__int64 a1, int a2)
{
  qword_140383758 = (__int64)IopIrqUnpackRequirement;
  qword_140383760 = (__int64)IopIrqPackResource;
  qword_140383768 = (__int64)IopIrqUnpackResource;
  qword_140383770 = (__int64)IopIrqScoreRequirement;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootIrqArbiter, a2, 2, (unsigned int)L"RootIRQ");
}
